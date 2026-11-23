"""Find the sections of the libraries the link reads (config/build.toml [link] libs) in the original DLL.

The original links the C runtime (LIBC.LIB) as the build does: no block makes those bytes, the library's objects do.
A section of a library object is placed where the original holds it:
- by name: config/addresses.txt gives the game address of a symbol the section defines;
- by reference: a placed section's relocation names it, and the original's word there says where it is;
- by content: its bytes (the words its relocations fill left out) are at exactly one place of what no owner has yet.
Each place is checked before it is taken: the bytes match outside the relocated words, the original has a base
relocation at exactly the section's address words, every relocation whose target is known reaches it, and no other
section of a library is there. The linker's thunk for a function of an import library (`jmp [__imp_X]`) is found by
its shape (import_thunks). Standard library only, like every tool here."""

from __future__ import annotations

import bisect
import struct
from collections import deque
from dataclasses import dataclass

from .coff import SCN_CNT_UNINITIALIZED_DATA, Coff, CoffError

DIR32, DIR32NB, REL32 = 0x6, 0x7, 0x14
SCN_CNT_CODE, SCN_LNK_INFO, SCN_LNK_REMOVE = 0x20, 0x200, 0x800
ABSOLUTE, EXTERNAL = -1, 2
MASK = 0xFFFFFFFF
ANCHOR = 8  # fixed bytes in a row a content search starts from
EVIDENCE = 4  # a section with no such row: fixed bytes, plus 4 for each relocation checked, it needs at its one place
IAT = 12
ARCHIVE = b"!<arch>\n"


@dataclass
class Placement:
    va: int
    size: int
    library: str
    member: str  # the object's name in the library
    section: str
    how: str  # name, reference or content


def read_archive(data: bytes) -> list[tuple[str, bytes]]:
    """(name, bytes) of each member of a `.lib` archive, without the linker members and the long-names table."""
    if not data.startswith(ARCHIVE):
        raise ValueError("not a .lib archive")
    out, longnames, at = [], b"", len(ARCHIVE)
    while at + 60 <= len(data):
        header = data[at:at + 60]
        name, size = header[:16].decode("latin1").rstrip(), int(header[48:58].decode("latin1").strip())
        body = data[at + 60:at + 60 + size]
        if name == "//":
            longnames = body
        elif name != "/":
            if name.startswith("/") and name[1:].isdigit():
                start = int(name[1:])
                end = min(i for i in (longnames.find(b"\0", start), longnames.find(b"/\n", start), len(longnames))
                          if i >= 0)
                name = longnames[start:end].decode("latin1")
            out.append((name.removesuffix("/"), body))
        at += 60 + size + (size & 1)
    return out


def _home(image, va: int):
    """The section whose bytes in the file hold address `va`, or None."""
    return next((s for s in image.sections if s.va <= va < s.va + s.raw_size), None)


def _file_bytes(image, home, va: int, n: int) -> bytes:
    """Up to `n` bytes of the file from `va` on, inside `home`'s bytes in the file."""
    start = home.raw_offset + va - home.va
    return image.data[start:min(start + n, home.raw_offset + home.raw_size)]


