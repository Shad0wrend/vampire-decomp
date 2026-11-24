"""Lay the build's objects out where the game's incremental link put them (`ninja identical`).

Every address comes from config/ (written by `pcdecomp standalone`), never from the original's words:
- a block's root section at its block address (config/blocks.txt): all of the section's bytes, the object's own
  alignment fill past the block's recorded size the weakest owner (written by place_libraries, after the libraries
  and thunks, byte by byte where no other contribution wrote: _write_fill); a block config/layout/unpadded.txt lists
  (its original contribution ended at its recorded size: a vcall thunk's twin) has no fill: it is written up to its
  recorded size, and the bytes after it stay the code fill (CODE_FILL); an initializer block's root is its object's
  first `.CRT$XCU` entry, the other entries go to their `<obj>/<name>` addresses;
- every function of the object that the placed code reaches and that has an address no block has (a static: an
  initializer step, a local static's destroy, a same-unit copy; an inline function's static destroy), and the code a
  vtable slot runs that no block covers (a compiler thunk, a deleting destructor), as tools.verify checks them (a
  config address at an incremental-link stub stands for the stub's function: its code goes there);
- each initialized data symbol of a block's object that has an address, from its value for padding_after(...) bytes;
- each vtable (`??_7`) at its address with its RTTI locator word before it, once per name (the first object that
  emits it); the slots config/vtable_patches.txt names are written to their replacement;
- each item of every data template (src/_data/*.asm.in) at [address - prefix, address + extent);
- each `.CRT$XCU` section of an initializer object at `<obj>/#<section>`;
then place_libraries():
- each library section config/layout/libraries.txt names (library, member, section number) at its address (an
  uninitialized one is virtual space: no bytes, only the address the relocations into it take; so is a COMMON
  symbol, whose address is config/addresses.txt's, as derive recorded it);
- each import thunk of config/layout/thunks.txt: `jmp [slot]`, the slot its import's (imports.txt);
- the blocks' alignment fill, where no one wrote;
then generate() (tools/peparts.py builds the bytes):
- each incremental-link stub of config/layout/stubs.txt;
- the import directory at imports.txt's addresses (an import library's section of equal bytes keeps them: the DLL
  names);
- the export directory at [identical] export_directory, each export's word the reference to its symbol;
- the debug directory at [identical] debug_directory, for the NB10 record (nb10()) after the last section's raw data;
- the base relocation table (peparts.base_relocations over every relocated word) at the `.reloc` section's start.
Each generated part records its data directory in `Layout.directories` (index -> (RVA, size)). Then file_bytes():
the headers (the linker's DOS header and stub, the Rich header of [identical] rich, the PE headers: sizes from the
sections, the directories, the entry point as a reference to its function, the rest from [identical]), each
section's raw data in section order from FileAlign on (zeros past its virtual size), the NB10 record last.
Objects are read as verify reads them: from build/link/ when config/fixups.txt or bss_layout.txt fixes them up, else
from build/obj/. The libraries are those the link reads, in its order: the build's import libraries (build/lib, one
per [imports] dlls), then [link] libs from the library folders given; two names are two libraries unless they are
one file (build/lib/KERNEL32.lib and VC6's KERNEL32.LIB are two), and a row naming a library not read is a problem.

Relocations: a target in the relocation's own placed section is that section's address + value, never a stub (a
jump table, a function calling itself); a symbol in another placed section of the object (of a library member: the
sections libraries.txt places) is that section's address + value; anything else is address_of's (config:
symbols.Addresses.resolve; then a symbol a placed library section defines, an import slot `__imp_X`, an import's
thunk X; a weak external's default too: a library's `??_G` behind its `??_E`), or a library's absolute symbol
(`__except_list`), which is its value. Then the reference rule: with no
addend, an address that is the target of incremental-link stubs (config/layout/stubs.txt) is referenced through its
stub, the only one or the one whose names hold the symbol's own name or its alias's canonical name. DIR32 writes the
address and marks a base relocation (not for an absolute symbol), REL32 the displacement, DIR32NB the image-relative
address.

Every problem is collected, and LayoutError carries them all at the end of each stage: a target without an address,
a library member's section a relocation names that libraries.txt does not place, a `.CRT$XCU` section without an
address, a block longer than its room (up to the next contribution, a library section or thunk of config/layout
included: changed source belongs in the normal build; alignment fill past its recorded size does not count), two
contributions that write different bytes (or relocate other words) at one address, a stale entry of
config/layout/unpadded.txt (no block of blocks.txt, or a block with no alignment fill past its recorded size).

    python -m tools.layout --orig ORIG [--vc6 DIR] [--lib DIR]... [--build build] [--config DIR]

writes build/identical/<target> and build/identical/layout.json ([start, end, owner] of every run of bytes one owner
wrote); exit 0 when the file's SHA-1 is [target] sha1, else 1 with the comparison against the original (refused
unless it is the original), 2 with the problems of the first stage that has any."""

from __future__ import annotations

import argparse
import bisect
import hashlib
import json
import os
import struct
from array import array
from collections.abc import Callable, Iterable, Sequence
from dataclasses import dataclass
from pathlib import Path

from .cfg import (LAYOUT, Block, Export, Imports, LibrarySection, SectionRecord, Stub, Thunk, read_addresses,
                  read_aliases, read_blocks, read_build, read_exports, read_fixups, read_imports, read_layout,
                  read_library_sections, read_patches, read_sections, read_stubs, read_thunks, read_unpadded)
from .coff import SYM_CLASS_EXTERNAL, SYM_CLASS_STATIC, SYM_CLASS_WEAK_EXTERNAL, Coff, CoffError, Section, Symbol
from . import peparts
from .libraries import IMPORT_RECORD, import_symbols, read_archive, symbol_addresses
from .symbols import Addresses, scoped_key
from .verify import (CODE, DIR32, DIR32NB, MASK, NOT_DATA, NOT_LOADED, REL32, UNINITIALIZED, XCU, _Object, _original,
                     data_items, padding_after)

ABSOLUTE = -1  # IMAGE_SYM_ABSOLUTE: the symbol's value is its address
CODE_FILL = 0xCC  # unset bytes of a code section (the incremental link's padding); zeros elsewhere
ALIGNMENT_FILL = b"\x90\xcc"  # the bytes an object pads a function's section with to its alignment
STUBS_OWNER = "stubs"  # the owner of every incremental-link stub
EXPORTS_OWNER = "exports"  # the owner of the export directory
DEBUG_OWNER = "debug"  # the owner of the debug directory
RELOCATIONS_OWNER = "base relocations"  # the owner of the base relocation table
RELOC_SECTION = ".reloc"
JMP_INDIRECT = b"\xff\x25"  # an import thunk: `jmp dword ptr [slot]`, the slot's address after it


class LayoutError(Exception):
    def __init__(self, problems: Iterable[str]):
        self.problems = list(problems)
        n = len(self.problems)
        super().__init__(f"{n} layout problem{'s' if n != 1 else ''}:\n" + "\n".join(self.problems))


@dataclass(frozen=True)
class Conflict:
    """A write that disagrees with what another owner wrote there first (the first writer keeps the bytes)."""
    va: int
    owner: str
    other: str
    what: str  # "bytes" or "relocated words"

    def __str__(self) -> str:
        return f"0x{self.va:08x}: {self.owner} writes other {self.what} than {self.other} there"


