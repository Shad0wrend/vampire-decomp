# VC6 /O2 register allocation: measured rules (regstudy, 2026-11-13)

Harness: `python rs.py FILE.t [-a] [-v VARIANT] [-f FUNC]` (this folder). A `.t` file has `//== prelude` plus
`//== NAME` variants; each variant compiles alone (own TMP) with the game's cl /O2 /FAs. It prints the saved
register set, `this`'s register, and for `int a = vN();` the register vN's result goes to (`mem` = stack slot).
`cmpvar.py FILE.t FUNC` compares every variant's asm with the first one ("same", "same-swapped" edi<->ebx, "differs").
`thr.py NAME...` finds the use count k at which value b overtakes value a (thr_*.t files).
Counts below = how many variants agreed / how many were run for that rule.

## Q1. Which value gets which callee-saved register

**R1. Rank by weight, then hand out esi, edi, ebx, ebp in that order; the rest live in stack slots.**
Weight = number of references (the definition counts 1, every read 1, `x++` counts 2 (use+def)).
(16/16 two-value grid, 11/11 three to six values, e.g. counts 1,2,3,4,5 -> mem, ebp, ebx, edi, esi.)
- `int a = v1(); int b = v2(); w(); u(a); u(b); u(b);` -> b esi, a edi; add one `u(a);` -> a esi.

**R2. Ties go to the value DEFINED first (code order of the first assignment).** Declaration order, first-use order,
last-use order, names, live-range length in straight code, and extra struct/typedef/extern/function declarations in
the unit do not matter. (13/13 tie variants; 56/56 unit sweeps unchanged.)
- `int b; int a; a = v1(); b = v2();` -> v1 wins (declaration order ignored).
- `int b = v2(); int a = v1();` -> v2 wins (definition order counts).
- So: `T *p = 0;` written earlier = an earlier definition = wins ties ("pointer local declared earlier moves ebx").

**R3. Parameters count only their reads, and their "definition" is the first load.** A parameter with 3 reads ties
with a local having 2 reads + def, and the local wins (defined earlier). (7/7)
- `void t(int p) { int a = v1(); w(); u(p); u(p); u(p); u(a); u(a); }` -> a esi, p edi.

**R4. `this` is an ordinary value defined at entry** (the `mov reg, ecx` counts as its definition), so it wins ties:
this keeps esi while its member accesses + member calls (each `mov ecx, reg` is a read) >= the other value's
reads; one more read of the other value moves this to edi. (20/20 grid: this k reads vs local j reads -> this esi iff k >= j.)
`this` in ebx = two other values outrank it (R1) or it is a byte value case (R6).

**R5. Uses inside loops weigh about 4x per loop level; a live range that stretches over blocks it does not use
loses priority.** Measured (thr.py): one read inside a `while` = ~4 plain reads (xn1..xn4: k* = 4r+3); depth 2 ~16,
depth 3 ~19-37 (saturates). A value live across an `if` it does not use is worth ~1/2 (1 if: x1.9-2.0), across two
ifs ~1/2.9, three or more ~1/3 (ib0..ib6, nc1/2: calls in the skipped block do not matter, only blocks). Uses in an
`if` body count fully (IF_n, ifr1). Exact formula not closed (an extra read just before or after the loop shifts it by
2-3 units: xa/xo series), so treat loop and span effects as direction only.
- Lever: moving a read into or out of a loop, or extending a value's life over an if/loop it does not use
  (e.g. reading it again after the block), changes its rank strongly.

**R6. Byte values need a byte register: a char/bool value that is stored or compared as a byte and lives across a
call gets ebx, before any int value; the ints then take esi, edi, ebp.** A second such byte value goes to a stack
slot even when esi/edi are free. A char only passed as an argument (pushed as int) is an ordinary int value.
(t7/t8: 8/8; e.g. 4 ints with 3 reads + a char with 1 store: char ebx, ints esi/edi/ebp/mem.)

