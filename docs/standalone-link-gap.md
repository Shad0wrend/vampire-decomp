# Standalone link of vampire.dll: what is missing (measured 2026-11-18)

Question: can vampire.dll be linked from our sources alone, without the game's file? Today's hybrid DLL is the
game's own file with our functions dropped in; every name our code does not define is pinned to its game address by
`absolute.obj`. This measurement drops `absolute.obj` and the game image.

State before the measurement: every compiled function matched, link audit 0 errors
(`cache/integrate/link-audit-20261118-115404.json`), hybrid faithful + linked self-check clean, the linked hybrid runs
in game.

## How

- `gap.py` (session scratchpad): every external name the 16,589 block objects and 2,388 initializer objects refer to
  that none of them defines, classified by where the game has it (the hybrid's own resolver, `_game_address`).
- `sa_link.py`: a real link. The same 18,977 objects (same-unit copies made static, as the hybrid does), import
  libraries made with `lib /DEF` from the game's import table for tier0.dll, vstdlib.dll and vampire_python21.dll,
  and VC6's LIBC.LIB, KERNEL32.LIB and USER32.LIB. `/DLL /NODEFAULTLIB /OPT:NOICF`, no exports yet. Output in
  `cache/standalone-20261118/` (`link.rsp`, `link.txt`, the `.def` and `.lib` files).

## Result

link.exe (84 s): **0 duplicate definitions, 0 other errors, 22,151 unresolved names**. Every unresolved name falls
in one of the gap classes below; the libraries resolved 108 imports, 55 CRT names, `type_info`'s vtable and
`__fltused`.

| Class | Names | Game addresses | What it is |
|---|---:|---:|---|
| Function under another spelling | 10,058 | 5,161 | Callers name a matched function differently from its block (placeholder `sub_`, `lifted::`, ILT stub names, other class views). These are the link audit's A "spellings" warnings. |
| Vtable placeholder slots | 2,751 | n/a | Vtables our classes emit name placeholder virtuals (`vfunc344`, `pa61`, `s44` ...) that nothing defines. The game has a real function in each slot (link audit D "slot-proposal"). |
| Import slot under another spelling | 166 | 90 | IAT slots used as plain globals (`g_109f371c` for `_PyObject_New`). |
| Imports declared wrong | 17 | | For example `Msg` declared C++ (the DLL exports C), or `DevMsg(int, ...)` against the real `DevMsg(const char *, ...)`. |
| CRT declared wrong | 36 | | CRT functions called by placeholder (`sub_10430964`) or C++ names (`?free@@YAXPAX@Z`). |
| Skipped stubs | 5 | 5 | `sub_100031f7` and similar. |
| **Initialized data** | 5,004 | 4,339 | About 650 KB of the 1.6 MB raw `.data`. |
| **Zero-initialized data (bss)** | 3,045 | 1,665 | About 2.0 MB of 3.4 MB. Only sizes are needed. |
| **Const data (.rdata)** | 1,069 | 895 | About 780 KB of 974 KB. |

The byte sizes are rough: each item runs to the next address any relocated pointer of the game points at
(`data_size.py`). The largest bss items are 1 MB at 0x10754fa8, 212 KB at 0x10856fac and 146 KB at 0x1089d810.

Not measured yet:
- the 591 exports (need an EXPORTS `.def`);
- the entry point (LIBC's `_DllMainCRTStartup` links);
- byte-exact layout: object order, section order and data placement.

## Package 1, step 1: an alias object (2026-11-18)

Every code name gets one target without touching the sources: `alias.obj` is a section-less COFF object of weak
externals (storage class 105, aux record = the target's undefined symbol index and Characteristics 3,
IMAGE_WEAK_EXTERN_SEARCH_ALIAS). A two-file test showed VC6's link.exe binds the alias to its target with 3;
with 1 or 2 it reports the alias unresolved.

`canon.py` picks the target of each unresolved name:

| How | Names |
|---|---:|
| The block that defines the game function at that address (behind its jump stub) | 10,058 |
| Vtable placeholder: the function the game's vtable holds in that slot, then its block | 2,651 |
| Vtable placeholder whose slot holds library code (`__purecall` ...) | 89 |
| Import slot used as a global: the import library's `__imp_` symbol of that slot | 166 |
| Import declared wrong: the slot's real `__imp_` symbol (`__imp__Msg`, `__imp__GetTickCount@0`) | 17 |
| CRT called by a placeholder or C++ name: the LIBC label at that address | 36 |
| Data whose address another name already defines (an initializer object, a block) | 1,238 |
| **Total** | **14,255** |

A vtable's game address comes from the database, else from RTTI, else from the matched code that stores it: a
matched function, or an initializer's construct (the game's entry is `call construct`), holds the address at
the same spot as our relocation.

Result: link.exe (17 s) **22,151 -> 7,896 unresolved, 0 duplicates, 0 other errors**. A check link with
`/FORCE:UNRESOLVED /OPT:NOREF` (never run) puts every alias at its target's address (14,255 of 14,255). That
image has 3,356,722 bytes of `.text`; the game's has 4,472,487. The difference is not analysed yet.

What is left:

| What | Names | Game addresses | Bytes (rough) |
|---|---:|---:|---:|
| Initialized data | 4,978 | 4,321 | ~648 KB |
| Zero-initialized data (bss) | 1,937 | 1,087 | ~1.85 MB |
| Const data (.rdata) | 965 | 818 | ~754 KB |
| Code | 16 | | |

The 16 code names:
- 5 compiler-made functions our sources call by placeholder (`atexit(sub_10012a8a)`). Three are 10-byte static
  destroyers and two are empty `ret`s, all `skip` in the database, so no block defines them.
- 2 default constructors (`CPASFilter`, `CSingleUserRecipientFilter`) and 2 destructors (`CAI_Expresser`,
  `CUnknown101f0960`) named only by COMDAT functions outside the targets.
- 3 VKeyValues slots (its virtual-base tables).
- 4 slots whose classes disagree (`CPlayerMove`, `IPositionInterpolator`) or whose game word is not a function
  (`CServerGameEnts::vfunc3`).

**Wrong vtable slots (found by this step).** 85 placeholder names stand in different game functions in different
vtables, because a derived class lacks the override declaration. One example is `IPhysSaveRestoreManager::AssociateModel`:
the interface's own slot holds `__purecall`, while `CPhysSaveRestoreBlockHandler`'s slot holds 0x10044db0. An alias
can be right for one class only, so **268 vtables** of a standalone build would hold the base's function (often
`__purecall`). Each needs the override declared in the derived class's header. The link audit lists these slots only
as INFO `slot-proposal`; a proposal that differs between classes should be an error there.
(`classify.json`, `wrong_slots`.)

Scripts and results: `cache/standalone-20261118/scripts/` (gap, imps, sa_link, canon, alias_obj, sa_relink,
sa_force, classify; canon.json, classify.json).

## Package 1b: override declarations (2026-11-18)

`slotdiff.py` lists every slot of every vtable our objects emit (blocks and initializers) whose name does not reach
the game's function in that slot; `triage.py` sorts them by cause. Fixes, each saved through `edit_contexts` (all or
nothing; every matched function that reads a changed header judged again, all 18,977 still match):

| Fix | Headers | Judged again |
|---|---:|---:|
| Game systems in the initializer units: GameSystemRoot.h's CAutoGameSystem declares slots 0-7 (its vtable 0x10516c64 fills them itself), five systems declare their own slots, and `vfunc8` is no longer declared there (slot 8 is the destructor; it made a tenth slot) | 8 | 330 |
| Interfaces whose slot 0 is the virtual destructor (CServerGameDLL, CServerGameClients, CServerGameEnts, CPlayerMove): the initializer branch declared `vfunc0` as well, which shifted every slot by one | 4 | 123 |
| Slot 5 of 194 entity classes: CBaseEntity's slot 5 is now the scalar deleting destructor `virtual CBaseEntity *vfunc5(unsigned int flags)`, and each class's matched `X *vfunc5(unsigned int)` became its override; the 194 definitions follow (pcdecomp.align, return type only) | 195 | 6,028 |
| CSoundControllerImp: CSoundEnvelopeController's placeholders typed as the matched slots, 14 overrides declared (slots 0 and 1 also name CAutoGameSystem's: C2555) | 2 | 127 |
| CPhysSaveRestoreBlockHandler: Source's 15 overrides declared in the initializer branch | 1 | 10 |
| Own slots of CTeamManager, CEntityListSystem, CLagCompensationManager, CGameStringPool, CSkyList, CPlayerEventsManager, CNavPropertyDatabase | 7 | 118 |

The declarations only name the slots: where a matched block defines the function under a flat-view or free-function
name, the alias step binds the new name to it.

Result: wrong (vtable, slot, name) **379 -> 152** (vtables 137 -> 86; from initializer units 229 -> 57). Re-link
with 14,280 aliases: 7,894 unresolved, 0 duplicates, 0 other errors; 14 code names left (2 of the 16 went with the
shifted slots).

What is left of the 152:

