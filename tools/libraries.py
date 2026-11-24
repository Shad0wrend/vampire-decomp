"""Find the sections of the libraries the link reads (config/build.toml [link] libs) in the original DLL.

The original links the C runtime (LIBC.LIB) as the build does: no block makes those bytes, the library's objects do.
A section of a library object is placed where the original holds it:
- by name: config/addresses.txt gives the game address of a symbol the section defines;
- by reference: a placed section's relocation names it, and the original's word there says where it is;
- by content: its bytes (the words its relocations fill left out) are at exactly one place of what no owner has yet.
Each place is checked before it is taken: the bytes match outside the relocated words, the original has a base
relocation at exactly the section's address words, every relocation whose target is known reaches it, and no other
section of a library is there. An uninitialized (.bss) section has no bytes, nor has a COMMON symbol (room the link
gives in .bss): the original's words that name them say where they are (library_bss); so do they for the one copy the
link keeps of a COMDAT data section that is nowhere content can be found (library_comdats), and for a symbol the
placed sections name that has no address otherwise (library_externals). The linker's thunk for a
function of an import library (`jmp [__imp_X]`) is found by its shape (import_thunks); what an import library defines
(`__imp_X`, the thunk's X) comes from its short import records (import_symbols). Standard library only, like every
tool here."""

from __future__ import annotations

import bisect
import struct
from collections import deque
from collections.abc import Callable, Iterable, Iterator
from dataclasses import dataclass

from .cfg import LibrarySection
from .coff import SCN_CNT_UNINITIALIZED_DATA, Coff, CoffError

DIR32, DIR32NB, REL32 = 0x6, 0x7, 0x14
SCN_CNT_CODE, SCN_LNK_INFO, SCN_LNK_REMOVE, SCN_LNK_COMDAT = 0x20, 0x200, 0x800, 0x1000
ABSOLUTE, EXTERNAL = -1, 2
MASK = 0xFFFFFFFF
ANCHOR = 8  # fixed bytes in a row a content search starts from
EVIDENCE = 4  # a section with no such row: fixed bytes, plus 4 for each relocation checked, it needs at its one place
IAT = 12
ARCHIVE = b"!<arch>\n"
IMPORT_RECORD = b"\x00\x00\xff\xff"  # a short import record's first words: IMAGE_FILE_MACHINE_UNKNOWN, 0xFFFF
CODE_IMPORT = 0  # an import record's type: 0 code, 1 data, 2 const


@dataclass
class Placement:
    va: int
    size: int
    library: str
    member: str  # the object's name in the library
    section: str
    how: str  # name, reference or content
    member_index: int  # the member's position in the archive (read_archive)
    number: int  # the section's number in the member


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


def _follow(ilt, addr: int) -> int:
    """Where `addr` leads through the incremental-link stubs (`ilt`: stub -> its function)."""
    for _ in range(4):
        if addr not in ilt:
            break
        addr = ilt[addr]
    return addr


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
        return _follow(self.ilt, addr)

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
        out.append(Placement(va, len(sec.data), sec.library, sec.member, sec.section.name, placer.how[key], key[1],
                             key[2]))
    return out


def symbol_addresses(archives: dict[str, list[tuple[str, bytes]]], placed: Iterable[LibrarySection]) -> dict[str, int]:
    """External name -> game address of every symbol a placed section defines: `placed` is the library-sections table
    (config/layout/libraries.txt), `archives` each library's members as read_archive reads them. A member that is not
    the one the table names there (the library changed since the table was written) is a ValueError."""
    out: dict[str, int] = {}
    parsed: dict[tuple[str, int], Coff] = {}
    for p in placed:
        coff = parsed.get((p.library, p.member_index))
        if coff is None:
            members = archives.get(p.library)
            if members is None or not 0 <= p.member_index < len(members) or members[p.member_index][0] != p.member:
                raise ValueError(f"{p.library}: member {p.member_index} is not {p.member} (the library changed: run "
                                 f"pcdecomp standalone)")
            coff = parsed[(p.library, p.member_index)] = Coff.parse(members[p.member_index][1])
        for sym in coff.symbols:
            if sym.storage_class == EXTERNAL and sym.section_number == p.section:
                out.setdefault(sym.name, p.addr + sym.value)
    return out


