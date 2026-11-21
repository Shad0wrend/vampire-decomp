"""Check the build against your copy of the original DLL (`ninja verify`).

    python -m tools.verify [--orig orig/<target>] [--build build] [--function 0x<addr>]

The build is not at the game's addresses, so it is compared rule by rule, every game address coming from
config/addresses.txt (and config/aliases.txt):
- functions: the game's bytes at the block's address equal the built function's outside relocations; at each
  relocation of the object's code, the game's word reaches the game address of the same symbol (a word that reaches an
  incremental-link stub, `E9 rel32`, is followed through it). A static function of the object with no address of its
  own (an initializer's `$E` steps, a local static's destroy) is placed where the game's word reaches, and checked
  there the same way;
- initializers: each initializer object's `.CRT$XCU` entries are the game's table entries from the block's address
  on, checked as functions; the built table runs the game's initializers in the game's order;
- data: each relocated word of a data object (`DD OFFSET`) reaches, in the game, the game address of its symbol;
- vtables: each slot of a vtable the objects emit runs, in the build, the counterpart of the game's slot (a slot
  config/vtable_patches.txt patches is reported as a `slot` difference all the same: its source is not right yet);
- exports and imports: names and ordinals equal the game's; each export runs the counterpart of the game's.
A difference config/known_differences.txt names is shown apart; any other one fails verify (exit code 1).
Writes build/report.json."""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
from collections import Counter
from dataclasses import asdict, dataclass, field
from pathlib import Path

from .cfg import Block, read_addresses, read_aliases, read_blocks, read_build, read_known, read_patches
from .coff import SYM_CLASS_STATIC, SYM_CLASS_WEAK_EXTERNAL, Coff, CoffError, Section, Symbol
from .mapfile import read_map
from .pe import PE

DIR32, DIR32NB, REL32 = 0x6, 0x7, 0x14
CODE = 0x00000020 | 0x20000000  # IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_EXECUTE
NOT_LOADED = 0x00000200 | 0x00000800 | 0x02000000  # LNK_INFO | LNK_REMOVE | MEM_DISCARDABLE
XCU = ".CRT$XCU"
INIT_OBJ = re.compile(r"i([0-9a-f]{8})")
MASK = 0xFFFFFFFF


@dataclass
class Difference:
    kind: str  # function / initializer / data / slot / slot-patch / vtable / xcu-* / export-* / import-*
    place: str
    detail: str = ""


@dataclass
class Report:
    functions: dict[int, str] = field(default_factory=dict)  # block address -> identical / differs@... / missing
    initializers: dict[int, str] = field(default_factory=dict)
    data: dict[str, str] = field(default_factory=dict)  # data object -> identical / differs@<game address>
    slots: dict[str, int] = field(default_factory=lambda: {"vtables": 0, "checked": 0, "patched": 0})
    xcu: int = 0  # game initializer table entries
    exports: int = 0
    imports: int = 0
    stubs_followed: int = 0
    known: list[Difference] = field(default_factory=list)
    unknown: list[Difference] = field(default_factory=list)
    stale: list[Difference] = field(default_factory=list)  # known differences nothing reported


def compare_xcu(game: list[int], built: list[str]) -> list[tuple[str, str]]:
    """The built initializer table (each entry's object) against the game's (each entry's function address). An
    object i<addr> stands for the game's entries from <addr> on, one per entry it puts in the table."""
    position = {a: k for k, a in enumerate(game)}
    out, seen, used, high = [], set(), Counter(), -1
    for obj in built:
        m = INIT_OBJ.fullmatch(obj)
        start = position.get(int(m.group(1), 16)) if m else None
        index = start + used[obj] if start is not None else None
        if index is None or index >= len(game):
            out.append(("xcu-extra", obj))
            continue
        used[obj] += 1
        seen.add(index)
        if index < high:
            out.append(("xcu-order", obj))
        high = max(high, index)
    out += [("xcu-missing", f"0x{a:08x}") for k, a in enumerate(game) if k not in seen]
    return out


def compare_exports(game: dict[str, int], built: dict[str, int]) -> list[tuple[str, str]]:
    out = [("export-missing", n) for n in sorted(game) if n not in built]
    out += [("export-extra", n) for n in sorted(built) if n not in game]
    if any(built[n] != o for n, o in game.items() if n in built):
        out.append(("export-ordinal", "ordinals"))
    return out