class Image:
    """The sections' bytes as the layout writes them, with one owner per byte written. A second write of the same
    bytes and the same relocated words is fine (the first writer keeps the bytes); anything else is a Conflict."""

    def __init__(self, sections: Sequence[SectionRecord]):
        self.sections = sorted(sections, key=lambda s: s.addr)
        self._starts = [s.addr for s in self.sections]
        self._sizes = [s.vsize or s.raw_size for s in self.sections]
        self._bytes = [bytearray([CODE_FILL if s.characteristics & CODE else 0]) * n
                       for s, n in zip(self.sections, self._sizes)]
        self._owner = [array("I", bytes(4 * n)) for n in self._sizes]  # owner id per byte, 0: none
        self._flags = [bytearray(n) for n in self._sizes]  # 1 where a base-relocated word starts
        self._names = [""]  # owner id -> owner
        self._ids: dict[str, int] = {}
        self._runs: list[tuple[int, int, int]] = []  # (start, end, owner id) of the bytes each write took
        self.relocated: set[int] = set()  # the addresses of the base-relocated words
        self.conflicts: list[Conflict] = []
        self.problems: list[str] = []  # writes outside the sections

    def _section(self, va: int, n: int) -> int | None:
        k = bisect.bisect_right(self._starts, va) - 1
        if k < 0 or va + n > self._starts[k] + self._sizes[k]:
            return None
        return k

    def section_at(self, va: int) -> SectionRecord | None:
        k = self._section(va, 1)
        return None if k is None else self.sections[k]

    def section_end(self, va: int) -> int | None:
        k = self._section(va, 1)
        return None if k is None else self._starts[k] + self._sizes[k]

    def read(self, va: int, n: int) -> bytes:
        k = self._section(va, n)
        if k is None or n < 0:
            raise ValueError(f"0x{va:08x}+0x{n:x} is outside the sections")
        off = va - self._starts[k]
        return bytes(self._bytes[k][off:off + n])

    def owner_at(self, va: int) -> str | None:
        k = self._section(va, 1)
        if k is None:
            return None
        return self._names[self._owner[k][va - self._starts[k]]] or None

    @property
    def owners(self) -> list[tuple[int, int, str]]:
        """(start, end, owner) of every run of bytes one owner wrote, in address order."""
        out: list[tuple[int, int, str]] = []
        for start, end, oid in sorted(self._runs):
            name = self._names[oid]
            if out and out[-1][1] == start and out[-1][2] == name:
                out[-1] = (out[-1][0], end, name)
            else:
                out.append((start, end, name))
        return out

    def write(self, va: int, data: bytes, owner: str, relocated: Iterable[int] = ()) -> bool:
        """Write `data` at `va` for `owner`; `relocated`: the offsets in `data` of its base-relocated words. False
        when it is outside the sections or conflicts with an earlier write (then nothing of it is written)."""
        n, relocated = len(data), list(relocated)
        k = self._section(va, n)
        if k is None:
            self.problems.append(f"{owner}: 0x{va:08x}+0x{n:x} is outside the sections")
            return False
        flags = bytearray(n)
        for o in relocated:
            if not 0 <= o <= n - 4:
                self.problems.append(f"{owner}: a relocated word at +0x{o:x} of 0x{n:x} bytes")
                return False
            flags[o] = 1
        if not n:
            return True
        off = va - self._starts[k]
        buf, marks = self._bytes[k], self._flags[k]
        taken = self._owner[k][off:off + n]
        free = taken.count(0)
        if free == n:
            spans = [(0, n)]
        else:
            if free == 0 and buf[off:off + n] == data and marks[off:off + n] == flags:
                return True  # an equal copy: the first writer keeps every byte
            for i in range(n):
                if taken[i] and (buf[off + i] != data[i] or marks[off + i] != flags[i]):
                    what = "bytes" if buf[off + i] != data[i] else "relocated words"
                    self.conflicts.append(Conflict(va + i, owner, self._names[taken[i]], what))
                    return False
            spans = _free(taken)  # a partial overlap that agrees: the bytes no one wrote yet are this owner's
        self._take(k, va, data, flags, owner, spans)
        self.relocated.update(va + o for o in relocated)  # a word in a span already taken is there already
        return True

    def fill(self, va: int, data: bytes, owner: str) -> None:
        """Write `data` at `va` for `owner` byte by byte, only where no owner wrote yet: the weakest owner, never a
        conflict, with no relocated word; what runs past its section's end (or starts outside the sections) is
        dropped."""
        end = self.section_end(va)
        if end is None or not data:
            return
        data = data[:end - va]
        k = self._section(va, len(data))
        off = va - self._starts[k]
        self._take(k, va, data, bytes(len(data)), owner, _free(self._owner[k][off:off + len(data)]))

    def _take(self, k: int, va: int, data: bytes, flags: bytes, owner: str, spans: list[tuple[int, int]]) -> None:
        """Give `owner` the (start, end) `spans` of `data` (offsets) written at `va` in section `k`."""
        off = va - self._starts[k]
        buf, marks, owners = self._bytes[k], self._flags[k], self._owner[k]
        oid = self._ids.get(owner)
        if oid is None:
            oid = self._ids[owner] = len(self._names)
            self._names.append(owner)
        for a, b in spans:
            buf[off + a:off + b] = data[a:b]
            marks[off + a:off + b] = flags[a:b]
            owners[off + a:off + b] = array("I", [oid]) * (b - a)
            self._runs.append((va + a, va + b, oid))


def _free(taken: Sequence[int]) -> list[tuple[int, int]]:
    """(start, end) of each run of the bytes no owner wrote (owner id 0) in `taken`."""
    spans, start = [], None
    for i in range(len(taken) + 1):
        if i < len(taken) and not taken[i]:
            start = i if start is None else start
        elif start is not None:
            spans.append((start, i))
            start = None
    return spans


class _Obj(_Object):
    """verify's object, with what the layout looks up often indexed once. `member`: a library member, whose sections
    are where config/layout/libraries.txt puts them and nowhere else."""

    def __init__(self, name: str, coff: Coff, member: bool = False):
        super().__init__(name, coff)
        self.member = member
        self.by_name: dict[str, Symbol] = {}
        self.by_section: dict[int, list[Symbol]] = {}
        for s in coff.symbols:
            if s.is_defined:
                self.by_name.setdefault(s.name, s)
                self.by_section.setdefault(s.section_number, []).append(s)
        for symbols in self.by_section.values():
            symbols.sort(key=lambda s: s.value)
        self.values = {n: [s.value for s in symbols] for n, symbols in self.by_section.items()}
        self.bases: dict[int, int] = {}  # section number -> the address of its offset 0, for a section placed whole
        self._relocations: dict[int, tuple[list[int], list]] = {}

    def defined(self, name: str) -> Symbol | None:
        return self.by_name.get(name)

    def follows(self, sym: Symbol) -> int | None:
        """The value of the next symbol of `sym`'s section after it, or None."""
        values = self.values.get(sym.section_number, [])
        k = bisect.bisect_right(values, sym.value)
        return values[k] if k < len(values) else None

    def relocations(self, section: Section, lo: int, hi: int) -> list:
        """The relocations of `section` at offsets [lo, hi), by offset."""
        cached = self._relocations.get(section.number)
        if cached is None:
            ordered = sorted(section.relocations, key=lambda r: r.offset)
            cached = self._relocations[section.number] = ([r.offset for r in ordered], ordered)
        offsets, ordered = cached
        return ordered[bisect.bisect_left(offsets, lo):bisect.bisect_left(offsets, hi)]


def fill_from(section: Section, root: Symbol, size: int) -> int | None:
    """The offset in a block's root section (`root` its root symbol) where its alignment fill starts: the block's
    recorded size (config/blocks.txt) past its root, when every byte of the section from there is 0x90 or 0xCC and no
    relocated word lies there; else None (no recorded size, nothing past it, or bytes that are not fill). derive
    (pcdecomp standalone) judges the same fill against the original (config/layout/unpadded.txt)."""
    keep = root.value + size
    if size <= 0 or keep >= len(section.data) or section.data[keep:].lstrip(ALIGNMENT_FILL):
        return None
    return None if any(r.offset >= keep - 3 for r in section.relocations) else keep


