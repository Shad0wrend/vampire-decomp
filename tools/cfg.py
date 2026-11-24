"""The build's config files (config/*.txt, config/build.toml): one reader and one writer per file.

`pcdecomp standalone` writes them with these functions and the repository's tools read them with the same ones, so
the format lives in one place. Lines are space-separated fields; `#` starts a comment; blank lines are ignored.
Addresses are 8 lower-case hex digits, sizes and offsets 0x hex."""

from __future__ import annotations

import json
import re
import tomllib
from collections.abc import Iterable, Iterator
from dataclasses import dataclass
from pathlib import Path

__all__ = [
    "HEADER", "LAYOUT", "Block", "Export", "Fixup", "ImportDll", "ImportEntry", "Imports", "KnownDifference",
    "LayoutRecord", "LibrarySection", "SectionRecord", "Stub", "Thunk", "Unpadded", "VtPatch",
    "read_addresses", "read_aliases", "read_blocks", "read_build", "read_exports", "read_fixups", "read_imports",
    "read_known", "read_layout", "read_library_sections", "read_patches", "read_sections", "read_stubs",
    "read_thunks", "read_unpadded", "write_addresses", "write_aliases", "write_blocks", "write_build",
    "write_exports", "write_fixups", "write_imports", "write_known", "write_layout", "write_library_sections",
    "write_patches", "write_sections", "write_stubs", "write_thunks", "write_unpadded",
]

LAYOUT = "layout"  # the subfolder of config/ that holds the layout tables

KINDS = ("b", "i")  # function block, initializer
FIXUP_OPS = ("localize", "promote", "inner")
LAYOUT_OPS = ("rename", "gap")
DIFFERENCE_KINDS = ("function", "initializer", "data", "vtable", "slot", "xcu-extra", "xcu-order", "xcu-missing",
                    "export-missing", "export-extra", "export-ordinal", "export-target", "import-missing",
                    "import-extra")  # every kind verify reports


def HEADER(project: str, commit: str) -> str:  # noqa: N802 - reads like the constant it stands for
    return f"# written by pcdecomp standalone from {project} {commit}; do not edit by hand"


@dataclass(frozen=True)
class Block:
    addr: int
    size: int
    kind: str  # "b" or "i"
    target: str | None  # the mangled symbol the block defines at addr; None for an initializer
    digest: str | None = None  # sha1 (12 hex) of the block's unit when config/ was written (tools/blocks.unit_digest)

    @property
    def obj(self) -> str:
        return f"{self.kind}{self.addr:08x}"


@dataclass(frozen=True)
class Fixup:
    obj: str  # b<addr8> / i<addr8> / bss_<stem>
    op: str  # localize / promote / inner
    name: str
    section: int | None = None  # inner: the section the new symbol lies in
    value: int | None = None  # inner: its offset in that section
    section_name: str | None = None  # inner: that section's name (the fix-up stops if the object's differs)


@dataclass(frozen=True)
class LayoutRecord:
    op: str  # rename / gap
    obj: str | None = None  # rename: the object
    section: int | None = None  # rename: its section number
    name: str | None = None  # rename: the new section name
    addr: int | None = None  # gap: the game address the filler starts at
    size: int | None = None  # gap: its size
    current: str | None = None  # rename: the section's name before (the fix-up stops if the object's differs)


@dataclass(frozen=True)
class VtPatch:
    vtable: str
    slot: int
    expected: str  # the symbol the linked word must point at before the patch
    replacement: str  # the symbol it points at after


@dataclass(frozen=True)
class KnownDifference:
    kind: str  # slot / xcu-extra / export-missing / export-ordinal
    place: str
    reason: str


_ORDINAL_SAFE_COMMENT = re.compile(r"#(?!\d).*")  # '#23' is an import by ordinal, not a comment


def _lines(path: Path, ordinals: bool = False) -> Iterator[tuple[int, list[str]]]:
    with open(path, encoding="utf-8", newline=None) as f:
        for number, line in enumerate(f, 1):
            # mangled names never hold '#'; the import tables may name an ordinal '#<n>', addresses.txt a section's
            # own symbol `obj/#<n>`
            fields = (_ORDINAL_SAFE_COMMENT.sub("", line) if ordinals else line.split("#", 1)[0]).split()
            if fields:
                yield number, fields


def _bad(path: Path, number: int, why: str) -> ValueError:
    return ValueError(f"{Path(path).name}:{number}: {why}")


def _fields(path: Path, minimum: int, maximum: int | None = None,
            ordinals: bool = False) -> Iterator[tuple[int, list[str]]]:
    for number, fields in _lines(path, ordinals):
        if len(fields) < minimum or (maximum is not None and len(fields) > maximum):
            want = str(minimum) if maximum == minimum else f"{minimum}..{maximum or 'n'}"
            raise _bad(path, number, f"{len(fields)} fields, expected {want}")
        yield number, fields