def compare_imports(game: dict[str, list[str]], built: dict[str, list[str]]) -> list[tuple[str, str]]:
    out = []
    for dll in sorted(set(game) | set(built)):
        g, b = set(game.get(dll, ())), set(built.get(dll, ()))
        out += [("import-missing", f"{dll}!{n}") for n in sorted(g - b)]
        out += [("import-extra", f"{dll}!{n}") for n in sorted(b - g)]
    return out


def _original(path: Path, sha1: str, target: str) -> PE:
    if not path.exists():
        raise SystemExit(f"{path} not found: copy your game's {target} there (orig/README.txt)")
    found = hashlib.sha1(path.read_bytes()).hexdigest()
    if found != sha1.lower():
        raise SystemExit(f"{path}: SHA-1 {found}, expected {sha1} (config/build.toml): not the {target} this project "
                         f"matches")
    return PE(path)


class _Object:
    def __init__(self, name: str, coff: Coff):
        self.name = name
        self.coff = coff
        self.symbols = {s.index: s for s in coff.symbols}
        self.sections = {s.number: s for s in coff.sections}

    def defined(self, name: str) -> Symbol | None:
        return next((s for s in self.coff.symbols if s.name == name and s.is_defined), None)

    def xcu_entries(self) -> list[Symbol]:
        out = []
        for section in sorted(self.coff.sections, key=lambda s: s.number):
            if section.name.startswith(XCU):
                out += [self.symbols[r.symbol_index] for r in sorted(section.relocations, key=lambda r: r.offset)]
        return out


