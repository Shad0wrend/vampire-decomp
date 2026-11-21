"""Data templates -> MASM: every `ORIGBYTES 0x<addr>, <n>` hole becomes the DB lines of the original DLL's bytes.

`pcdecomp data` writes src/_data/*.asm.in with the game's bytes left out (a decomp repository holds no game bytes);
this fills them back from the user's own copy, line for line as `pcdecomp data` would have written them.

    python -m tools.data_asm --orig orig/vampire.dll --sha1 <hex> src/_data/x.asm.in build/data/x.asm
"""

from __future__ import annotations

import argparse
import hashlib
import re
from collections.abc import Callable
from pathlib import Path

from .pe import PE

HOLE = re.compile(r"^ORIGBYTES 0x([0-9a-f]{8}), (\d+)$", re.M)
_TOKEN = re.compile(rb"\x00{16,}|[\x20-\x7e]{4,}|[\s\S]")


def render_bytes(data: bytes) -> list[str]:
    """DB lines for raw bytes: zero runs as DUP, printable runs as strings, the rest as numbers."""
    lines: list[str] = []
    pending: list[str] = []

    def flush() -> None:
        for i in range(0, len(pending), 16):
            lines.append("  DB " + ",".join(pending[i : i + 16]))
        pending.clear()

    for m in _TOKEN.finditer(data):
        tok = m.group()
        if len(tok) >= 16 and not tok.strip(b"\x00"):
            flush()
            lines.append(f"  DB {len(tok)} DUP (0)")
        elif len(tok) >= 4:
            flush()
            text = tok.decode("ascii")
            for i in range(0, len(text), 60):
                lines.append('  DB "' + text[i : i + 60].replace('"', '""') + '"')
        else:
            pending.append("0%02Xh" % tok[0])
    flush()
    return lines


def hole(addr: int, data: bytes) -> list[str]:
    """What a template holds in place of `render_bytes(data)` at `addr`: the same lines when they are only zeros
    (no game bytes in them), else one hole."""
    if not data.strip(b"\x00"):
        return render_bytes(data)
    return [f"ORIGBYTES 0x{addr:08x}, {len(data)}"]


def fill_template(text: str, read: Callable[[int, int], bytes]) -> str:
    return HOLE.sub(lambda m: "\n".join(render_bytes(read(int(m[1], 16), int(m[2])))), text)


def image_reader(path: Path, sha1: str) -> Callable[[int, int], bytes]:
    """Bytes of the original DLL by virtual address, once its SHA-1 is the expected one."""
    path = Path(path)
    if not path.is_file():
        raise SystemExit(f"{path}: not found; put your own copy of the original DLL there (see orig/README.txt)")
    actual = hashlib.sha1(path.read_bytes()).hexdigest()
    if actual != sha1.lower():
        raise SystemExit(f"{path}: SHA-1 {actual}, expected {sha1.lower()} (another version of the DLL?)")
    return PE(path).read


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(prog="tools.data_asm", description=__doc__.splitlines()[0])
    p.add_argument("--orig", type=Path, required=True)
    p.add_argument("--sha1", required=True)
    p.add_argument("template", type=Path)
    p.add_argument("out", type=Path)
    args = p.parse_args(argv)
    read = image_reader(args.orig, args.sha1)
    text = args.template.read_text(encoding="ascii").replace("\r\n", "\n")
    args.out.parent.mkdir(parents=True, exist_ok=True)
    data = fill_template(text, read).encode("ascii")
    if not args.out.exists() or args.out.read_bytes() != data:
        args.out.write_bytes(data)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