def library_bss(image, archives: dict[str, list[tuple[str, bytes]]],
                placed: Iterable[LibrarySection]) -> tuple[list[LibrarySection], dict[str, int], list[str]]:
    """Where the original holds the uninitialized space the placed library sections name (`placed`, the
    library-sections table; `archives` each library's members as read_archive reads them): the rows of their .bss
    sections, the addresses of their COMMON symbols, and the problems. Neither has bytes to search for: each word of a
    placed section whose relocation names one says where it is, less the addend (and, in a .bss section, the symbol's
    value). A .bss section is named by a symbol of its own member or an external one defines; a COMMON symbol (C's
    `int x;`: an external of no section, its size as its value, that no member defines) by its name, and the link
    gives it room in .bss. The words naming one must agree, and it must lie inside a section's virtual extent (bss is
    virtual space, past the raw data where the link puts it); else a problem, and no row or address."""
    coff = _parser(archives)

    def uninitialized(c: Coff) -> set[int]:
        return {s.number for s in c.sections if s.characteristics & SCN_CNT_UNINITIALIZED_DATA}

    defined: dict[str, tuple[str, int, int, int]] = {}  # external name -> (library, member, section, value) in a bss
    anywhere: set[str] = set()  # the externals some member defines (in any section, or absolute)
    common: dict[str, int] = {}  # COMMON name -> its size (the largest any member asks)
    for library, members in archives.items():
        for index in range(len(members)):
            c = coff(library, index)
            if c is None:
                continue
            bss = uninitialized(c)
            for sym in c.symbols:
                if sym.storage_class != EXTERNAL:
                    continue
                if sym.section_number == 0:
                    if sym.value:
                        common[sym.name] = max(common.get(sym.name, 0), sym.value)
                    continue
                anywhere.add(sym.name)
                if sym.section_number in bss:
                    defined.setdefault(sym.name, (library, index, sym.section_number, sym.value))
    common = {name: size for name, size in common.items() if name not in anywhere}
    placed = list(placed)
    taken = {(p.library, p.member_index, p.section) for p in placed}
    # a bss section (library, member, number) or a COMMON name -> address -> the words' sites
    named: dict[tuple[str, int, int] | str, dict[int, list[int]]] = {}
    for p in placed:
        c = coff(p.library, p.member_index) if p.library in archives else None
        section = next((s for s in c.sections if s.number == p.section), None) if c is not None else None
        if section is None:
            continue
        symbols, bss = {s.index: s for s in c.symbols}, uninitialized(c)
        for r in section.relocations:
            target = symbols.get(r.symbol_index)
            if r.type != DIR32 or target is None:
                continue
            if target.section_number in bss:
                key, value = (p.library, p.member_index, target.section_number), target.value
            elif target.section_number == 0 and target.name in defined:
                library, index, number, value = defined[target.name]
                key = (library, index, number)
            elif target.section_number == 0 and target.name in common:
                key, value = target.name, 0
            else:
                continue
            if key in taken:
                continue
            site = p.addr + r.offset
            addr = (struct.unpack("<I", image.read(site, 4))[0] - struct.unpack_from("<I", section.data, r.offset)[0]
                    - value) & MASK
            named.setdefault(key, {}).setdefault(addr, []).append(site)
    rows, addresses, problems = [], {}, []
    for key, found in named.items():
        if isinstance(key, str):
            what, size = f"the COMMON symbol {key} ({common[key]} bytes)", common[key]
        else:
            library, index, number = key
            size = len(next(s for s in coff(library, index).sections if s.number == number).data)
            what = f"{library}:{archives[library][index][0]}: its uninitialized section #{number}"
        words = ", ".join(f"0x{a:08x} (the word at 0x{sites[0]:08x})" for a, sites in sorted(found.items()))
        if len(found) > 1:
            problems.append(f"{what}: the original's words name it at {words}")
            continue
        (addr,) = found
        if not any(s.va <= addr and addr + size <= s.va + s.size for s in image.sections):
            problems.append(f"{what}: the original's words name it at {words}, outside every section's virtual "
                            f"extent")
            continue
        if isinstance(key, str):
            addresses[key] = addr
        else:
            rows.append(LibrarySection(addr, library, index, archives[library][index][0], number))
    return sorted(rows, key=lambda r: r.addr), addresses, problems


