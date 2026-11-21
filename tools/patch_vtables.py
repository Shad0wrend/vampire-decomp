"""Patch vtable words in the linked DLL (config/vtable_patches.txt): TEMPORARY, until the sources make them.

    python -m tools.patch_vtables --map build/vampire.map --patches config/vtable_patches.txt IN.dll OUT.dll

Each line names a vtable, a slot, the symbol the linked word points at and the one it must point at instead (where
the compiler's own deleting destructor fills a slot that holds the game's function). A word that does not point at
the expected symbol stops the patch, and nothing is written: config/ is older than the build."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path

from .cfg import VtPatch, read_patches
from .mapfile import read_map
from .pe import PE


def patch(dll: Path, map_path: Path, patches: list[VtPatch], out: Path) -> int:
    """Writes `dll` with `patches` applied to `out`; returns how many words it changed."""
    names = read_map(map_path)
    image = PE(dll)
    data = bytearray(image.data)
    for p in patches:
        where = f"{p.vtable} slot {p.slot}"
        found = {n: names.address(n) for n in (p.vtable, p.expected, p.replacement)}
        absent = [n for n, a in found.items() if a is None]
        if absent:
            raise SystemExit(f"{where}: {', '.join(absent)} not in {map_path} (run pcdecomp standalone)")
        offset = image.offset(found[p.vtable] + 4 * p.slot)
        if offset is None:
            raise SystemExit(f"{where}: 0x{found[p.vtable] + 4 * p.slot:08x} is not in {dll}'s file data")
        word = struct.unpack_from("<I", data, offset)[0]
        if word != found[p.expected]:
            raise SystemExit(f"{where}: the linked word is 0x{word:08x}, not {p.expected} (0x{found[p.expected]:08x})"
                             f"; config/vtable_patches.txt is older than the build: run pcdecomp standalone")
        struct.pack_into("<I", data, offset, found[p.replacement])
    out = Path(out)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(bytes(data))
    return len(patches)


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(prog="tools.patch_vtables", description=__doc__.splitlines()[0])
    p.add_argument("--map", type=Path, required=True)
    p.add_argument("--patches", type=Path, required=True)
    p.add_argument("dll_in", type=Path)
    p.add_argument("dll_out", type=Path)
    args = p.parse_args(argv)
    patches = read_patches(args.patches) if args.patches.exists() else []
    count = patch(args.dll_in, args.map, patches, args.dll_out)
    if count:
        print(f"patched {count} vtable word{'s' if count != 1 else ''} (config/vtable_patches.txt)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