**R7. Constants -1 and 0 are register candidates (the "zero/minus-one register").** Each of them is counted on its
own (a mix of one -1 and one 0 does nothing; 1, 5, -2 never count). Below a threshold the candidate is dropped,
but it still takes a register DURING allocation, so it moves short-lived temps:
- few uses (here <= 3 of -1 in IL): no candidate -> scratch temp gets the first free reg (edi when esi = this);
- medium (4-5 uses of -1, or 2+ extra 0 stores): candidate tentatively takes edi, then is dropped -> the temp gets ebx
  and nothing holds the constant;
- many (6+): the constant is kept (`or edi,-1` / `xor edi,edi`) and the temp gets ebx.
Counted in IL before optimisation: inline returns `return 0`, `h != 0xffffffff` inside inlined EHANDLE Get, stores,
compares, `: 0` ternary arms, and `0` arguments all count; a BYTE compare/store with -1 (`(char)x == -1`, `gc = -1`)
is NOT an int -1 (it removes one, and any byte -1 anywhere disqualifies/moves the candidate) (t9-t21: 40 variants;
reproduces CFuncMonitor::vfunc77 = edi vs CNPC_VMingXiao::sub_10398fd0 = ebx: the MingXiao source has one extra
`= 0xffffffff` store).
- **This is the "ebx vs edi tie-break" of the handle-Get scratch temp (~40 edi / ~20 ebx holders).** Count the -1 and
  0 uses of the source (after inlining) against the game's: one -1 fewer flips ebx -> edi
  (0x1026cec0: `m_iKind + 1 != 0` instead of `m_iKind != -1` gives edi; the code then differs by `inc`, so it is only
  a probe). Levers to ADD a use: another `= -1` store or `x != -1` test of identical code (e.g. a reference/inline
  that repeats the test); to REMOVE one: compute the -1 test once (bool local), let a sibling inline share a
  test, a byte compare where the game has one.

