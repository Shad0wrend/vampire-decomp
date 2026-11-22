"""Draw docs/progress.svg, the README's progress picture, from docs/progress.json.

    python tools/make_progress_svg.py              draw the picture from docs/progress.json
    python tools/make_progress_svg.py --collect --client DIR --game DIR
                                                   first refresh docs/progress.json from pcdecomp's databases
                                                   (this repo's project.db, DIR/project.db of the client.dll
                                                   project), build/report.json (`ninja verify`) and the game
                                                   folder's modules (their code section sizes)

Only the standard library. The databases are not part of the repository, so --collect works only where pcdecomp ran;
the picture can be drawn anywhere from the JSON.
"""
from __future__ import annotations

import argparse
import datetime
import json
import re
import sqlite3
import struct
from html import escape
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
DATA = ROOT / "docs" / "progress.json"
OUT = ROOT / "docs" / "progress.svg"

# The game's own modules (third-party libraries, runtimes and installers are out of scope), as `--game` lays them out
MODULES = ["Vampire/dlls/vampire.dll", "Vampire/cl_dlls/client.dll", "Vampire/cl_dlls/GameUI.dll", "Vampire.exe",
           "Bin/engine.dll", "Bin/vphysics.dll", "Bin/vampire_python21.dll", "Bin/StudioRender.dll",
           "Bin/shaderapidx9.dll", "Bin/MaterialSystem.dll", "Bin/vguimatsurface.dll", "Bin/vgui2.dll",
           "Bin/stdshader_dx8.dll", "Bin/tier0.dll", "Bin/FileSystem_Stdio.dll", "Bin/stdshader_dx6.dll",
           "Bin/vstdlib.dll", "Bin/stdshader_dbg.dll", "Bin/vaudio_miles.dll", "Bin/stdshader_dx7.dll",
           "Bin/launcher.dll", "Bin/stdshader_dx9.dll", "Bin/voice_miles.dll"]
BLOCK = re.compile(r"^// FUNCTION: 0x([0-9a-fA-F]{8}) size=", re.M)

# ---------------------------------------------------------------------------------------------------------- collect


def code_size(path: Path) -> int:
    """Bytes of a PE file's executable sections (their virtual sizes)."""
    b = path.read_bytes()
    pe = struct.unpack_from("<I", b, 0x3C)[0]
    count, optional = struct.unpack_from("<H", b, pe + 6)[0], struct.unpack_from("<H", b, pe + 20)[0]
    table = pe + 24 + optional
    return sum(struct.unpack_from("<I", b, table + 40 * i + 8)[0] for i in range(count)
               if struct.unpack_from("<I", b, table + 40 * i + 36)[0] & 0x20000000)


def _groups(db: sqlite3.Connection, folder_of) -> list[dict]:
    """Per group (folder_of(addr, unit) -> name): bytes and functions matched as C++, with inline assembly, open."""
    block_of = dict(db.execute("SELECT addr, block FROM companions"))
    asm = {a for (a,) in db.execute("SELECT addr FROM inline_asm")}
    groups: dict[str, dict] = {}
    for addr, size, status, unit in db.execute(
            "SELECT addr, size, status, COALESCE(unit, home, unit_guess) FROM functions WHERE status != 'skip'"):
        name = folder_of(block_of.get(addr, addr), unit)
        g = groups.setdefault(name, {"name": name, "cpp": 0, "asm": 0, "open": 0, "n_cpp": 0, "n_asm": 0, "n_open": 0})
        kind = "open" if status != "matched" else "asm" if addr in asm else "cpp"
        g[kind] += size
        g["n_" + kind] += 1
    return sorted(groups.values(), key=lambda g: -(g["cpp"] + g["asm"] + g["open"]))


def _fold(groups: list[dict], keep: int, rest: str) -> list[dict]:
    """The `keep` largest groups and the others summed into one named `rest`."""
    if len(groups) <= keep + 1:
        return groups
    other = {"name": rest, **{k: sum(g[k] for g in groups[keep:]) for k in groups[0] if k != "name"}}
    return groups[:keep] + [other]