def _parser(archives: dict[str, list[tuple[str, bytes]]]) -> Callable[[str, int], Coff | None]:
    """Each library member (`archives`: each library's members as read_archive reads them) parsed once, on demand:
    None for an import record or a member that is no i386 object."""
    parsed: dict[tuple[str, int], Coff | None] = {}

    def coff(library: str, index: int) -> Coff | None:
        if (library, index) not in parsed:
            data = archives[library][index][1]
            try:
                parsed[(library, index)] = None if data[:4] == IMPORT_RECORD else Coff.parse(data)
            except (CoffError, struct.error, IndexError, UnicodeDecodeError):
                parsed[(library, index)] = None
        return parsed[(library, index)]
    return coff


def _placed_relocations(coff: Callable[[str, int], Coff | None], placed: Iterable[LibrarySection]) -> Iterator[tuple]:
    """(row, its member, its section, the relocation, the symbol it names) of each DIR32 or REL32 relocation of each
    placed section that has bytes (`placed`: library-sections rows of the libraries `coff` parses)."""
    for p in placed:
        c = coff(p.library, p.member_index)
        section = next((s for s in c.sections if s.number == p.section), None) if c is not None else None
        if section is None or section.characteristics & SCN_CNT_UNINITIALIZED_DATA:
            continue
        symbols = {s.index: s for s in c.symbols}
        for r in section.relocations:
            target = symbols.get(r.symbol_index)
            if target is not None and r.type in (DIR32, REL32):
                yield p, c, section, r, target


def _named_at(image, section, r, site: int, ilt=None) -> tuple[int, int | None] | None:
    """What the original's word at relocation `r` of `section` (the word at `site`) names: (the address, less the
    addend; the incremental-link stub it went through, or None), a REL32's word read as the call's target (rel32 + site
    + 4). With `ilt` (stub -> its function), a word with no addend that reaches a stub names the stub's function, the
    stub rule the layout writes such a reference by. None for a word the file does not hold."""
    try:
        word = struct.unpack("<I", image.read(site, 4))[0]
    except (ValueError, struct.error):
        return None
    raw = section.data[r.offset:r.offset + 4]
    if r.type == REL32:
        addend, reached = struct.unpack("<i", raw)[0], (site + 4 + word) & MASK
    else:
        addend, reached = struct.unpack("<I", raw)[0], word
    stub = None
    if not addend and ilt is not None and reached in ilt:
        stub, reached = reached, _follow(ilt, reached)
    return (reached - addend) & MASK, stub


def _comdat_data(section) -> bool:
    """A COMDAT section of initialized data: the link keeps one copy of it, whichever members carry one."""
    flags = section.characteristics
    return bool(flags & SCN_LNK_COMDAT and not flags & (SCN_CNT_CODE | SCN_CNT_UNINITIALIZED_DATA) and section.data)


