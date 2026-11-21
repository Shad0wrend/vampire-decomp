# Vampire: The Masquerade – Bloodlines: `vampire.dll` decompilation

A matching decompilation of `vampire.dll`, the game-code DLL of *Vampire: The Masquerade – Bloodlines*
(Troika Games, 2004), patch 1.2. Each function in `src/` is C++ that Microsoft Visual C++ 6.0 (`/O2 /GR`, the
compiler and flags the game was built with) compiles to the same bytes as the original DLL.

The work was done with **pcdecomp**, a matching-decompilation tool for 32-bit Windows games. pcdecomp compiles a
function with the game's own compiler, compares it with the original byte for byte, and saves it only when the two are
identical. The functions were written by AI agents working through pcdecomp, by hand, and by pcdecomp's own
automatic passes (machine drafts, copies of already matched twin functions).

## Status (2026-11-21)

### `vampire.dll`: every function matches

| | Functions | Code bytes |
|---|---:|---:|
| Game code, matched as C++ | 23,799 (99.44%) | 2,957,996 (97.00%) |
| Game code, matched with inline assembly (counted apart) | 135 (0.56%) | 91,418 (3.00%) |
| **Total game code** | **23,934 (100%)** | **3,049,414 (100%)** |

The count leaves out 17,504 entries that are not the game's own code: 16,468 incremental-link jump stubs and 1,036
C runtime and helper routines (143,459 bytes in all).

The data is in the sources as well: initialized and constant data in `src/_data/`, zero-initialized globals in
`src/_bss/`, static initializers in `src/_init/`.

**Linking:**
- *Hybrid build*: the original DLL with the compiled functions linked in. It loads and plays in the game.
- *Standalone build*: all objects linked into a new DLL without the original file. `link.exe` finishes with 0
  unresolved names, 0 duplicates and 0 errors (14,634 alias names map the original symbol names).
  Still open before it can replace the original:
  - 50 vtable slots in 49 vtables are not yet the game's;
  - the exports and the entry point;
  - an in-game test of the standalone DLL.

### The rest of the game

| Part | State |
|---|---|
| `client.dll` (client game code) | In progress in a separate project: 3,101 of 11,963 functions (25.9%), 147,561 of 1,644,370 code bytes (9.0%) as of 2026-11-21 |
| `GameUI.dll`, `vampire_python21.dll` | Not started |
| Engine and its modules (`engine.dll`, `launcher.dll`, `materialsystem.dll`, `studiorender.dll`, `shaderapidx9.dll`, `stdshader_*.dll`, `vgui2.dll`, `vguimatsurface.dll`, `vphysics.dll`, `vstdlib.dll`, `tier0.dll`, `filesystem_stdio.dll`, `vaudio_miles.dll`, `voice_miles.dll`), `Vampire.exe` | Not started |
| Third-party libraries (Miles, Bink, zlib, Microsoft runtime) | Out of scope |

## What is in this repository

| Path | Contents |
|---|---|
| `src/` | The matched functions, grouped by the game's source files where the DLL names them (`src/dlls/...`), otherwise by class (`src/_unsorted/`); plus data, globals and static initializers |
| `include/` | The shared headers: the game's classes, recovered from its RTTI, vtables and code |
| `symbols.txt` | Every address with its symbol name |
| `project.toml` | The pcdecomp project settings (compiler flags, prelude, agent settings) |
| `docs/` | Research notes: VC6 register-allocation rules, the standalone-link work |
| `CLAUDE.md` | The working guide the agents followed: VC6 code-generation idioms that decide a match |
| `phase0/` | The first experiments that tested whether matching was possible |

**No game files are included.** To build or check anything you need your own legally obtained copy of the game:
`vampire.dll` from patch 1.2 (SHA-1 `3fe64bc0d9d7eca64976adc668617ca2814e5e4a`). You also need Visual C++ 6.0;
the game was built with VC6 build 9044. Set `binary`, `cl` and `vcvars` in `project.toml` to the places of these
files on your machine. pcdecomp's database (`project.db`) and its cache are not part of the repository.

## Legal

This is an unofficial fan project for study and preservation. It is not affiliated with or endorsed by the owners of
the game. *Vampire: The Masquerade – Bloodlines* was developed by Troika Games and published by Activision.
*Vampire: The Masquerade* and *World of Darkness* are trademarks of Paradox Interactive. The game runs on Valve's
Source engine. No game assets or binaries are distributed here.