class Verifier:
    def __init__(self, root: Path, orig: Path, build: str = "build"):
        self.root = Path(root)
        config = self.root / "config"
        self.values = read_build(config / "build.toml")
        target = self.values["target"]["name"]
        self.orig = _original(Path(orig), self.values["target"]["sha1"], target)
        self.build_dir = self.root / build
        dll = self.build_dir / target
        if not dll.exists():
            raise SystemExit(f"{dll} not found: run ninja first")
        self.dll = dll
        self.built = PE(dll)
        self.map = read_map(self.build_dir / Path(target).with_suffix(".map").name)
        self.addresses = read_addresses(config / "addresses.txt")
        self.aliases = read_aliases(config / "aliases.txt") if (config / "aliases.txt").exists() else {}
        self.blocks = read_blocks(config / "blocks.txt")
        patches = read_patches(config / "vtable_patches.txt") if (config / "vtable_patches.txt").exists() else []
        self.patched = {(p.vtable, p.slot): p for p in patches}
        self.known = read_known(config / "known_differences.txt") \
            if (config / "known_differences.txt").exists() else []
        self.stubs = 0
        self.game_xcu = self._game_xcu()

    # --- addresses ---------------------------------------------------------------------------------------------
    def lookup(self, name: str) -> int | None:
        found = self.addresses.get(name)
        if found is None and name in self.aliases:
            found = self.addresses.get(self.aliases[name])
        return found

    def resolve(self, obj: _Object, sym: Symbol) -> int | None:
        """The game address of a symbol an object's relocation names, or None."""
        if sym.storage_class == SYM_CLASS_STATIC:
            if sym.aux and sym.value == 0 and sym.name.startswith("."):  # a section's own symbol
                return self.addresses.get(f"{obj.name}/#{sym.section_number}")
            return self.addresses.get(f"{obj.name}/{sym.name}")
        found = self.addresses.get(f"{obj.name}/{sym.name}")  # this object's copy of a constant the game has several of
        if found is None:
            found = self.lookup(sym.name)
        if found is None and sym.storage_class == SYM_CLASS_WEAK_EXTERNAL and len(sym.aux) >= 4:
            default = obj.symbols.get(struct.unpack_from("<I", sym.aux)[0])  # `??_E` -> its `??_G`
            found = self.lookup(default.name) if default is not None else None
        return found

    def follow(self, addr: int) -> int:
        """Where a game address ends up through incremental-link stubs (`E9 rel32`)."""
        for _ in range(4):
            try:
                code = self.orig.read(addr, 5)
            except ValueError:
                break
            if code[0] != 0xE9:
                break
            addr = (addr + 5 + struct.unpack_from("<i", code, 1)[0]) & MASK
        return addr

    def reaches(self, start: int, expected: int) -> bool:
        if start == expected:
            return True
        addr = start
        for hops in range(1, 5):
            try:
                code = self.orig.read(addr, 5)
            except ValueError:
                return False
            if code[0] != 0xE9:
                return False
            addr = (addr + 5 + struct.unpack_from("<i", code, 1)[0]) & MASK
            if addr == expected:
                self.stubs += hops
                return True
        return False

    def _word(self, image: PE, addr: int) -> int | None:
        try:
            return struct.unpack("<I", image.read(addr, 4))[0]
        except ValueError:
            return None

    # --- objects -----------------------------------------------------------------------------------------------
    def load(self, name: str) -> _Object | None:
        for folder in ("link", "obj"):
            path = self.build_dir / folder / f"{name}.obj"
            if path.exists():
                try:
                    return _Object(name, Coff.parse(path.read_bytes()))
                except CoffError:
                    return None
        return None

    # --- code --------------------------------------------------------------------------------------------------
    def check_code(self, obj: _Object, roots: list[tuple[Symbol, int, int | None]]) -> list[tuple[int, int, str]]:
        """Problems (game function address, offset, why) of the functions `roots` (symbol, game address, size or
        None for the whole section) and every static function they reach that has no game address of its own."""
        placed = {sym.index: addr for sym, addr, _ in roots}
        todo = list(roots)
        problems = []
        while todo:
            sym, addr, size = todo.pop(0)
            section = obj.sections[sym.section_number]
            data = section.data[sym.value:]
            n = len(data) if size is None else size
            if len(data) != n:
                problems.append((addr, min(len(data), n), f"the object's code is {len(data)} bytes, the game's {n}"))
                n = min(len(data), n)
            try:
                game = self.orig.read(addr, n)
            except ValueError:
                problems.append((addr, 0, "outside the original's sections"))
                continue
            at = self.map.address(sym.name, obj.name)
            try:
                built = self.built.read(at, n) if at is not None else data[:n]
            except ValueError:
                built = data[:n]
            masked = set()
            for r in section.relocations:
                offset = r.offset - sym.value
                if not 0 <= offset < n:
                    continue
                masked.update(range(offset, offset + 4))
                why = self._relocation(obj, sym, section, r.offset, r, addr + offset, addr, placed, todo)
                if why:
                    problems.append((addr, offset, why))
            first = next((i for i in range(n) if i not in masked and built[i] != game[i]), None)
            if first is not None:
                problems.append((addr, first, f"byte 0x{built[first]:02x}, the game's 0x{game[first]:02x}"))
        return problems

    def _relocation(self, obj, sym, section, where, r, site, addr, placed, todo) -> str | None:
        target = obj.symbols[r.symbol_index]
        raw = section.data[where:where + 4]
        if r.type in (DIR32, DIR32NB):
            addend = struct.unpack("<I", raw)[0]
        elif r.type == REL32:
            addend = struct.unpack("<i", raw)[0]
        else:
            return f"relocation type 0x{r.type:x} at {target.name}"
        word = self._word(self.orig, site)
        if word is None:
            return "outside the original's sections"
        reached = {REL32: (site + 4 + word) & MASK, DIR32NB: (word + self.orig.image_base) & MASK}.get(r.type, word)
        if target.section_number == sym.section_number and target.is_defined:  # a jump table entry, a label
            expected = addr + target.value - sym.value + addend
        else:
            expected = self.resolve(obj, target)
            if expected is None and target.index in placed:
                expected = placed[target.index]
            elif expected is None:
                home = obj.sections.get(target.section_number)
                if target.storage_class == SYM_CLASS_STATIC and home is not None and home.characteristics & CODE:
                    placed[target.index] = where_ = (self.follow(reached) - addend) & MASK
                    todo.append((target, where_, None))
                    return None
                return f"{target.name} has no game address (config/addresses.txt)"
            expected = (expected + addend) & MASK
        if not self.reaches(reached, expected):
            return f"{target.name}: the game's word reaches 0x{reached:08x}, not 0x{expected:08x}"
        return None

    def roots(self, block: Block, obj: _Object) -> tuple[list, str | None]:
        if block.kind == "b":
            sym = obj.defined(block.target)
            return ([(sym, block.addr, block.size)], None) if sym else ([], f"{block.target} is not in {obj.name}.obj")
        entries = obj.xcu_entries()
        if not entries:
            return [], f"{obj.name}.obj puts nothing in the initializer table"
        if self.game_xcu is None:
            return [(entries[0], block.addr, block.size)], None
        if block.addr not in self.game_xcu:
            return [], f"0x{block.addr:08x} is not in the game's initializer table"
        start = self.game_xcu.index(block.addr)
        games = self.game_xcu[start:start + len(entries)]
        if len(games) < len(entries):
            return [], f"{len(entries)} initializers, the game's table has {len(games)} from here"
        return [(e, a, block.size if k == 0 else None) for k, (e, a) in enumerate(zip(entries, games))], None

    def check_block(self, block: Block, obj: _Object | None) -> tuple[str, list[str]]:
        if obj is None:
            return "missing", [f"{block.obj}.obj not built"]
        roots, why = self.roots(block, obj)
        if why:
            return "missing", [why]
        problems = sorted(self.check_code(obj, roots), key=lambda p: (p[0] != block.addr, p[0], p[1]))
        if not problems:
            return "identical", []
        a, offset, _ = problems[0]
        status = f"differs@0x{offset:x}" if a == block.addr else f"differs@0x{a:08x}+0x{offset:x}"
        return status, [f"0x{a:08x}+0x{o:x}: {w}" for a, o, w in problems]

    # --- vtables -----------------------------------------------------------------------------------------------
    def check_vtables(self, obj: _Object, seen: set[str], report: Report, out: list[Difference]) -> None:
        for sym in obj.coff.symbols:
            if not (sym.is_defined and sym.name.startswith("??_7")) or sym.name in seen:
                continue
            seen.add(sym.name)
            section = obj.sections[sym.section_number]
            end = min([s.value for s in obj.coff.symbols if s.section_number == sym.section_number
                       and s.value > sym.value] + [len(section.data)])
            game_vt, built_vt = self.lookup(sym.name), self.map.address(sym.name, obj.name)
            if game_vt is None or built_vt is None:
                out.append(Difference("vtable", sym.name, "no game address" if game_vt is None
                                      else "not in the build's map"))
                continue
            report.slots["vtables"] += 1
            for r in sorted(section.relocations, key=lambda r: r.offset):
                if not sym.value <= r.offset < end:
                    continue
                slot = (r.offset - sym.value) // 4
                place = f"{sym.name}:{slot}"
                word = self._word(self.built, built_vt + 4 * slot)
                names = self.map.names.get(word, [])
                expected = {a for a in map(self.lookup, names) if a is not None}
                game_word = self._word(self.orig, game_vt + 4 * slot)
                game_fn = self.follow(game_word) if game_word is not None else None
                ok = game_fn in expected
                report.slots["checked"] += 1
                runs = names[0] if names else f"0x{word or 0:08x}"
                if (sym.name, slot) in self.patched:
                    report.slots["patched"] += 1
                    out.append(Difference("slot" if ok else "slot-patch", place,
                                          f"patched to {runs}" + ("" if ok else f", the game's runs 0x{game_fn:08x}")))
                elif not ok:
                    game_text = f"0x{game_fn:08x}" if game_fn is not None else "nothing"
                    out.append(Difference("slot", place, f"the build's runs {runs}, the game's {game_text}"))

    # --- data --------------------------------------------------------------------------------------------------
    def check_data(self, report: Report, out: list[Difference]) -> None:
        folder = self.root / "src" / "_data"
        for template in sorted(folder.glob("*.asm.in")) if folder.is_dir() else []:
            stem = template.name[: -len(".asm.in")]
            obj = self.load(stem)
            if obj is None:
                report.data[stem] = "missing"
                out.append(Difference("data", stem, f"{stem}.obj not built"))
                continue
            first = None
            for section in obj.coff.sections:
                if section.characteristics & (NOT_LOADED | CODE) or not section.relocations:
                    continue
                labels = sorted(((s.value, a) for s in obj.coff.symbols if s.section_number == section.number
                                 and (a := self.resolve(obj, s)) is not None), key=lambda p: p[0])
                for r in sorted(section.relocations, key=lambda r: r.offset):
                    label = next((p for p in reversed(labels) if p[0] <= r.offset), None)
                    if label is None:
                        why, place = "no label with a game address before this word", f"{stem}+0x{r.offset:x}"
                    else:
                        site = label[1] + r.offset - label[0]
                        place = f"0x{site:08x}"
                        why = self._data_word(obj, section, r, site)
                    if why:
                        out.append(Difference("data", place, why))
                        first = first or place
            report.data[stem] = "identical" if first is None else f"differs@{first}"

    def _data_word(self, obj: _Object, section: Section, r, site: int) -> str | None:
        target = obj.symbols[r.symbol_index]
        if r.type not in (DIR32, DIR32NB):
            return f"relocation type 0x{r.type:x} at {target.name}"
        expected = self.resolve(obj, target)
        if expected is None:
            return f"{target.name} has no game address (config/addresses.txt)"
        expected = (expected + struct.unpack("<I", section.data[r.offset:r.offset + 4])[0]) & MASK
        word = self._word(self.orig, site)
        if word is None:
            return "outside the original's sections"
        reached = (word + self.orig.image_base) & MASK if r.type == DIR32NB else word
        if not self.reaches(reached, expected):
            return f"{target.name}: the game's word is 0x{word:08x}, not 0x{expected:08x}"
        return None

    # --- tables ------------------------------------------------------------------------------------------------
    def _table(self, image: PE, lo: int, hi: int) -> list[int]:
        words = [self._word(image, a) for a in range(lo + 4, hi, 4)]
        return [w for w in words if w]

    def _game_xcu(self) -> list[int] | None:
        values = self.values.get("verify", {})
        lo, hi = values.get("xc_a", self.lookup("___xc_a")), values.get("xc_z", self.lookup("___xc_z"))
        if lo is None or hi is None:
            return None
        return [self.follow(w) for w in self._table(self.orig, lo, hi)]

    def check_tables(self, report: Report, out: list[Difference]) -> None:
        lo, hi = self.map.publics.get("___xc_a"), self.map.publics.get("___xc_z")
        if self.game_xcu is not None and lo is not None and hi is not None:
            report.xcu = len(self.game_xcu)
            built = [self.map.objects.get(w, f"?{w:08x}") for w in self._table(self.built, lo, hi)]
            out += [Difference(k, p) for k, p in compare_xcu(self.game_xcu, built)]
        game, ours = self.orig.export_table(), self.built.export_table()
        report.exports = len(game)
        out += [Difference(k, p) for k, p in compare_exports({n: o for n, o, _ in game}, {n: o for n, o, _ in ours})]
        game_at = {n: a for n, _, a in game}
        for name, _, at in ours:
            if name in game_at:
                expected = {a for a in map(self.lookup, self.map.names.get(at, [])) if a is not None}
                if self.follow(game_at[name]) not in expected:
                    out.append(Difference("export-target", name, f"the game's runs 0x{self.follow(game_at[name]):08x}"))
        imports = self.orig.imports()
        report.imports = sum(len(v) for v in imports.values())
        out += [Difference(k, p) for k, p in compare_imports(imports, self.built.imports())]

    # --- all ---------------------------------------------------------------------------------------------------
    def run(self) -> Report:
        report = Report()
        out: list[Difference] = []
        seen_vtables: set[str] = set()
        for block in self.blocks:
            obj = self.load(block.obj)
            status, why = self.check_block(block, obj)
            (report.functions if block.kind == "b" else report.initializers)[block.addr] = status
            if status != "identical":
                out.append(Difference("function" if block.kind == "b" else "initializer", f"0x{block.addr:08x}",
                                      f"{status}: {'; '.join(why[:3])}"))
            if obj is not None:
                self.check_vtables(obj, seen_vtables, report, out)
        self.check_data(report, out)
        self.check_tables(report, out)
        known = {(k.kind, k.place) for k in self.known}
        for d in out:
            (report.known if (d.kind, d.place) in known else report.unknown).append(d)
        reported = {(d.kind, d.place) for d in out}
        report.stale = [Difference(k.kind, k.place, k.reason) for k in self.known if (k.kind, k.place) not in reported]
        report.stubs_followed = self.stubs
        return report


