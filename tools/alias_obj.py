"""config/aliases.txt -> an object of COFF weak externals (alias -> canonical name).

A matched function may name another function or global by a spelling the defining object does not use (a
placeholder `g_<addr>`, a vtable slot name, a vtordisp thunk). Each alias becomes a weak external whose default is
the canonical symbol (storage class 105, one aux record: the canonical's index, characteristics 3 = SEARCH_ALIAS),
so the linker resolves the alias to the canonical definition.

    python -m tools.alias_obj config/aliases.txt build/obj/alias.obj
"""

from __future__ import annotations

import struct
import sys
from pathlib import Path

from .cfg import read_aliases

WEAK_EXTERNAL = 105
EXTERNAL = 2
SEARCH_ALIAS = 3


def _name(raw: bytes, strtab: bytearray) -> bytes:
    if len(raw) <= 8:
        return raw.ljust(8, b"\0")
    offset = 4 + len(strtab)
    strtab += raw + b"\0"
    return struct.pack("<II", 0, offset)


def build(aliases: dict[str, str]) -> bytes:
    strtab = bytearray()
    records = bytearray()
    index = {}
    count = 0
    for target in sorted(set(aliases.values())):  # the undefined externals the aliases point at
        records += _name(target.encode("latin1"), strtab) + struct.pack("<IhHBB", 0, 0, 0, EXTERNAL, 0)
        index[target] = count
        count += 1
    for alias, target in sorted(aliases.items()):
        records += _name(alias.encode("latin1"), strtab) + struct.pack("<IhHBB", 0, 0, 0, WEAK_EXTERNAL, 1)
        records += struct.pack("<II", index[target], SEARCH_ALIAS) + b"\0" * 10
        count += 2
    header = struct.pack("<HHIIIHH", 0x14C, 0, 0, 20, count, 0, 0)
    return header + bytes(records) + struct.pack("<I", 4 + len(strtab)) + bytes(strtab)


def main(argv: list[str] | None = None) -> int:
    argv = list(sys.argv[1:] if argv is None else argv)
    if len(argv) != 2:
        raise SystemExit("usage: python -m tools.alias_obj ALIASES.txt OUT.obj")
    data = build(read_aliases(Path(argv[0])))
    out = Path(argv[1])
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
