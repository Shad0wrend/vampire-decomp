"""Give every byte of the original DLL an owner: how far the build is from the same file (`ninja ownership`).

    python -m tools.ownership [--orig orig/<target>] [--vc6 DIR] [--lib DIR ...] [--build build] [--show N]

Verify compares the build with the game rule by rule; this audit asks the other question: which source makes each
byte of the original file? Owners, in this order (the first one wins):
- what verify compares (tools.verify records each range): a block's code and the alignment fill its object holds
  (code, fill), an initializer step or other static function verify places, a block's data and the data items of
  src/_data (data), a vtable and its RTTI locator (vtable), the initializer table (initializer table);
- what the linker writes: the headers (headers), the incremental-link stubs (stubs), the import section, the import
  directory and import address table (imports), the export directory (exports), the base relocations (base
  relocations), the debug directory and the record it points at (debug);
- what the link takes from the libraries config/build.toml names (LIBC.LIB, found in VC6's LIB folder or a --lib
  folder): the sections tools.libraries finds at one place of the original (library), and the linker's thunks for
  the functions of import libraries (import thunks);
- what is left when a whole run of bytes no one owns is 0xCC in code (padding: the incremental link's room after
  each function and its stub table's reserve) or zero (zero fill: alignment, the rest of a file-aligned section);
  a mixed run gives its trailing 0xCC / zeros to padding / zero fill.
Everything else is unknown: no source makes it yet. Each function's room is also checked against VC6's incremental
link rule (incremental_slot). Writes build/ownership.json; exit code 1 while any byte is unknown."""

from __future__ import annotations

import argparse
import bisect
import json
import re
import struct
from collections import Counter
from dataclasses import asdict, dataclass, field
from pathlib import Path

from . import vc6
from .cfg import read_build
from .libraries import Placement, import_thunks, place
from .verify import Verifier

KINDS = ("code", "fill", "data", "vtable", "initializer table", "library", "import thunks", "headers", "stubs",
         "imports", "exports", "base relocations", "debug", "padding", "zero fill")
EXPORT, IMPORT, BASERELOC, DEBUG, IAT = 0, 1, 5, 6, 12
FREE = re.compile(rb"\x00+")  # a run of bytes no one owns (_Owners.kind)