class _Section:
    """A library object's section as the original should hold it: `data` with the words of absolute symbols filled
    in, `fixed` 1 at each byte that does not depend on where things are."""

    def __init__(self, library: str, member: str, coff: Coff, section, absolutes: dict[str, int]):
        self.library, self.member, self.coff, self.section = library, member, coff, section
        self.symbols = {s.index: s for s in coff.symbols}
        data = bytearray(section.data)
        self.fixed = bytearray(b"\x01") * len(data)
        self.words: list[int] = []  # offsets of the address words: the original has a base relocation at each
        for r in section.relocations:
            target = self.symbols[r.symbol_index]
            absolute = target.value if target.section_number == ABSOLUTE else \
                absolutes.get(target.name) if target.section_number == 0 else None
            if r.type == DIR32 and absolute is not None:  # `__except_list` (fs:[0]): a known word, not relocated
                data[r.offset:r.offset + 4] = struct.pack("<I", (absolute + struct.unpack_from("<I", data, r.offset)[0])
                                                          & MASK)
                continue
            n = 4 if r.type in (DIR32, DIR32NB, REL32) else 2
            self.fixed[r.offset:r.offset + n] = bytes(min(n, len(data) - r.offset))
            if r.type == DIR32:
                self.words.append(r.offset)
        self.data = bytes(data)
        self.code = bool(section.characteristics & SCN_CNT_CODE)
        self.align = 1 << max(((section.characteristics >> 20) & 0xF) - 1, 0)
        self.runs = []  # (start, end) of each row of fixed bytes
        start = None
        for i, f in enumerate(self.fixed + b"\x00"):
            if f and start is None:
                start = i
            elif not f and start is not None:
                self.runs.append((start, i))
                start = None
        # a row of zeros or 0xCC says nothing about where it is: search for the longest other row, and count the
        # fixed bytes that are neither as the evidence of a place found without one
        telling = [(a, b) for a, b in self.runs if self.data[a:b].strip(b"\x00\xcc")]
        self.anchor = max(telling, key=lambda r: r[1] - r[0], default=(0, 0))
        self.evidence = sum(1 for i, f in enumerate(self.fixed) if f and self.data[i] not in (0x00, 0xCC))