def _int(path: Path, number: int, text: str, base: int) -> int:
    try:
        return int(text, base)
    except ValueError:
        raise _bad(path, number, f"not a number: {text!r}") from None


def _write(path: Path, header: str, lines: Iterable[str]) -> None:
    Path(path).parent.mkdir(parents=True, exist_ok=True)
    with open(path, "w", encoding="utf-8", newline="\n") as f:
        f.write(header + "\n")
        for line in lines:
            f.write(line + "\n")


def read_blocks(path: Path) -> list[Block]:
    out = []
    for number, (addr, size, kind, target, *digest) in _fields(path, 4, 5):
        if kind not in KINDS:
            raise _bad(path, number, f"kind {kind!r}, expected b or i")
        out.append(Block(_int(path, number, addr, 16), _int(path, number, size, 0), kind,
                         None if target == "-" else target, digest[0] if digest else None))
    return out


def write_blocks(path: Path, blocks: Iterable[Block], header: str) -> None:
    def line(b: Block) -> str:
        return f"{b.addr:08x} 0x{b.size:x} {b.kind} {b.target or '-'}" + (f" {b.digest}" if b.digest else "")
    _write(path, header, (line(b) for b in blocks))


def read_aliases(path: Path) -> dict[str, str]:
    return {alias: canonical for _, (alias, canonical) in _fields(path, 2, 2)}


def write_aliases(path: Path, aliases: dict[str, str], header: str) -> None:
    _write(path, header, (f"{a} {aliases[a]}" for a in sorted(aliases)))


def read_fixups(path: Path) -> list[Fixup]:
    out = []
    for number, fields in _fields(path, 3, 6):
        obj, op, name = fields[:3]
        if op not in FIXUP_OPS:
            raise _bad(path, number, f"operation {op!r}, expected one of {', '.join(FIXUP_OPS)}")
        if op == "inner":
            if len(fields) != 6:
                raise _bad(path, number, "inner takes NAME SECTION SECTION-NAME VALUE")
            out.append(Fixup(obj, op, name, _int(path, number, fields[3], 10), _int(path, number, fields[5], 0),
                             fields[4]))
        elif len(fields) != 3:
            raise _bad(path, number, f"{op} takes one NAME")
        else:
            out.append(Fixup(obj, op, name))
    return out


def write_fixups(path: Path, fixups: Iterable[Fixup], header: str) -> None:
    def line(f: Fixup) -> str:
        return f"{f.obj} {f.op} {f.name}" + (f" {f.section} {f.section_name} 0x{f.value:x}" if f.op == "inner"
                                             else "")
    _write(path, header, (line(f) for f in fixups))


def read_layout(path: Path) -> list[LayoutRecord]:
    out = []
    for number, fields in _fields(path, 3, 5):
        op = fields[0]
        if op == "rename" and len(fields) == 5:
            out.append(LayoutRecord(op, obj=fields[1], section=_int(path, number, fields[2], 10), name=fields[4],
                                    current=fields[3]))
        elif op == "gap" and len(fields) == 3:
            out.append(LayoutRecord(op, addr=_int(path, number, fields[1], 16), size=_int(path, number, fields[2], 0)))
        else:
            raise _bad(path, number, "expected `rename OBJ SECTION CURRENT-NAME NAME` or `gap ADDR SIZE`")
    return out


def write_layout(path: Path, records: Iterable[LayoutRecord], header: str) -> None:
    def line(r: LayoutRecord) -> str:
        if r.op == "rename":
            return f"rename {r.obj} {r.section} {r.current} {r.name}"
        return f"gap {r.addr:08x} 0x{r.size:x}"
    _write(path, header, (line(r) for r in records))


def read_patches(path: Path) -> list[VtPatch]:
    return [VtPatch(vt, _int(path, n, slot, 10), expected, replacement)
            for n, (vt, slot, expected, replacement) in _fields(path, 4, 4)]


def write_patches(path: Path, patches: Iterable[VtPatch], header: str) -> None:
    _write(path, header, (f"{p.vtable} {p.slot} {p.expected} {p.replacement}" for p in patches))


def read_addresses(path: Path) -> dict[str, int]:
    out = {}
    for number, (addr, name) in _fields(path, 2, 2, ordinals=True):  # `obj/#<section>` keys hold '#<digit>'
        out[name] = _int(path, number, addr, 16)
    return out


def write_addresses(path: Path, addresses: dict[str, int], header: str) -> None:
    _write(path, header, (f"{a:08x} {n}" for n, a in sorted(addresses.items(), key=lambda kv: (kv[1], kv[0]))))