| Cause | Slots | What it needs |
|---|---:|---:|
| Deleting destructors: our class declares a real virtual destructor, so the compiler makes `??_E`; the game's slot holds its own `??_G` (matched as `vfuncN` or a view name). Same job, other bytes | 63 | byte-exact layout (later) |
| Functions matched under a view or free-function name in a slot the class does not declare | 29 | an override declaration, or rename + source |
| VKeyValues adjustor thunks and other compiler code (skip functions) | 26 | thunks from the class layout |
| Placeholders whose derived classes disagree on the signature (CBaseEntity vfunc41/42/86, CBaseCombatWeapon vfunc80/82/142/230, IPositionInterpolator, CHLPlayerMove) | 19 | the real signature, one slot at a time |
| CBaseGameSystem's defaults: the database names them CAutoGameSystem's (0x10029c10 ...), so classes derived from CBaseGameSystem itself (CGameStringPool, CPhysicsHook, CWeaponList's flat view) and CBaseAnimating-chain gaps | 14 | an IGameSystem / CBaseGameSystem split and a rename |
| Other | 1 | |

Scripts: `scripts/triage.py`, `scripts/slotdiff.py`, `scripts/b1/` (hedit.py stages exact replacements and saves
them in one call; slotfam.py gives a root slot its signature and aligns every derived declaration and definition).

### The 14 code names (2026-11-18)

| Names | What they were | Fix |
|---|---|---|
| `sub_10012a8a`, `sub_10014574`, `sub_1001509b` | `atexit` placeholders in old sources that write a guard by hand for a static whose include/ function newer sources already use (`CVStatListSet::Find`, `CUnknown10206400_FindById`, `CVFeatSet::Lookup`). The compiler's `...@$A` destroy is in 150, 3 and 27 objects | `canon.py`: a `@$A` destroy gets its game address from the word our matched code pushes for `atexit` (28 destroys placed); the placeholder aliases to it |
| `sub_100031f7`, `sub_102827d0` | the empty `atexit` destroys of two hand-written guards with no compiler copy anywhere: `variant_t::Entity`'s invalid handle and MaintainSchedule's `timeLimit` | written as real statics: `variant_t::NullHandle()` in inputdata_t.h (`static CHandle<CBaseEntity> hNull;`, Source's form) called by `Entity()` and by 0x100af340; `static CCycleCount timeLimit;` in 0x102817c0. VC6 makes the guard and an empty destroy for a static of a class with a constructor even without a destructor |
| `??0CPASFilter@@QAE@XZ`, `??0CSingleUserRecipientFilter@@QAE@XZ` | default constructors called by the constructors that the `??_G` sources 0x1002ac40 and 0x100e1140 define to make VC6 emit the destructor; declared, defined nowhere | inline `{}` (Source's own form for CPASFilter) |
| VKeyValues `kv0`, `vfunc0`, `vfunc1` | our vtordisp thunks (`$4PPPPPPPM@A@`) jump to them; nothing defines them | `canon.py`: the game's thunk in the same vtable slot jumps to the matched function (0x101f24e0, 0x101f2120, 0x101f2140) |
| IPositionInterpolator `vfunc1`, `vfunc4` | the derived classes declared other signatures, so their slots kept the interface's placeholders | Source's `void GetDetails(char **, int *, int *)` and `bool ProcessKey(const char *, const char *)` in the interface, Rope, Linear and CatmullRom; the five lifted definitions rewritten in the SDK form (`*outName = "Linear"; ...`), all judged 0 |
| `??1CAI_Expresser@@UAE@XZ`, `??1CUnknown101f0960@@QAE@XZ` | the compiler's `??_G` / `??_E` call an out-of-line destructor; in the game the destructor is inline in the deleting destructor (0x10312e80, matched as `CAI_Expresser::vfunc0`; 0x101f0cb0, matched as a view `sub_101f0cb0`) | left for the deleting-destructor package: an inline destructor needs the members typed (CAI_Expresser: a CUtlVector at +0x14 and a member with a destructor at +0x30; CUnknown101f0960: the member at +8, whose destructor is 0x101d8250, matched as `sub_101d8250`) |

Saved through `edit_contexts` with the block sources in the same call (vtmb 3b8580446, fc524197b); all 18,977
functions still match.

Side finding: a function-local static added to a header changed one unrelated reader's code (0x100532b0, `or ebx,
-1` / `mov ebp, 1` swapped). An added unused inline function did not, a POD static or a class static did, in any
place in the header. One pad declaration in that reader's own source, saved in the same call, brings it back
(WORKAROUND, the unit-wide count dial).

Result: re-link with 14,286 aliases: **7,876 unresolved** (data only, plus the 2 destructors), 0 duplicates, 0 other
errors; wrong (vtable, slot, name) 152 -> **148** (vtables 84, from initializer units 53): 63 deleting destructors,
29 view names, 26 compiler thunks, 15 signature mismatches, 14 base defaults, 1 other.
(`cache/integrate/standalone-20261118-141413.json`.)

## Package 2: bss globals (`pcdecomp bss`, 2026-11-18)

`pcdecomp bss` (pcdecomp branch `bss-defs`) writes and commits `src/_bss/bss.cpp`: one zero-initialized definition per
address in `.data`'s zero-filled tail (0x106b9000-0x109f2a78) that matched code names and none of our objects defines.
An item runs from its address to the next address used or defined there (or the tail's end). Its definition takes the
spelling a header declares, else the most-used one, when the type is known; classes are only forward-declared.

| Kind | Items | Form |
|---|---:|---|
| primitive | 268 | `float g_106bcb58;` |
| primitive+fill | 179 | `int g_106bcb5c;` and `char pcd_fill_106bcb5c[n];`, in sections `.bss$106bcb5c0` / `.bss$106bcb5c1` |
| pointer | 62 | `void *g_106bdabc;` |
| array | 152 | `CBaseEntity *g_106baaa0[1024];` |
| pointer+fill | 256 | `CDevFlagView *g_106bbaa4;` and its filler |
| storage | 159 | `char g_106bd8b0[84];` (class by value, const, templates, clashes); the other spellings alias to it |

VC6 compiles the file and the command checks every item's name, section and span in the object before it writes;
nothing is written if the check fails. vtmb e6528c37f; a second run says "unchanged" and makes no commit.

Result: 1,076 items, 2,558,029 bytes (the last item, 0x109f0b7c, runs to the tail's end), 1,923 names. Re-link with
15,300 aliases: **5,943 unresolved** (4,976 initialized data, 965 const data, the 2 destructors), 0 duplicates, 0 other
errors; bss 1,933 -> **0**. (`cache/integrate/standalone-20261118-154352.json`.)

The other 10 bss names sit at 7 addresses that inline functions' statics define as communals (`s_default` and its
`??_B` guard in CVStatListSet::Find, CVFeatSet::Lookup and CUnknown10206400_FindById; a `??_B` guard in
CUtlRBTree::Links). The linker puts a communal in .bss, so those placeholders alias to it: `canon.py` now takes
communals as data definitions. A second definition there would split one variable in two.

Measured along the way:
- All 1,923 names were unresolved in the link without `bss.cpp`, with LIBC.LIB on it: the library defines none of
  them, and no item has an unmangled (C) name.
- VC6 /O2 drops an unused `static` array, and a unit's `.bss` order is VC6's hash order, not the order of definition.
  So a filler is external and sits in its own grouped section after its item's: the linker sorts `.bss$<addr>0`,
  `.bss$<addr>1` by name. Linked alone (`bss_alone.py`), all 435 pairs cover at least their extent with nothing else
  inside; the filler section's alignment (4 or 8) leaves 2-7 bytes of padding after the item in 243 pairs.
- 42 relocations at 13 items reach outside [0, extent) (0x10703654 CUtlVector +12/+16, 0x1072bc94 +49, 0x106d3e10
  +28,724 past 28,668, ...): in the game they touch the next variable; here the next item lies elsewhere. Harmless for
  the link; it matters once this DLL runs (exact layout, package 4).

Scripts: `scripts/bss_probe.py`, `bss_check.py`, `bss_holes.py`, `bss_alone.py`, `b1/chain_bss.sh` (`sa_link.py`
compiles `src/_bss/*.cpp`; `canon.py` reads its object).

## Package 3: initialized and const data (`pcdecomp data`, 2026-11-18)

`pcdecomp data` (pcdecomp branch `data-defs`, package `pcdecomp.datadefs`) writes and commits `src/_data/*.asm`: the
game's bytes for every `.data` / `.rdata` address that matched code names and none of our objects defines, as MASM
(ml 6.15, `ml /c /coff /Cp`). An item runs from its address to the next address used or defined there (or a directory
range, or the section's initialized end). Its bytes are the game's, as `DB` / `DD` lines; every dword the game relocates
is written as a pointer (`DD name + offset`) to what it points at:

| Pointer target | Count | Written as |
|---|---:|---|
| a jump stub of our function | 156,011 | the function's name |
| our function itself | 17 | the function's name |
| an item's start | 1,894 | the item's label |
| inside an item | 36,350 | the item's label + offset |
| one of our definitions (code objects, bss) | 390 | its name + offset |
| library code (LIBC) | 108 | the library label before it + offset; the items holding them are listed |
| nothing named (the CRT and RTTI data after `??_7type_info@@6B@`) | 1,558 | `DD 0XXXXXXXXh ; unnamed pointer`: a number, no relocation |

The command assembles every file and checks each item's name, section, span and every relocation in the objects
before it writes; nothing is written if the check fails. Each section's items go into files by 64 KB address window
(a run of adjacent items is never split, so a file can run past its window): 22 files, 13 MB, the biggest 2 MB.
Comments wrap at 250 characters (ml 6.15 rejects a line over 512), and a file over 65,535 relocations is a problem
(ml 6.15 keeps the count in 16 bits and wraps it silently). vtmb 2581f7485; the command commits only what changed.

Result: 5,124 items, 2,324,793 bytes, 5,924 names (.data 4,308 items 1,568,209 bytes; .rdata 816 items 756,584 bytes).
Dry run 28 s, real run 31 s, ml 1.6 s for all 22 files. Re-link with 15,300 aliases: **19 unresolved** (the 2
destructors, 14 names inside our definitions, 3 names at a static), 0 duplicates, 0 other errors; initialized data
4,976 -> 15 names, const data 965 -> 2. (`cache/integrate/standalone-20261118-174831.json`.)

The 19 left:
- 14 names at an offset inside another definition: a vtable slot named as a global (`g_1045151c` = the
  CBaseNetworkable vtable + 4), members of ConVars and of `g_106b8584` CAnchorList named as globals. They need aliases
  (name -> definition + offset), which COFF weak externals cannot give: an equate in the `.asm` or a source rename.
- 3 spellings of `g_106b89bc`, the file-static `g_pShadowEntities` (see the near-miss pass in CLAUDE.md): the command
  leaves a static's address alone (a definition there would be a second variable), so its users still need the
  static-binding rule.
- the 2 inline destructors (deleting-destructor package).

Measured along the way:
- 1,552 of the 1,558 unnamed pointers point into the 113 KB of CRT and RTTI data that follows `??_7type_info@@6B@`
  (0x10517260, left to LIBC) up to `.rdata`'s initialized end (0x10532d12). 711 of their 763 targets are `??_R4`
  complete object locators; the dword holding one sits just before a vtable (88 of them a vtable's own prefix, most
  of the rest in the tail of the item before the vtable). A locator's name comes from its vtable's name
  (`??_7X@@6B...@` -> `??_R4X@@6B...@`): an RTTI layer would name them and the type descriptors and hierarchies they
  point at. Until then the locators are raw numbers: harmless for the link, but they would not be rebased if the
  DLL loads away from 0x10000000 (package 4).
- 6 items hold library-code pointers; 0x106b05d4 has 94 (a CRT table in `.data`).
- No relocation reaches past its item's extent outside a run of items, and no game relocation's dword straddles an
  item's start or end (`datarun/straddle_probe.py`: 0 and 0 over the 5,124 items).

Scripts: `datarun/gap_probe.py`, `gap_kinds.py` (the unnamed targets), `b1/chain_data.sh` (`sa_link.py` assembles
`src/_data/*.asm` with the compiler environment's ml; `canon.py` reads the objects).

### The last 17 names (2026-11-19): 19 -> 2

**The 14 names inside definitions.** These were fixed in the sources: blocks that named a member's address got the
object's own name and a member access. They were judged and then saved with `edit_contexts(sources=...)`; all
18,977 still match. The commits are vtmb 451228f25 and e3a11671f.

| block | what changed |
|---|---|
| 0x100a1580, 0x10031d50, 0x10032180, 0x1004f030 | ConVar views became `extern ConVar g_<addr>` with `.GetFloat()` |
| 0x1002b1e0, 0x10029f10 | `g_106b8584` as `CAnchorList` (`m_Size`, `m_pMemory`) |
| 0x1002d930 | `static_cast<IPhysicsCollisionSolver *>(&g_106b86d8)` |
| 0x10031990 | `g_106b88ec.m_04` |
| 0x100fd850, 0x100b7ad0 | a virtual call in a destructor goes through the class's vtable slot (`vt_<addr>[1]`) |

- 0x1004f030 keeps the explicit `m_pParent->vfunc1() ? ... : m_fValue` form: the `GetFloat` inline took the Vector
  operators' inline budget.
- 0x100fd850 and 0x100b7ad0 use the slot because VC6 calls through the slot there: a plain virtual call compiles to
  a direct call.

**The 3 spellings of `g_106b89bc`.** This is the SDK's file-static `g_pShadowEntities`. Block 0x1002dc50 only
matches with it `static`: `extern` scores 18. Four other blocks name it as an external.
- `sa_link.py` now promotes such a file-static to external at link time, when exactly one object defines it and
  other objects want its address (`file-static promoted: _g_106b89bc in b1002dc50`). That is `localize`'s inverse;
  in the game all of these blocks were one unit.
- `canon.py` reads the promoted copies (`promoted.json`) and aliases the other spellings to them.

**Result:** sa_relink has **2 unresolved** (`??1CAI_Expresser@@UAE@XZ`, `??1CUnknown101f0960@@QAE@XZ`), 0
duplicates, 0 other errors. `pcdecomp data` now reports 0 names inside definitions. The chain scripts are
`b1/chain_rtti.sh` and `b1/chain_tail.sh` (from canon on).

### RTTI measured (2026-11-19)

**`/GR` changes no code.** All 18,977 matched sources were compiled with `/O2 /GR` and compared with `/O2`: 0 code
differences, 0 errors, 417 s (`rtti/gr_all.py`).

**The game's RTTI** (`rtti/layer_survey.py`):

| structure | count | where |
|---|---|---|
| TD | 823 | `.data` |
| BCD | 842 | one `.rdata` run, 0x105181b0..0x1052d220 (86,128 bytes) |
| BCA | 776 | same run |
| CHD | 776 | same run |
| COL | 875 | same run |

The `.rdata` run sits just after LIBC's `.rdata`, which starts with `??_7type_info@@6B@`, so `pcdecomp data` writes
none of it today.

**The unnamed pointers.** Of the 1,558:
- 711 point at COLs (1 of them one of the 3 COLs without a vtable name);
- 795 are words holding `??_7type_info@@6B@`, a TD's first word;
- 50 point at CRT data, in `data_10684a44.asm`'s tail;
- 2 point into the middle of a function.

**The gaps between structures.** In the `.rdata` run every structure is followed by zero padding, mostly 4 bytes:
all 3,257 gaps are zero and hold no relocation. VC6's own BCA section is 4 × bases + 1 bytes. In `.data` a TD is
followed by unnamed data of its unit (strings such as `phys_thruster`) (`rtti/tile.py`).

**Names.** The MSVC naming rules (TD, BCD with four encoded numbers, BCA, CHD, and COL from the vtable's name)
reproduce every RTTI name the `/GR` objects define at a game address.

**What our `/GR` objects define:**

| kind | defined | game-named |
|---|---|---|
| TD | 322 | 288 |
| BCD | 322 | 291 |
| BCA | 278 | 265 |
| CHD | 278 | 265 |
| COL | 292 | 264 |

The rest are struct/class keywords (`?AU` against the game's `?AV`), view classes, and different base offsets.

**Design:** pcdecomp `docs/superpowers/specs/2026-11-19-rtti-layer-design.md`, branch `rtti-layer`:
- RTTI names in the DB;
- `/GR` in the flags;
- `pcdecomp data` writes the RTTI no object defines;
- the link audit's D check becomes the RTTI audit.

## Package 3b: the RTTI layer (2026-11-19)

pcdecomp branch `rtti-layer` (head f73201a, not merged yet): `rtti_structures` names every RTTI structure as the
linker does, `pcdecomp rtti` writes the names into the database, `pcdecomp data` writes the RTTI no object defines,
and the link audit's D check lays RTTI tables (and each `/GR` vtable's locator word) over the game's.

Run on vtmb, in order:

| step | result | vtmb |
|---|---|---|
| `pcdecomp rtti` | 4,089 structures (TD 823, BCD 842, BCA 776, CHD 776, COL 872), 3 locators without a vtable name (the VKeyValues / IKeyValues multiple-inheritance ones); 4,069 names added, 20 already there, 0 skipped; 4 s | 4f0b4ff59 |
| flags `/O2 /GR` + `pcdecomp verify` | 18,977 matched functions judged: all still match (2 min 46 s) | 6571f4628 |
| `pcdecomp data` | 8,085 items, 2,386,313 bytes, 34 files; unnamed pointers **1,558 -> 52**; names inside our definitions 0; RTTI written/ours/library: TD 530/288/5, BCD 546/291/5, BCA 506/265/5, CHD 506/265/5, COL 594/273/5 | 591bc3d05 |
| standalone chain (`b1/chain_rtti_layer.sh`) | 15,314 aliases; link.exe: **2 unresolved** (the two deleting destructors), 0 duplicates, 0 other errors; wrong vtable slots unchanged (148 distinct) | `standalone-20261119-094311.json` |
| `pcdecomp hybrid` | both profiles 16,588 functions redirected, self-check clean; the audit predicted 2,600 of 2,600 unresolved names; 0 errors | `hybrid-20261119-094445` |

How the data side works now:
- an RTTI structure no object defines is an item that runs to the next start; one boundary closes the `.rdata` run
  (only where the next word is zero and unrelocated), and one stops each item before a `/GR` vtable's locator word;
- a word pointing at library data by exact address (795 TDs' `??_7type_info@@6B@`, ...) is named: 531 "library
  data" pointers;
- after an RTTI name our objects or LIBC define, the unit data up to the next start goes into a continuation item
  `$rtti_tail_<address>` when it holds a non-zero byte or a relocation (e.g. `$rtti_tail_106b0a4f` after LIBC's
  `bad_cast` TD carries the 94 CRT function pointers).

### The RTTI audit: the next fix round

`pcdecomp link-audit` (3 min 32 s): **407 errors**, 404 of them RTTI (D), over 124 classes. The spec's estimate
of 30-35 was low: one missing base in a parent class shows in every RTTI table of its own.

| kind | count | meaning |
|---|---:|---|
| `rtti-mismatch` on a BCD's word 1 | 124 | the number of bases below a class differs from the game's |
| `rtti-mismatch` on a CHD | 123 | the hierarchy's base count differs |
| `rtti-size` on a BCA | 121 | the game's base list is longer (usually) or shorter than ours |
| `rtti-unknown-target` | 36 | our RTTI name the game does not have |

- The 124 classes: 110 plain ones (CBaseEntity, CBaseToggle, CBaseTrigger, CBaseFilter, CLogicalEntity, the AI
  planes and pathfinder, ...) and 12 `CUtlVectorDataOps<...>` (the game's has 2 bases, `CDefSaveRestoreOps` ->
  `ISaveRestoreOps`; ours none), `CBitStringSaveRestoreOps`, `CSecureTypeBase`. The fix is the real base list in
  each header (through the pcdecomp tools); fixing a parent closes its descendants' errors.
- The 36 unknown targets: view classes standing for a game base (`CBaseTempEntityHead` for CBaseTempEntity in 17
  TE classes, `CTEParticleSystemHead`, `CRopeSimBase`, `CAI_PathfinderCore`, `ConCommandCtorBase`,
  `CMoveHelperServerTouchList`, `CPhysForceMotion`), `struct` where the game has `class` (`?AU` CConstantForceController,
  VKeyValues, `CUtlVectorDataOps<struct CAI_InterestTarget>`), view names of whole classes
  (`CReliableBroadcastFilter` = the game's CRelieableBroadcastRecipientFilter, `CBaseGameSystem` = IGameSystem,
  `CRopeSimBase` = CBaseRopePhysics), and the IKeyValues / VKeyValues multiple-inheritance vtables.
- Not from the RTTI layer (vtmb header changes after the last clean audit of 2026-11-18 11:54): 2 `slot-mismatch`
  (slot 5 of CTriggerPlayerActivityLevel and CTriggerProximity, after e4df5e634's override declarations) and 1
  `static-shared` (three `NullHandle` statics of `variant_t`, after 3b8580446 `inputdata_t.h`).

The RTTI audit has to reach 0 before the standalone DLL runs in the game (package 4): `dynamic_cast` and `typeid`
walk these tables.

### RTTI audit, round 1 (2026-11-19): 407 -> 151

Each fix compared the game's RTTI (base class arrays decoded from its locators) with our header, changed the header
and the matched definitions it breaks in one `edit_contexts` save (every reader judged again on a staged include/;
all 18,977 matched functions still match after each one), and re-ran the audit. Measured 407 -> 254 -> 210 -> 197 ->
155 -> 151 (the last run started before CBreakParser was saved; its 3 errors should go at the next run).

| commit | fix |
|---|---|
| 1243f7ec7 | CBaseEntity : IServerEntity, IServerUnknown : IHandleEntity (fixes every entity class's chain) |
| 82e1bb4c7, 6e17babf5 | ITraceFilter / CTraceFilter under the 6 trace filters (aliases on the stubs: 5ec147297, 92601d5e0) |
| 385f874d3 | the SDK interfaces under 9 headers' classes (IAI_MovementSink, IPartitionEnumerator, INodeListFilter, IPhysicsObjectEvent, ...) |
| 7735cd698 | CHLSharedGameRules : CSharedGameRules |
| 82e257c2e | the save/restore ops family on CDefSaveRestoreOps -> ISaveRestoreOps (26 headers, 122 definitions re-typed, 10 slot aliases on stubs) |
| 49bb30ccf | CRelieableBroadcastRecipientFilter (the game's spelling) as the class, CReliableBroadcastFilter its typedef |
| 971526f97, 06047910f | `class ISaveRestoreOps;` in the 104 forward declarations (`struct` gave `.?AU`); data relabelled |
| bb528e096 | CGrabController : IMotionEvent (Simulate re-typed to the interface slot) |
| 237686046 | CBreakParser : IVPhysicsKeyHandler (new header) |

A matched definition whose slot signature changes keeps its body: its parameters are re-typed inside it by a
self-referential macro (`#define pObject ((IPhysicsObject *)pObject)` after `{`, `#undef` before `}`), so VC6
numbers nothing differently and the code stays byte-identical.

What is left needs two pcdecomp changes:

1. **Follow a matched name across a class or keyword change.** The judge follows a provisional name only within its
   class; when a header moves a function to another class (CPhysForceMotion's `sub_10025f00` / `sub_10025f80` into
   CConstantForceController), respells a class/struct keyword (`CUtlVector<CAI_InterestTarget>::ShiftElementsLeft`
   at 0x102e2b10, `U` -> `V`), or renames a class (the TE ctor 0x100507e0, CBaseTempEntityHead -> CBaseTempEntity),
   it says "your object does not define X, the name this address is known by (defined: Y)".
2. **Slot alignment in `pcdecomp bases`.** It refuses 16 of its 25 candidates ("declares new virtuals": CBaseButton,
   CBaseCombatWeapon and the weapons, CGameMovement, CHL2_Player, CVampireProjectile, CTESprite, ConCommand,
   IMoveHelperServer, ...) because their slot signatures differ from the base's. The overrides have to take the base
   slot's signature (VC6 has no covariant returns; a different parameter list is a new slot) and the matched
   definitions be re-typed as above.

Other leftovers: the TE family (one CBaseTempEntity instead of CBaseTempEntityHead, CTEParticleSystem, canonical
slots 0-5), the rope helpers (CRopeSimBase = CBaseRopePhysics, CSimplePhysics::IHelper with its two slots), the move
helper chain (IMoveHelper's 14 pure slots + destructor, the touch list a member instead of a base), the AI planes /
pathfinder / navigator, CSave, KeyValues, IGameSystem, CSecureTypeBase, and the 3 non-RTTI errors above.

### The two pcdecomp changes, applied (2026-11-19): 151 -> 147

Both are in pcdecomp main a3c663d (branch name-follow): the judge follows a matched name by evidence (a `sub_<addr>`
placeholder, a class/struct keyword, a view class replaced by a game RTTI class), and `pcdecomp bases` aligns
provisional slot parameters (re-typing macros), allows new slots and checks every slot of the class and its derived
classes with a vtable probe (`&C::f` -> `??_9@$B<n>AE`, n the slot offset).

`pcdecomp bases --apply` saved 13 classes (6b3c31933: 13 headers, 9 definitions rewritten, 9 names followed, all
18,977 still match). Audit 151 -> 147 (link-audit-20261119-144619.json): CBreakParser's 3 (round 1) and ConCommand.
The other 12 fixed classes had no audit error; the 63 classes that do are blocked further on:

| outcome in `bases` | classes |
|---|---|
| not a candidate (base already declared; the chain above is wrong: weapons, TE family, AI planes, KeyValues) | 30 |
| members inside the base (the view class declares the base's members under its own names) | 9 |
| loses inherited names | 5 |
| slot moved (by-position names: CPhysForce, CTEBreakModel, CTEShatterSurface, IMoveHelperServer) | 4 |
| has derived classes / padding named by code / several bases / breaks a match / base not declared / other signature | 15 |

Round 2 starts at the roots that carry many children: CBaseCombatWeapon (members inside the base; ~15 weapon
classes below it), the TE family, CAI_PlaneSolver / CAI_Pathfinder, CSave, KeyValues.

### Round 2 (2026-11-19): 147 -> 128 -> 111

By hand, with fix scripts that call `edit_contexts` (stage all readers of the changed headers, then save):

- **Step A** (60a1fb258): CBaseAnimating : CBaseToggle (was CBaseEntity).
- **TE family**, three batches:
  1. 757520040: CBaseTempEntity gets its real constructor `CBaseTempEntity(const char *name)` (0x100507e0, was a
     view-class `CBaseTempEntityHead` ctor); 313 readers judged, all match.
  2. 6e635fa3b (19 headers, 53 definitions re-typed, 37 names followed, 226 readers): the TE classes derive from
     CBaseTempEntity / CTEParticleSystem (CTEExplosion, CTEInspectionFX, CTESparks) / CTEBaseBeam; their slots 2-4
     take the base signatures (`CBaseTempEntity *vfunc2(unsigned int)`, `vfunc3(const Vector &, const QAngle &)`,
     `vfunc4(CRecipientFilter &, float)`); calls `vfunc4(&filter, 0)` become `vfunc4(filter, 0)`.
  3. ac83d0501: TE_BeamLaser / TE_BeamRing (0x1005be30, 0x1005cae0) call slot 4 of their global directly.
- Audit 147 -> 128 (link-audit-20261119-152003.json): 19 TE errors gone, none new. CTEDust's 3 are left (its base
  is CTEParticleSystem in the game; the origin was declared as three ints of its own).

Then, same evening:

- **CTEDust : CTEParticleSystem** (ba4e411fe): its three "own" ints at 0x0c were the base's origin.
- **View bases folded into the class** (the game has no such base): CSave (423743299, was `ISave, CSaveSections`),
  CAI_Pathfinder (055992b17, was `CAI_PathfinderCore`; CAI_Component gets Source's `CAI_Component(pOuter)`),
  CAI_PlaneSolver (a292f1d69, was `CAI_PlaneSolverBase`; its two vectors are one member `m_lists` whose constructor
  allocates the second one's buffer).
- **Weapons, preparation:** ba89d104c (CBaseCombatWeapon's four members below CBaseAnimating take CBaseEntity's names:
  m_flNextThink, m_nEffectFlags, m_name26c, m_pEdict2e0; 11 readers rewritten) and e72477650 (its padding renamed
  m_pad_004_ ...: `bases` refuses padding whose name appears among the readers' tokens, and 2,911 readers declare
  local structs with m_pad004 / m_pad2e4 members).

Audit 128 -> 111 (link-audit-20261119-154516.json): CTEDust, CSave, CAI_Pathfinder, CAI_PlaneSolver and
CAI_RatPlaneSolver errors gone (17), none new.

**VC6 stores a constructor's vptr after the member initialisers** (and sinks it further, past plain body stores, to
just before the first call that could read it). A view base that exists only to get stores before the vptr store is
not needed: the same stores in the initialiser list give the same code (CSave, CAI_Pathfinder, CAI_PlaneSolver
matched this way). A store in the body that the game makes before the vptr store needs an initialiser; an allocation
call before it needs a member whose constructor makes the call.

**Weapons, what is left (B2).** `pcdecomp bases --class CBaseCombatWeapon` now stops at "overrides with another
signature" (94 slots). Our base chain declares virtual slots only up to 133 (CBaseEntity's vfunc137 and up are plain
members), so only slots 0..133 have to be aligned; the weapon's 134..371 stay new slots. Of 0..133 the game's weapon
vtable inherits all but 19 (5, 34, 35, 77-82, 86, 103-105, 117, 119, 124, 126, 127, 130): the other declarations go.
Ten of the 19 have another signature than the chain's. Slot 86 is the hard one: CBaseEntity declares it `void
vfunc86()`, a placeholder; its real form takes five arguments (ShouldTransmit-like). About 35 classes work around
it (plain members of their own with char/bool returns and int/void * arguments). Giving CBaseEntity::vfunc86 its
real signature, and every override that one signature, comes before the weapon's base.

**KeyValues (4 errors) is a pcdecomp RTTI-layer naming problem**: IKeyValues and VKeyValues have two vftables each
(virtual base IKeyCacheable), so their locators are `??_R4IKeyValues@@6B0@@` / `6BIKeyCacheable@@@`, but the data
layer names the first `??_R4IKeyValues@@6B@` and leaves the others in `$rtti_tail` blocks. VKeyValues is also a
`struct` (game `.?AVVKeyValues@@`).

**A rename and its callers cannot share a batch.** The judge accepts a renamed definition (name follow), but readers
judged in the same batch that call it by its new name fail with "cannot link: unknown symbol": the readers are judged
in parallel against the database, which still has the old name until the batch is saved. So a rename with direct
callers takes two batches: the definition first, the callers after. A call through a jump-stub placeholder
(`sub_<stub>` on a view struct) links by address and bridges the gap for one batch.

### Slot 86 unified (2026-11-19, 744760d35)

CBaseEntity's slot 86 is now `virtual char vfunc86(int a, int b, int c, int d, int e)`. The game's body 0x100ab020
(`ret 0x14`, the answer in al) takes five stack arguments; b is the viewer's edict. The matched body keeps its
placeholder name sub_100ab020, and the classes that call it directly keep their own `sub_100ab020` views.

- **Who owns slot 86.** In the game's vtables 21 classes fill slot 86 with their own function (scratchpad
  `v86_scan.py`: slot 86 of each class against its RTTI parent's). The rest inherit CBaseEntity's or their parent's.
  The `virtual void vfunc86();` lines in CAI_Hint, CBaseButton, the CNPC_V* classes and others are in flat views
  with no base: they are untouched.
- **char, not bool.** An override must keep the base's exact return type (C2555). The matched CBaseEntity body is
  char. A bool body that returns a bool expression compiles the same under char. A char body that returns a char
  under bool would gain a normalisation (`test al, al; setne al`). So the six bool overrides became char, and none
  changed code.
- **Batch 744760d35:** 9 headers, 10 definitions, 6,028 readers judged, all 18,977 still match.
  - The plain-member workarounds (CBaseViewModel, CHudCounter, CHudTimer, CPointCamera, CPropClockHand,
    CRopeKeyframe) are virtual overrides now.
  - CAuspexAura and CNPCMaker no longer add a new slot at the end; CNPCMaker comes to the game's 621 slots.
  - 9 linker names followed (`?vfunc86@X@@QAE_N...` -> `?vfunc86@X@@UAED...`).
- **Two kinds of reader broke, and both are worth knowing:**
  - CServerNetworkProperty::vfunc9 (0x101ab7e0) is `jmp [eax+0x158]`, a jump to the outer entity's slot 86 with no
    arguments of its own. It now calls through `CBaseEntitySlots::slot86()`. CItemContainer::vfunc86 (0x10209990) shows
    VC6 turns a call that passes on its own stack arguments unchanged into a `jmp`, so the original was probably a
    5-argument forward. That needs CServerNetworkProperty.h's slot 9 changed; left for later.
  - CBaseCombatCharacter's plain `char vfunc86(int x5)` became an implicit override. Two callers that called it
    unqualified (CAI_BaseNPCTroika 0x102c0420, CHL2_Player 0x10351550) turned into virtual calls, and the qualified
    tail call in CItemContainer could not link the new name. All three were bridged through a `sub_103407b0`
    placeholder view in that batch. They go back to `((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc86(...)`
    in the weapon batch: `edit_contexts` saves only a batch with a header change, and `submit` does not replace a
    matched block.
- **Cached failures from a rebuilt stage.** A second `fixkit --stage` on the same stage folder while a `--stage-all`
  ran rebuilt the folder under it. 13 readers failed with C1083 (cannot open include file), and the judge cached those
  failures (`cache/obj/<key>.fail`) as verdicts for that source and header digest, so a clean rerun returned them
  again. Scratchpad `unfail.py` drops such entries. Use another `RTTI_STAGE` for side checks while a stage runs.

### Weapons B2: CBaseCombatWeapon : CBaseAnimating (2026-11-19, ad1b35b5f)

Saved in one batch: 25 headers, 59 definitions rewritten, 3,236 readers judged again, all 18,977 still matched, 52 names
now follow the new declarations. Link audit 111 -> 90 errors (link-audit-20261119-162848.json): the 21 RTTI errors of
CBaseCombatWeapon, CWeaponGravityGun, CWeaponMelee, CWeaponMelee_MingXiaoMelee, CWeaponMelee_TzimisceMelee,
CWeaponPhysCannon and CWeaponThrown_Chang_Energy_Ball are gone; nothing new. Weapons left (3 errors each):
CWeaponRanged, CWeaponRanged_FlameThrower and CWeaponIThrown still sit on the view base CWeaponRangedBase with a flat
slot list (B3: the same change one level down), and CWeaponList (a game system, not a weapon).

The game's RTTI: CBaseCombatWeapon -> CBaseAnimating -> CBaseToggle -> CBaseEntity (6 bases contained). Ours was the
view base CWeaponAnimBase plus a flat list of all 372 slots. Scratchpad `fix_cbw2.py` does the following:

- **Header.**
  - The base becomes CBaseAnimating.
  - Of slots 0..133 only the 19 that the game's weapon vtable fills with its own function stay, each with the chain's
    exact signature. The other 115 placeholder declarations go.
  - The members inside CBaseAnimating (0x004..0x4a4, already carrying CBaseEntity's names since B1) go.
  - CBaseAnimating declares its constructor (0x1008b230 through the stub 0x100103fc, the address the CWeaponAnimBase
    stand-in had).
- **Overrides in the 23 weapon subclasses** take the chain's signature:
  - vfunc5 returns `CBaseEntity *`. VC6 has no covariant returns.
  - vfunc80 returns `int`: `return (int)&g_x;`.
  - vfunc82 returns `datamap_t *`.
  - CWeaponGravityGun::vfunc117 returns `int`.
  - CWeaponPhysCannon::vfunc130 takes `(int)`.
  - CWeaponIArmor's `CWeaponIArmor *vfunc5(int flags)` was a plain overload that overrode nothing. The game's
    CWeaponIArmor owns slot 5 (0x103f3f50), so it is the override now.
  - Matched definitions are re-typed by `pcdecomp.align.resigned_definition`, with self-referential macros for the
    parameters the body reads as the old type.
- **New linker names, taught first.** The weapon's own slots 5, 34, 35, 86, 117 and 130 and `??0CBaseAnimating@@QAE@XZ`
  were given to `rename_symbol` before the batch (scratchpad `rename_pre.py`, 7 commits `rename: ...`). A function
  matched under a provisional name (sub_X, Class::vfuncN) learns the new name beside the old one. Callers judged in
  the same batch can then link the new name, so no bridge is needed. For slot 86 (above) this would have saved the
  bridge batch.
- **Two blocks flipped by the unit's count of names**, the known VC6 dial:
  - 0x100532b0's `struct PcdUnitPad100532b0` workaround is not needed any more and goes.
  - 0x1016fa90 drops an unused `#include "CUnknown101d7520.h"` (one more or one fewer header of names flips two of
    its frame slots).
- **CItemGAstrolite** (declared on CBaseEntity, game base a weapon) passes `(int)pOther` to the weapon's slot 34/35.

### Weapons B3: the ranged weapons (2026-11-19, 47d73ca06)

Game RTTI: CWeaponRanged -> CBaseCombatWeapon, CWeaponIThrown -> CBaseCombatWeapon (not CWeaponRanged: the same depth),
CWeaponRanged_Rifle_Remington -> CWeaponRanged (ours was CBaseEntity). The view base CWeaponRangedBase goes (its
constructor was CBaseCombatWeapon's, stub 0x10011b8f, already known as `??0CBaseCombatWeapon@@QAE@XZ`). Scratchpad
`fix_cbw3.py`, one batch: 19 headers, 39 definitions, 3,036 readers judged again, all 18,977 still matched, 58 names
follow. Link audit 90 -> 81 (link-audit-20261119-165923.json): 9 gone, 0 new.

- **CWeaponRanged** declares the 26 slots its game vtable fills with its own function (scratchpad `rng_sigs.py
  CLASS BASE` lists own / inherited slots with both signatures), with the chain's signature, and the new virtuals
  372, 373, 374 in slot order (they were plain members). Five own slots are matched under free `sub_` names
  (82, 282, 360, 362, 363): declared, and their addresses given the member names first.
- **CWeaponIThrown**'s new slots 372 / 373 are `_purecall` in the game's vtable: `virtual void vfuncN() = 0;`.
  CWeaponIThrownGrenade derives from it.
- **Return types the chain fixes:**
  - vfunc5 returns `CBaseEntity *` in 16 classes.
  - vfunc362 returns `CWeaponActivityRecord *`: `return (CWeaponActivityRecord *)&g_x;`.
  - CWeaponRanged::vfunc293 returns `int` (was `void *`).
  - vfunc370's second parameter is `CBaseCombatWeapon *`.
  - `resigned_definition` refuses void -> value, so two were done by hand: vfunc316 (`char`) and vfunc325 (`bool`).
    Both end in the base call, and `return base(...)` is the same code as the void form.
- **sizeof(CBaseCombatWeapon) is 0x898**, not 0x65c (its members go on to m_f894).
  - Subclass pads start at 0x898.
  - The three subclass members that lie inside the base become CBaseCombatWeapon's, with their names: m_n74c (the
    clip, FlameThrower), m_i778 and m_p86c (CWeaponIThrown).
  - With 0x65c the scores were 1-22: every member sat 0x23c too high.
- **Name hiding:** four blocks call their own `__fastcall sub_X(void *)` from a member function. The new chain has a
  member of the same name, which hides the free one (C2660). `::sub_X(this)` calls the same function.
- **Name-count dial:** 0x100a1f90 (a CBaseCombatWeapon.h reader, think-context restore) moved one stack load. Dropping
  its eight unused `CUnknown*.h` includes matched it; one dummy struct also did.
- 23 `rename_symbol` calls first (scratchpad `rename_b3.py`, every name checked with DbgHelp's undecoration).

Left among weapons: CWeaponList (a game system: 3 errors). CWeaponThrown_Chang_Ghost and CWeaponThrown_Grenade_Frag
have no class body yet (game: CBaseCombatWeapon / CWeaponIThrownGrenade).

### Move helper family (2026-11-19, f851adeef)

Game RTTI: CMoveHelperServer -> IMoveHelperServer -> IMoveHelper, single inheritance. Ours had IMoveHelperServer
without a base and CMoveHelperServer with a second, view base CMoveHelperServerTouchList (it stood for the touch list,
so that its stores came between the two vtable stores of the constructor). Scratchpad `fix_mh.py`, one batch: 3
headers, 5 definitions, 98 readers judged again, all 18,977 still matched, 1 name follows. Link audit 81 -> 76
(link-audit-20261119-174908.json): 5 gone, 0 new.

- **IMoveHelper** is the 2004 SDK's game_shared/imovehelper.h with one change and three additions. Slots 0..13 are
  `_purecall` in the game's vtable 0x1046afbc:
  - The order is GetName, ResetTouchList, AddToTouched, ProcessImpacts, Con_NPrintf, StartSound, PlaybackEventFull
    (12 arguments), PlayerFallingDamage, PlayerSetAnimation, GetSurfaceProps, IsWorldEntity.
  - The SDK's second StartSound is not in it: it is CMoveHelperServer's own slot 16.
  - Troika added slots 11..13.
  - The destructor is slot 14, declared last as in the SDK.
- **IMoveHelperServer** adds the pure slot 15 (SetHost) and no members. m_pHost is CMoveHelperServer's (+4).
- **CMoveHelperServer**'s touch list is the SDK's `CUtlVector<touchlist_t> m_TouchList` (+8, `m_TouchList(0, 128)`
  in the constructor's initialiser list; touchlist_t = Vector + CGameTrace, 0x60 bytes). As a member it is built
  after the base's vtable store and before the class's own, as in the game. VC6 drops the dead IMoveHelper vptr store
  by itself, so the constructor matched on the first judge.
- **Deleting destructors:** the game has two byte-identical copies, 0x1013ee10 in IMoveHelper's slot 14 and 0x1013ede0
  in IMoveHelperServer's. The matched name `??_GIMoveHelper` sits on 0x1013ede0, and rename_symbol cannot move a name
  that is not provisional. The block keeps it (a derived dummy now implements the 14 pure slots), and 0x1013ee10 stays
  the plain IMoveHelper::vfunc14. The link audit verifies the `??_GCMoveHelperServer` the compiler emits against the
  game's 0x1013edb0.
- **Names:** a matched source must keep defining its recorded name, or the same qualified name. The judge follows only
  `sub_` placeholders moved to another class, class/struct spellings and RTTI class renames. So the hand-matched
  functions keep their names: sub_1000185c (the destructor), vfunc14 (its deleting destructor), sub_1013eec0 (slot
  15) and the free `__stdcall sub_1013eee0` (slot 0). Before the batch, `rename_mh.py` gave their addresses the names
  the vtable uses: `??1CMoveHelperServer@@UAE@XZ`, `??_GCMoveHelperServer@@UAEPAXI@Z`, `vfunc15`, `vfunc0 const`.
  The unresolved vfunc0 / vfunc15 slots of the old audit are gone.

### Point entity package (2026-11-20, 59a0704d2 / 2ed008a21 / 48d53b138)

Seven classes onto their game bases. `pcdecomp bases` refused all seven (members inside the base, lost inherited
names, a constructor naming an indirect base, moved slots), so three hand batches did it (scratchpad `fix_pe1.py`,
`fix_pe2.py`, `fix_pe3.py`, with `rename_pe1..3.py` before each save). All 18,977 functions still match; 73 + 7 + 365
readers judged again. Link audit 76 -> 55 (link-audit-20261120-000519.json): 21 gone (3 per class), 0 new.

| class | was | now |
|---|---|---|
| CConstraintAnchor | view base CConstraintAnchorBase | CPointEntity |
| CFunc_LOD, CBaseParticleEntity | view base CConstraintAnchorBase | CBaseEntity |
| CSimplePhysicsBrush | view base CSimplePhysicsBrushBase | CBaseEntity |
| CGameSign, CPhysForce | CBaseEntity | CPointEntity |
| CAmbientGeneric | view base CAmbientGenericBase | CPointEntity |

- **The view classes stay, as no class's base.** CConstraintAnchorBase is how ~15 matched factories run the entity
  base constructor; CAmbientGenericBase::CAmbientGenericBase is the matched name of that constructor's body
  (0x1009d980). CSimplePhysicsBrushBase was only a base and is gone.
- **A direct child of CBaseEntity** declares slots 134..240 as new virtuals (our CBaseEntity.h has them as plain
  members), copied from CPointEntity.h, and has `char m_pad03e0[0x450 - 0x3e0]` before its own members. A child of
  CPointEntity has neither: CPointEntity has both.
- **Constructors:** `: CBaseEntity(0)` for a direct child; a CPointEntity child writes no base initialiser (an
  indirect base cannot be named; CPointEntity's inline default constructor runs CBaseEntity(0), and VC6 drops its
  dead vptr store). CPointEntity's `operator new` hides the placement form: factories write `::new(mem) X`, as the
  matched CPhysExplosion factory does.
- **Members inside CBaseEntity** take CBaseEntity's names: m_spawnflags -> m_flags204, m_flags19c -> m_nEffectFlags,
  `m_pEdict2e0` cast to the reader's view. CAmbientGeneric's use function is the SDK's SetUse:
  `m_pfnUse = static_cast<void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float)>(&CAmbientGeneric::sub_101ad470);`
  (its stub 0x100131e2 is the address the game stores). The +0x4c EFlags store in CSimplePhysicsBrush's constructor
  is written as the matched CPhysBox constructor writes it (a cast: +0x4c is in our CBaseEntity's pad).
- **Slot signatures.** An override keeps the base slot's signature. Where the game's own function was matched under
  another signature, the class declares the base's virtual and keeps the matched one as a plain overload after it
  (CSimplePhysicsBrush `void vfunc226(int)` + `int vfunc226()`, CGameSign `void vfunc41()` / `int vfunc42(int)` +
  the `(void *)` forms). Functions matched as free functions (sub_1004faa0, sub_1004fac0, sub_1004fae0,
  sub_10114a50, sub_10114a70) keep their names; rename_symbol gave their stubs the vtable's names.
- **CPointEntity's slot 136 is bool:** CBaseEntity's 0x10026d30 is `xor al, al; ret`, CAmbientGeneric's returns 1.
  Our CBaseEntity's slot 41 (`void vfunc41()`) is probably short of a parameter: CSimplePhysicsBrush's and
  CGameSign's slot 41 both take one stack argument. Not changed (CBaseEntity.h has many readers).
- **CPhysForce's slot 241 is `_purecall`** (0x10430812) in its vtable: a pure virtual with CPhysThruster's slot 241
  signature (IPhysicsObject *, Vector *, Vector *). CPhysThruster and CPhysTorque are still flat.

### Single classes (2026-11-20, 4ef2b1ced .. c0e187708)

Six classes onto their game bases by hand batches (scratchpad `fix_sc1.py` .. `fix_sc6.py`, `rename_sc2.py` and
`rename_sc5.py` before their saves). All 18,977 functions still match. Link audit 55 -> 38 after sc1..sc5
(link-audit-20261120-005146.json): 18 gone, 1 new (the ??_G below), then 38 -> 37 after sc6
(link-audit-20261120-005733.json, 0 new). Left: KeyValues 5, CSecureTypeBase (MvsnSec) 3, the five layers below 15,
rope 4, CAI_Navigator 2, CUtlVectorDataOps<CAI_InterestTarget> 2, 2 CTrigger slot-5, variant_t NullHandle 1.

| class | was | now |
|---|---|---|
| CVampireProjectile (+ _MingXiaoSpit) | CBaseEntity | CBaseAnimating |
| CGameMovement | flat | IGameMovement (new real interface: virtual destructor + 4 pure slots) |
| CConstantForceController | view base CPhysForceMotion | IMotionEvent (the 2004 SDK class; the view is gone) |
| CHudCounter | CBaseEntity | CBaseHudEntity (new header: RTTI only, the game has no vtable of its own for it) |
| CPathKeyFrame | flat | CLogicalEntity |
| CBaseMoveBehavior | CBaseEntity | CPathKeyFrame |

- **A class under CBaseAnimating** pads `char m_pad04a4[0x730 - 0x4a4]` (our CBaseAnimating is 0x4a4 bytes) and keeps
  its new virtuals from slot 134 (CBaseAnimating declares up to 133). CBaseAnimating's member `sub_1008b3c0` hides
  the free function: `::sub_1008b3c0(this)`.
- **A real virtual destructor in a new base** (IGameMovement) makes the derived destructor virtual: rename_symbol the
  body and the scalar deleting destructor to `??1X@@UAE@XZ` / `??_GX@@UAEPAXI@Z` first, and keep the slot-0 function
  matched as `vfunc0` a plain member (a virtual one would be a new slot). Declare the destructor out of line when
  the game's ??_G calls it (`virtual ~CGameMovement();`): with an implicit one the compiler's ??_G inlines it and the
  audit reports `differs` (score 4).
- **A base without a game vtable** (CBaseHudEntity) is a plain class with `: CBaseEntity(0)`, slots 134..240 and the
  pad; VC6 drops its dead vptr store in the derived constructor, so no vtable of it is emitted.
- **A plain member that overrides a base virtual** becomes virtual, and a caller that called the base's body by a
  cast (`((CPathKeyFrame *)this)->vfunc103()`) now makes a virtual call: write the qualified `CPathKeyFrame::vfunc103()`
  and rename_symbol the virtual name (`?vfunc103@CPathKeyFrame@@UAEXXZ`) before staging, or the judge cannot link it.
- **Slot 153** is CBaseEntity's `int vfunc153()`; CBaseMoveBehavior's bool body compiles the same as int. Slot 135
  keeps CLogicalEntity's `virtual void vfunc135()` with the matched `float vfunc135(float)` overload after it.
- **CLogicalEntity's `operator new`** hides the placement form as CPointEntity's does: `::new(mem) CBaseMoveBehavior`.

Not done in this package (each a layer of its own, not a single class):

- **Game-system root** (CWeaponList 3, CBaseGameSystem 2): done in the next section.
- **CBreakable family** (CBreakableSurface 3; CPushable : CBreakable is flat and silent): the same offsets carry
  different member types in the two classes (+0x458 `unsigned int` / `EHANDLE`, +0x46c a pad / COutputEvent, +0x484
  `char[0x18]` / COutputEvent); slot 74 is `bool` in CBaseEntity (CBreakable's body is a tail call: make the lifted
  callee bool too), slot 117 `int` (CBreakable's body is `and al, 0xfd`: check VC6 gives it for `& ~2` on int).
- **CBaseButton** (3): in vampire_all.h, with members in the CBaseEntity region under other names and CRotButton on it.
- **CHL2_Player** (3): needs CBasePlayer (718 lines, 39 readers, flat) on CBaseCombatCharacter -> CBaseFlex ->
  CBaseAnimatingOverlay -> CBaseAnimating, all flat or on CBaseEntity in our headers.
- **CPropDoorknob / CPropDoorknobElectronic** (1 + 3): the prop layer CBaseLockableEnt (no game vtable) ->
  CBaseVampireSkillEntity -> CBreakableProp -> CBaseProp -> CBaseAnimating, four flat classes.

### Game-system root (2026-11-20, 76ef15fd8 .. e2c1036cd)

The game's chain is IGameSystem -> CBaseGameSystem -> CAutoGameSystem. 0x10516c94 is IGameSystem's vtable (its
locator is ??_R4IGameSystem: 8 `__purecall` slots, slot 8 the scalar deleting destructor 0x1042c2e0), and the game has
no CBaseGameSystem vtable at all. 0x1042c2c0 (14 bytes: vptr store + `sub_1042c420(this)`) was matched under the fixed
name `??1CBaseGameSystem@@UAE@XZ`, and rename_symbol refused fixed names. A pcdecomp change, MERGED main 439cb03
(rename_symbol `also=True` adds a second name beside a fixed one; the judge follows a definition whose name the symbol
map gives the address), then scratchpad `rename_gs1.py` (2 names) and `fix_gs1.py` (4 headers, 3 definitions, 334
readers judged, 1 name followed). Link audit 37 -> 32 (link-audit-20261120-105936.json, 5 gone, 0 new).

- **IGameSystem.h** is the real root: `virtual bool vfunc0() = 0` .. `vfunc7() = 0`, `virtual ~IGameSystem()`, plus the
  plain `vfunc8(unsigned)` / `sub_1000cfbd()` that matched code calls. 0x1042c2c0 is `IGameSystem::~IGameSystem()`;
  the compiler's ??_GIGameSystem (now the name of 0x1042c2e0) gives the game's code (no `differs`).
- **CBaseGameSystem derives from IGameSystem** in both worlds (GameSystemRoot.h, CAnchorList.h) and has no destructor
  of its own: no unit emits ??_7CBaseGameSystem any more. The old `??_7CBaseGameSystem@@6B@` name at 0x10516c94
  (rename bbd6d5f49, so the old dtor's vptr store would link) stays in the map unread; a dry run without it matched too.
- **CWeaponList's ??_G block** (0x10250340) defines PCD_INITIALIZERS: it builds the class the initializer units see
  (CAutoGameSystem base, CUtlLinkedList member), 3 bases as in the game. The flat CWeaponList stays for vfunc5 only.
- **A vtable pointer on a formerly empty base moves it.** The flat CSoundEmitterSystem keeps CSoundEmitterSystemBase's
  vptr as a plain member; with IGameSystem polymorphic MSVC put that base at +0 (the base with a vptr goes first) and
  `delete this` became a virtual call. The flat class now takes a plain view `CSoundEmitterGameSystemPart` (one
  member, `sub_1000cfbd`) for its +0xdc part (0x101b0110 casts to it).

Still flat, not audit errors: the non-initializer CAutoGameSystem (CDirtySpatialPartitionEntityList.h, slot 8 a hand
`virtual vfunc8(unsigned)`) and its ~8 classes; unifying them means a compiler ??_G per class.

The game's own RTTI contradicts 15 vtable names in the symbol map (scratchpad `rtti/vt_contra.py`). Most are the
primary-vtable spelling of multiple-inheritance classes (`??_7X@@6BBase@@@` vs the scanner's `6B@`); the real ones are
the open layers: `??_7IKeyValues@@6B0@@` (done, next section), CRopeSimBase (game: CBaseRopePhysics) and
CUtlVectorDataOps<UCAI_InterestTarget> (game: V) (both done, "InterestTarget + rope"), CReliableBroadcastFilter (game: CRelieableBroadcastRecipientFilter), and the CBaseGameSystem name above.

### KeyValues (2026-11-20, f87db6e2a .. 148ad5500)

The DLL's only virtual inheritance: IKeyValues : virtual IKeyCacheable, VKeyValues : virtual IKeyValues (vbptr at 0,
no vftable of its own; RTTI BCDs IKeyCacheable vdisp 4, IKeyValues vdisp 8). `pcdecomp rtti` names a vftable's COL
only for non-virtual bases (`_secondary_name` wants pdisp -1) and names a primary `6B@`, so 3 COLs had no name and
IKeyValues' primary was `??_R4IKeyValues@@6B@` where VC6 writes `6B0@@` (a class with several vftables). scratchpad
`rename_kv1.py` gave the 4 COLs VC6's names (`??_R4IKeyValues@@6B0@@`, `..6BIKeyCacheable@@@`, `??_R4VKeyValues@@6B
IKeyCacheable@@@` at +0x28, `..6BIKeyValues@@@` at +0x30: vdisp order = layout order, slot counts 3 / 21 agree);
`fix_kv1.py` made VKeyValues a `class` (the game's `.?AV`; 13 readers, 0x101f2d70's name followed `PAU1@` -> `PAV1@`).
Our COL words (offsets, cdOffset 0, base counts) equal the game's (scratchpad `kv_cols.py`). Audit 32 -> 27
(link-audit-20261120-110948.json, 5 gone, 0 new). A pcdecomp fix of the scanner is not needed for this DLL (3 COLs);
for other game DLLs: name a virtual base's vftable by matching the polymorphic virtual bases in vdisp order to the
unexplained vftables in offset order.

### InterestTarget + rope (2026-11-20, 4870d5414 .. 20d57619f)

Two models where the game has one class, both read from the game's RTTI (scratchpad `rtti/fix_it1.py`,
`fix_rope1.py`, `fix_rope2.py`). Audit 27 -> 21 (link-audit-20261120-113252.json, 6 gone, 0 new; after the
qualified base call and the data rerun link-audit-20261120-113926.json: 21 errors, its one new warning gone).

- **CAI_InterestTarget is a class.** The motor's facing-queue ops are `.?AV?$CUtlVectorDataOps@VCAI_InterestTarget@@$08@@`;
  ours was a struct (`U`). The map already had the V names of the vtable and its RTTI. CAI_InterestTarget.h and
  0x102e0860's forward declaration say `class`; 0x102e2180 calls ShiftElementsLeft by name, so 0x102e2b10 got its V
  spelling first (rename also=True, 4870d5414). 181 readers; 5 names followed U -> V (the 4 ops slots, ShiftElementsLeft).
- **CRopeSimBase was CBaseRopePhysics.** The game: CSimplePhysics::IHelper (0x10497520, two `__purecall`) <-
  CBaseRopePhysics (0x10497510) <- CRopePhysics<10> (0x10464d44) / CRopePhysics<512> (0x10516cd4), both with the base's
  two slots; CRopeDelegate : IHelper (0x10464d34); CHangRope : CRopePhysics<512>. Ours had a flat CBaseRopePhysics
  (vfunc0/1 matched) beside CRopeSimBase : IHelper (constructor 0x102492a0, sub_10249340), a CRopePhysics<N> with a
  third slot, and CRopeDelegate without a base. Now CBaseRopePhysics.h holds IHelper with Source's two slot
  signatures, one CBaseRopePhysics : IHelper with both member sets, and CRopePhysics<N> (arrays sized from N, so
  CRopePhysics<512> is exactly 0x5830 bytes and CHangRope derives from it without padding). CRopeDelegate and
  CHangRope override IHelper's slots: their vfunc0 is Source's GetNodeForces, `pAccel->Init(0, 0, -1500)` (the old
  `return a2` int form had the same code). 0x102492a0 got `??0CBaseRopePhysics@@QAE@PAXH0@Z` first (rename also=True,
  5bbe5ee07: its callers link by name). CUnknown102496a0.h (Source's CSimplePhysics integrator) no longer includes
  CBaseRopePhysics.h (cycle: CBaseRopePhysics' m_timer is one); 0x10249710 includes CBaseRopePhysics.h instead.
- **A base call is a qualified call.** CHangRope::vfunc1 called the base's ApplyConstraints through a plain
  `sub_100027c5` member: once the rope vtables named `CBaseRopePhysics::vfunc1`, the audit warned about two spellings of
  0x102494d0. `CBaseRopePhysics::vfunc1(pNodes, nNodes)` (Source's `CBaseRopePhysics::ApplyConstraints`) is the same
  direct call (d1795c983).
- `pcdecomp data` rerun (20d57619f): the data package's CHangRope vtable still named the old `vfunc0@CHangRope@@UAEHHHH`.
  A rename that changes a slot function's mangled name needs this rerun before a standalone link.

Not done: CUnknown102496a0 is Source's CSimplePhysics (same members: predicted time, current step, step, step
squared); naming it so means its constructor name `??0CSimplePhysics@@QAE@XZ` first, and the empty CSimplePhysics
shell around IHelper then goes.

### Triggers + Navigator (2026-11-20, 7ae93a632 .. bdb51b531)

Two slot-5 declarations and one base, read from the game's vtables and RTTI (scratchpad `rtti/fix_trig1.py`,
`rename_trig1.py`, `fix_nav1.py`, `rename_nav1.py`, `fix_nav2.py`). Audit 21 -> 17 (link-audit-20261120-120233.json,
4 gone, 0 new); all 18,977 functions still match.

- **Trigger slot 5.** CTriggerPlayerActivityLevel (vtable word 0x10487a50 -> 0x10210830) and CTriggerProximity
  (0x10480948 -> 0x101cc140) hold their own scalar deleting destructor in slot 5, but neither class declared the slot,
  so the vtables their constructors emit held CBaseTrigger's 0x101c5e10. Both functions were matched as view methods
  (V10210830::sub_10210830, Helper::sub_101cc140). Each class now declares `virtual CBaseEntity *vfunc5(unsigned int
  flags)` and the blocks define it with the same bodies (`return (CBaseEntity *)(this);`). The vfunc5 names came first
  (7ae93a632, 25cd6ad24), so the judge followed.
- **CAI_Component is 0x10 bytes.** The game's CAI_Navigator is CAI_Component (+0) + CAI_DefMovementSink (+0x10) (COL
  0x105249e4). Ours had the view base CAI_NavComponentData (vptr, owner, +8, +0xc), because our CAI_Component was 8
  bytes. Every CAI_Component subclass (Senses, Expresser, MoveProbe, Pathfinder, LocalNavigatorHead, CUnknown103008f0)
  declared the same two ints at +8 / +0xc and set +0xc = -1 first, so they belong to the base: the owner's value at
  +0x156c and the frame it was stamped in (the navigator stamps both on itself and on sub_102ecc00's component).
  - **Where the -1 goes decides the store order.** In the game's CAI_Senses creation (0x1027cc10) the stores are
    `+4 = owner`, base vptr, `+0xc = -1`. A mem-initialiser `m_n0c(-1)` in CAI_Component's constructor stores -1
    before the vptr (0x1027cc10 and 0x10312d40 scored 2). The constructor body `{ m_n0c = -1; }` stores it after the
    vptr, as the game does (VC6: initialisers, vptr, body). In CAI_Navigator's own constructor the CAI_Component vptr
    store is dead (the derived vptr follows with no call in between), so the game shows owner, -1, the sink's vptr.
  - CAI_Navigator : CAI_Component, CAI_DefMovementSink. CAI_Component's slot 0 is its virtual destructor, so
    CAI_Navigator declares `virtual ~CAI_Navigator()` (0x102ecb90). The written-out slot 0 (0x102ecb20) stays a plain
    `vfunc0`, as with IGameSystem's vfunc8. Renamed first: 0x1049d9c4 `??_7CAI_Navigator@@6BCAI_Component@@@`,
    0x102ecb90 `??1CAI_Navigator@@UAE@XZ` and 0x102ecb20 `??_GCAI_Navigator@@UAEPAXI@Z` (both also=True).
  - 46 navigator, pathfinder and move-probe blocks were rewritten mechanically: m_i08 / m_unk08 / m_pad08 -> m_n08,
    m_i0c / m_unk0c / m_nUnk0c -> m_n0c, and `m_pOuter + N` -> `(int)m_pOuter + N` (m_pOuter is `void *`). The rewrite
    covered only the blocks that failed to compile; CAI_NavRoute's own m_i08 in 0x102ecd20 stays.
  - Step 2 (bdb51b531): 0x102ecb20 called the destructor through the transplant placeholder `sub_10011c98`. Once
    0x102ecb90 had its name, that gave a naming-debt warning. It now calls `this->CAI_Navigator::~CAI_Navigator()`,
    the same direct call (link-audit-20261120-120812.json: 17 errors; that spelling is gone).
- `pcdecomp data` rerun (6228a506d): CAI_Navigator's RTTI structures are now ours, so the data package drops its COL
  (7867 -> 7866 items).

Not done: CAI_HumanoidNavigator (slot 0 0x10262480) is still a transplant class without its CAI_Navigator base, and
calls the destructor as `sub_10011c98` (one naming-debt warning).

### MvsnSec + NullHandle (2026-11-20, a694cf2bb)

One header batch (scratchpad `rtti/fix_sec1.py`, 3,665 readers). Audit 17 -> 13 (link-audit-20261120-122409.json,
4 gone, 0 new, warnings unchanged); all 18,977 functions still match; `pcdecomp data` rerun changed nothing.

- **CSecureTypeBase<CPfnTraits1, ...> has no base.** The game's RTTI for CBasePlayer's scrambled criminal level
  (vftable 0x10470484) has no contained bases (BCD 0x1051f038) and one class in its hierarchy (CHD 0x1051f060). Ours
  derived from the view CSecureValueStorage, which kept the constructor's `m_value = 0` before the vptr store.
  CSecureValueStorage is now the member `m_Data` at +0x04, as Traits0's `CSecureValueInit0 m_Data` already was. A
  member's constructor also runs before the vptr store. A plain `m_value(0)` mem-initialiser in the template scored
  2 on 0x1015d7c0 (VC6 moved the next `push ebx` above the store).
- **variant_t::NullHandle is a non-static member.** VC6 names the guard of a local static in an inline *static*
  member function by a counter of the unit. A probe (scratchpad `nh/probe.cpp`) gave `?$S1@?1??NullHandle@...` in
  one unit and `?$S3@...` in another, so units need not share it (audit E static-shared 0x109f0afc, three blocks).
  A member function or a free inline function gets the communal `??_B?1??F@...@51` instead. Source's hNull also sits
  in a member, `variant_t::Entity()`. 0x100af340 calls it on its variant copy (`((variant_t *)&var)->NullHandle()`).

### Class layers: CBaseButton, CBreakable (2026-11-20, aa8f48545 .. 4fb9b00bc)

Two header batches (scratchpad `rtti/fix_btn1.py`, `rtti/fix_brk1.py`; slot names first with `rename_btn1.py`,
`rename_brk1.py`). Audit 13 -> 10 (link-audit-20261120-124407.json) -> 7 (link-audit-20261120-125518.json), 0 new
errors; warnings: 3 naming-debt warnings gone, the rest only changed block counts. All 18,977 functions still match.

- **The own slots of a class.** `rtti/vtcmp.py CLASS BASE` lists the words of the class's game vtable that differ from
  its base's. Those slots, and only those, are declared in the class, with the base slot's signature (vfunc5 returns
  `CBaseEntity *`). Slots 134 and up are declared again in each derived class as new virtuals, because our
  CBaseEntity declares 0..133; the derived class's own ones among them get their real signature, the rest are
  `virtual void vfuncN();` placeholders.
- **CBaseButton : CBaseToggle** (e68e18ac4, 102 readers). The view base CBaseButtonBase is gone. Own slots 5, 34, 35,
  71, 82, 103, 104, 110, 117, 128 and 134..240. Slot 34 (0x100c8990) was the plain `bool sub_100c8990(int)`; the body
  is `neg/sbb/neg`, an int, so it became `int vfunc34(int)` (renamed first: aa8f48545). The members of CBaseEntity's
  region went; the code uses CBaseEntity's names (m_nVSoundGroup, m_iHealth, m_vecMovedir, m_pfnTouch ...). Think, touch
  and use pointers are stored as Source does, `static_cast<void (CBaseEntity::*)(...)>(&CBaseButton::f)`.
- **An identifier-count dial on 0x100532b0.** The batch removed about 120 declarations from a header that
  vampire_all.h includes. CBaseCombatCharacter's 0x100532b0 (a vampire_all.h reader) then swapped `or ebx,-1` and
  `mov ebp,1` at 0x10053ad6 (score 2). 5 to 16 file-level `typedef int pcd_dialN;` lines all restore the game's order;
  the block has 10, with a comment. Later edits of vampire_all.h headers may move it again.
- **CBreakable : CBaseEntity, CBreakableSurface : CBreakable** (4fb9b00bc, 46 readers). CBreakable was flat. Own slots
  5, 74 (bool, was int), 82, 103 (Spawn, was `sub_1010d6a0`), 104, 110, 113, 117 (int, was char: `and al,0xfd` is
  `& ~2` on an int), 134..241; 241 is new in CBreakable (Die, was `sub_1010e750`). The handle at 0x458 and the outputs
  at 0x46c / 0x484 moved from CBreakableSurface into CBreakable, as `EHANDLE m_hBreaker`, `COutputEvent m_OnBreak`,
  `m_OnHealthChanged`. `CBreakable() : CBaseEntity(0) {}` builds them before the vptr store, as func_breakable does;
  func_breakable (0x1010d3a0) is now `new CBreakable`, so our object emits CBreakable's vtable and the data package
  dropped the game's copy (7,865 -> 7,859 items). CBreakableSurface keeps its own slots 5, 80, 81, 82, 103, 104, 130,
  141, 142; slot 141 takes CBreakable's `CGameTrace *`.
- **A virtual slot breaks direct base calls.** Calls of a base's slot through the old flat view were direct calls.
  Once the slot is virtual they compile to `call [vtable+n]`. Qualify them: `CBreakable::vfunc104()`,
  `((CBreakable *)this)->CBreakable::vfunc230(...)`. A qualified call needs the new (virtual, `U`) name in the
  symbol map before staging, so rename the slot first (`rename_brk1.py --round2`). The renames keep the old names.

### Doorknob chains and the player chain (2026-11-20, 8b703f3d3 .. 6b5ab1da9)

The 7 errors left after the class layers were two inheritance chains: the doorknobs (CPropDoorknob has 10 bases in
the game's RTTI) and the HL2 player (CHL2_Player: 10 bases, ours 1). Both were fixed one class at a time, base first,
each batch through edit_contexts (scratchpad `rtti/fix_prop1.py`, `fix_vse1.py`, `fix_ovl1.py`, `fix_flex1.py`,
`fix_bcc1.py`, `fix_bcp1.py`, `fix_hl2p1.py`, `fix_hl2p2.py`; the slot names first with the matching `rename_*.py`).
Audit 7 -> 3 (link-audit-20261120-132246.json) after the doorknobs, 3 -> 5 -> **0** after the player
(link-audit-20261120-145947.json, link-audit-20261120-150758.json). All 18,977 functions still match. Warnings
5,221 -> 5,224: six addresses gained a second spelling (a slot's virtual name beside the name older callers use),
three lost one.

- **Doorknob chain A** (8b703f3d3): CBaseProp : CBaseAnimating, CBreakableProp : CBaseProp; both were flat. Own
  slots of CBaseProp 5, 103, 104, 158; of CBreakableProp 5, 74, 82, 103, 104, 113, 124, 142, 144, 230 and the new
  265, 266. Slot 74 was the view function CBreakablePropFields1018fe50::sub_1018fe50.
- **Doorknob chain B** (7c7b1a604): CBaseVampireSkillEntity : CBreakableProp, CBaseLockableEnt :
  CBaseVampireSkillEntity, CPropDoorknob : CBaseLockableEnt (CPropDoorknobElectronic follows). The handle at +0x80c
  moved down to CBaseLockableEnt (vampire_skill allocates 0x80c); slot 117 of both doorknobs was a plain sub_.
- **Player chain P1..P5**: P1 CBaseAnimatingOverlay's own slots (04e23eb15; its layer array is 4 records, so the
  class is 0x848 bytes), P2 CBaseFlex : CBaseAnimatingOverlay (89aa9e946), P3 CBaseCombatCharacter : CBaseFlex
  (9d2dd4722; 375..405 were plain members spread over three headers, now one block in slot order), P4 CBasePlayer :
  CBaseCombatCharacter (92bc10cde, 2,630 readers), P5 CHL2_Player : CBasePlayer (ba6c5b35d, 2,612 readers;
  renames ba51e88ec, c910b56d9). Each class declares below its base's slot count only the slots whose game vtable
  word differs from its base's, each with the base slot's signature; a base placeholder takes the signature of the
  matched function that owns the slot.
- **The overload fallback.** When the class's own function is a plain member whose signature is not the slot's (a
  `Vector f()` in an `int f(int)` slot: the same `ret 4`), the function stays plain and the class declares an
  override with the slot's signature that nothing defines. VC6 has no covariant returns, and a virtual overload
  would open a new slot; a plain overload does not. The standalone link fills the vtable word from the alias object
  (the game's word for that slot). CBasePlayer 331, 340, 367, 379, 385, 430; CHL2_Player 196, 370, 430.
- **A vfuncN name is a guess.** CBasePlayer's `vfunc103` (0x1015efa0) was a plain function: the game's slot 103 of
  CBasePlayer is 0x1016d260 (matched as `SV::sub_1016d260`). Under the real base the name made it the slot-103
  override. It is `sub_1015efa0` now (renamed c7b41b0bc); check every vfuncN against the game's vtable word before a
  base turns it into an override.
- **Arguments belong to the call whose callee pops them.** Two pushes before a call of this player's slot 217 looked
  like its arguments, but slot 217 (CBaseEntity::vfunc217) ends with a plain `ret`: they are the second and third
  arguments of the call after it, CBasePlayerPart's slot 35 (`vfunc35(float *pOrigin, const char *pName, int a)`).
- **Handles: `m_Index` is `unsigned long`.** Binding it to a `const unsigned int &` parameter makes a temporary and
  changes the code. `EHandle_Get(const CBaseHandle &)` (CEHandleGet.h) reads the word in most functions; four
  allocate differently with it and read `*(unsigned int *)&m_hX` instead.
- **Accessors for members in a base's padding.** +0x270 and +0x3e0 lie in CBaseEntity's and CBaseToggle's padding;
  other classes keep their own members at those offsets, so CBasePlayer reads them through accessors (`Sub270()`,
  `MoveType3e0()`) instead of naming the base's padding. +0x65c and +0x148c are named in the base (only player code
  reads them).
- **Dials moved again.** Removing hundreds of placeholder names from vampire_all.h headers moved the two
  name-count dials: 0x1016fa90 now 52 (46..59 and 110..123 match under the P4 headers, 0..45 swap the two frame
  slots; the old 17..24 window no longer matches), 0x100532b0 17 under P4 (5..29 match) and 30 under P5 (0..9 and
  19..45 match, 10..18 swap). `rtti/dialsweep2.py ADDR N0 N1` sweeps from zero under the staged headers; pick the
  middle of the widest window. The view CCharSlots (0x100d2b30) counted its slots after
  CBaseCombatCharacter's old 0..291; it now counts after 0..405, up to 459.
- **The CBasePlayer constructor keeps its view.** 0x1015d7c0 is matched as the constructor of the stand-in
  CHL2_PlayerBase (it calls CBaseCombatCharacter's constructor and writes the members by offset). The stand-in left
  CHL2_Player.h for the block itself, and the symbol map learned `??0CBasePlayer@@QAE@XZ` as a second name
  (rename `also=True`, c910b56d9), so CHL2_Player's constructor calls CBasePlayer's by its real name.
- **A vtable is checked only once an object emits it.** After P5 the audit had 3 -> 5 errors
  (link-audit-20261120-145947.json): the RTTI errors were gone, but CHL2_Player's constructor now emits its vtable
  under the real chain, and slots 50..53 and 74 held CBaseEntity's functions where the game has
  CBaseCombatCharacter's. Nothing emitted CBaseCombatCharacter's vtable before, so P3 missed them: 50 and 51 are plain
  members with another signature (`vfunc50(int)`, `vfunc51(int, float *)`), 52, 53 and 74 are matched as fastcall
  functions (`float __fastcall sub_103321a0(char *self)`: ecx is this). P5b (6b5ab1da9, 2,612 readers) declares
  the five with CBaseEntity's signatures and defines none of them (the overload fallback again).
- **fixkit precompiles.** `--stage-all` fills the object cache on every core before judging (the judge's
  precompile), so a batch with 2,600 readers is judged in one sitting; the save then finds the objects cached.
- **P5 in numbers.** CHL2_Player's own slots below 469 are 29 (scratchpad r2/vt_CHL2_Player.txt); the base placeholders
  of CBaseCombatCharacter 333, 366, 370..373 and CBasePlayer 436, 453 took the matched functions' signatures (their
  plain declarations went); CHL2_Player's 5, 142, 144, 462 were re-typed with macros; its data below 0x2460 went
  (the readers use CBaseCombatCharacter's m_vEyeLookTarget, m_vCurEyeTarget, m_flHeadYaw; slot 367 returns a
  QAngle, so two readers hold a QAngle). 2,612 readers; the first judging left 2: the dial above and a call that
  CBaseCombatCharacter's member `sub_10139610` hid (now `::sub_10139610`).

## Work packages, in order

1. **One name per function (code side, mechanical).** About 13,000 names, so the code half of the link closes:
   10,058 spellings, 2,751 vtable slots, 166 import slots, and 53 mis-declared imports and CRT functions. Two steps:
   - A quick alias object (COFF weak externals: alternative name -> canonical name, made from the database and the
     game's vtables) makes the standalone link resolve all code at once without touching the sources. **Done
     2026-11-18** (above): 16 code names left, plus 268 vtables that need their override declared.
   - Override declarations (package 1b, above): wrong vtable slots 379 -> 148; code names 16 -> 2 (two inline
     destructors, for the deleting-destructor package).
   - Then the declarations get canonical names in the sources, one class view at a time, through pcdecomp tools.
2. **bss globals (mechanical).** **Done 2026-11-18** (above): `pcdecomp bss`, 1,076 definitions; bss 1,933 -> 0.
3. **Initialized and const data.** **Done mechanically 2026-11-18** (above): `pcdecomp data`, 5,124 items as MASM
   with the game's bytes and named pointers; data 5,941 -> 17 names. The typed lift (strings, float tables,
   DATADESC/datamap tables, ConVars, vtables as C++) is later work and needs a data judge that compares defined bytes
   with the game's, as the function judge does. The 14 inside names and the 3 `g_106b89bc` spellings were fixed
   2026-11-19, leaving 2 unresolved (the deleting destructors). The RTTI layer followed the same day (package 3b,
   above): RTTI from `/GR`, unnamed pointers 1,558 -> 52, still 2 unresolved. The RTTI audit's 407 errors
   (real base lists in the headers) reached 0 on 2026-11-20 (above). Next: the 2 deleting destructors, the
   148 wrong vtable slots.
4. **Exports, entry point, first standalone build in game.** Then byte-exact layout (it includes the 13 bss items whose
   code reaches past their extent).