def incremental_slot(size: int) -> int:
    """The room VC6's incremental link gives a function of `size` bytes (its object's section, alignment fill
    included): the size plus a quarter of it, at least 16, rounded up to 16."""
    return (size + max(size // 4, 16) + 15) & ~15


@dataclass
class Run:
    offset: int  # file offset
    size: int
    va: int | None  # None outside the sections (headers, data after the last section)
    section: str
    near: str = ""  # the closest named game address before it


@dataclass
class Audit:
    size: int = 0
    counts: dict[str, int] = field(default_factory=dict)  # owner kind -> bytes
    unknown: list[Run] = field(default_factory=list)
    slot_misses: list[tuple[int, int, int]] = field(default_factory=list)  # (address, size, room) off the rule
    slots: int = 0  # function rooms checked against the rule
    differences: int = 0  # verify's unknown differences (bytes it compared that are not the game's)
    libraries: list[str] = field(default_factory=list)  # the libraries read
    missing_libraries: list[str] = field(default_factory=list)  # the libraries not found: their bytes stay unknown
    placements: list[Placement] = field(default_factory=list)  # where the original holds their sections


class _Owners:
    """One owner kind per byte of the file."""

    def __init__(self, image):
        self.image = image
        self.kind = bytearray(len(image.data))  # 0: nobody yet, else KINDS index + 1
        self.sections = sorted(image.sections, key=lambda s: s.va)

    def mark_file(self, offset: int, size: int, kind: str) -> None:
        value = KINDS.index(kind) + 1
        lo, hi = max(offset, 0), min(offset + size, len(self.kind))
        if lo >= hi:
            return
        if not any(self.kind[lo:hi]):
            self.kind[lo:hi] = bytes([value]) * (hi - lo)
            return
        for k in range(lo, hi):
            if not self.kind[k]:
                self.kind[k] = value

    def free_runs(self):
        """(start, end) of each run of bytes no one owns yet."""
        return [(m.start(), m.end()) for m in FREE.finditer(self.kind)]

    def unexplained(self) -> list[tuple[int, int]]:
        """(start, end) addresses of each run of bytes no one owns inside a section that is not all 0xCC (code) or
        zeros: where something must still make the bytes."""
        out = []
        for start, end in self.free_runs():
            for s in self.sections:
                lo, hi = max(start, s.raw_offset), min(end, s.raw_offset + s.raw_size)
                if lo < hi and self.image.data[lo:hi].strip(b"\xcc\x00" if s.executable else b"\x00"):
                    out.append((s.va + lo - s.raw_offset, s.va + hi - s.raw_offset))
        return out

    def mark(self, va: int, size: int, kind: str) -> None:
        """Mark [va, va + size): the part each section holds in the file."""
        for s in self.sections:
            lo, hi = max(va, s.va), min(va + size, s.va + min(s.size, s.raw_size))
            if lo < hi:
                self.mark_file(s.raw_offset + lo - s.va, hi - lo, kind)

    def where(self, offset: int) -> tuple[int | None, str]:
        for s in self.sections:
            if s.raw_offset <= offset < s.raw_offset + s.raw_size:
                return s.va + offset - s.raw_offset, s.name
        return None, "headers" if offset < min(s.raw_offset for s in self.sections) else "after the sections"

    def executable_at(self, offset: int) -> bool:
        return any(s.executable and s.raw_offset <= offset < s.raw_offset + s.raw_size for s in self.sections)


def _debug_records(image) -> list[tuple[int, int]]:
    """(file offset, size) of each record the debug directory points at."""
    rva, size = image.directories[DEBUG] if len(image.directories) > DEBUG else (0, 0)
    out = []
    for k in range(0, size - size % 28, 28):
        try:
            entry = image.read(image.image_base + rva + k, 28)
        except ValueError:
            break
        n, pointer = struct.unpack_from("<II", entry, 16)[0], struct.unpack_from("<I", entry, 24)[0]
        out.append((pointer, n))
    return out


def _fill_runs(owners: _Owners, data: bytes) -> None:
    """Give each run of bytes no one owns to padding / zero fill when it is all 0xCC in code / all zeros, else the
    0xCC / zeros at its two ends."""
    for start, end in owners.free_runs():
        fills = ((0xCC, "padding"),) if owners.executable_at(start) else ()
        fills += ((0x00, "zero fill"),)
        changed = True
        while changed and start < end:
            changed = False
            for byte, kind in fills:
                n = end - start - len(data[start:end].lstrip(bytes([byte])))  # the room after what comes before
                if n:
                    owners.mark_file(start, n, kind)
                    start, changed = start + n, True
                n = end - start - len(data[start:end].rstrip(bytes([byte])))  # the room after the run's own bytes
                if n:
                    owners.mark_file(end - n, n, kind)
                    end, changed = end - n, True


def _slot_misses(claims: list[tuple[int, int, str, str]], owners: _Owners) -> tuple[int, list[tuple[int, int, int]]]:
    """Each function's room (its code and fill, then padding up to the next function) against incremental_slot."""
    spans: dict[int, int] = {}
    for addr, size, kind, _ in claims:
        if kind == "code":
            spans[addr] = max(spans.get(addr, 0), size)
    ends = {a + s: a for a, s in spans.items()}
    for addr, size, kind, _ in claims:  # a function's fill makes its object's section longer
        if kind == "fill" and addr in ends:
            spans[ends[addr]] += size
    starts = sorted(spans)
    padding = KINDS.index("padding") + 1
    checked, misses = 0, []
    for a, b in zip(starts, starts[1:]):
        end = a + spans[a]
        if end > b:
            continue
        gap = [owners.image.offset(v) for v in (end, b)]
        if None in gap or any(owners.kind[i] != padding for i in range(gap[0], gap[1])):
            continue  # something other than padding between them (data, unknown, another section)
        checked += 1
        if b - a != incremental_slot(spans[a]):
            misses.append((a, spans[a], b - a))
    return checked, misses


def lib_folders(vc6_dir: Path | None) -> list[Path]:
    """The folders the link searches for libraries: VC6's (vcvars32.bat's LIB), if VC6 is found."""
    try:
        root = vc6.find(vc6_dir)
    except SystemExit:
        return []
    return [root / "VC98" / "LIB", root / "VC98" / "MFC" / "LIB"]


def _libraries(values: dict, lib_dirs: list[Path]) -> tuple[list[tuple[str, bytes]], list[str]]:
    """(name, bytes) of each library config/build.toml names that `lib_dirs` hold, and the names of the others."""
    found, missing = [], []
    for name in values.get("link", {}).get("libs", []):
        path = next((Path(d) / name for d in lib_dirs if (Path(d) / name).is_file()), None)
        if path is None:
            missing.append(name)
        else:
            found.append((name, path.read_bytes()))
    return found, missing


def audit(root: Path, orig: Path, build: str = "build", lib_dirs: list[Path] | None = None) -> Audit:
    """`lib_dirs`: the folders the libraries are read from (default: VC6's, from $VC6_DIR or its installed place)."""
    v = Verifier(Path(root), Path(orig), build)
    report = v.run()
    image = v.orig
    owners = _Owners(image)
    for addr, size, kind, _ in sorted(v.claims):
        owners.mark(addr, size, kind)
    owners.mark_file(0, min(s.raw_offset for s in image.sections), "headers")
    for stub in v.ilt:
        owners.mark(stub, 5, "stubs")
    for s in image.sections:
        if s.name == ".idata":
            owners.mark(s.va, s.size, "imports")
    for index, kind in ((IMPORT, "imports"), (IAT, "imports"), (EXPORT, "exports"), (BASERELOC, "base relocations"),
                        (DEBUG, "debug")):
        if len(image.directories) > index and image.directories[index][1]:
            rva, size = image.directories[index]
            owners.mark(image.image_base + rva, size, kind)
    for offset, size in _debug_records(image):
        owners.mark_file(offset, size, "debug")
    for thunk in import_thunks(image, owners.unexplained()):
        owners.mark(thunk, 6, "import thunks")
    libraries, missing = _libraries(v.values, lib_folders(None) if lib_dirs is None else lib_dirs)
    placements = place(image, libraries, v.addresses, v.ilt, owners.unexplained()) if libraries else []
    for p in placements:
        owners.mark(p.va, p.size, "library")
    _fill_runs(owners, image.data)
    out = Audit(size=len(image.data), differences=len(report.unknown), libraries=[n for n, _ in libraries],
                missing_libraries=missing, placements=placements)
    counts = Counter(owners.kind)
    out.counts = {KINDS[k - 1]: counts[k] for k in sorted(counts) if k}
    names = sorted((a, n) for n, a in v.addresses.items() if "/" not in n)
    starts = [a for a, _ in names]
    for start, k in owners.free_runs():
        va, section = owners.where(start)
        near = ""
        if va is not None:
            i = bisect.bisect_right(starts, va) - 1
            if i >= 0:
                near = f"{names[i][1]}+0x{va - names[i][0]:x}"
        out.unknown.append(Run(start, k - start, va, section, near))
    out.slots, out.slot_misses = _slot_misses(v.claims, owners)
    return out


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(prog="tools.ownership", description=__doc__.splitlines()[0])
    p.add_argument("--root", type=Path, default=Path.cwd(), help=argparse.SUPPRESS)
    p.add_argument("--orig", type=Path, help="the original DLL (default: orig/<target name>)")
    p.add_argument("--vc6", type=Path, help="the folder holding VC98: its LIB folder holds LIBC.LIB (default: $VC6_DIR, "
                                            "else VC6's installed place)")
    p.add_argument("--lib", type=Path, action="append", default=[], help="another folder to read libraries from "
                                                                         "(searched first)")
    p.add_argument("--build", default="build")
    p.add_argument("--show", type=int, default=20, help="unknown runs to print, biggest first (default 20)")
    args = p.parse_args(argv)
    root = args.root.resolve()
    target = read_build(root / "config" / "build.toml")["target"]["name"]
    orig = args.orig if args.orig is not None else root / "orig" / target
    a = audit(root, orig, args.build, lib_dirs=[*args.lib, *lib_folders(args.vc6)])
    data = asdict(a)
    data["unknown"] = [{**asdict(r), "va": None if r.va is None else f"0x{r.va:08x}"} for r in a.unknown]
    data["slot_misses"] = [{"address": f"0x{x:08x}", "size": s, "room": r} for x, s, r in a.slot_misses]
    data["placements"] = [{**asdict(x), "va": f"0x{x.va:08x}"} for x in a.placements]
    (root / args.build / "ownership.json").write_text(json.dumps(data, indent=1), encoding="utf-8")
    print(f"ownership of {orig} ({a.size:,} bytes)")
    for kind in KINDS:
        if a.counts.get(kind):
            print(f"  {kind:18s} {a.counts[kind]:>11,}  {100 * a.counts[kind] / a.size:5.1f}%")
    for name in a.libraries:
        how = Counter(x.how for x in a.placements if x.library == name)
        if how:
            print(f"{name}: {sum(how.values()):,} sections placed ("
                  + ", ".join(f"{how[k]:,} by {k}" for k in ("name", "reference", "content") if how[k]) + ")")
        else:
            print(f"{name}: no section placed")
    for name in a.missing_libraries:
        print(f"{name} not found: its bytes stay unknown (pass --vc6, or --lib with its folder)")
    unknown = sum(r.size for r in a.unknown)
    print(f"unknown: {unknown:,} bytes in {len(a.unknown):,} runs")
    for r in sorted(a.unknown, key=lambda r: -r.size)[:args.show]:
        where = f"0x{r.va:08x}" if r.va is not None else f"file 0x{r.offset:x}"
        print(f"    {where} {r.section:8s} {r.size:>7,} B  {r.near}")
    print(f"incremental rule: {a.slots - len(a.slot_misses):,} of {a.slots:,} function rooms "
          f"(misses in {args.build}/ownership.json)")
    if a.differences:
        print(f"verify finds {a.differences} differences: the bytes it compared are not all the game's")
    return 0 if not a.unknown else 1


if __name__ == "__main__":
    raise SystemExit(main())