def library_comdats(image, archives: dict[str, list[tuple[str, bytes]]], placed: Iterable[LibrarySection],
                    known: Callable[[str], bool]) -> tuple[list[LibrarySection], list[str]]:
    """The rows of the COMDAT data sections (a select-any literal) the placed library sections name and nothing places:
    `placed` is the library-sections table, `archives` each library's members as read_archive reads them, `known(name)`
    whether a name has an address already (config, a placed section's symbol). vtmb's link kept its one copy of LIBC's
    empty wide string in .data's virtual space, where no content search finds it. As library_bss: each word of a placed
    section whose relocation names its member's own copy says where the kept copy is, less the addend and the symbol's
    value, and the words naming one symbol must agree. The link points every member's references at its one copy: ONE
    row, for the copy of the member the original lays out first (its lowest placed row: the link lays the members out
    in link order, and keeps the first copy in link order); the layout resolves the other members' words through it,
    by the symbol's name, and writes no byte of theirs. The place must lie inside a section's virtual extent, with the
    copy's bytes (its relocated words aside) there in the file, zeros past the section's raw data; else a problem, and
    no row."""
    coff = _parser(archives)
    placed = [p for p in placed if p.library in archives]
    taken = {(p.library, p.member_index, p.section) for p in placed}
    named: dict[str, dict[int, list[int]]] = {}  # a COMDAT symbol -> its address -> the words' sites
    for p, c, section, r, target in _placed_relocations(coff, placed):
        if target.storage_class != EXTERNAL or target.section_number <= 0 or known(target.name) \
                or (p.library, p.member_index, target.section_number) in taken:
            continue
        home = next((s for s in c.sections if s.number == target.section_number), None)
        found = _named_at(image, section, r, p.addr + r.offset) if home is not None and _comdat_data(home) else None
        if found is not None:
            named.setdefault(target.name, {}).setdefault(found[0], []).append(p.addr + r.offset)
    first: dict[tuple[str, int], int] = {}  # each placed member -> the address of its first row
    for p in placed:
        first[(p.library, p.member_index)] = min(first.get((p.library, p.member_index), MASK), p.addr)
    order = {library: k for k, library in enumerate(archives)}
    in_link_order = sorted(first, key=lambda m: (first[m], order[m[0]], m[1]))

    def copy_of(library: str, index: int, name: str):
        """(the member's section holding its copy of `name`, the symbol's value), or None."""
        c = coff(library, index)
        sym = next((s for s in c.symbols if s.name == name and s.storage_class == EXTERNAL and s.section_number > 0),
                   None) if c is not None else None
        home = next((s for s in c.sections if s.number == sym.section_number), None) if sym is not None else None
        return (home, sym.value) if home is not None and _comdat_data(home) else None

    rows, problems = [], []
    for name, found in named.items():
        copies = [(m, held) for m in in_link_order for held in [copy_of(*m, name)] if held is not None]
        what = f"the COMDAT {name} ({', '.join(f'{lib}:{archives[lib][k][0]}' for (lib, k), _ in copies)})"
        words = ", ".join(f"0x{a:08x} (the word at 0x{sites[0]:08x})" for a, sites in sorted(found.items()))
        if len(found) > 1:
            problems.append(f"{what}: the original's words name it at {words}")
            continue
        (addr,) = found
        (library, index), (home, value) = copies[0]
        member = archives[library][index][0]
        start, size = (addr - value) & MASK, len(home.data)
        if not any(s.va <= start and start + size <= s.va + s.size for s in image.sections):
            problems.append(f"{what}: the original's words name it at {words}, outside every section's virtual extent")
            continue
        sec, raw = _Section(library, member, coff(library, index), home, {}), _home(image, start)
        game = (_file_bytes(image, raw, start, size) if raw is not None else b"").ljust(size, b"\0")
        if any(game[a:b] != sec.data[a:b] for a, b in sec.runs):
            problems.append(f"{what}: the original's words name it at {words}, where its bytes are not")
            continue
        rows.append(LibrarySection(start, library, index, member, home.number))
    return sorted(rows, key=lambda r: r.addr), problems