def run(root: Path, orig: Path, build: str = "build") -> Report:
    return Verifier(root, orig, build).run()


def _counts(statuses: dict[int, str]) -> str:
    c = Counter("identical" if s == "identical" else "missing" if s == "missing" else "differ" for s in statuses.values())
    return f"{len(statuses)}: {c['identical']} identical, {c['differ']} differ, {c['missing']} missing"


def _hex(data: bytes) -> list[str]:
    return [" ".join(f"{b:02x}" for b in data[i:i + 16]) for i in range(0, len(data), 16)]


def _disassembly(data: bytes, addr: int) -> list[str]:
    try:
        import capstone  # optional: `pip install capstone` for disassembly
    except ImportError:
        return []
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    return [f"  {i.address:08x}  {i.mnemonic} {i.op_str}" for i in md.disasm(data, addr)]


def show(v: Verifier, addr: int) -> int:
    block = next((b for b in v.blocks if b.addr == addr), None)
    if block is None:
        print(f"0x{addr:08x} is not a block in config/blocks.txt")
        return 1
    obj = v.load(block.obj)
    status, why = v.check_block(block, obj)
    print(f"0x{addr:08x} {block.target or 'initializer'} ({block.obj}): {status}")
    for line in why:
        print(f"  {line}")
    roots = v.roots(block, obj)[0] if obj is not None else []
    if roots:
        sym = roots[0][0]
        at = v.map.address(sym.name, obj.name)
        game = v.orig.read(addr, block.size)
        built = v.built.read(at, block.size) if at is not None else b""
        for label, start, data in (("original", addr, game), ("build", at, built)):
            print(f"{label} 0x{start or 0:08x}:")
            print("\n".join(f"  {row}" for row in _hex(data)))
            print("\n".join(_disassembly(data, start or 0)))
    return 0 if status == "identical" else 1