def _optional(reader: Callable, path: Path, empty):
    return reader(path) if path.exists() else empty


def _thunk_owner(t: Thunk) -> str:
    return f"thunk:{t.dll}!{t.name}"


class Layout:
    """The image of `root`'s build laid out from config: `place_objects()` first, then `place_libraries()` (later
    stages add the generated parts and the file). `lib_dirs`: the folders the link reads [link] libs from."""

    def __init__(self, root: Path, build: str = "build", config: Path | None = None, lib_dirs: Sequence[Path] = ()):
        self.root = Path(root)
        self.config = Path(config) if config is not None else self.root / "config"
        self.build_dir = self.root / build
        self.lib_dirs = [Path(d) for d in lib_dirs]
        c = self.config
        required = [c / "build.toml", c / "addresses.txt", c / "blocks.txt",
                    *(c / LAYOUT / name for name in ("sections.txt", "stubs.txt", "libraries.txt", "thunks.txt",
                                                     "imports.txt", "exports.txt", "unpadded.txt"))]
        missing = [p for p in required if not p.exists()]
        if missing:
            raise LayoutError([f"{p} not found: run pcdecomp standalone" for p in missing])
        self.values = read_build(c / "build.toml")
        if "identical" not in self.values:
            raise LayoutError([f"{c / 'build.toml'} has no [identical] table: run pcdecomp standalone"])
        self.header: dict = self.values["identical"]  # the header values derive recorded
        self.image_base = self.values["target"]["base"]
        self.addresses = read_addresses(c / "addresses.txt")
        self.aliases = _optional(read_aliases, c / "aliases.txt", {})
        self.names = Addresses(self.addresses, self.aliases)
        self.blocks: list[Block] = read_blocks(c / "blocks.txt")
        self.block_addresses = {b.addr for b in self.blocks}
        # (address, symbol) of each block whose contribution to the original ended at its recorded size
        self.unpadded = {(u.addr, u.target) for u in read_unpadded(c / LAYOUT / "unpadded.txt")}
        self.patches: dict[str, dict[int, str]] = {}  # vtable -> slot -> replacement
        for p in _optional(read_patches, c / "vtable_patches.txt", []):
            self.patches.setdefault(p.vtable, {})[p.slot] = p.replacement
        fixups = _optional(read_fixups, c / "fixups.txt", [])
        renames = _optional(read_layout, c / "bss_layout.txt", [])
        self.fixed = {f.obj for f in fixups} | {r.obj for r in renames if r.op == "rename"}  # as configure.py links
        self.sections: list[SectionRecord] = read_sections(c / LAYOUT / "sections.txt")
        self.stubs: list[Stub] = read_stubs(c / LAYOUT / "stubs.txt")
        self._stubs_of: dict[int, list[Stub]] = {}
        for s in self.stubs:
            self._stubs_of.setdefault(s.target, []).append(s)
        self._stub_target = {s.addr: s.target for s in self.stubs}
        self.library_rows: list[LibrarySection] = read_library_sections(c / LAYOUT / "libraries.txt")
        self.thunks: list[Thunk] = read_thunks(c / LAYOUT / "thunks.txt")
        self.imports: Imports = read_imports(c / LAYOUT / "imports.txt")
        self.exports: list[Export] = read_exports(c / LAYOUT / "exports.txt")
        iat = {d.dll: d.iat for d in self.imports.dlls}
        self._slots = {(e.dll, e.name): iat[e.dll] + 4 * e.index for e in self.imports.entries}  # -> IAT slot
        self._thunk_at: dict[tuple[str, str], int] = {}  # (DLL, import name) -> its thunk
        for t in self.thunks:
            self._thunk_at.setdefault((t.dll, t.name), t.addr)
        self.image = Image(self.sections)
        self.problems: list[str] = []
        self.directories: dict[int, tuple[int, int]] = {}  # data directory index -> (RVA, size), as generate() writes
        self._said: set[str] = set()
        self._told = (0, 0, 0)  # how many problems, image problems and conflicts a stage has reported
        self._missing: dict[str, list[str]] = {}  # a key with no address -> the objects whose relocations name it
        # (start, end, object, owner, fill) of each block's root section; fill: (address, bytes) of its alignment fill
        # past the block's recorded size, not written yet (_write_fill writes it after the libraries), or None
        self._root_spans: list[tuple[int, int, str, str, tuple[int, bytes] | None]] = []
        self._overruns: list[tuple[int, int, str]] = []  # (start, end, owner) of what a block runs past its room
        self._first_at: dict[int, str] = {}  # each contribution's start -> its first owner
        self._vtables: set[str] = set()
        self._slot_code: set[int] = set()
        self.archives: dict[str, list[tuple[str, bytes]]] = {}  # library -> its members (read_archive)
        self.import_symbols: dict[str, tuple[str, str]] = {}  # `__imp_X` and thunk X -> (DLL, import name)
        self.absolutes: dict[str, int] = {}  # a library's absolute symbol -> its value
        self.library_symbols: dict[str, int] = {}  # a symbol a placed library section defines -> its address
        self._library_sections: list[tuple[_Obj, Section, int, str]] = []  # (member, section, address, owner)
        self._take_library_rows(self._read_libraries())
        for t in self.thunks:  # a contribution from the start: the room check counts it before it is written
            self._first_at.setdefault(t.addr, _thunk_owner(t))

    def _problem(self, text: str) -> None:
        if text not in self._said:
            self._said.add(text)
            self.problems.append(text)

    # --- libraries ---------------------------------------------------------------------------------------------
    def _library_files(self) -> list[tuple[str, Path]]:
        """(name, path) of each library the link reads, in its order: the build's import libraries, then [link] libs
        from lib_dirs (a problem for each one missing)."""
        out = []
        for dll in self.values.get("imports", {}).get("dlls", []):
            path = self.build_dir / "lib" / f"{Path(dll).stem}.lib"
            if path.is_file():
                out.append((path.name, path))
            else:
                self._problem(f"{path} not found: run ninja")
        for name in self.values.get("link", {}).get("libs", []):
            path = next((d / name for d in self.lib_dirs if (d / name).is_file()), None)
            if path is None:
                folders = ", ".join(str(d) for d in self.lib_dirs) or "none given"
                self._problem(f"{name} is not in the library folders ({folders}): its sections and imports have no "
                              f"address")
            else:
                out.append((name, path))
        return out

    def _read_libraries(self) -> dict[tuple[str, int], Coff]:
        """Read the libraries' members (archives), import records (import_symbols) and absolute symbols; the objects
        among the members, by (library, member index). Two names are two libraries unless they are one file (the
        build's KERNEL32.lib and VC6's KERNEL32.LIB are two: the link reads both); a library's symbols are the first
        one's that defines them."""
        parsed: dict[tuple[str, int], Coff] = {}
        read: dict[str, str] = {}  # the file (os.path.normcase of its real path) -> the name it was read as
        for name, path in self._library_files():
            first = read.setdefault(os.path.normcase(os.path.realpath(path)), name)
            if first != name:  # one file under a second name: the rows naming either take its members
                if first in self.archives:
                    self.archives.setdefault(name, self.archives[first])
                    parsed.update({(name, k): coff for (lib, k), coff in list(parsed.items()) if lib == first})
                continue
            if name in self.archives:
                continue  # named twice: the link reads it once
            data = path.read_bytes()
            try:
                members = read_archive(data)
            except ValueError as exc:
                self._problem(f"{path}: {exc}")
                continue
            self.archives[name] = members
            for symbol, imported in import_symbols(data).items():
                self.import_symbols.setdefault(symbol, imported)
            for k, (_, member) in enumerate(members):
                if member[:4] == IMPORT_RECORD:
                    continue
                try:
                    coff = parsed[(name, k)] = Coff.parse(member)
                except (CoffError, struct.error, IndexError, UnicodeDecodeError):
                    continue  # not an i386 object (an empty member of LIBC.LIB): nothing the link takes
                for s in coff.symbols:
                    if s.section_number == ABSOLUTE and s.storage_class == SYM_CLASS_EXTERNAL:
                        self.absolutes.setdefault(s.name, s.value)
        return parsed

    def _take_library_rows(self, parsed: dict[tuple[str, int], Coff]) -> None:
        """Each library section config/layout/libraries.txt places, checked against the library: the section's
        address is its member's base for that section, the symbols it defines are library_symbols, and it is a
        contribution from the start (the room check counts it before it is written)."""
        members: dict[tuple[str, int], _Obj] = {}
        placed = []
        unread: dict[str, int] = {}  # a library the rows name that was not read -> how many rows name it
        for row in self.library_rows:
            where = f"config/layout/libraries.txt 0x{row.addr:08x}"
            if row.library not in self.archives:
                unread[row.library] = unread.get(row.library, 0) + 1
                continue
            names = self.archives[row.library]
            if not 0 <= row.member_index < len(names) or names[row.member_index][0] != row.member:
                self._problem(f"{where}: {row.library} member {row.member_index} is not {row.member} (the library "
                              f"changed: run pcdecomp standalone)")
                continue
            key = (row.library, row.member_index)
            if key not in parsed:
                self._problem(f"{where}: {row.library} member {row.member} is not an i386 object")
                continue
            obj = members.get(key)
            if obj is None:
                obj = members[key] = _Obj(f"{row.library}:{row.member}", parsed[key], member=True)
            section = obj.sections.get(row.section)
            if section is None:
                self._problem(f"{where}: {obj.name} has no section #{row.section}")
                continue
            obj.bases[row.section] = row.addr
            placed.append(row)
            if section.characteristics & UNINITIALIZED:
                continue  # bss: virtual space at its address, which the relocations into it need; no bytes
            owner = f"{obj.name}:{section.name}#{row.section}"
            self._library_sections.append((obj, section, row.addr, owner))
            self._first_at.setdefault(row.addr, owner)
        libs = self.values.get("link", {}).get("libs", [])
        for library, count in unread.items():  # in [link] libs: why it was not read is a problem of its own
            why = "" if library in libs else ": it is not in build.toml's [link] libs"
            self._problem(f"config/layout/libraries.txt places {count} section{'s' if count > 1 else ''} of {library}, "
                          f"which the layout did not read{why}")
        self.library_symbols = symbol_addresses(self.archives, placed)

    # --- addresses ---------------------------------------------------------------------------------------------
    def address_of(self, name: str) -> int | None:
        """The address of a name: config/addresses.txt (and aliases.txt); else a symbol a placed library section
        defines (config/layout/libraries.txt); else an import library's: `__imp_X` its IAT slot (the DLL's IAT + 4 *
        the import's index, config/layout/imports.txt), X its thunk (thunks.txt)."""
        found = self.names.lookup(name)
        if found is None:
            found = self.library_symbols.get(name)
        if found is None and name in self.import_symbols:
            found = (self._slots if name.startswith("__imp_") else self._thunk_at).get(self.import_symbols[name])
        return found

    def reference(self, name: str) -> int:
        """The word a DIR32 to `name` gets: its address, through its stub when the stub table has one for it."""
        addr = self.address_of(name)
        if addr is None:
            raise LayoutError([f"{name} has no address (config/addresses.txt)"])
        problems: list[str] = []
        out = self._through_stub(addr, name, problems)
        if problems:
            raise LayoutError(problems)
        return out

    def _follow(self, addr: int) -> int:
        """Where an address leads through the stub table (config/layout/stubs.txt): config holds some functions at
        their stub (vtmb's `$AV` static destroys), and their code is the stub's function's."""
        for _ in range(4):
            if addr not in self._stub_target:
                break
            addr = self._stub_target[addr]
        return addr

    def _through_stub(self, addr: int, name: str, problems: list[str]) -> int:
        stubs = self._stubs_of.get(addr)
        if not stubs:
            return addr
        if len(stubs) == 1:
            return stubs[0].addr
        canonical = self.aliases.get(name)
        for s in stubs:
            if name in s.names or (canonical is not None and canonical in s.names):
                return s.addr
        problems.append(f"{name} names 0x{addr:08x}, which has the stubs {', '.join(f'0x{s.addr:08x}' for s in stubs)}"
                        f": none lists {name} (config/layout/stubs.txt)")
        return addr

    def _symbol_address(self, obj: _Obj, sym: Symbol) -> int | None:
        found = self.names.resolve(obj, sym)
        if found is None and sym.storage_class != SYM_CLASS_STATIC:
            found = self.address_of(sym.name)
        if found is None and sym.storage_class == SYM_CLASS_WEAK_EXTERNAL and len(sym.aux) >= 4:
            default = obj.symbols.get(struct.unpack_from("<I", sym.aux)[0])  # a library's `??_E` -> its `??_G`,
            found = self.address_of(default.name) if default is not None else None  # which config may not name
        return found

    def _no_address(self, obj: _Obj, sym: Symbol) -> None:
        key = scoped_key(obj.name, sym) if sym.storage_class == SYM_CLASS_STATIC else sym.name
        users = self._missing.setdefault(key, [])
        if obj.name not in users:
            users.append(obj.name)

    # --- objects -----------------------------------------------------------------------------------------------
    def load(self, name: str) -> _Obj | None:
        """The object the link reads (the fixed-up copy for an object config/ fixes up), parsed; None when it is
        missing or unreadable (a problem)."""
        path = self.build_dir / ("link" if name in self.fixed else "obj") / f"{name}.obj"
        try:
            return _Obj(name, Coff.parse(path.read_bytes()))
        except FileNotFoundError:
            self._problem(f"{path} not found: run ninja")
        except CoffError as exc:
            self._problem(f"{path}: {exc}")
        return None

    def _write(self, obj: _Obj, section: Section, lo: int, hi: int, addr: int, owner: str,
               slots: dict[int, str] | None = None) -> None:
        """Write section bytes [lo, hi) at `addr` with their relocations applied; `slots`: offset -> the name whose
        reference that word holds instead (config/vtable_patches.txt)."""
        data = bytearray(section.data[lo:hi])
        relocated = []
        for r in obj.relocations(section, lo, hi):
            k = r.offset - lo
            if r.offset + 4 > hi:
                self._problem(f"{owner}: a relocated word at +0x{k:x} runs past its 0x{hi - lo:x} bytes")
                continue
            if r.type not in (DIR32, DIR32NB, REL32):
                self._problem(f"{owner}+0x{k:x}: relocation type 0x{r.type:x}")
                continue
            if slots is not None and r.offset in slots:
                try:
                    target, absolute = self.reference(slots[r.offset]), False
                except LayoutError as exc:
                    for p in exc.problems:
                        self._problem(f"{owner} (config/vtable_patches.txt): {p}")
                    continue
            else:
                found = self._target(obj, section, r)
                if found is None:
                    continue
                target, absolute = found
            site = addr + k
            if r.type == DIR32:
                word = target
                if not absolute:
                    relocated.append(k)
            elif r.type == DIR32NB:
                word = target - self.image_base
            else:
                word = target - (site + 4)
            struct.pack_into("<I", data, k, word & MASK)
        self._first_at.setdefault(addr, owner)
        self.image.write(addr, bytes(data), owner, relocated)

    def _target(self, obj: _Obj, section: Section, r) -> tuple[int, bool] | None:
        """(the address a relocation's word holds, addend included; whether it is absolute), or None (a problem)."""
        sym = obj.symbols.get(r.symbol_index)
        if sym is None:
            self._problem(f"{obj.name}: a relocation names symbol {r.symbol_index}, which the object does not have")
            return None
        addend = struct.unpack_from("<i" if r.type == REL32 else "<I", section.data, r.offset)[0]
        if sym.is_defined and sym.section_number == section.number and section.number in obj.bases:
            return (obj.bases[section.number] + sym.value + addend) & MASK, False  # never a stub
        if sym.section_number == ABSOLUTE:
            return (sym.value + addend) & MASK, True
        if sym.is_defined and sym.section_number in obj.bases:
            addr = obj.bases[sym.section_number] + sym.value
        else:
            addr = self._symbol_address(obj, sym)
            if addr is None:
                if not sym.is_defined and sym.name in self.absolutes:  # a library's absolute symbol (`__except_list`)
                    return (self.absolutes[sym.name] + addend) & MASK, True
                # a library member's own section libraries.txt does not place (an external there, a COMDAT copy the
                # link dropped for another member's, was found by its name above)
                if obj.member and sym.is_defined:
                    self._problem(f"{obj.name}: a relocation names {sym.name}, in its section #{sym.section_number} "
                                  f"({obj.sections[sym.section_number].name}), which config/layout/libraries.txt "
                                  f"does not place")
                else:
                    self._no_address(obj, sym)
                return None
        if addend == 0:
            problems: list[str] = []
            addr = self._through_stub(addr, sym.name, problems)
            for p in problems:
                self._problem(p)
        return (addr + addend) & MASK, False

    # --- code --------------------------------------------------------------------------------------------------
    def _take(self, obj: _Obj, sym: Symbol, addr: int, plan: list[tuple[Section, Symbol]]) -> bool:
        """Plan `sym`'s whole section at the address that puts `sym` at `addr` (once per section)."""
        if sym.section_number in obj.bases:
            return False
        section = obj.sections.get(sym.section_number)
        if section is None or not section.characteristics & CODE:
            self._problem(f"{obj.name}: {sym.name} is not code of {obj.name}.obj")
            return False
        obj.bases[sym.section_number] = (addr - sym.value) & MASK
        plan.append((section, sym))
        return True

    def _reach(self, obj: _Obj, plan: list[tuple[Section, Symbol]], start: int = 0) -> None:
        """Plan every function of the object the planned code reaches that has an address no block has."""
        k = start
        while k < len(plan):
            section, _ = plan[k]
            k += 1
            for r in section.relocations:
                target = obj.symbols.get(r.symbol_index)
                if target is None or not target.is_defined or target.section_number in obj.bases:
                    continue  # its own section included: a label, the function itself
                home = obj.sections.get(target.section_number)
                if home is None or not home.characteristics & CODE:
                    continue
                addr = self._symbol_address(obj, target)
                if addr is not None and self._follow(addr) not in self.block_addresses:
                    self._take(obj, target, self._follow(addr), plan)

    def _roots(self, block: Block, obj: _Obj) -> list[tuple[Symbol, int]]:
        if block.kind == "b":
            sym = obj.defined(block.target)
            if sym is None:
                self._problem(f"{obj.name}: {block.target} is not in {obj.name}.obj")
                return []
            return [(sym, block.addr)]
        entries = obj.xcu_entries()
        if not entries:
            self._problem(f"{obj.name}: {obj.name}.obj puts nothing in the initializer table")
            return []
        first = self.names.resolve(obj, entries[0])
        if first is not None and first != block.addr:
            self._problem(f"{obj.name}: its first initializer {entries[0].name} is at 0x{first:08x} in "
                          f"config/addresses.txt, its block at 0x{block.addr:08x}")
        roots = [(entries[0], block.addr)]
        for e in entries[1:]:
            addr = self._symbol_address(obj, e)
            if addr is None:
                self._no_address(obj, e)
            else:
                roots.append((e, addr))
        return roots

    def _slot(self, obj: _Obj, r, plan: list[tuple[Section, Symbol]]) -> None:
        """Plan the code a vtable slot runs that is the object's own at an address no block covers (an adjustor
        thunk, a vtordisp thunk, the `??_G` a weak `??_E` slot stands for), once per address."""
        target = obj.symbols.get(r.symbol_index)
        if target is None:
            return
        if target.storage_class == SYM_CLASS_WEAK_EXTERNAL and not target.is_defined and len(target.aux) >= 4:
            default = obj.symbols.get(struct.unpack_from("<I", target.aux)[0])
            target = (obj.defined(default.name) if default is not None else None) or target
        home = obj.sections.get(target.section_number) if target.is_defined else None
        if home is None or not home.characteristics & CODE:
            return
        addr = self._symbol_address(obj, target)
        addr = None if addr is None else self._follow(addr)
        if addr is None or addr in self._slot_code or addr in self.block_addresses:
            return
        self._slot_code.add(addr)
        start = len(plan)
        if self._take(obj, target, addr, plan):
            self._reach(obj, plan, start)

    # --- data --------------------------------------------------------------------------------------------------
    def _data(self, obj: _Obj) -> list[tuple[Section, int, int, int, str]]:
        """(section, lo, hi, address, owner) of each initialized data symbol of a block's object that has an
        address (vtables apart), as verify's check_block_data compares them."""
        out, seen = [], set()
        for section in obj.coff.sections:
            if section.characteristics & (CODE | NOT_LOADED | UNINITIALIZED) or not section.data \
                    or section.name.startswith(NOT_DATA):
                continue
            for sym in obj.by_section.get(section.number, []):
                addr = None if sym.name.startswith("??_7") else self.names.resolve(obj, sym)
                if addr is None or addr in seen:
                    continue
                seen.add(addr)
                follows = obj.follows(sym)
                end = len(section.data) if follows is None else follows
                last = max((r.offset - sym.value + 4 for r in obj.relocations(section, sym.value, end)), default=0)
                size = padding_after(section.data[sym.value:end], follows, last)
                out.append((section, sym.value, sym.value + size, addr, f"{obj.name}:{sym.name}"))
        return out

    def _vtables_of(self, obj: _Obj, plan: list[tuple[Section, Symbol]]) -> list[tuple[Symbol, int]]:
        """(symbol, address) of each vtable the object is the first to emit, and the code its slots run planned."""
        out = []
        for sym in obj.coff.symbols:
            if not (sym.is_defined and sym.name.startswith("??_7")) or sym.name in self._vtables:
                continue
            self._vtables.add(sym.name)
            addr = self.address_of(sym.name)
            if addr is None:
                self._problem(f"{obj.name}: the vtable {sym.name} has no address (config/addresses.txt)")
                continue
            out.append((sym, addr))
            section = obj.sections[sym.section_number]
            follows = obj.follows(sym)
            for r in obj.relocations(section, sym.value, len(section.data) if follows is None else follows):
                self._slot(obj, r, plan)
        return out

    def _write_vtable(self, obj: _Obj, sym: Symbol, addr: int) -> None:
        section = obj.sections[sym.section_number]
        follows = obj.follows(sym)
        end = len(section.data) if follows is None else follows
        lo = sym.value
        if sym.value >= 4 and obj.relocations(section, sym.value - 4, sym.value - 3):
            lo = sym.value - 4  # the RTTI locator word (/GR)
        slots = {sym.value + 4 * slot: name for slot, name in self.patches.get(sym.name, {}).items()}
        words = {r.offset for r in obj.relocations(section, sym.value, end)}
        for offset in sorted(set(slots) - words):
            self._problem(f"{obj.name}: {sym.name} slot {(offset - sym.value) // 4} (config/vtable_patches.txt) is not "
                          f"a relocated word of its vtable")
        self._write(obj, section, lo, end, addr - (sym.value - lo), f"{obj.name}:{sym.name}", slots)

    # --- placement ---------------------------------------------------------------------------------------------
    def _place_block(self, block: Block) -> None:
        obj = self.load(block.obj)
        if obj is None:
            return
        plan: list[tuple[Section, Symbol]] = []
        roots = self._roots(block, obj)
        if not roots or not self._take(obj, *roots[0], plan):
            return
        for sym, addr in roots[1:]:
            self._take(obj, sym, addr, plan)
        self._reach(obj, plan)
        vtables = self._vtables_of(obj, plan)
        data = self._data(obj)
        for k, (section, sym) in enumerate(plan):
            base, owner = obj.bases[section.number], f"{obj.name}:{sym.name}"
            end = len(section.data)
            if k == 0:  # the block's root section: it must fit its room; its fill waits for the libraries (_write_fill)
                fill = fill_from(section, sym, block.size)
                if (block.addr, block.target) in self.unpadded:  # no fill: the link's code fill stays after it
                    if fill is None:
                        self._problem(f"config/layout/unpadded.txt: {block.addr:08x} {block.target or '-'}: "
                                      f"{obj.name}'s root section has no alignment fill past the block's recorded size "
                                      f"(0x{block.size:x}): run pcdecomp standalone")
                    else:
                        end = fill
                    self._root_spans.append((base, base + end, obj.name, owner, None))
                else:
                    self._root_spans.append((base, base + end, obj.name, owner,
                                             None if fill is None else (base + fill, section.data[fill:])))
                    end = end if fill is None else fill
            self._write(obj, section, 0, end, base, owner)
        for section, lo, hi, addr, owner in data:
            self._write(obj, section, lo, hi, addr, owner)
        for sym, addr in vtables:
            self._write_vtable(obj, sym, addr)
        if block.kind == "i":
            self._place_xcu(obj)

    def _place_xcu(self, obj: _Obj) -> None:
        for section in sorted(obj.coff.sections, key=lambda s: s.number):
            if not section.name.startswith(XCU) or not section.data:
                continue
            key = f"{obj.name}/#{section.number}"
            addr = self.addresses.get(key)
            if addr is None:
                self._problem(f"{obj.name}: its {section.name} section #{section.number} has no address ({key} in "
                              f"config/addresses.txt)")
                continue
            obj.bases[section.number] = addr
            self._write(obj, section, 0, len(section.data), addr, f"{obj.name}:{section.name}#{section.number}")

    def _place_data(self) -> None:
        folder = self.root / "src" / "_data"
        for template in sorted(folder.glob("*.asm.in")) if folder.is_dir() else []:
            stem = template.name[: -len(".asm.in")]
            obj = self.load(stem)
            if obj is None:
                continue
            for addr, extent, prefix, label in data_items(template.read_text(encoding="latin-1")):
                sym = obj.defined(label)
                if sym is None:
                    self._problem(f"{stem}: {label} is not in {stem}.obj")
                    continue
                section = obj.sections[sym.section_number]
                lo, hi = sym.value - prefix, sym.value + extent
                if lo < 0 or hi > len(section.data):
                    self._problem(f"{stem}: {label}: the object holds {len(section.data[max(lo, 0):hi])} of its "
                                  f"{hi - lo} bytes")
                    continue
                self._write(obj, section, lo, hi, addr - prefix, f"{stem}:{label}")

    def _rooms(self) -> tuple[list[str], list[tuple[int, int, str]]]:
        """A problem for each block's root section that runs past the next contribution's start (or its section's
        end; a library section or thunk of config/layout counts before it is written), and the (start, end, owner)
        of what runs past.
        The one exception: a root section whose every byte past the block's recorded size (config/blocks.txt) is
        alignment fill (0x90 or 0xCC), with no relocation among them, was written up to that size only (_place_block),
        and its fill is the weakest owner (_write_fill, after the libraries and thunks). That is no room problem, even
        where the recorded size itself runs past the room (vtmb's LIBC functions matched as blocks, at unaligned
        addresses in LIBC's packed code: one ends in the `ret` the next LIBC section starts with, one lies inside a
        LIBC section that starts before it): the Image judges those bytes when the other contribution is written there,
        equal bytes fine (the first owner keeps them), differing ones a conflict naming both owners. A section with no
        recorded size, or with anything but fill past it, keeps the room rule; so does an unpadded block's
        (config/layout/unpadded.txt), up to its recorded size: it has no fill."""
        starts = sorted(self._first_at)
        problems, overruns = [], []
        for start, end, name, owner, fill in self._root_spans:
            limit = self.image.section_end(start)
            if fill is not None or limit is None:
                continue  # fill yields to everything; outside the sections: Image reported it
            section = self.image.section_at(start)
            nxt = f"the end of {section.name}"
            k = bisect.bisect_right(starts, start)
            if k < len(starts) and starts[k] < limit:
                limit, nxt = starts[k], self._first_at[starts[k]]
            if end > limit:
                problems.append(f"{name}: {end - start} bytes, room {limit - start} before {nxt}: use the normal build")
                overruns.append((limit, end, owner))
        return problems, overruns

    def _write_fill(self) -> None:
        """Each block's alignment fill past its recorded size (_fill_from), as its object holds it: the weakest owner,
        written byte by byte where no other contribution wrote (Image.fill), after every block, data item, library
        section and thunk. A partly free fill is written where it is free (up to a library section that starts inside
        it, or around one that covers its first bytes), never past its section's end."""
        for _, _, _, owner, fill in self._root_spans:
            if fill is not None:
                self.image.fill(*fill, owner)

    def _finish(self, rooms: Sequence[str] = ()) -> None:
        """A stage's end: LayoutError with every problem not reported yet (the targets without an address, the
        problems, the writes outside the sections, `rooms`, the conflicts)."""
        problems = [f"{key} has no address (config/addresses.txt): named by {users[0]}"
                    + (f" and {len(users) - 1} other object{'s' if len(users) > 2 else ''}" if len(users) > 1 else "")
                    for key, users in self._missing.items()]
        self._missing = {}
        said, outside, conflicts = self._told
        problems += self.problems[said:] + self.image.problems[outside:] + list(rooms)
        problems += [str(c) for c in self.image.conflicts[conflicts:]  # what a block that outgrew its room runs over:
                     if not any(lo <= c.va < hi and owner in (c.owner, c.other)  # its room problem says it
                                for lo, hi, owner in self._overruns)]
        self._told = (len(self.problems), len(self.image.problems), len(self.image.conflicts))
        if problems:
            raise LayoutError(problems)

    def place_objects(self) -> None:
        """Place every block's object, then the data objects; LayoutError lists every problem not reported yet (the
        libraries' among them, and the entries of config/layout/unpadded.txt that are no block's)."""
        blocks = {(b.addr, b.target) for b in self.blocks}
        for addr, target in sorted(self.unpadded - blocks, key=lambda u: u[0]):
            self._problem(f"config/layout/unpadded.txt: {addr:08x} {target or '-'} is no block of config/blocks.txt: "
                          f"run pcdecomp standalone")
        for block in self.blocks:
            self._place_block(block)
        self._place_data()
        rooms, self._overruns = self._rooms()
        self._finish(rooms)

    def place_libraries(self) -> None:
        """Place every library section config/layout/libraries.txt names, with its relocations, and every import
        thunk of thunks.txt (`jmp [slot]`, the slot base-relocated), then the blocks' alignment fill where it is free
        (_write_fill); LayoutError lists every problem not reported yet. Run after place_objects(): what a block that
        outgrew its room runs over is that block's room problem."""
        for obj, section, addr, owner in self._library_sections:
            self._write(obj, section, 0, len(section.data), addr, owner)
        for t in self.thunks:
            owner = _thunk_owner(t)
            slot = self._slots.get((t.dll, t.name))
            if slot is None:
                self._problem(f"{owner} (config/layout/thunks.txt 0x{t.addr:08x}): {t.dll} {t.name} is not an "
                              f"import of config/layout/imports.txt")
                continue
            self._first_at.setdefault(t.addr, owner)
            self.image.write(t.addr, JMP_INDIRECT + struct.pack("<I", slot), owner, (len(JMP_INDIRECT),))
        self._write_fill()
        self._finish()

    def generate(self) -> None:
        """Write the generated parts, after place_libraries(): the stub table, the import directory, the export
        directory, the debug directory and, last, the base relocations; LayoutError lists every problem
        not reported yet."""
        self._write_stubs()
        self._write_imports()
        self._write_exports()
        self._write_debug()
        self._write_relocations()  # last: it needs every relocated word
        self._finish()

    def _write_relocations(self) -> None:
        """The base relocation table at the `.reloc` section's start (peparts.base_relocations over every relocated
        word), owner `base relocations`; the zeros after it up to the section's size are the fill. A table longer than
        the section is a problem. Data directory 5."""
        section = next((s for s in self.sections if s.name == RELOC_SECTION), None)
        if section is None:
            if self.image.relocated:
                self._problem(f"{len(self.image.relocated)} words are base-relocated and the image has no "
                              f"{RELOC_SECTION} section (config/layout/sections.txt)")
            return
        table = peparts.base_relocations(self.image.relocated, self.image_base)
        room = section.vsize or section.raw_size
        if len(table) > room:
            self._problem(f"{RELOCATIONS_OWNER}: 0x{len(table):x} bytes, {RELOC_SECTION} has room for 0x{room:x} "
                          f"(config/layout/sections.txt)")
            return
        self.image.write(section.addr, table, RELOCATIONS_OWNER)
        self.directories[5] = (section.addr - self.image_base, len(table))

    def _write_stubs(self) -> None:
        """Every incremental-link stub of config/layout/stubs.txt: `jmp target`, owner `stubs` (the fill between
        them and before the first function is the code fill, 0xCC)."""
        for s in self.stubs:
            self.image.write(s.addr, peparts.stub(s.addr, s.target), STUBS_OWNER)

    def _write_imports(self) -> None:
        """The import directory at config/layout/imports.txt's addresses (peparts.idata; the zero slack after each
        table is the fill). A part that runs into the next one is a problem, and what it runs over is not reported
        apart. An import library's section of equal bytes there (a DLL name) keeps the first ownership."""
        parts = peparts.idata(self.imports, self.image_base)
        if parts:
            self.directories[1] = (self.imports.descriptors - self.image_base,
                                   peparts.DESCRIPTOR * (len(self.imports.dlls) + 1))
            self.directories[12] = (self.imports.iat[0] - self.image_base, self.imports.iat[1])
        ordered = sorted(parts, key=lambda p: p[0])
        for (va, data, owner), (nxt, _, other) in zip(ordered, ordered[1:]):
            if va + len(data) > nxt:
                self._problem(f"{owner}: 0x{va:08x}+0x{len(data):x} runs into {other} at 0x{nxt:08x} "
                              f"(config/layout/imports.txt)")
                self._overruns.append((nxt, va + len(data), owner))
        for va, data, owner in parts:
            self.image.write(va, data, owner)

    def _write_exports(self) -> None:
        """The export directory at [identical] export_directory (peparts.export_directory), owner `exports`: each
        export's word is the reference to its symbol (a code export's stub); a symbol without an address is a
        problem."""
        addr = self.header.get("export_directory", 0)
        if not addr:
            if self.exports:
                self._problem(f"config/layout/exports.txt lists {len(self.exports)} exports, and [identical] "
                              f"export_directory is 0")
            return

        def word(symbol: str) -> int:
            try:
                return self.reference(symbol)
            except LayoutError as exc:
                for p in exc.problems:
                    self._problem(f"config/layout/exports.txt: {p}")
                return self.image_base
        data = peparts.export_directory(self.exports, addr, self.header.get("export_timestamp", 0),
                                        self.header.get("export_name", ""), word, self.image_base)
        self.image.write(addr, data, EXPORTS_OWNER)
        end = self.image.section_end(addr)  # the directory runs to its section's virtual end
        self.directories[0] = (addr - self.image_base, (end if end is not None else addr + len(data)) - addr)

    def nb10(self) -> bytes:
        """The CodeView NB10 record the file ends with ([identical] pdb_signature, pdb_age, pdb); b"" for an image
        without a debug directory."""
        if not self.header.get("debug_directory"):
            return b""
        return peparts.nb10(self.header.get("pdb_signature", 0), self.header.get("pdb_age", 0),
                            self.header.get("pdb", ""))

    def _file_offsets(self) -> tuple[int, list[int], int]:
        """(SizeOfHeaders, each section's PointerToRawData, the end of the raw data): peparts.file_offsets."""
        return peparts.file_offsets(self.sections, self.header.get("pe_header", 0), self.header.get("file_align", 0))

    def _write_debug(self) -> None:
        """The debug directory at [identical] debug_directory, owner `debug`: one CodeView entry for the NB10 record,
        which lies right after the last section's raw data (_file_offsets)."""
        addr = self.header.get("debug_directory", 0)
        if not addr:
            return
        end = self._file_offsets()[2]
        self.image.write(addr, peparts.debug_directory(self.header.get("debug_timestamp", 0), len(self.nb10()), end),
                         DEBUG_OWNER)
        self.directories[6] = (addr - self.image_base, len(peparts.debug_directory(0, 0, 0)))

    # --- the file ----------------------------------------------------------------------------------------------
    def file_bytes(self) -> bytes:
        """The DLL's file, after generate(): the headers (the DOS header and stub, the Rich header of [identical] rich,
        zeros to e_lfanew, peparts.pe_headers with the entry point's reference and the directories generate()
        recorded, zeros to SizeOfHeaders), each section's raw data at its PointerToRawData (the image's bytes, zeros
        past the virtual size), the NB10 record last. LayoutError: an [identical] value missing (at once); else every
        problem together after the sections: headers that run past e_lfanew, an entry point without an address, bytes
        written in a section's virtual space past its raw data (the file cannot hold them)."""
        missing = [k for k in peparts.HEADER_VALUES if k not in self.header]
        if missing:
            raise LayoutError([f"{self.config / 'build.toml'} [identical] has no {', '.join(missing)}: run pcdecomp "
                               f"standalone"])
        problems: list[str] = []
        e_lfanew = self.header["pe_header"]
        dos = peparts.dos_header(e_lfanew) + peparts.DOS_STUB
        rich = peparts.rich_header([tuple(e) for e in self.header.get("rich", [])], dos)
        if len(dos) + len(rich) > e_lfanew:
            problems.append(f"the DOS header, its stub and the Rich header take 0x{len(dos) + len(rich):x} bytes, "
                            f"[identical] pe_header is 0x{e_lfanew:x}")
        entry, entry_rva = self.header.get("entry", ""), 0
        if entry:  # as any reference to the function: through its stub
            try:
                entry_rva = self.reference(entry) - self.image_base
            except LayoutError as exc:
                problems += [f"[identical] entry: {p}" for p in exc.problems]
        headers, pointers, _ = self._file_offsets()
        directories = [self.directories.get(k, (0, 0)) for k in range(peparts.DIRECTORIES)]
        out = bytearray((dos + rich)[:e_lfanew].ljust(e_lfanew, b"\0"))  # cut only when it is a problem already
        out += peparts.pe_headers(self.header, self.sections, directories, entry_rva, self.image_base)
        out += bytes(headers - len(out))
        for s, pointer in zip(self.sections, pointers):
            size = s.vsize or s.raw_size
            n = min(size, s.raw_size)
            if s.raw_size:
                out += bytes(pointer - len(out)) + self.image.read(s.addr, n) + bytes(s.raw_size - n)
            past = self.image.read(s.addr + n, size - n) if size > n else b""  # virtual space only (bss)
            rest = past.lstrip(bytes([CODE_FILL if s.characteristics & CODE else 0]))
            if rest:
                va = s.addr + n + len(past) - len(rest)
                problems.append(f"{s.name}: 0x{va:08x} ({self.image.owner_at(va)}) is past the section's 0x"
                                f"{s.raw_size:x} bytes of raw data: the file cannot hold it")
        if problems:
            raise LayoutError(problems)
        return bytes(out + self.nb10())