class _Placer:
    def __init__(self, image, addresses: dict[str, int], ilt):
        self.image, self.ilt = image, ilt
        self.relocated = image.relocated()
        self.known = {n: a for n, a in addresses.items() if "/" not in n}  # external name -> game address
        self.sections: dict[tuple, _Section] = {}  # (library, member, section number) -> section
        self.defined: dict[str, list[tuple[tuple, int]]] = {}  # external name -> (section key, value)
        self.at: dict[tuple, int] = {}  # placed section -> address
        self.how: dict[tuple, str] = {}
        self.symbol_at: dict[tuple, int] = {}  # (library, member, symbol index) -> address
        self.spans: list[tuple[int, int, tuple]] = []  # placed (start, end, key), sorted
        self.todo: deque[tuple] = deque()

    def add(self, li: int, library: str, members: list[tuple[str, bytes]]) -> None:
        parsed = []
        for mi, (name, data) in enumerate(members):
            try:
                parsed.append((mi, name, Coff.parse(data)))
            except (CoffError, struct.error, IndexError, UnicodeDecodeError):
                continue  # an import library's short import record
        absolutes = {s.name: s.value for _, _, c in parsed for s in c.symbols
                     if s.section_number == ABSOLUTE and s.storage_class == EXTERNAL}
        for mi, name, coff in parsed:
            for s in coff.sections:
                if (s.characteristics & (SCN_CNT_UNINITIALIZED_DATA | SCN_LNK_INFO | SCN_LNK_REMOVE) or not s.data
                        or s.name.startswith(".debug")):
                    continue
                self.sections[(li, mi, s.number)] = _Section(library, name, coff, s, absolutes)
            for sym in coff.symbols:
                if sym.storage_class == EXTERNAL and sym.section_number > 0:
                    self.defined.setdefault(sym.name, []).append(((li, mi, sym.section_number), sym.value))

    # --- the original's words --------------------------------------------------------------------------------
    def follow(self, addr: int) -> int:
        for _ in range(4):
            if addr not in self.ilt:
                break
            addr = self.ilt[addr]
        return addr

    def target(self, sec: _Section, r, va: int) -> int | None:
        """What the original's word at relocation `r` of `sec` placed at `va` names: stubs followed, addend off."""
        site = va + r.offset
        try:
            word = struct.unpack("<I", self.image.read(site, 4))[0]
        except (ValueError, struct.error):
            return None
        raw = sec.section.data[r.offset:r.offset + 4]
        if r.type == DIR32:
            addend, reached = struct.unpack("<I", raw)[0], word
        elif r.type == REL32:
            addend, reached = struct.unpack("<i", raw)[0], (site + 4 + word) & MASK
        else:
            return None
        if addend == 0:
            reached = self.follow(reached)
        return (reached - addend) & MASK

    def expected(self, key: tuple, sec: _Section, target, va: int) -> int | None:
        if target.section_number == sec.section.number:
            return va + target.value
        found = self.symbol_at.get((key[0], key[1], target.index))
        if found is None and target.storage_class == EXTERNAL:
            found = self.known.get(target.name)
        return found

    # --- places ----------------------------------------------------------------------------------------------
    def overlaps(self, va: int, n: int) -> bool:
        i = bisect.bisect_right(self.spans, (va, MASK + 1, ()))
        return (i > 0 and self.spans[i - 1][1] > va) or (i < len(self.spans) and self.spans[i][0] < va + n)

    def fits(self, key: tuple, va: int) -> int | None:
        """How many relocations a check reached if the original holds section `key` at `va`, else None."""
        sec, n = self.sections[key], len(self.sections[key].data)
        home = _home(self.image, va)
        if home is None or home.executable != sec.code or va + n > home.va + home.raw_size or self.overlaps(va, n):
            return None
        game = _file_bytes(self.image, home, va, n)
        if any(game[a:b] != sec.data[a:b] for a, b in sec.runs):
            return None
        lo, hi = bisect.bisect_left(self.relocated, va), bisect.bisect_left(self.relocated, va + n)
        if self.relocated[lo:hi] != [va + k for k in sec.words]:
            return None
        checked = 0
        for r in sec.section.relocations:
            want = self.expected(key, sec, sec.symbols[r.symbol_index], va)
            if want is None:
                continue
            got = self.target(sec, r, va)
            if got is None or got not in (want, self.follow(want)):
                return None
            checked += 1
        return checked

    def place(self, key: tuple, va: int, how: str) -> bool:
        if key in self.at:
            return self.at[key] == va
        if key not in self.sections or self.fits(key, va) is None:
            return False
        sec = self.sections[key]
        self.at[key], self.how[key] = va, how
        bisect.insort(self.spans, (va, va + len(sec.data), key))
        for sym in sec.coff.symbols:
            if sym.section_number == sec.section.number:
                self.symbol_at[(key[0], key[1], sym.index)] = va + sym.value
                if sym.storage_class == EXTERNAL:
                    self.known.setdefault(sym.name, va + sym.value)
        self.todo.append(key)
        return True

    def propagate(self) -> None:
        """Place what the relocations of each newly placed section name."""
        while self.todo:
            key = self.todo.popleft()
            sec, va = self.sections[key], self.at[key]
            for r in sec.section.relocations:
                target = sec.symbols[r.symbol_index]
                addr = self.target(sec, r, va)
                if addr is None or target.section_number == ABSOLUTE:
                    continue
                if target.section_number > 0:  # this object's own section
                    self.symbol_at.setdefault((key[0], key[1], target.index), addr)
                    self.place((key[0], key[1], target.section_number), (addr - target.value) & MASK, "reference")
                elif target.storage_class == EXTERNAL:
                    self.known.setdefault(target.name, addr)
                    for other, value in self.defined.get(target.name, ()):
                        if self.place(other, (addr - value) & MASK, "reference"):
                            break

    def by_name(self) -> None:
        for name, definitions in self.defined.items():
            if name in self.known:
                for key, value in definitions:
                    if self.place(key, (self.known[name] - value) & MASK, "name"):
                        break
        self.propagate()

    # --- content -----------------------------------------------------------------------------------------------
    def free(self, windows: list[tuple[int, int]]) -> list[tuple[int, int]]:
        """The parts of `windows` no section is placed in."""
        out = []
        for lo, hi in windows:
            i = bisect.bisect_right(self.spans, (lo, MASK + 1, ())) - 1
            at = lo
            for start, end, _ in self.spans[max(i, 0):]:
                if start >= hi:
                    break
                if end <= at:
                    continue
                if start > at:
                    out.append((at, start))
                at = max(at, end)
            if at < hi:
                out.append((at, hi))
        return out

    def candidates(self, key: tuple, pieces: list[tuple[int, int]]) -> list[int]:
        """The places of section `key` that touch `pieces` (with a row of ANCHOR fixed bytes to search for) or lie in
        one of them (without: every aligned address is tried, and the one place found needs EVIDENCE)."""
        sec = self.sections[key]
        n, (a, b) = len(sec.data), sec.anchor
        found = []
        for lo, hi in pieces:
            home = _home(self.image, lo)
            if home is None or home.executable != sec.code:
                continue
            if b - a >= ANCHOR:
                start, stop = max(lo - n + 1, home.va), min(hi, home.va + home.raw_size)
                window = _file_bytes(self.image, home, start + a, max(stop - start + b - a - 1, 0))
                at = window.find(sec.data[a:b])
                while at >= 0:
                    va = start + at
                    if va not in found and self.fits(key, va) is not None:
                        found.append(va)
                    at = window.find(sec.data[a:b], at + 1)
            else:
                piece = _file_bytes(self.image, home, lo, hi - lo)
                for va in range(lo + -lo % sec.align, hi - n + 1, sec.align):
                    if any(piece[va - lo + c:va - lo + d] != sec.data[c:d] for c, d in sec.runs):
                        continue
                    checked = self.fits(key, va)
                    if checked is not None and sec.evidence + 4 * checked >= EVIDENCE and va not in found:
                        found.append(va)
        return found

    def by_content(self, windows: list[tuple[int, int]]) -> None:
        changed = True
        while changed:
            changed = False
            for anchored in (True, False):
                for key, sec in self.sections.items():
                    if key in self.at or (sec.anchor[1] - sec.anchor[0] >= ANCHOR) != anchored:
                        continue
                    found = self.candidates(key, self.free(windows))
                    if len(found) == 1 and self.place(key, found[0], "content"):
                        self.propagate()
                        changed = True


