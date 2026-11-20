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
already noted is not noted twice.

Carry so far (2026-11-21, three runs): 298 functions matched, 35,908 bytes. 5 of them use inline assembly, so the
progress counts 293 functions / 35,155 bytes (1.94% of the code). Why the rest of the equal-bytes pairs stayed open
in the last run: 616 need server classes (their headers define classes client.dll's RTTI does not have, or reach
vtmb's server interfaces), 370 have an unpaired placeholder (a vampire.dll name with no client.dll partner, in the
block or in a header's inline code), 77 a name this project cannot save (mostly scalar deleting destructors), 20 an
RTTI class conflict, 14 a compile failure, 4 the full prelude. 25 functions carry a note `carried: from 0x...,
score N`: the same bytes judged a near miss, a good start for a hand pass.

Names: a carried function keeps vtmb's semantic name only where it is the same function (one-to-one, and this
binary agrees); otherwise it gets this binary's placeholder (`sub_`, `g_`, `vt_` + its address here). Type names
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