def collect(client: Path, game: Path) -> dict:
    db = sqlite3.connect(f"file:{(ROOT / 'project.db').as_posix()}?mode=ro", uri=True)
    folder = {}
    for path in (ROOT / "src").rglob("*.cpp"):
        parts = path.relative_to(ROOT / "src").parts[:-1]
        name = "/".join(parts[:2]) if parts else "(top)"
        for m in BLOCK.finditer(path.read_text(encoding="cp1252", errors="replace")):
            folder[int(m.group(1), 16)] = name
    vampire = _groups(db, lambda addr, unit: folder.get(addr, "(not in src)"))
    db.close()
    cdb = sqlite3.connect(f"file:{(client / 'project.db').as_posix()}?mode=ro", uri=True)
    units = dict(cdb.execute("SELECT addr, COALESCE(unit, home, unit_guess) FROM functions"))

    def client_folder(addr: int, unit: str | None) -> str:
        unit = units.get(addr) or unit
        if not unit:
            return "no file yet"
        parts = unit.split("/")[:-1]
        return "/".join(parts[:2]) if parts else "(top)"
    clientg = _fold(_groups(cdb, client_folder), 13, "other folders")
    cdb.close()
    report = json.loads((ROOT / "build" / "report.json").read_text(encoding="utf-8"))
    known: dict[str, int] = {}
    for k in report["known"]:
        known[k["kind"]] = known.get(k["kind"], 0) + 1
    ident = lambda table: sum(v == "identical" for v in report[table].values())  # noqa: E731
    standalone = [
        {"name": "Function blocks", "done": ident("functions"), "total": len(report["functions"])},
        {"name": "Static initializers", "done": ident("initializers"), "total": len(report["initializers"])},
        {"name": "Data objects", "done": ident("data"), "total": len(report["data"])},
        {"name": "Vtable slots", "done": report["slots"]["checked"] - known.get("slot", 0),
         "total": report["slots"]["checked"], "note": f"{report['slots']['patched']} patched after the link"},
        {"name": "Exports", "done": report["exports"] - known.get("export-missing", 0), "total": report["exports"],
         "note": "SafeDisc data exports missing"},
        {"name": "Imports", "done": report["imports"], "total": report["imports"]},
    ]
    totals = lambda gs: {k: sum(g[k] for g in gs) for k in ("cpp", "asm", "open", "n_cpp", "n_asm", "n_open")}  # noqa: E731
    vt, ct = totals(vampire), totals(clientg)
    share = {"Vampire/dlls/vampire.dll": (vt["cpp"] + vt["asm"]) / (vt["cpp"] + vt["asm"] + vt["open"]),
             "Vampire/cl_dlls/client.dll": (ct["cpp"] + ct["asm"]) / (ct["cpp"] + ct["asm"] + ct["open"])}
    modules = [{"name": Path(m).name, "code": code_size(game / m), "done": share.get(m, 0.0)} for m in MODULES]
    return {"date": datetime.date.today().isoformat(), "modules": modules, "vampire": vampire,
            "standalone": standalone, "known": known, "client": clientg}

# ------------------------------------------------------------------------------------------------------------- draw


W, PAD, CELL = 900, 14, 9  # picture width, margin, cell pitch (8 px cell + 1 px gap)
BG, FG, DIM, LINE = "#0d1117", "#e6edf3", "#8b949e", "#30363d"
DONE, ASM, OPEN = "#2ea043", "#d29922", "#6e7681"
FONT = "-apple-system,'Segoe UI',Helvetica,Arial,sans-serif"
MONO = "ui-monospace,SFMono-Regular,Consolas,'Liberation Mono',monospace"


def squarify(values: list[float], x: float, y: float, w: float, h: float) -> list[tuple[float, float, float, float]]:
    """Squarified treemap: one rectangle per value (values sorted large first), filling x, y, w, h."""
    total = sum(values)
    rects: list[tuple[float, float, float, float]] = []
    items = [v * w * h / total for v in values]
    i = 0
    while i < len(items):
        short = min(w, h)
        row = [items[i]]
        j = i + 1

        def worst(r: list[float]) -> float:
            s = sum(r)
            return max(max(short * short * v / (s * s), s * s / (short * short * v)) for v in r)
        while j < len(items) and worst(row + [items[j]]) <= worst(row):
            row.append(items[j])
            j += 1
        s = sum(row)
        if w >= h:  # lay the row out as a column on the left
            cw = s / h
            yy = y
            for v in row:
                rects.append((x, yy, cw, v / cw))
                yy += v / cw
            x, w = x + cw, w - cw
        else:  # as a row on top
            rh = s / w
            xx = x
            for v in row:
                rects.append((xx, y, v / rh, rh))
                xx += v / rh
            y, h = y + rh, h - rh
        i = j
    return rects