def _parts(data: bytes) -> list[tuple[str, int, int, int | None]]:
    """(name, file offset, size, virtual address or None) of each part of a PE file: the headers, each section's raw
    data, and what follows the last section's raw data (the debug record)."""
    opt = struct.unpack_from("<I", data, 0x3C)[0] + 24
    count, optional = struct.unpack_from("<H", data, opt - 18)[0], struct.unpack_from("<H", data, opt - 4)[0]
    image_base, headers = struct.unpack_from("<I", data, opt + 28)[0], struct.unpack_from("<I", data, opt + 60)[0]
    parts: list[tuple[str, int, int, int | None]] = [("headers", 0, headers, image_base)]
    end = headers
    for k in range(count):
        at = opt + optional + 40 * k
        rva, raw_size, pointer = struct.unpack_from("<3I", data, at + 12)
        if raw_size:
            parts.append((data[at:at + 8].rstrip(b"\0").decode("latin1"), pointer, raw_size, image_base + rva))
            end = max(end, pointer + raw_size)
    if len(data) > end:
        parts.append(("debug record", end, len(data) - end, None))
    return parts


def _differing(ours: bytes, theirs: bytes, keep: int, chunk: int = 4096) -> tuple[int, list[tuple[int, int]]]:
    """(how many bytes of `theirs` `ours` holds at the same offset, the first `keep` (start, end) runs where it does
    not)."""
    equal, runs, start = 0, [], None

    def close(end: int) -> None:
        if len(runs) < keep:
            runs.append((start, end))
    for at in range(0, len(theirs), chunk):
        a, b = ours[at:at + chunk], theirs[at:at + chunk]
        if a == b:
            equal += len(b)
            if start is not None:
                close(at)
                start = None
            continue
        for i in range(len(b)):
            if i < len(a) and a[i] == b[i]:
                equal += 1
                if start is not None:
                    close(at + i)
                    start = None
            elif start is None:
                start = at + i
    if start is not None:
        close(len(theirs))
    return equal, runs