def library_externals(image, archives: dict[str, list[tuple[str, bytes]]], placed: Iterable[LibrarySection],
                      known: Callable[[str], bool], ilt) -> tuple[dict[str, int], dict[int, set[str]], list[str]]:
    """The addresses of the symbols the placed library sections name that have none (`known(name)`: an address from
    config, a placed section's symbol, an import) and that no member defines as absolute or asks as COMMON: `placed` is
    the library-sections table, `archives` each library's members as read_archive reads them, `ilt` the incremental-link
    stubs (stub -> its function). vtmb's setenv.obj calls __strdup, which no table names: LIBC's strdup.obj and
    mbsdup.obj are byte-identical members, and vtmb's config names the code at the call's target __mbsdup and places
    mbsdup.obj there (the incremental link folds nothing; which twin the original holds there, the config's name cannot
    tell), so the target already has an owner with the same bytes and an address for the name is the smallest correct
    answer. The original's word at each relocation naming one says where it is: a call's target (rel32 + site + 4) or
    an address word, less the addend; a word with no addend that reaches a stub names the stub's function (the layout
    writes such a reference through the stub again) and the stub is listed under the name, for stubs.txt's names. The
    words naming one symbol must agree and the address must lie inside a section; else a problem, and no address.
    (name -> address, stub -> the names whose word reached it, problems)."""
    coff = _parser(archives)
    named: dict[str, dict[int, list[int]]] = {}  # a symbol -> its address -> the words' sites
    users: dict[str, list[str]] = {}  # a symbol -> the members whose words name it
    through: dict[str, set[int]] = {}  # a symbol -> the stubs its words reached
    for p, _, section, r, target in _placed_relocations(coff, [p for p in placed if p.library in archives]):
        if target.storage_class != EXTERNAL or target.section_number != 0 or target.value or known(target.name):
            continue  # defined in the member, a COMMON symbol (library_bss), weak, or with an address
        site = p.addr + r.offset
        found = _named_at(image, section, r, site, ilt)
        if found is None:
            continue
        named.setdefault(target.name, {}).setdefault(found[0], []).append(site)
        member = f"{p.library}:{p.member}"
        if member not in users.setdefault(target.name, []):
            users[target.name].append(member)
        if found[1] is not None:
            through.setdefault(target.name, set()).add(found[1])
    if named:  # an absolute symbol (`__except_list`): its value is its address, the layout's own rule
        absolute = {s.name for library, members in archives.items() for k in range(len(members))
                    for c in [coff(library, k)] if c is not None for s in c.symbols
                    if s.section_number == ABSOLUTE and s.storage_class == EXTERNAL}
        named = {name: found for name, found in named.items() if name not in absolute}
    addresses: dict[str, int] = {}
    stubs: dict[int, set[str]] = {}
    problems = []
    for name, found in named.items():
        what = f"{name} (named by {', '.join(users[name])})"
        words = ", ".join(f"0x{a:08x} (the word at 0x{sites[0]:08x})" for a, sites in sorted(found.items()))
        if len(found) > 1:
            problems.append(f"{what}: the original's words name it at {words}")
            continue
        (addr,) = found
        if not any(s.va <= addr < s.va + s.size for s in image.sections):
            problems.append(f"{what}: the original's words name it at {words}, outside every section")
            continue
        addresses[name] = addr
        for stub in through.get(name, ()):
            stubs.setdefault(stub, set()).add(name)
    return addresses, stubs, problems


def import_symbols(archive: bytes) -> dict[str, tuple[str, str]]:
    """The symbols an import library defines -> (DLL, import name), from each short import record: `__imp_<symbol>`
    (its IAT slot) and, for a code import, `<symbol>` (the linker's thunk). The import name is the symbol by the
    record's name type: 1 as is, 2 without a leading `?`, `@` or `_`, 3 also cut at the first `@`; 0 imports by
    ordinal: `#<ordinal>`. A symbol two records define keeps the first."""
    out: dict[str, tuple[str, str]] = {}
    for _, data in read_archive(archive):
        if len(data) < 20 or data[:4] != IMPORT_RECORD or struct.unpack_from("<H", data, 4)[0] != 0:
            continue  # an object (an anonymous object starts the same, with a version of 1 or more)
        ordinal, bits = struct.unpack_from("<HH", data, 16)
        symbol, dll = (s.decode("latin1") for s in data[20:].split(b"\0", 2)[:2])
        kind, name_type = bits & 3, bits >> 2 & 7
        name = symbol
        if name_type == 0:
            name = f"#{ordinal}"
        elif name_type in (2, 3):
            name = name[1:] if name[:1] in ("?", "@", "_") else name
            name = name.split("@", 1)[0] if name_type == 3 else name
        out.setdefault(f"__imp_{symbol}", (dll, name))
        if kind == CODE_IMPORT:
            out.setdefault(symbol, (dll, name))
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
