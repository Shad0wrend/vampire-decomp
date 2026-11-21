"""src/**/*.cpp -> build/src/<addr8>.cpp: one translation unit per block, the text pcdecomp's judge compiled.

A src file is a list of blocks, `// FUNCTION: 0x<addr> size=0x<n>` .. `// END FUNCTION`; each block compiles alone,
after the prelude header (`#include "<prelude>"`). Merging blocks into one unit would change what VC6 makes of them
(its inline budget and symbol numbering are per unit), so the build keeps the judge's model: one block, one object."""

from __future__ import annotations

import re
from pathlib import Path

# the same rules as pcdecomp.workspace.BLOCK / blocks_in and pcdecomp.inline_asm.translation_unit
BLOCK = re.compile(r"^// FUNCTION: 0x([0-9a-fA-F]{8}) size=0x[0-9a-fA-F]+\n.*?^// END FUNCTION\n", re.M | re.S)
ENCODING = "cp1252"  # what VC6 reads


def read_source(path: Path) -> str:
    """A src file's text with LF line ends (a Git for Windows checkout may have CRLF)."""
    return Path(path).read_bytes().decode(ENCODING).replace("\r\n", "\n")


def split(text: str) -> dict[int, str]:
    """Address -> source of every block in a src file's text."""
    found = {}
    for m in BLOCK.finditer(text):
        body = m.group(0).split("\n", 1)[1].rsplit("// END FUNCTION", 1)[0]
        found[int(m.group(1), 16)] = body.strip()
    return found


def translation_unit(prelude: str, source: str) -> str:
    return f'#include "{prelude}"\n{source.strip()}\n'


def sources(src_dir: Path) -> dict[int, tuple[Path, str]]:
    """Every block under src_dir: address -> (file, source). Two blocks at one address are an error."""
    found: dict[int, tuple[Path, str]] = {}
    for path in sorted(Path(src_dir).rglob("*.cpp")):
        for addr, source in split(read_source(path)).items():
            if addr in found:
                raise SystemExit(f"0x{addr:08x} is a block in both {found[addr][0]} and {path}")
            found[addr] = (path, source)
    return found


def write_units(src_dir: Path, out_dir: Path, prelude: str) -> dict[int, Path]:
    """Write build/src/<addr8>.cpp for every block, only where the text changed (so ninja rebuilds only those), and
    remove the units of blocks no longer in src/. Returns address -> unit."""
    out_dir = Path(out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)
    units = {}
    for addr, (_, source) in sources(src_dir).items():
        unit = out_dir / f"{addr:08x}.cpp"
        data = translation_unit(prelude, source).encode(ENCODING)
        if not unit.exists() or unit.read_bytes() != data:
            unit.write_bytes(data)
        units[addr] = unit
    for stale in out_dir.glob("*.cpp"):
        if stale not in units.values():
            stale.unlink()
    return dict(sorted(units.items()))