**R8. Values whose live ranges do not overlap share registers;** the later one reuses the register the earlier one
got (a2p2: a then p both esi). A named copy local that is NOT copy-propagated is a separate value with its own
weight: it can steal a register and reorder R1 for the whole function ("named int copy locals flip callee-saved
registers function-wide"; "reusing a live variable for a new value reshuffles": one variable = one merged weight).

## Q2. this in esi / edi / ebx
R4 + R1: this is esi unless a value with more references exists (then edi, then ebx). Equal reads: this wins.
In the handle-Get shape (t9) this = esi and the 4th register needed inside the lookup is a shrink-wrapped
`push edi/pop edi` or `push ebx/pop ebx` decided by R7.

## Q3. eax / ecx / edx for short-lived temporaries
**R9. One rotating cursor eax -> ecx -> edx -> eax ... for the whole function, advanced by every scratch temp in IL
order; busy registers are skipped.** It does not restart at a call or a statement (t23/t24: 21/21).
- `f1(g1); f1(g2); f1(g3); f1(g4);` -> eax, ecx, edx, eax.
- `f2(p->a, p->b); f2(p->c, p->d);` with p in esi -> (eax, ecx), then (edx, eax).
- IL order for a call = arguments right to left (last argument loaded first), then `this` into ecx (fixed).
  The scheduler may later hoist a load (mixed: `mov ecx,p` printed first), so read the ORDER of allocation from the
  argument order, not from the printed order.
- Lever: one extra temp earlier in the function (a named local that is not propagated, a load that is no longer
  CSE'd, a different expression shape) rotates every later scratch choice by one step; one fewer rotates back.
  A CSE'd load shared by a store and an argument (`g3 = g2; f1(g2);`) is ONE temp.
- Fixed registers override the cursor: eax for return values, ecx for thiscall this, edx:eax for 64-bit/div, cl for
  shifts; byte temps can only use al/cl/dl (/bl).

## Q4. ebp as a general register
**R10. With /O2 and no EH frame (the project has no /GX), ebp is simply the 4th callee-saved register: used when 4
values need one (R1 order esi, edi, ebx, ebp), or the 3rd for ints when ebx is taken by a byte value (R6), or for a
scratch temp when constant candidates (R7) hold the earlier ones** (t3, t8, t11 pre_8: 6/6). It is never used for
byte values. Push order in the prologue is always ebx, ebp, esi, edi (whatever was assigned first).

## Q5. Register vs reload across a loop back edge
**R11. Loads through pointers (members, globals) are hoisted out of a loop only when the loop has no call and no
store that may alias (any int or char store through a pointer or to a global); otherwise they are reloaded every
iteration** (t25: 7/7). A char store aliases everything (storechar reloads p->a, p->n). A global that is read and
written in the loop stays in a register but is stored back every iteration.
- Game reloads `p->x` at the loop top -> write `p->x` in the loop; game keeps it in a register across a call ->
  read it into a local before the loop (`int a = p->a; int n = p->n; int *arr = p->arr;` gives ebx/ebp/edi + i esi).
- A local only stays in a register if R1/R5 give it one; the 5th and later values (or a 2nd byte value) are
  reloaded from their stack slot every iteration.
- Loop counters: `i++` + compare + index = ~4 references per iteration, so the counter usually outranks a pointer
  used 3 times in the loop (call test: i esi, p edi).

## Not closed
- Exact weight formula for loop/span (R5): direction only.
- 0x1026cec0: the game has one -1 fewer in IL than every identical-code source tried (13 forms); `+ 1 != 0`
  proves the mechanism but changes the code.

## Trials on open register_allocation functions (score <= 6), 2026-11-13: 0 matched
Variants in fx/ (judged with S/try.py, S/h116/regs.py; nothing saved, no notes).
- 0x1026cec0 (2): R7 confirmed in the real function: one int -1 fewer (`m_iKind + 1 != 0` at either site) flips the
  handle scratch temp ebx -> edi (fx/f1026cec0_b/_d, 3 vs plain 4), but that form compiles to `inc`; no identical-code
  form with one -1 fewer found (bool local, if/else, ternary swap, `!= 0` forms, handle forms: 11 variants).
- 0x1026cf90 (4): standalone copy (t27/t28) shows -1 is the binding constant (4 int -1 in IL -> ebx, 3 -> edi);
  a float delay parameter (removes an int 0) does not flip; named/static const -1, helper inline, bool local: no
  change (constants are counted after propagation). Needs the game's real IL shape (one -1 test fewer).
- 0x1042d770 (6): game puts the new count in ecx (i's register); 8 append forms (separate local, ++count, i reuse):
  6 or worse. Rotation (R9) says we are one scratch step ahead or the game coalesces with i.
- 0x1002e3a0 (4): R9 diagnosis: at the sub_1002e210 arguments our cursor is one step ahead (ecx/edx vs eax/ecx):
  our IL has one scratch temp more before that block (or the game two more). Not closed.
- 0x102f7a90 (h107 variant c, 9): R1 diagnosis: this (game ebx) vs pTestHull (game edi) ranked the other way;
  5 levers (earlier definition, vector local, extra/direct pathfinder reads, this copy): no flip.

## Corrections from the rule-based pass on 42 game register walls (2026-11-13, 14 matched)

Measured on real vtmb functions (hand-120..124, reloadstudy). Each line names the function that showed it.

- **R1 counts happen before tail merging.** Three identical calls VC6 merges into one still add their reads
  (0x101c7890); where a later block's Release sits (own copy vs shared tail) swapped a far delete[] loop's
  ebp/ebx (0x101ff540). Find such far causes with truncation probes: delete blocks until the registers flip.
- **What counts and what does not.** Reads and -1 stores VC6 folds away later still count (an inline handle
  `Set()`'s null test on an already-tested pointer, 0x10070780). A duplicate test in the same condition, or a
  dead read/store, is removed BEFORE counting and does not count (0x102f6d80, 0x100cebb0).
- **R1 fails** in 0x101ac9c0: a 4-ref value loses edi to a 2-ref value; its null-test read seems not to count.
- **R5 span** is stronger than +1-2 reads: a value live across a loop it does not use loses to a value with fewer
  refs; only a read inside that loop flips it (0x1019bc80). Block structure alone flipped the zero register vs a
  hoisted import pointer (0x102dd0f0).
- **R6/R7.** A constant candidate with any byte use asks for ebx first; dropped later it still pushes the other
  constant from ebx to ebp (0x103dfd80, 0x1032b9b0). A float field set with `0.0f` removes an int-0 use (closed
  0x103dfd80). `push 0` call arguments did not count toward the zero candidate there. A char-returning callee can
  stop a char local from getting bl: declare the callee `int` and truncate, `char v = f();` (0x100bf060).
  One more int -1 gave the game's whole assignment in 0x100cebb0 (no same-code form found yet).
- **R8.** A split named copy changes register choice and even address grouping (0x100b6cf0: SDK verbatim, one
  variable). A named global-copy local is its own value: a same-unit block copy of the callee lets VC6 keep the
  global across the call with identical code (0x1032db60).
- **R9 levers that matched:** an extra named local at a call (`int edict = p->m_x; engine->f(edict);`,
  0x100db7a0), an inline wrapper's parameter copy (0x10230910), an SDK early return (`if (!flag) { tail; return; }`,
  which also stops a cross-jump, 0x102dc180), the SDK `ConVar::GetString` with its `var` local (0x10142540,
  0x1009e430), an inline `Base()` accessor so `Base() + i` puts the sum in the offset register (0x1022a4b0).
  The cursor does not carry straight across merged tails (0x1022b690); named int temps do not follow it (0x102bf820).
- **Volatile read lever:** `*(T *volatile *)&x` keeps a load at its source position and loads straight into the
  destination variable's register with the same bytes. An address-taken local stays in a callee-saved register
  across a call only through a non-escaped copy local (0x1004d780).
- **Live ranges split** (spill + reload), so a one-ref margin can reshuffle more than two values (0x1032a490).
  A `this + const` address in a named local is rematerialised with lea at each use, not given a register (0x1033a400).
- **R12 (negative): reload order at a block start and operand association are globally numbered.** About 190
  same-code variants never flipped the order two values are reloaded in (0x102f6d80, 0x101f14a0, 0x101e56e0);
  only real IL changes flip it, non-monotonically, even ones that touch neither value. Address association
  ((idx + off) + base vs (off + base) + idx) behaves the same: restructuring another loop flips it (0x10429080,
  0x10427df0, 0x1025b930); source parentheses never matter (0x101810f0). The lever left is a statement VC6 deletes
  after register allocation (0x101e56e0: 3-4 real stores after `int nTotal = 0;` flip all four loops).
  Test candidates with scratchpad tool reload/rl.py (same code hash, order flipped) before judging.
- **R13: a split piece with weight <= 0 is rescued only by a register preference.** The colour driver defers a
  node whose spill weight is <= 0; on that first deferral C2 (0x4348f) checks its preference list: if a preferred
  register is still allowed, the node is pinned to it with weight 1 and coloured at once. Otherwise it is re-queued
  with its neighbour's (negative) priority and spilled. Preferences come from copies and from 3-address adds
  (op 0x12) whose first operand links the piece to an already coloured result (color.c 0x7f80). 0x10427df0: the
  signed test form builds `pInc = off + pHdr` (op 0x12), so the SR offset's loop-head piece prefers pInc's eax and
  is carried in eax (game); the bit-test form builds `pInc = idx; += off; += pHdr` (R12 association), the piece has
  no preference and is spilled (`mov [esp+0x20],ebp`, score 14). Tool: tmp/c2trace/poptrace.py (pops, deferrals,
  rescues, preferences per round); details in tmp/c2trace/PRIORITY.md pass 3.

## Corrections from rule pass 2 (best score 21-100, 65 functions, 2026-11-13, 8 matched)
- Weights are counted before VC6 simplifies the code, so source that VC6 later deletes still moves the ranking:
  - a redundant compare `x != k && (x != k || x == -1)` adds counted reads to a call result and compiles to the same
    code (0x1038e340); `x == x`, `x - x`, `c ? x : x` fold too early and count nothing;
  - a counter `i++` written once in each if/else arm (tail-merged later) adds reads (0x101b3990);
  - one loop with a conditional reload (`if (bit == 0) { bits = *pw; bit = 1; pw++; }`), which VC6 threads into
    nested loops later, keeps the game's ranking; nested loops in the source over-weight the inner loop by R5
    (0x100c80d0);
  - a pointer local assigned the same constant separately in both branches gains a definition (0x101f39d0).
- Reads that do not count: reads that propagate into a constant (R1), reads that CSE away (R4), redundant null
  tests of an already-tested pointer, and extra reads of a parameter (0x10182260, 0x101582a0: parameter reads look
  merged before counting).
- An extra read counts only inside the region where the registers split (0x10182260).
- `test r1,r2` operand order follows the definition order of the two values (0x100c80d0).
- With esi/edi held by rep movs/stos the heavier value took ebp, not ebx (0x101582a0).
- A byte constant 1 held in bl is not an R7 candidate (0x1026ec30); a byte value may outrank a pointer with more
  reads for a callee-saved register (0x10174580, R6 over R1?).
- R10 (ebp for a parameter) fails when VC6 shrink-wraps ebp around an inlined loop (0x10344f80) or CSEs an address
  the game recomputes (0x101b5870).
- Check the callee's `ret N` and return type before trusting a register wall (0x101a7600: slot 482 is `ret 8`).
- Not weight-driven: the 0x103d93b0 stack slot swap (+10 reads do not move it).
- Probe for N candidates on N-1 callee-saved registers: delete one at a time and see who takes its register.
- Beyond the rules: the inline budget is used up by later code (0x103a8990: a hand-written ScopeTrace in a later
  case let an earlier CUtlVector Purge inline); x87 tails follow a shared result local (`r = expr; return r;`,
  0x10182160) and per-component `+=` (0x101269e0).

## Inline / x87 pass (2026-11-13, 39 functions picked by diff kind, 3 matched)
Targets were picked by re-judging every open function's best source: 41 had a different call count than the game
(inline vs out-of-line), 16 had diffs that were mostly x87. Many call-count differences were stale (the newest best
source was not the real best); re-judge before trusting such a scan.
- Big call deficits close: an object with out-of-line teardown on the stack is POD storage with an explicit
  `->CRestore::CRestore(...)` call and per-return teardown through bodyless stubs (0x101a3470, 164 -> 0); a node list
  `Destroy()` written at each exit and the matched sibling's shape (0x102f3c10, 333 -> 0).
- A global kept in a callee-saved register across unknown calls and reloaded on one path: a local copy reassigned
  from the global after the call on that path only (0x101a3470).
- A vptr stored after member stores (SDK ctor with an initializer list): POD view, explicit vptr store after the
  members; read later members through the stored member, not the local (0x102f3c10).
- Object addresses in `mov ecx, imm` are relocated: `extern char g_<addr>[];` and a cast, never an int cast
  (0x103302e0, score 1 = "absolute-address slots differ").
- `pcd_stage(x)` on a call argument / call object fixes R9 cursor shifts and can bring back a tail cross-jump.
- Recursion through the ILT stub: declare and call `sub_<stub>` (0x100c25c0).
- Volatile int component loads reproduce reload-per-copy of a global Vector (every non-volatile form is CSE'd), not
  the game's 2-register pipelining (0x102387b0).
- x87 schedules are mostly not source-movable: an `fstp` placed before or after a call setup / vtable load
  (0x101bef50, 0x103ab580, 0x102e7e80) stayed in place under every form tried. Statement order moves int copies
  against x87 ops (0x1012a1d0); a constructor's internal store order does not.
- `(double &)floatLocal` in a compare gives `fcom qword ptr [float slot]` but makes the local address-taken (top of
  the frame) (0x10242640). Valve's naked `_asm` VectorMA (0x101387e0, 0x10139500) and TransformAndRotate
  (0x101382f0) have no C form.