def main(argv: list[str] | None = None) -> int:
    p = argparse.ArgumentParser(prog="tools.verify", description=__doc__.splitlines()[0])
    p.add_argument("--root", type=Path, default=Path.cwd(), help=argparse.SUPPRESS)
    p.add_argument("--orig", type=Path, help="the original DLL (default: orig/<target name>)")
    p.add_argument("--build", default="build")
    p.add_argument("--function", help="print one block's check and both byte runs (0x<addr>)")
    args = p.parse_args(argv)
    root = args.root.resolve()
    target = read_build(root / "config" / "build.toml")["target"]["name"]
    orig = args.orig if args.orig is not None else root / "orig" / target
    v = Verifier(root, orig, args.build)
    if args.function:
        return show(v, int(args.function, 16))
    report = v.run()
    data = asdict(report)
    data["functions"] = {f"0x{a:08x}": s for a, s in report.functions.items()}
    data["initializers"] = {f"0x{a:08x}": s for a, s in report.initializers.items()}
    (v.build_dir / "report.json").write_text(json.dumps(data, indent=1), encoding="utf-8")
    print(f"verify {v.dll} against {orig}")
    print(f"  functions     {_counts(report.functions)}")
    print(f"  initializers  {_counts(report.initializers)}")
    data_ok = sum(s == "identical" for s in report.data.values())
    print(f"  data          {len(report.data)} objects: {data_ok} identical")
    print(f"  vtables       {report.slots['vtables']} ({report.slots['checked']} slots, "
          f"{report.slots['patched']} patched)")
    print(f"  tables        {report.xcu} initializer entries, {report.exports} exports, {report.imports} imports")
    print(f"  stubs         {report.stubs_followed} incremental-link jumps followed in the original")
    print(f"  differences   {len(report.unknown)} unknown, {len(report.known)} known (config/known_differences.txt)")
    for d in report.unknown[:40]:
        print(f"    {d.kind} {d.place}: {d.detail}")
    if len(report.unknown) > 40:
        print(f"    ... {len(report.unknown) - 40} more in {v.build_dir / 'report.json'}")
    if report.stale:
        print(f"  {len(report.stale)} known difference{'s' if len(report.stale) != 1 else ''} not seen any more: "
              f"run pcdecomp standalone to drop {'them' if len(report.stale) != 1 else 'it'}")
    print("verify: OK" if not report.unknown else "verify: FAILED")
    return 0 if not report.unknown else 1


if __name__ == "__main__":
    raise SystemExit(main())
