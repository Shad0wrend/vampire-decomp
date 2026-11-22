"""Run Visual C++ 6.0's tools (cl, ml, lib, link) with the environment its vcvars32.bat sets.

    python -m tools.vc6 --vc6 <folder holding VC98> [--depfile <out>.d] cl /nologo /c ...

The folder is the one holding `VC98` and `Common` (an installed VC6: `C:/Program Files (x86)/Microsoft Visual
Studio`). Each run gets its own TMP folder: VC6 names its intermediate files after the compiling thread, so two runs
at once can otherwise read each other's files. `--depfile` writes, after a successful compile, the headers the
source includes as ninja's `deps = gcc` reads them (VC6's cl has no /showIncludes)."""

from __future__ import annotations

import os
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

DEFAULTS = (Path("C:/Program Files (x86)/Microsoft Visual Studio"), Path("C:/Program Files/Microsoft Visual Studio"))
IGNORED = {"CL", "_CL_", "LINK", "_LINK_", "ML"}  # variables that add options to every run
INCLUDE_LINE = re.compile(rb'^[ \t]*#[ \t]*include[ \t]*(?:"([^"\r\n]+)"|<([^>\r\n]+)>)', re.M)
SOURCES = (".c", ".cpp", ".cxx")


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


def includes(source: Path, folders: list[Path]) -> list[Path]:
    """Every file `source` includes, nested ones too, as VC6 finds them: a quoted name in the including file's folder,
    then the folders of the files that included that one, then `folders` (the /I folders); a <name> in `folders`. A
    name found nowhere there is one of the compiler's own headers, which never change. Every #include line counts,
    inside an #if or not: a dependency too many only costs a recompile, a missing one a stale object."""
    found: list[Path] = []
    seen: set[str] = set()
    todo: list[tuple[Path, tuple[Path, ...]]] = [(Path(source), ())]
    while todo:
        path, parents = todo.pop()
        try:
            text = path.read_bytes()
        except OSError:
            continue
        for m in INCLUDE_LINE.finditer(text):
            name = (m.group(1) or m.group(2)).decode("latin-1").strip()
            where = ([path.parent, *(p.parent for p in parents)] if m.group(1) else []) + list(folders)
            for folder in where:
                candidate = folder / name
                if candidate.is_file():
                    key = os.path.normcase(os.path.abspath(candidate))
                    if key not in seen:
                        seen.add(key)
                        found.append(candidate)
                        todo.append((candidate, (path, *parents)))
                    break
    return found


def _depfile_path(path: Path) -> str:
    return path.as_posix().replace(" ", "\\ ").replace("#", "\\#").replace("$", "$$")


def write_depfile(depfile: Path, target: str, deps: list[Path]) -> None:
    """A make-style depfile: `target: dep dep ...`."""
    Path(depfile).write_text(f"{_depfile_path(Path(target))}: {' '.join(_depfile_path(d) for d in deps)}\n",
                             encoding="utf-8")


def depfile_for(depfile: Path, args: list[str]) -> None:
    """The depfile of a cl run: the headers of each source it compiled (target: the depfile's name without .d)."""
    folders = [Path(a[2:]) for a in args if a[:2] in ("/I", "-I") and len(a) > 2]
    deps: list[Path] = []
    for source in (Path(a) for a in args if not a.startswith(("/", "-", "@")) and a.lower().endswith(SOURCES)):
        deps += [d for d in includes(source, folders) if d not in deps]
    write_depfile(depfile, str(depfile)[: -len(".d")] if str(depfile).endswith(".d") else str(depfile), deps)


def main(argv: list[str] | None = None) -> int:
    argv = list(sys.argv[1:] if argv is None else argv)
    if len(argv) < 3 or argv[0] != "--vc6":
        raise SystemExit("usage: python -m tools.vc6 --vc6 DIR [--depfile FILE] TOOL [ARGS...]")
    vc6_dir, rest = Path(argv[1]), argv[2:]
    depfile = None
    if rest[:1] == ["--depfile"] and len(rest) >= 3:
        depfile, rest = Path(rest[1]), rest[2:]
    code = run(vc6_dir, rest[0], rest[1:])
    if code == 0 and depfile is not None:
        depfile_for(depfile, rest[1:])
    return code


if __name__ == "__main__":
    raise SystemExit(main())