def read_known(path: Path) -> list[KnownDifference]:
    out = []
    for number, fields in _fields(path, 3):
        if fields[0] not in DIFFERENCE_KINDS:
            raise _bad(path, number, f"kind {fields[0]!r}, expected one of {', '.join(DIFFERENCE_KINDS)}")
        out.append(KnownDifference(fields[0], fields[1], " ".join(fields[2:])))
    return out


def write_known(path: Path, known: Iterable[KnownDifference], header: str) -> None:
    for k in known:
        if k.kind not in DIFFERENCE_KINDS:
            raise ValueError(f"known difference {k.kind!r} {k.place}: verify reports no such kind")
        if "#" in k.reason or not k.reason.strip():
            raise ValueError(f"known difference {k.kind} {k.place}: a reason without '#' is required")
    _write(path, header, (f"{k.kind} {k.place} {' '.join(k.reason.split())}" for k in known))


def read_build(path: Path) -> dict:
    with open(path, "rb") as f:
        return tomllib.load(f)


def _toml_value(value) -> str:
    if isinstance(value, bool):
        return "true" if value else "false"
    if isinstance(value, int):
        return str(value)
    if isinstance(value, str):
        return json.dumps(value)  # a JSON string of printable text is a TOML basic string
    if isinstance(value, list):
        return "[" + ", ".join(_toml_value(v) for v in value) + "]"
    raise TypeError(f"build.toml takes strings, integers and lists of them, not {type(value).__name__}")


def write_build(path: Path, values: dict, header: str) -> None:
    lines = []
    for table, entries in values.items():
        if lines:
            lines.append("")
        lines.append(f"[{table}]")
        lines += [f"{key} = {_toml_value(value)}" for key, value in entries.items()]
    _write(path, header, lines)


# ---- the layout tables (config/layout/) ----

def _names(record: str, *names: str) -> None:
    for name in names:
        if not name or name.split() != [name]:
            raise ValueError(f"{record}: name {name!r} is empty or holds whitespace")


@dataclass(frozen=True)
class SectionRecord:
    name: str
    addr: int
    vsize: int
    raw_size: int
    characteristics: int


@dataclass(frozen=True)
class Stub:
    addr: int
    target: int
    names: tuple[str, ...] = ()


@dataclass(frozen=True)
class LibrarySection:
    addr: int
    library: str
    member_index: int
    member: str
    section: int


@dataclass(frozen=True)
class Thunk:
    addr: int
    dll: str
    name: str


@dataclass(frozen=True)
class Unpadded:
    """A block whose contribution to the original ended at its recorded size (config/layout/unpadded.txt): the
    bytes after it are the link's code fill, not the object's alignment fill."""
    addr: int
    target: str | None  # the block's symbol as config/blocks.txt names it; None for an initializer (blocks.txt's -)


@dataclass(frozen=True)
class ImportDll:
    dll: str
    lookup: int
    iat: int
    name_addr: int


@dataclass(frozen=True)
class ImportEntry:
    dll: str
    index: int
    hint: int
    entry: int | None  # None for an import by ordinal
    name: str  # '#<ordinal>' for an import by ordinal


@dataclass(frozen=True)
class Imports:
    descriptors: int
    iat: tuple[int, int]  # start, size
    dlls: list[ImportDll]
    entries: list[ImportEntry]


@dataclass(frozen=True)
class Export:
    ordinal: int
    name: str
    symbol: str


def read_sections(path: Path) -> list[SectionRecord]:
    return [SectionRecord(name, _int(path, n, addr, 16), _int(path, n, vsize, 0), _int(path, n, raw, 0),
                          _int(path, n, chars, 0))
            for n, (name, addr, vsize, raw, chars) in _fields(path, 5, 5)]


def write_sections(path: Path, records: Iterable[SectionRecord], header: str) -> None:
    records = list(records)
    for r in records:
        _names("SectionRecord", r.name)
    _write(path, header, (f"{r.name} {r.addr:08x} 0x{r.vsize:x} 0x{r.raw_size:x} 0x{r.characteristics:x}"
                          for r in records))


def read_stubs(path: Path) -> list[Stub]:
    return [Stub(_int(path, n, fields[0], 16), _int(path, n, fields[1], 16), tuple(fields[2:]))
            for n, fields in _fields(path, 2)]


def write_stubs(path: Path, stubs: Iterable[Stub], header: str) -> None:
    stubs = list(stubs)
    for s in stubs:
        _names("Stub", *s.names)
    _write(path, header, (" ".join([f"{s.addr:08x}", f"{s.target:08x}", *s.names]) for s in stubs))


