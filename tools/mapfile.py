"""A link.exe map file (/MAP): the public and static symbols with their addresses and the objects that define them."""

from __future__ import annotations

import re
from dataclasses import dataclass, field
from pathlib import Path

# ` 0001:00000010       ?a@C@@UAEHH@Z              10001010 f   i10001000.obj` (an `i` flag marks an inline function)
LINE = re.compile(r"^\s*[0-9a-fA-F]{4}:[0-9a-fA-F]{8}\s+(\S+)\s+([0-9a-fA-F]{8})(?:\s+f)?(?:\s+i)?(?:\s+(\S+))?\s*$")


def _stem(column: str) -> str:
    """`LIBC.LIB:crt0.obj` -> `crt0`, `b10001000.obj` -> `b10001000`."""
    return column.rsplit(":", 1)[-1].removesuffix(".obj")


@dataclass
class MapFile:
    publics: dict[str, int] = field(default_factory=dict)  # name -> address (the first listed)
    statics: dict[tuple[str, str], int] = field(default_factory=dict)  # (name, object stem) -> address
    names: dict[int, list[str]] = field(default_factory=dict)  # address -> every name listed there
    objects: dict[int, str] = field(default_factory=dict)  # address -> object stem of the first symbol listed there
    _static_names: dict[str, int] = field(default_factory=dict)

    def address(self, name: str, obj: str | None = None) -> int | None:
        """The address of `name`: object `obj`'s static of that name first, then the public, then any static."""
        if obj is not None and (name, obj) in self.statics:
            return self.statics[(name, obj)]
        if name in self.publics:
            return self.publics[name]
        return self._static_names.get(name)


def read_map(path: Path) -> MapFile:
    m = MapFile()
    statics = False
    for line in Path(path).read_text(encoding="latin1").splitlines():
        if line.strip().startswith("Static symbols"):
            statics = True
            continue
        match = LINE.match(line)
        if not match:
            continue
        name, addr, obj = match.group(1), int(match.group(2), 16), _stem(match.group(3) or "")
        if statics:
            m.statics.setdefault((name, obj), addr)
            m._static_names.setdefault(name, addr)
        else:
            m.publics.setdefault(name, addr)
        m.names.setdefault(addr, []).append(name)
        m.objects.setdefault(addr, obj)
    return m
