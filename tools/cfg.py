"""The build's config files (config/*.txt, config/build.toml): one reader and one writer per file.

`pcdecomp standalone` writes them with these functions and the repository's tools read them with the same ones, so
the format lives in one place. Lines are space-separated fields; `#` starts a comment; blank lines are ignored.
Addresses are 8 lower-case hex digits, sizes and offsets 0x hex."""

from __future__ import annotations

import json
import tomllib
from collections.abc import Iterable, Iterator
from dataclasses import dataclass
from pathlib import Path

__all__ = [
    "HEADER", "Block", "Fixup", "KnownDifference", "LayoutRecord", "VtPatch",
    "read_addresses", "read_aliases", "read_blocks", "read_build", "read_fixups", "read_known", "read_layout",
    "read_patches", "write_addresses", "write_aliases", "write_blocks", "write_build", "write_fixups",
    "write_known", "write_layout", "write_patches",
]

KINDS = ("b", "i")  # function block, initializer
FIXUP_OPS = ("localize", "promote", "inner")
LAYOUT_OPS = ("rename", "gap")
DIFFERENCE_KINDS = ("slot", "xcu-extra", "export-missing", "export-ordinal")


def HEADER(project: str, commit: str) -> str:  # noqa: N802 - reads like the constant it stands for
    return f"# written by pcdecomp standalone from {project} {commit}; do not edit by hand"


@dataclass(frozen=True)
class Block:
    addr: int
    size: int
    kind: str  # "b" or "i"
    target: str | None  # the mangled symbol the block defines at addr; None for an initializer

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


@dataclass(frozen=True)
class LayoutRecord:
    op: str  # rename / gap
    obj: str | None = None  # rename: the object
    section: int | None = None  # rename: its section number
    name: str | None = None  # rename: the new section name
    addr: int | None = None  # gap: the game address the filler starts at
    size: int | None = None  # gap: its size


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


def _lines(path: Path) -> Iterator[tuple[int, list[str]]]:
    with open(path, encoding="utf-8", newline=None) as f:
        for number, line in enumerate(f, 1):
            fields = line.split("#", 1)[0].split()  # mangled names never hold '#'
            if fields:
                yield number, fields


def _bad(path: Path, number: int, why: str) -> ValueError:
    return ValueError(f"{Path(path).name}:{number}: {why}")


def _fields(path: Path, minimum: int, maximum: int | None = None) -> Iterator[tuple[int, list[str]]]:
    for number, fields in _lines(path):
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
    for number, (addr, size, kind, target) in _fields(path, 4, 4):
        if kind not in KINDS:
            raise _bad(path, number, f"kind {kind!r}, expected b or i")
        out.append(Block(_int(path, number, addr, 16), _int(path, number, size, 0), kind,
                         None if target == "-" else target))
    return out


def write_blocks(path: Path, blocks: Iterable[Block], header: str) -> None:
    _write(path, header, (f"{b.addr:08x} 0x{b.size:x} {b.kind} {b.target or '-'}" for b in blocks))


def read_aliases(path: Path) -> dict[str, str]:
    return {alias: canonical for _, (alias, canonical) in _fields(path, 2, 2)}


def write_aliases(path: Path, aliases: dict[str, str], header: str) -> None:
    _write(path, header, (f"{a} {aliases[a]}" for a in sorted(aliases)))


def read_fixups(path: Path) -> list[Fixup]:
    out = []
    for number, fields in _fields(path, 3, 5):
        obj, op, name = fields[:3]
        if op not in FIXUP_OPS:
            raise _bad(path, number, f"operation {op!r}, expected one of {', '.join(FIXUP_OPS)}")
        if op == "inner":
            if len(fields) != 5:
                raise _bad(path, number, "inner takes NAME SECTION VALUE")
            out.append(Fixup(obj, op, name, _int(path, number, fields[3], 10), _int(path, number, fields[4], 0)))
        elif len(fields) != 3:
            raise _bad(path, number, f"{op} takes one NAME")
        else:
            out.append(Fixup(obj, op, name))
    return out


def write_fixups(path: Path, fixups: Iterable[Fixup], header: str) -> None:
    def line(f: Fixup) -> str:
        return f"{f.obj} {f.op} {f.name}" + (f" {f.section} 0x{f.value:x}" if f.op == "inner" else "")
    _write(path, header, (line(f) for f in fixups))


def read_layout(path: Path) -> list[LayoutRecord]:
    out = []
    for number, fields in _fields(path, 3, 4):
        op = fields[0]
        if op == "rename" and len(fields) == 4:
            out.append(LayoutRecord(op, obj=fields[1], section=_int(path, number, fields[2], 10), name=fields[3]))
        elif op == "gap" and len(fields) == 3:
            out.append(LayoutRecord(op, addr=_int(path, number, fields[1], 16), size=_int(path, number, fields[2], 0)))
        else:
            raise _bad(path, number, "expected `rename OBJ SECTION NAME` or `gap ADDR SIZE`")
    return out


def write_layout(path: Path, records: Iterable[LayoutRecord], header: str) -> None:
    def line(r: LayoutRecord) -> str:
        return f"rename {r.obj} {r.section} {r.name}" if r.op == "rename" else f"gap {r.addr:08x} 0x{r.size:x}"
    _write(path, header, (line(r) for r in records))


def read_patches(path: Path) -> list[VtPatch]:
    return [VtPatch(vt, _int(path, n, slot, 10), expected, replacement)
            for n, (vt, slot, expected, replacement) in _fields(path, 4, 4)]


def write_patches(path: Path, patches: Iterable[VtPatch], header: str) -> None:
    _write(path, header, (f"{p.vtable} {p.slot} {p.expected} {p.replacement}" for p in patches))


def read_addresses(path: Path) -> dict[str, int]:
    out = {}
    for number, (addr, name) in _fields(path, 2, 2):
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
