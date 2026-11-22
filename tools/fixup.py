"""Object fix-ups for the link (config/fixups.txt, config/bss_layout.txt), applied to copies of compiled objects.

    python -m tools.fixup [--config config] --name b10001000 build/obj/b10001000.obj build/link/b10001000.obj

- localize NAME: the object's external definition of NAME becomes static (a block that holds a same-unit copy of
  another block's function: its own calls go to its copy, everyone else's to the real one);
- promote NAME: the object's static definition of NAME becomes external (a file static other blocks name);
- inner NAME SECTION SECTION-NAME VALUE: a public symbol NAME inside the object (code addresses a game global that
  lies inside another object, at A + offset);
- rename OBJ SECTION CURRENT-NAME NAME (bss_layout.txt): a `.bss` section takes a `.bss$<addr>` name, so the linker
  places it among the items in the game's order.

The records name sections by number and by the name they had when config/ was written: a section with another name
stops the build (the block changed since; `pcdecomp standalone` writes config/ again)."""

from __future__ import annotations

import argparse
from pathlib import Path

from .cfg import read_fixups, read_layout
from .coff import SYM_CLASS_EXTERNAL, SYM_CLASS_STATIC, Coff


def _set_class(c: Coff, names: set[str], before: int, after: int) -> set[str]:
    done = set()
    for s in c.symbols:
        if s.name in names and s.storage_class == before and s.is_defined:
            c.set_storage_class(s.index, after)
            done.add(s.name)
    return done


def localize(c: Coff, names: set[str]) -> set[str]:
    """Returns the names it found."""
    return _set_class(c, names, SYM_CLASS_EXTERNAL, SYM_CLASS_STATIC)


def promote(c: Coff, names: set[str]) -> set[str]:
    return _set_class(c, names, SYM_CLASS_STATIC, SYM_CLASS_EXTERNAL)


STALE = " (config/ is older than src/: run pcdecomp standalone)"


def _section(c: Coff, number: int, expected: str | None, what: str) -> None:
    """Section `number` exists and, where config/ names it, still has that name: config/ keeps section numbers, and a
    block edited since config/ was written may number its sections otherwise."""
    if not 0 < number <= len(c.sections):
        raise SystemExit(f"{what}: section {number} is not in the object{STALE}")
    actual = c.sections[number - 1].name
    if expected is not None and actual != expected:
        raise SystemExit(f"{what}: section {number} is {actual}, not {expected}{STALE}")


def inner(c: Coff, name: str, section: int, value: int, expected: str | None = None) -> int:
    _section(c, section, expected, name)
    return c.add_symbol(name, section, value, SYM_CLASS_EXTERNAL)


def rename_section(c: Coff, number: int, name: str, expected: str | None = None) -> None:
    _section(c, number, expected, f"rename to {name}")
    c.set_section_name(number, name)


def gaps_source(gaps: list[tuple[int, int]]) -> str:
    """C++ for the `.bss` fillers that keep objects at the game's distances: one array per gap, in a section named
    after its game address so the linker sorts it among the items."""
    lines = ["// Written by tools/fixup.py from config/bss_layout.txt: the fillers of the address-ordered layout."]
    for addr, size in gaps:
        lines += [f'#pragma bss_seg(".bss${addr:08x}1")', f"char pcd_gap_{addr:08x}[{size}];"]
    lines.append("#pragma bss_seg()")
    return "\n".join(lines) + "\n"


def apply(data: bytes, name: str, config: Path) -> bytes:
    """Every fix-up and rename config/ lists for object `name`, applied to `data`."""
    c = Coff.parse(data)
    fixups = [f for f in read_fixups(config / "fixups.txt") if f.obj == name] \
        if (config / "fixups.txt").exists() else []
    renames = [r for r in read_layout(config / "bss_layout.txt") if r.op == "rename" and r.obj == name] \
        if (config / "bss_layout.txt").exists() else []
    for op, edit in (("localize", localize), ("promote", promote)):
        wanted = {f.name for f in fixups if f.op == op}
        if wanted:
            missing = wanted - edit(c, wanted)
            if missing:
                raise SystemExit(f"{name}: {op} {', '.join(sorted(missing))}: no such definition in the object"
                                 f"{STALE}")
    for f in fixups:
        if f.op == "inner":
            inner(c, f.name, f.section, f.value, f.section_name)
    for r in renames:
        rename_section(c, r.section, r.name, r.current)
    return c.to_bytes()


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(prog="tools.fixup", description=__doc__.splitlines()[0])
    p.add_argument("--config", type=Path, default=Path("config"))
    p.add_argument("--name", required=True, help="the object's name in config/ (b<addr8>, i<addr8>, bss_<stem>)")
    p.add_argument("obj_in", type=Path)
    p.add_argument("obj_out", type=Path)
    args = p.parse_args(argv)
    data = apply(args.obj_in.read_bytes(), args.name, args.config)
    args.obj_out.parent.mkdir(parents=True, exist_ok=True)
    args.obj_out.write_bytes(data)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
