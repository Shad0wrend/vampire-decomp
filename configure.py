"""Configure the build: writes build.ninja; then `ninja` builds build/<target> and `ninja verify` checks it.

    python configure.py [--vc6 DIR] [--orig FILE]

--vc6   the folder holding Visual C++ 6.0's VC98 (default: $VC6_DIR, else the installer's default place)
--orig  your own copy of the original DLL (default: orig/<target name>); its bytes fill the data templates

Every block in src/ compiles alone into its own object, as pcdecomp's judge compiled it (tools/blocks.py). The
tables in config/ (written by `pcdecomp standalone`) say how the objects are fixed up and linked."""

from __future__ import annotations

import argparse
import sys
from pathlib import Path, PureWindowsPath

if __package__:  # imported from pcdecomp, where these files are kept and tested
    from .tools import blocks, cfg, fixup, vc6
else:  # run as `python configure.py` from the repository's root
    from tools import blocks, cfg, fixup, vc6

NINJA = "build.ninja"


def cc_args(flags: list[str], include: str, obj: str, src: str) -> list[str]:
    """cl's arguments for one block: the judge's (pcdecomp msvc.Compiler with extra flag /Gy)."""
    return ["/nologo", "/c", *flags, "/Gy", f"/I{include}", f"/Fo{obj}", src]


def plain_args(flags: list[str], obj: str, src: str) -> list[str]:
    """cl's arguments for the bss package and the gap fillers (no /Gy, no include folder)."""
    return ["/nologo", "/c", *flags, f"/Fo{obj}", src]


def _win(path: Path | str) -> str:
    return str(PureWindowsPath(path))


def _esc(path: Path | str) -> str:
    """A path as a ninja build line needs it."""
    return _win(path).replace("$", "$$").replace(" ", "$ ").replace(":", "$:")


def _quote(text: str) -> str:
    return f'"{text}"' if " " in text else text


