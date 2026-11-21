# pcdecomp project

This folder is a pcdecomp matching-decompilation workspace. Change source only through the pcdecomp MCP tools
(`claim_function`, `compile_and_diff`, `edit_context`, `patch_context`, `rename_symbol`, `release_function`): they compile with the
game's original compiler and keep every matched function matching. Do not edit `src/` or `include/` by hand; hand
edits in `src/` are re-checked and broken functions go back to the queue.

Start with `guide("workflow")`, then `project_info()` and `claim_function()`.
Never copy anything from this folder outside it, and never push this repository: the game's code belongs to its
owner.

## Where this project comes from

client.dll of the same game, built by the same compiler (Visual C++ 6.0, `/O2 /GR`) from the same Source engine
tree as vampire.dll. Project `vtmb` (G:\decomp\projects\vtmb) has matched all of vampire.dll; its CLAUDE.md is the
long record of how. Read it there when a wall below is not enough; never copy text or code from that folder into
this one.

`pcdecomp carry G:\decomp\projects\vtmb G:\decomp\projects\vtmb-client` copies vtmb's matched functions onto
client.dll functions whose bytes are the same (relocations and call targets masked), renames them for this binary
and judges each one here. It reads vtmb only. It can be run again: matched functions are no longer open, a score
already noted is not noted twice. Run it before agents edit headers here: a header carry made that someone changed
since is this project's own for carry, and every block that includes it is skipped (`header conflict`).

Carry so far (2026-11-21, seven runs): 1,081 functions matched, 130,654 bytes. 26 of them use inline assembly, so
the progress counts 1,055 of 11,424 functions / 126,299 of 1,636,178 bytes (7.72% of the code that is not skip).
Run 6 paired address placeholders through the operands of the equal bodies (+193). Before run 7, `pcdecomp split`
gave the functions the import had merged into one row their own rows (3,035 rows -> 10,070 functions; the note
`split at 0x...` on each host) and `skip-initializers` marked 6,489 initializer pieces skip; run 7 then matched 502
(319 of them split pieces) and 4 function-local static destroys as companions of their blocks. Why the rest of the
equal-bytes pairs stayed open in run 7: 705 need server classes (their headers define classes client.dll's RTTI
does not have, or reach vtmb's server interfaces; most are one 30-byte scalar deleting destructor shape), 141 a
score above 0, 111 a name this project cannot save (mostly scalar deleting destructors), 59 an unpaired placeholder
(a vampire.dll name that is no operand of the pair, in the block or in a header's inline code), 41 a compile
failure, 21 an RTTI class conflict, 6 the full prelude. 144 notes `carried: from 0x..., score N` mark the same bytes
judged a near miss, a good start for a hand pass. Backups of the database before each step are in cache/
(`project.db.pre-split-20261121`, `.pre-skipinit-`, `.pre-carry7-`).

Then (2026-11-21): five initializer entries that follow a switch's tables were still inside the rows before them;
`pcdecomp split --hosts` cut them (split now takes every initializer table address as a certain cut) and
`skip-initializers` marked those five chains' 18 pieces skip. `pcdecomp lift` (model-free C++ from tiny
straight-line functions, at most 32 bytes) then matched 1,494 functions, 12,754 bytes; it leaves out any function an
initializer chain names. Totals now: 2,575 matched; the progress counts 2,549 of 11,411 functions / 139,053 of
1,635,862 bytes (8.50%). Lift saved them under placeholder names (`CUnknown<address>::sub_<address>`, this binary's
addresses). Backups: cache/`project.db.pre-chaincuts-20261121`, `.pre-skipinit2-`, `.pre-lift-`.

Globals: `pcdecomp globals` writes only initializers already skip, and at first its generators fit 33 of the 2,067:
945 constructs called a constructor with no linker name (client.dll's functions are unnamed; a `??0Class@@` name
gives the class), 47 call InterfaceReg's constructor under a provisional name, about 1,000 are shapes no generator
has yet. A hand naming pass then gave 9 constructors and destructors vtmb's names with `rename_symbol` (four ConVar
constructors and ~ConVar, ConCommand's constructor and destructor, CGameMovement's), each reason citing the
byte-equal vtmb twin, the RTTI vftable it stores and the pushes of the initializers that call it. `pcdecomp globals`
then saved 557 definitions (522 through a named constructor), all in `src/_init/unit_000_100011f0.cpp`: client.dll's
initializer table is one run (vtmb's incremental link gave 251), so that file says nothing about units. Their 2,174
initializer pieces went from skip to matched. Totals now: 4,749 matched; the progress counts 4,723 of 13,585
functions / 171,313 of 1,668,122 bytes (10.27%; the pieces count now, so the total grew). Still blocked: 331
constructs call 0x100e1590, whose bytes equal vtmb's SendTable constructor (on the client side probably RecvTable:
a RecvTable/ClientClass generator, not a name); InterfaceReg's 47; classes only RTTI names, with no header here.
Backups: cache/`project.db.pre-ctornames-20261121`, `.pre-globals-`.