def read_library_sections(path: Path) -> list[LibrarySection]:
    return [LibrarySection(_int(path, n, addr, 16), library, _int(path, n, index, 10), member,
                           _int(path, n, section, 10))
            for n, (addr, library, index, member, section) in _fields(path, 5, 5)]


def write_library_sections(path: Path, records: Iterable[LibrarySection], header: str) -> None:
    records = list(records)
    for r in records:
        _names("LibrarySection", r.library, r.member)
    _write(path, header, (f"{r.addr:08x} {r.library} {r.member_index} {r.member} {r.section}" for r in records))


def read_thunks(path: Path) -> list[Thunk]:
    return [Thunk(_int(path, n, addr, 16), dll, name) for n, (addr, dll, name) in _fields(path, 3, 3, True)]


def write_thunks(path: Path, thunks: Iterable[Thunk], header: str) -> None:
    thunks = list(thunks)
    for t in thunks:
        _names("Thunk", t.dll, t.name)
    _write(path, header, (f"{t.addr:08x} {t.dll} {t.name}" for t in thunks))


def read_unpadded(path: Path) -> list[Unpadded]:
    return [Unpadded(_int(path, n, addr, 16), None if target == "-" else target)
            for n, (addr, target) in _fields(path, 2, 2)]


def write_unpadded(path: Path, blocks: Iterable[Unpadded], header: str) -> None:
    blocks = list(blocks)
    for b in blocks:
        if b.target is not None:
            _names("Unpadded", b.target)
    _write(path, header, (f"{b.addr:08x} {b.target or '-'}" for b in blocks))


def read_imports(path: Path) -> Imports:
    descriptors = None
    iat = None
    dlls: list[ImportDll] = []
    entries: list[tuple[int, ImportEntry]] = []
    for number, fields in _fields(path, 1, None, True):
        keyword, args = fields[0], fields[1:]
        if keyword == "descriptors" and len(args) == 1:
            if descriptors is not None:
                raise _bad(path, number, "a second descriptors record")
            descriptors = _int(path, number, args[0], 16)
        elif keyword == "iat" and len(args) == 2:
            if iat is not None:
                raise _bad(path, number, "a second iat record")
            iat = (_int(path, number, args[0], 16), _int(path, number, args[1], 0))
        elif keyword == "dll" and len(args) == 4:
            dlls.append(ImportDll(args[0], _int(path, number, args[1], 16), _int(path, number, args[2], 16),
                                  _int(path, number, args[3], 16)))
        elif keyword == "import" and len(args) == 5:
            entry = None if args[3] == "-" else _int(path, number, args[3], 16)
            entries.append((number, ImportEntry(args[0], _int(path, number, args[1], 10),
                                                _int(path, number, args[2], 10), entry, args[4])))
        else:
            raise _bad(path, number, f"unknown or malformed record {keyword!r} with {len(args)} arguments; expected "
                                     "descriptors ADDR, iat ADDR SIZE, dll DLL LOOKUP IAT NAME or "
                                     "import DLL INDEX HINT ENTRY|- NAME")
    if descriptors is None:
        raise ValueError(f"{Path(path).name}: no descriptors record")
    if iat is None:
        raise ValueError(f"{Path(path).name}: no iat record")
    known = {d.dll for d in dlls}
    for number, e in entries:
        if e.dll not in known:
            raise _bad(path, number, f"import of {e.name!r} names {e.dll!r}, which has no dll record")
    return Imports(descriptors, iat, dlls, [e for _, e in entries])


def write_imports(path: Path, imports: Imports, header: str) -> None:
    for d in imports.dlls:
        _names("ImportDll", d.dll)
    for e in imports.entries:
        _names("ImportEntry", e.dll, e.name)
    lines = [f"descriptors {imports.descriptors:08x}", f"iat {imports.iat[0]:08x} 0x{imports.iat[1]:x}"]
    lines += (f"dll {d.dll} {d.lookup:08x} {d.iat:08x} {d.name_addr:08x}" for d in imports.dlls)
    lines += (f"import {e.dll} {e.index} {e.hint} {'-' if e.entry is None else format(e.entry, '08x')} {e.name}"
              for e in imports.entries)
    _write(path, header, lines)


def read_exports(path: Path) -> list[Export]:
    return [Export(_int(path, n, ordinal, 10), name, symbol) for n, (ordinal, name, symbol) in _fields(path, 3, 3)]


def write_exports(path: Path, exports: Iterable[Export], header: str) -> None:
    exports = list(exports)
    for e in exports:
        _names("Export", e.name, e.symbol)
    _write(path, header, (f"{e.ordinal} {e.name} {e.symbol}" for e in exports))