class Objects:
    """The link's objects in order, each with the file the link reads (a fixed-up copy where config/ says so)."""

    def __init__(self) -> None:
        self.order: list[str] = []
        self.compiled: dict[str, str] = {}  # object name -> build/obj path

    def add(self, name: str) -> str:
        self.order.append(name)
        self.compiled[name] = _win(Path("build") / "obj" / f"{name}.obj")
        return self.compiled[name]


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(prog="configure.py", description=__doc__.splitlines()[0])
    p.add_argument("--vc6", type=Path, help="the folder holding VC98 (Visual C++ 6.0)")
    p.add_argument("--orig", type=Path, help="the original DLL (default: orig/<target name>)")
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parent, help=argparse.SUPPRESS)
    args = p.parse_args(argv)
    root = args.root.resolve()
    config = root / "config"
    vc6_dir = vc6.find(args.vc6)
    build = cfg.read_build(config / "build.toml")
    target = build["target"]["name"]
    orig = args.orig or Path("orig") / target
    flags, prelude = list(build["compiler"]["flags"]), build["compiler"]["prelude"]

    listed = cfg.read_blocks(config / "blocks.txt")
    units = blocks.write_units(root / "src", root / "build" / "src", prelude)
    missing = [b for b in listed if b.addr not in units]
    if missing:
        for b in missing[:20]:
            print(f"0x{b.addr:08x} ({b.target or 'initializer'}): listed in config/blocks.txt, not in src/")
        print(f"{len(missing)} listed block{'s' if len(missing) != 1 else ''} missing from src/: nothing configured")
        return 1
    known = {b.addr for b in listed}
    unlisted = [a for a in units if a not in known]
    if unlisted:
        n = len(unlisted)
        print(f"{n} block{'s' if n != 1 else ''} in src/ {'is' if n == 1 else 'are'} not in config/blocks.txt: "
              f"run pcdecomp standalone")
    # an edited block may need other fix-ups, vtable patches or known differences than config/ lists; a fix-up that
    # no longer fits stops the build (tools/fixup.py), anything else only shows in `ninja verify`
    changed = [b.addr for b in listed if b.digest and blocks.unit_digest(units[b.addr].read_bytes()) != b.digest]
    if changed:
        n = len(changed)
        print(f"{n} listed block{'s' if n != 1 else ''} changed since config/ was written "
              f"({', '.join(f'0x{a:08x}' for a in changed[:5])}{' ...' if n > 5 else ''}): run pcdecomp standalone")

    lines = [
        "# Written by configure.py; ninja runs it again when src/, config/ or tools/ change.",
        "ninja_required_version = 1.7",
        f"python = {_quote(sys.executable)}",
        f"vc6 = {vc6_dir}",
        f"orig = {_win(orig)}",
        f"sha1 = {build['target']['sha1']}",
        f"flags = {' '.join(flags)}",
        "incdir = include",  # not `include`: a ninja keyword (include FILE)
        f"linkflags = /NOLOGO {' '.join(build['link']['options'])}",
        f"syslibs = {' '.join(build['link']['libs'])}",
        f"map = {_win(Path('build') / Path(target).with_suffix('.map'))}",
        "",
        "rule cc",
        f"  command = $python -m tools.vc6 --vc6 \"$vc6\" --depfile $out.d cl "
        f"{' '.join(cc_args(['$flags'], '$incdir', '$out', '$in'))}",
        "  description = cc $in",
        "  depfile = $out.d",  # the headers the unit includes (tools.vc6 scans them): a header edit rebuilds it
        "  deps = gcc",
        "rule cc_plain",
        f"  command = $python -m tools.vc6 --vc6 \"$vc6\" cl {' '.join(plain_args(['$flags'], '$out', '$in'))}",
        "  description = cc $in",
        "rule data",
        "  command = $python -m tools.data_asm --orig \"$orig\" --sha1 $sha1 $in $out",
        "  description = data $out",
        "rule ml",
        "  command = $python -m tools.vc6 --vc6 \"$vc6\" ml /nologo /c /coff /Cp /Fo$out $in",
        "  description = ml $in",
        "rule fixup",
        "  command = $python -m tools.fixup --name $name $in $out",
        "  description = fixup $name",
        "rule alias",
        "  command = $python -m tools.alias_obj $in $out",
        "  description = alias $out",
        "rule implib",
        "  command = $python -m tools.vc6 --vc6 \"$vc6\" lib /NOLOGO /MACHINE:IX86 /DEF:$in /OUT:$out",
        "  description = lib $out",
        "rule link",
        "  command = $python -m tools.vc6 --vc6 \"$vc6\" link /OUT:$out /MAP:$map @$out.rsp",
        "  rspfile = $out.rsp",
        "  rspfile_content = $linkflags $in_newline $syslibs",
        "  description = link $out",
        "rule patch",
        "  command = $python -m tools.patch_vtables --map $map --patches config\\vtable_patches.txt $in $out",
        "  description = patch $out",
        "rule verify",
        "  command = $python -m tools.verify --orig \"$orig\" --build build",
        "  description = verify",
        "  pool = console",
        "rule configure",
        "  command = $python configure.py --vc6 \"$vc6\" --orig \"$orig\"",
        "  description = configure",
        "  generator = 1",
        "",
    ]

    objects = Objects()
    kind = {b.addr: b.kind for b in listed}
    for addr in [b.addr for b in listed] + unlisted:
        obj = objects.add(f"{kind.get(addr, 'b')}{addr:08x}")
        lines.append(f"build {_esc(obj)}: cc {_esc(Path('build') / 'src' / f'{addr:08x}.cpp')}")
    bss_dir = root / "src" / "_bss"
    for src in sorted(bss_dir.glob("*.cpp")) if bss_dir.is_dir() else []:
        obj = objects.add(f"bss_{src.stem}")
        lines.append(f"build {_esc(obj)}: cc_plain {_esc(src.relative_to(root))}")

    layout = cfg.read_layout(config / "bss_layout.txt") if (config / "bss_layout.txt").exists() else []
    gaps = [(r.addr, r.size) for r in layout if r.op == "gap"]
    if gaps:
        gaps_cpp = root / "build" / "gaps.cpp"
        text = fixup.gaps_source(gaps)
        if not gaps_cpp.exists() or gaps_cpp.read_text(encoding="ascii") != text:
            gaps_cpp.write_text(text, encoding="ascii", newline="\n")
        lines.append(f"build {_esc(objects.add('gaps'))}: cc_plain {_esc(Path('build') / 'gaps.cpp')}")

    data_dir = root / "src" / "_data"
    for template in sorted(data_dir.glob("*.asm.in")) if data_dir.is_dir() else []:
        stem = template.name[: -len(".asm.in")]
        asm = Path("build") / "data" / f"{stem}.asm"
        lines.append(f"build {_esc(asm)}: data {_esc(template.relative_to(root))} | $orig")
        lines.append(f"build {_esc(objects.add(stem))}: ml {_esc(asm)}")

    aliases = config / "aliases.txt"
    if aliases.exists() and cfg.read_aliases(aliases):
        lines.append(f"build {_esc(objects.add('alias'))}: alias {_esc(aliases.relative_to(root))}")

    libs = []
    for dll in build["imports"]["dlls"]:
        stem = Path(dll).stem
        lib = Path("build") / "lib" / f"{stem}.lib"
        lines.append(f"build {_esc(lib)}: implib {_esc(Path('config') / 'imports' / f'{stem}.def')}")
        libs.append(_win(lib))

    fixups = cfg.read_fixups(config / "fixups.txt") if (config / "fixups.txt").exists() else []
    fixed = {f.obj for f in fixups} | {r.obj for r in layout if r.op == "rename"}
    unknown = sorted(fixed - set(objects.order))
    if unknown:
        print(f"{len(unknown)} object{'s' if len(unknown) != 1 else ''} named in config/fixups.txt or "
              f"config/bss_layout.txt {'is' if len(unknown) == 1 else 'are'} not in the build ({unknown[0]} ...): "
              f"run pcdecomp standalone")
    inputs = []
    for name in objects.order:
        compiled = objects.compiled[name]
        if name in fixed:
            linked = _win(Path("build") / "link" / f"{name}.obj")
            lines.append(f"build {_esc(linked)}: fixup {_esc(compiled)} | config\\fixups.txt config\\bss_layout.txt")
            lines.append(f"  name = {name}")
            inputs.append(linked)
        else:
            inputs.append(compiled)

    unpatched = Path("build") / "unpatched" / target
    final = Path("build") / target
    lines.append(f"build {_esc(unpatched)} | $map: link {' '.join(_esc(i) for i in inputs + libs)} | "
                 f"config\\build.toml")
    lines.append(f"build {_esc(final)}: patch {_esc(unpatched)} | $map config\\vtable_patches.txt")
    lines.append(f"build verify: verify {_esc(final)}")
    lines.append(f"default {_esc(final)}")

    regen = [Path("configure.py"), *sorted(p.relative_to(root) for p in (root / "tools").glob("*.py")),
             *sorted(p.relative_to(root) for p in config.rglob("*") if p.is_file()),
             *sorted({q.relative_to(root) for q in (root / "src").rglob("*") if q.is_dir()} | {Path("src")}),
             *sorted(p.relative_to(root) for p in (root / "src").rglob("*.cpp"))]
    lines.append(f"build {NINJA}: configure | {' '.join(_esc(r) for r in regen)}")
    # every input also stands alone as a phony target (as CMake writes its own): a file or folder that goes away
    # (relayout removes emptied files) is then out of date, and ninja runs configure instead of stopping at
    # "missing and no known rule to make it"
    lines.append(f"build {' '.join(_esc(r) for r in regen)}: phony")
    text = "\n".join(lines) + "\n"
    # written even when unchanged: ninja runs configure while build.ninja is older than an input, so a run that kept
    # the old file would leave it older and ninja would run configure again and again
    (root / NINJA).write_text(text, encoding="utf-8", newline="\n")
    print(f"configured {len(listed) + len(unlisted)} blocks, {len(objects.order) - len(listed) - len(unlisted)} other "
          f"objects, {len(fixed & set(objects.order))} fixed up: run ninja")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