Units: `pcdecomp units --apply` saved 4,066 unit guesses in 194 units (functions.unit_guess: the "probably unit"
line and the panel's per-unit progress; it never moves a file), from the reference trees' class homes and the
functions between two of one unit; client.dll's code names no source path. A unit under `_init/` is not read as the
game's (pcdecomp a4c86c9). Doubtful: the 658 guesses of `cl_dll/vgui_scorepanel.cpp` come from one 113 KB gap
between two CLabelHeader vtable slots (0x10171330, 0x1018ce30) with no hint between them. Backup
cache/`project.db.pre-units-20261121`.

Names: client.dll has almost no linker names, so carried functions are saved under this binary's placeholders
(`Class::sub_<address here>`, `g_`, `vt_`), even where the vtmb twin has a real name; a naming pass with
`rename_symbol`, citing the byte-equal vtmb function, can give them vtmb's names. Imported slots are paired by
import name (vampire.dll's `Plat_Free` slot becomes this binary's `Plat_Free` slot). Type names
that embed a vampire.dll address (`CUnknown1004ddc0`, `CUnk101f75f0`, `block_10256200`, `CRBTree12Entry_10194f30`)
came across as they were: the address in them is vampire.dll's, not this binary's. Rename them with
`rename_symbol` when you know the real class.

## VC6 rules that hold here too (measured on vampire.dll; summaries, details in vtmb's CLAUDE.md)

- **Vector code (x87): write Source's operators.** A `call [pfSqrt]` / `call [pfVectorNormalize]` or the "z-spill"
  (x, y, z on the FPU, one through an integer register) is mathlib's inline layer: `a - b`, `.Length()`,
  `VectorNormalize`, `DotProduct`. Assignment of an operator result to a declared local gives the z-spill;
  `Vector d = a - b;` does not. Write float constants as literals (`0.5f`; a `qword` constant is a `double`), declare
  real members instead of casts at offsets, and read angles as QAngle (per component), not Vector. vtmb section:
  "Source mathlib Vector code (x87)".
- **A reload after a store means a read through a pointer or reference.** VC6 hoists a load above a store when it
  can see they differ; when the game stores first, the source read through a reference (`x ? x : ""` through a
  `const char *const &`, a 64-bit addend through a pointer). Reordering statements does not help. vtmb section:
  "VC6 order walls".
- **Write it the way a programmer would.** Declare a local in the innermost block that uses it; call directly
  instead of staging a result in a temporary; a chained assignment instead of a pointer temporary; a plain local
  and a literal instead of a helper. A `__fastcall sub_X(Self *self, int edx, ...)` is a member function. vtmb
  section: "VC6 walls Opus closed".
- **Stack slots.** Declaration order and store order never move a slot; locals in sibling blocks share one; a dead
  argument's home slot is reused. When only slots differ, note the layout and move on. vtmb section: "VC6 stack
  slots".
- **Containers: the Source call, never the inlined steps.** CUtlVector / CUtlMemory / CUtlRBTree code is tier1's
  inline templates: `AddToTail`, `InsertBefore`, `Remove`, `Find`, `Purge`; RB-tree members are template members
  with a mangled `// TARGET:`. vtmb section: "Source containers".
- **Smaller levers that held often:** the SDK's spelling of a constant, not the folded value; `float`, not `double`,
  for a float local; initialise a local only one path sets; template instantiations with identical code are one
  function under one name. vtmb section: "VC6 walls closed by hand".
- **Reference source.** `get_function(addr, part="reference")` shows Valve's code of the same function (2004 SDK,
  project.toml `[reference]`; the client side lives in `cl_dll/`). Read it for control flow
  and names, then write the game's version under this project's names.