def place(image, libraries: list[tuple[str, bytes]], addresses: dict[str, int], ilt,
          windows: list[tuple[int, int]]) -> list[Placement]:
    """Where the original holds the sections of `libraries` ((name, archive bytes)): `addresses` are the game's named
    addresses, `ilt` maps an incremental-link stub to its function, `windows` are the (start, end) address ranges
    no owner has yet, where content is searched."""
    placer = _Placer(image, addresses, ilt)
    for li, (name, data) in enumerate(libraries):
        placer.add(li, name, read_archive(data))
    placer.by_name()
    placer.by_content(windows)
    out = []
    for key, va in sorted(placer.at.items(), key=lambda kv: kv[1]):
        sec = placer.sections[key]
        out.append(Placement(va, len(sec.data), sec.library, sec.member, sec.section.name, placer.how[key]))
    return out


def import_thunks(image, windows: list[tuple[int, int]]) -> list[int]:
    """The addresses of the linker's import thunks in `windows`: `jmp dword ptr [slot]`, a relocated word naming a
    slot of the import address table."""
    if len(image.directories) <= IAT or not image.directories[IAT][1]:
        return []
    rva, size = image.directories[IAT]
    lo_slot, hi_slot = image.image_base + rva, image.image_base + rva + size
    relocated = set(image.relocated())
    out = []
    for lo, hi in windows:
        home = _home(image, lo)
        if home is None or not home.executable:
            continue
        data = _file_bytes(image, home, lo, hi - lo)
        at = data.find(b"\xff\x25")
        while 0 <= at <= len(data) - 6:
            slot = struct.unpack_from("<I", data, at + 2)[0]
            if lo_slot <= slot < hi_slot and lo + at + 2 in relocated:
                out.append(lo + at)
                at = data.find(b"\xff\x25", at + 6)
            else:
                at = data.find(b"\xff\x25", at + 1)
    return out