def cells(x: float, y: float, w: float, h: float, parts: list[tuple[float, str]]) -> list[str]:
    """A grid of cells in x, y, w, h, coloured in order by the parts' shares (share, colour)."""
    cols, rows = int((w - 2) // CELL), int((h - 2) // CELL)
    out = [f'<rect x="{x:.1f}" y="{y:.1f}" width="{w:.1f}" height="{h:.1f}" fill="{BG}" stroke="{LINE}"/>']
    if cols < 1 or rows < 1:
        colour = max(parts)[1]
        return [f'<rect x="{x:.1f}" y="{y:.1f}" width="{w:.1f}" height="{h:.1f}" fill="{colour}" stroke="{BG}"/>']
    n, total = cols * rows, sum(s for s, _ in parts) or 1
    bounds, run = [], 0.0
    for share, colour in parts:
        run += share / total
        bounds.append((round(run * n), colour))
    ox, oy = x + (w - cols * CELL + 1) / 2, y + (h - rows * CELL + 1) / 2
    k = 0
    for r in range(rows):
        for c in range(cols):
            colour = next(col for b, col in bounds if k < b) if k < bounds[-1][0] else bounds[-1][1]
            out.append(f'<rect x="{ox + c * CELL:.1f}" y="{oy + r * CELL:.1f}" width="{CELL - 1}" height="{CELL - 1}" '
                       f'fill="{colour}"/>')
            k += 1
    return out


def label(x: float, y: float, w: float, text: str) -> str:
    """A group's name on a dark chip in its top-left corner, cut to the room there is."""
    room = int((w - 6) / 6.2)
    if room < 3:
        return ""
    text = text if len(text) <= room else text[:max(room - 1, 1)] + "…"
    return (f'<rect x="{x + 2:.1f}" y="{y + 2:.1f}" width="{len(text) * 6.2 + 6:.1f}" height="15" fill="{BG}" '
            f'fill-opacity="0.82"/><text x="{x + 5:.1f}" y="{y + 13:.1f}" font-size="11" fill="{FG}">'
            f'{escape(text)}</text>')


def treemap(y: float, h: float, groups: list[dict]) -> list[str]:
    """Groups ({name, cpp, asm, open, caption}) as a treemap from y, h high."""
    groups = [g for g in groups if g["cpp"] + g["asm"] + g["open"] > 0]
    rects = squarify([g["cpp"] + g["asm"] + g["open"] for g in groups], PAD, y, W - 2 * PAD, h)
    out = []
    for g, (x, yy, w, hh) in zip(groups, rects):
        out += cells(x, yy, w, hh, [(g["cpp"], DONE), (g["asm"], ASM), (g["open"], OPEN)])
    for g, (x, yy, w, hh) in zip(groups, rects):
        out.append(label(x, yy, w, g.get("caption", g["name"])))
    return out


def title(y: float, text: str) -> str:
    return f'<text x="{PAD}" y="{y:.1f}" font-size="14" font-weight="600" fill="{FG}">{escape(text)}</text>'


def pct(a: float, b: float) -> str:
    return f"{100 * a / b:.1f}%" if b else "0%"


def draw(data: dict) -> str:
    out: list[str] = []
    y = 24.0
    mods = sorted(data["modules"], key=lambda m: -m["code"])
    started = [m for m in mods if m["done"]]
    state = ", ".join(m["name"] + (" done" if m["done"] >= 1 else " %.1f%%" % (100 * m["done"])) for m in started)
    out.append(title(y, f"The game's {len(mods)} modules by code size: {state}, "
                        f"the other {len(mods) - len(started)} not started"))
    out += treemap(y + 8, 150, [{"name": m["name"], "cpp": m["code"] * m["done"], "asm": 0,
                                 "open": m["code"] * (1 - m["done"]),
                                 "caption": f"{m['name']} {100 * m['done']:.0f}%" if m["done"] else m["name"]}
                                for m in mods])
    y += 8 + 150 + 30

    v = data["vampire"]
    t = {k: sum(g[k] for g in v) for k in ("cpp", "asm", "open", "n_cpp", "n_asm", "n_open")}
    n = t["n_cpp"] + t["n_asm"] + t["n_open"]
    out.append(title(y, f"vampire.dll: {pct(t['n_cpp'] + t['n_asm'], n)} ({t['n_cpp'] + t['n_asm']:,}/{n:,}) "
                        f"functions match, by source folder"))
    out += treemap(y + 8, 170, [{**g, "caption": f"{g['name']} {g['n_cpp'] + g['n_asm'] + g['n_open']:,}"}
                                for g in v])
    y += 8 + 170 + 30

    out.append(title(y, "vampire.dll standalone build: what `ninja verify` finds identical to the game's DLL"))
    y += 10
    bar_x, bar_w = PAD + 170, W - 2 * PAD - 170 - 320
    for row in data["standalone"]:
        share = row["done"] / row["total"] if row["total"] else 1.0
        out.append(f'<text x="{PAD}" y="{y + 12:.1f}" font-size="12" fill="{FG}">{escape(row["name"])}</text>')
        out += cells(bar_x, y, bar_w, 18, [(share, DONE), (1 - share, OPEN)])
        note = f"{row['done']:,} / {row['total']:,} ({pct(row['done'], row['total'])})"
        if row.get("note"):
            note += f"; {row['note']}"
        out.append(f'<text x="{bar_x + bar_w + 8:.1f}" y="{y + 12:.1f}" font-size="11" fill="{DIM}">'
                   f'{escape(note)}</text>')
        y += 22
    y += 26

    c = data["client"]
    t = {k: sum(g[k] for g in c) for k in ("cpp", "asm", "open", "n_cpp", "n_asm", "n_open")}
    b = t["cpp"] + t["asm"] + t["open"]
    out.append(title(y, f"client.dll: {pct(t['cpp'] + t['asm'], b)} of its code bytes "
                        f"({(t['cpp'] + t['asm']):,}/{b:,}), {t['n_cpp'] + t['n_asm']:,} of "
                        f"{t['n_cpp'] + t['n_asm'] + t['n_open']:,} functions, by source folder"))
    out += treemap(y + 8, 190, [{**g, "caption": f"{g['name']} {pct(g['cpp'] + g['asm'], g['cpp'] + g['asm'] + g['open'])}"}
                                for g in c])
    y += 8 + 190 + 34

    out.append(title(y, "Still needed"))
    y += 8
    k = data["known"]
    rows = [("vampire.dll standalone", f"{k.get('slot', 0)} vtable slots, {k.get('export-missing', 0)} SafeDisc "
                                       f"exports, {k.get('function', 0)} functions"
                                       + (f", {k['initializer']} static initializers" if k.get("initializer") else "")
                                       + " differ; an in-game test"),
            ("client.dll", f"{t['n_open']:,} functions ({t['open']:,} bytes) not matched yet"),
            ("Not started", ", ".join(m["name"] for m in mods if not m["done"]))]
    for name, text in rows:
        lines = _wrap(text, 92)
        out.append(f'<text x="{PAD + 4}" y="{y + 13:.1f}" font-size="12" fill="{FG}">{escape(name)}</text>')
        for i, line in enumerate(lines):
            out.append(f'<text x="{PAD + 200}" y="{y + 13 + 15 * i:.1f}" font-size="11" font-family="{MONO}" '
                       f'fill="{DIM}">{escape(line)}</text>')
        y += 15 * len(lines) + 8
    y += 10
    lx = PAD
    for colour, text in ((DONE, "matched (C++)"), (ASM, "matched with inline assembly"), (OPEN, "not yet")):
        out.append(f'<rect x="{lx}" y="{y:.1f}" width="11" height="11" fill="{colour}"/>'
                   f'<text x="{lx + 16}" y="{y + 10:.1f}" font-size="12" fill="{FG}">{text}</text>')
        lx += 16 + len(text) * 7 + 24
    y += 28
    for line in (f"Areas are code bytes; one cell stands for many bytes. Module sizes are their code sections; a module's "
                 f"share is the share of its own game code matched. As of {data['date']}.",
                 "Regenerate: python tools/make_progress_svg.py (draws this from docs/progress.json; --collect "
                 "refreshes the JSON from pcdecomp's databases and a game folder)."):
        out.append(f'<text x="{PAD}" y="{y:.1f}" font-size="11" fill="{DIM}">{escape(line)}</text>')
        y += 15
    h = int(y + 6)
    head = (f'<svg xmlns="http://www.w3.org/2000/svg" width="{W}" height="{h}" viewBox="0 0 {W} {h}" '
            f'font-family="{FONT}"><rect width="{W}" height="{h}" fill="{BG}"/>')
    return head + "\n".join(out) + "</svg>\n"


def _wrap(text: str, width: int) -> list[str]:
    lines, line = [], ""
    for word in text.split(" "):
        if line and len(line) + 1 + len(word) > width:
            lines.append(line)
            line = word
        else:
            line = f"{line} {word}" if line else word
    return lines + [line] if line else lines


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("--collect", action="store_true", help="refresh docs/progress.json first")
    ap.add_argument("--client", type=Path, help="with --collect: the client.dll pcdecomp project's folder")
    ap.add_argument("--game", type=Path, help="with --collect: the game folder (Vampire.exe, Bin/, Vampire/)")
    args = ap.parse_args()
    if args.collect:
        if not (args.client and args.game):
            ap.error("--collect needs --client and --game")
        DATA.write_text(json.dumps(collect(args.client, args.game), indent=1) + "\n", encoding="utf-8")
    OUT.write_text(draw(json.loads(DATA.read_text(encoding="utf-8"))), encoding="utf-8")
    print(f"wrote {OUT.relative_to(ROOT).as_posix()}")


if __name__ == "__main__":
    main()