def _owned(lo: int, hi: int, owners: Sequence[Sequence], starts: list[int]) -> list[tuple[int, int, str]]:
    """[lo, hi) cut where its owner changes (owners: (start, end, owner) in address order; `fill` where none)."""
    out = []
    while lo < hi:
        k = bisect.bisect_right(starts, lo) - 1
        if k >= 0 and lo < owners[k][1]:
            end, owner = min(hi, owners[k][1]), owners[k][2]
        else:
            end, owner = min(hi, starts[k + 1] if k + 1 < len(starts) else hi), "fill"
        out.append((lo, end, owner))
        lo = end
    return out


def compare(written: bytes, orig: bytes, owners: Sequence[Sequence], ranges: int = 10) -> list[str]:
    """The written file against the original, part by part of the original's file (_parts): [] when they are equal;
    else for each part `<name>: <equal> of <size> bytes equal` (equal at the same offset), then the first `ranges`
    ranges of it that differ, `0x<va>+<n>: <owner>` (the owner from `owners`, layout.json's (start, end, owner) in
    address order; a part's own name for the headers, `file 0x<offset>` for the debug record)."""
    if written == orig:
        return []
    lines = [] if len(written) == len(orig) else [f"size: {len(written):,} bytes, the original's {len(orig):,}"]
    starts = [o[0] for o in owners]
    for name, offset, size, va in _parts(orig):
        equal, runs = _differing(written[offset:offset + size], orig[offset:offset + size], ranges)
        lines.append(f"{name}: {equal:,} of {size:,} bytes equal")
        shown = []
        for lo, hi in runs:
            if va is None:
                shown.append(f"  file 0x{offset + lo:x}+{hi - lo}: {name}")
            elif name == "headers":
                shown.append(f"  0x{va + lo:08x}+{hi - lo}: {name}")
            else:
                shown += [f"  0x{a:08x}+{b - a}: {owner}" for a, b, owner in _owned(va + lo, va + hi, owners, starts)]
        lines += shown[:ranges]
    return lines


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(prog="tools.layout", description=__doc__.splitlines()[0])
    p.add_argument("--root", type=Path, default=Path.cwd(), help=argparse.SUPPRESS)
    p.add_argument("--orig", type=Path, help="the original DLL, read when the written file differs (default: "
                                             "orig/<target name>)")
    p.add_argument("--vc6", type=Path, help="the folder holding VC98: [link] libs are read from its VC98/LIB")
    p.add_argument("--lib", type=Path, action="append", default=[], help="another folder to read libraries from "
                                                                         "(searched first)")
    p.add_argument("--build", default="build")
    p.add_argument("--config", type=Path, help="the config folder (default: config)")
    args = p.parse_args(argv)
    root = args.root.resolve()
    lib_dirs = [*args.lib, *([args.vc6 / "VC98" / "LIB"] if args.vc6 is not None else [])]
    stage = "config"
    try:
        out = Layout(root, args.build, args.config, lib_dirs)
        stage = "objects"
        out.place_objects()
        stage = "libraries"
        out.place_libraries()
        stage = "generated parts"
        out.generate()
        stage = "file"
        data = out.file_bytes()
    except LayoutError as exc:
        n = len(exc.problems)
        print(f"layout: {stage}: {n} problem{'s' if n != 1 else ''}")
        for problem in exc.problems:
            print(f"  {problem}")
        return 2
    target = out.values["target"]
    folder = out.build_dir / "identical"
    folder.mkdir(parents=True, exist_ok=True)
    path = folder / target["name"]
    path.write_bytes(data)
    owners = out.image.owners
    (folder / "layout.json").write_text("[\n" + ",\n".join(json.dumps(list(o)) for o in owners) + "\n]\n",
                                        encoding="utf-8")
    sha1 = hashlib.sha1(data).hexdigest()
    if sha1 == target["sha1"].lower():
        print(f"identical: SHA-1 {sha1}")
        return 0
    orig = args.orig if args.orig is not None else root / "orig" / target["name"]
    original = _original(Path(orig), target["sha1"], target["name"]).data  # refused unless it is the original
    print(f"{path}: SHA-1 {sha1}, the original's {target['sha1']}")
    for line in compare(data, original, owners):
        print(line)
    return 1


if __name__ == "__main__":
    raise SystemExit(main())
