"""Run Visual C++ 6.0's tools (cl, ml, lib, link) with the environment its vcvars32.bat sets.

    python -m tools.vc6 --vc6 <folder holding VC98> cl /nologo /c ...

The folder is the one holding `VC98` and `Common` (an installed VC6: `C:/Program Files (x86)/Microsoft Visual
Studio`). Each run gets its own TMP folder: VC6 names its intermediate files after the compiling thread, so two runs
at once can otherwise read each other's files."""

from __future__ import annotations

import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

DEFAULTS = (Path("C:/Program Files (x86)/Microsoft Visual Studio"), Path("C:/Program Files/Microsoft Visual Studio"))
IGNORED = {"CL", "_CL_", "LINK", "_LINK_", "ML"}  # variables that add options to every run


def find(vc6_dir: Path | None) -> Path:
    """The VC6 folder: the given one, else $VC6_DIR, else an installed VC6's default place."""
    for candidate in ([Path(vc6_dir)] if vc6_dir else []) or (
            [Path(os.environ["VC6_DIR"])] if os.environ.get("VC6_DIR") else list(DEFAULTS)):
        if (candidate / "VC98" / "BIN" / "CL.EXE").is_file():
            return candidate
    given = vc6_dir or os.environ.get("VC6_DIR")
    raise SystemExit(f"no Visual C++ 6.0 in {given or ' or '.join(map(str, DEFAULTS))}: pass --vc6 with the folder "
                     f"that holds VC98 (VC98/BIN/CL.EXE)")


def environment(vc6_dir: Path) -> dict[str, str]:
    root = find(vc6_dir)
    env = {k: v for k, v in os.environ.items() if k.upper() not in IGNORED}
    common = next((root / name for name in ("Common", "COMMON") if (root / name).is_dir()), root / "Common")
    env["PATH"] = os.pathsep.join([str(root / "VC98" / "BIN"), str(common / "MSDev98" / "BIN"), env.get("PATH", "")])
    env["INCLUDE"] = os.pathsep.join(str(root / "VC98" / p) for p in ("INCLUDE", "MFC/INCLUDE", "ATL/INCLUDE"))
    env["LIB"] = os.pathsep.join(str(root / "VC98" / p) for p in ("LIB", "MFC/LIB"))
    return env


def _quiet(output: str, args: list[str]) -> str:
    """cl prints each source's name: drop those lines, keep everything else."""
    names = {Path(a).name.lower() for a in args if not a.startswith(("/", "-", "@"))}
    return "".join(line for line in output.splitlines(keepends=True) if line.strip().lower() not in names)


def run(vc6_dir: Path, tool: str, args: list[str], cwd: Path | None = None) -> int:
    env = environment(vc6_dir)
    exe = shutil.which(tool, path=env["PATH"])
    if exe is None:
        raise SystemExit(f"{tool} is not in {vc6_dir}")
    with tempfile.TemporaryDirectory(prefix="vc6-") as tmp:
        env["TMP"] = env["TEMP"] = tmp
        proc = subprocess.run([exe, *args], env=env, cwd=cwd, capture_output=True, text=True, encoding="oem",
                              errors="replace")
    sys.stdout.write(_quiet(proc.stdout + proc.stderr, args))
    return proc.returncode


def main(argv: list[str] | None = None) -> int:
    argv = list(sys.argv[1:] if argv is None else argv)
    if len(argv) < 3 or argv[0] != "--vc6":
        raise SystemExit("usage: python -m tools.vc6 --vc6 DIR TOOL [ARGS...]")
    return run(Path(argv[1]), argv[2], argv[3:])


if __name__ == "__main__":
    raise SystemExit(main())
