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
