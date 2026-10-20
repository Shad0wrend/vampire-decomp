# pcdecomp project

This folder is a pcdecomp matching-decompilation workspace. Change source only through the pcdecomp MCP tools
(`claim_function`, `compile_and_diff`, `edit_context`, `rename_symbol`, `release_function`): they compile with the
game's original compiler and keep every matched function matching. Do not edit `src/` or `include/` by hand; hand
edits in `src/` are re-checked and broken functions go back to the queue.

Start with `guide("workflow")`, then `project_info()` and `claim_function()`.
Never copy anything from this folder outside it, and never push this repository: the game's code belongs to its
owner.

## Source engine DATADESC getters (82 bytes, one instruction sequence, many addresses)

Recognise it by this assembly (G = guard byte, T = 5 dwords inside a table, DM = a datamap global):

```
mov cl, byte ptr [G]; mov al, 1; test al, cl; jne L        ; guarded first-call init
or cl, al; mov eax, dword ptr [0x1055dc70]; mov byte ptr [G], cl
xor ecx, ecx; mov [T+4], ecx; mov [T], eax; mov [T+8], ecx; mov [T+12], ecx; mov [T+16], ecx
L: mov dword ptr [DM+4], n; mov dword ptr [DM], P; mov eax, DM; ret
```

It is NOT a guarded 5-dword struct (that reading stays at score 8-9 whatever you try; older notes on these
functions that say "5-dword static" or "same unsolved family" describe that dead end). It is the body of Source's
`BEGIN_DATADESC(Class) ... END_DATADESC()`: a function-local `static typedescription_t dataDesc[]` table in .data.
Its last entry is a `DEFINE_OUTPUT`, whose save/restore ops pointer is `g_1055dc70` (eventFuncs, a variable, not a
constant), so VC6 guards the table and fills the last 5 dwords of that entry (ops, inputFunc, td,
fieldSizeInBytes, unk) on the first call; T = that entry + 0x18. DM is the class's datamap
`{dataDesc, dataNumFields, dataClassName, baseMap}`; the function sets `DM = {&dataDesc[1], n}` and returns `&DM`.

Recover the whole table with read_data before writing anything:
1. P = &dataDesc[1]. Entries are 0x2c bytes, so the table starts at P - 0x2c and has n + 1 entries (entry 0 is all
   zeros): `read_data(P - 0x2c, "dwords", 11 * (n + 1))`.
2. Each entry is 11 dwords: fieldType, fieldName (string), fieldOffset[0], fieldOffset[1], fieldSize | flags << 16,
   externalName (string or 0), pSaveRestoreOps, inputFunc, td, fieldSizeInBytes, unk.
   `read_data(ptr, "string")` gives each name. `read_data(DM + 8, "dwords", 1)` then `"string"` gives the class name.
3. flags: 0x2 DEFINE_FIELD, 0x6 DEFINE_KEYFIELD (has an external name), 0x8 DEFINE_INPUTFUNC (fieldType 0, a function
   in inputFunc), 0xe DEFINE_INPUT, 0x16 DEFINE_OUTPUT, 0x20 DEFINE_THINKFUNC / DEFINE_FUNCTION (a function, no
   external name). fieldSize > 1 is an array.
4. Function pointers in the table point at jump stubs (skip functions): declare `void sub_XXXXXXXX();` with the
   address read_data shows and write `(void *)sub_XXXXXXXX` in the inputFunc slot.

Write it like this (matched: 0x103c50c0, CNPC_VVampireBoss; copy the struct exactly, it gives the 0x2c layout and the
store order). DM is an `extern int g_XXXXXXXX[2]` placeholder; put your own function's DM address, entries and
input-function addresses in place of these:

```cpp
struct ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1065e418[2];
void sub_103c76b0();

int *sub_103c50c0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bJumping", {0x6498, 0}, 1, 2 },
        { 2, "m_pMonsterModelName", {0x6680, 0}, 1, 2 },
        { 2, "m_pBodyEmitterNames", {0x6684, 0}, 4, 2 },
        { 3, "m_vJumpOrigin", {0x649c, 0}, 1, 2 },
        { 3, "m_vJumpTarget", {0x64a8, 0}, 1, 2 },
        { 1, "m_fJumpHeight", {0x64b4, 0}, 1, 2 },
        { 1, "m_HealthPercentRecord", {0x6698, 0}, 1, 2 },
        { 1, "m_fJumpGravity", {0x64b8, 0}, 1, 2 },
        { 15, "m_fTaskStartTime", {0x669c, 0}, 1, 2 },
        { 12, "m_hParticleEmitters", {0x66a0, 0}, 4, 2 },
        { 12, "m_hTransformPartner", {0x66b0, 0}, 1, 2 },
        { 16, "m_MorphModelName", {0x667c, 0}, 1, 6, "MorphModel" },
        { 0, "InputTransformModel", {0, 0}, 1, 8, "TransformModel", 0, (void *)sub_103c76b0 },
        { 10, "m_OnTransformComplete", {0x6664, 0}, 1, 0x16, "OnTransformComplete", g_1055dc70 },
    };
    g_1065e418[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1065e418[0] = (int)&dataDesc[1];
    return g_1065e418;
}
```

What the judge checks: it places `dataDesc` and its guard at the game's addresses and compares every number of the
table (types, offsets, sizes, flags) and whether each pointer slot is empty or not; the pointers themselves (strings,
functions) are not compared, but copy every string exactly from read_data. A wrong number gives "your initial value
differs from the game's at <table address>" (the bytes it shows are the table's first 16, not the differing ones:
compare your entries with read_data entry by entry). A wrong entry count gives "the game's code refers to different
addresses where yours uses it".

## The matches together: what the link audit checks (rulings of 2026-10-20)

`pcdecomp link-audit` checks the matched functions as one program would see them; judging one function at a time
cannot see these. Keep to them in new work:

- **One name, one definition.** A class, struct or global is defined in exactly one header; a header that needs it
  `#include`s that one (never a second copy, not even a placeholder class with `vfuncN` slots: it clashes as soon as
  the real base is modelled). A placeholder global has one type in every header that declares it (`g_10566458` is
  `CGlobalEntityList *`; cast where another view is needed).
- **VC6 has no covariant returns.** An override returns the base slot's type: `CBaseCombatWeapon *vfunc5(unsigned int
  flags)` in every weapon, not `CWeaponMelee *` (error C2555 once the base is modelled).
- **A vtable slot that holds the class's own function is declared in that class** (with the base slot's signature),
  matched or not; otherwise the vtable the class's constructor emits holds the base's function there.
- **A callee the game compiled before its caller, in the same unit.** If a function only matches with its callee
  defined in its own block (VC6 then knows which registers the callee keeps; with a declaration you get
  `push esi; mov esi, ecx` around the call), match the callee in its own block first, then copy that source into the
  caller's block in a namespace of the block's own:
  `namespace block_102a1590 { int __fastcall sub_102a1420(N *p) { ... } } using namespace block_102a1590;`
  Never a second plain definition (two blocks defining one name: LNK2005), never `inline` (it gets inlined) or
  `static` (VC6 compiles it last and forgets its registers), never an anonymous namespace (VC6 writes the file's path
  into its names). A member callee: `struct CFooUnit : CFoo { void sub_X(); };` in that namespace, defined there, and
  called as `((CFooUnit *)this)->sub_X()` (0x1008d230, 0x10200ca0).
- **CUtlRBTree instances.** `CUtlRBTree12/16/24/36/232` each stand for every game instance of `CUtlRBTree<T, I>` with
  that node size, and each instance has its own sentinel (a guarded static in `Links()`). A function of an instance
  reads its links through `CUtlRBTree16At<sentinel address>` (the address its code fills with `0xffff`, `0xffff`,
  `0xffff`, `1` after testing the guard byte; e.g. `mov word ptr [0x106bdb44], si`):
  `const CUtlRBTree16At<0x106bdb44> *tree = (const CUtlRBTree16At<0x106bdb44> *)this; ... tree->Links(i)`.
  The tree classes have no `Links()` of their own any more; the other classes of one tree (`CUtlRBTreeFind16`,
  `CUtlRBTreeInsert24`, `CUtlRBTreeFind232`, `CUtlRBTreeNode36`) cast `this` the same way.
- **One static in the game, one function in include/.** When several functions' code use the same guarded static
  (same guard byte, same object), they all inline one function that holds it: that function goes in include/ and
  every one of them calls it, never a `static` of its own. This holds for a static with a destructor too (the judge
  places its destroy `?s_default@...@$AV2@A` since 2026-10-21). The stat list lookup (guard 0x109f0b2a, default list
  0x109f0b40) is `CVStatListSet::Of(pChar)->Find(type)` (CVStatList_t.h); the entry lookup (0x109f0938, 0x109f0960)
  is `FindEntry(key)` (CEntryX.h). Never a `static CVStatList_t s_default(-1)` or `static CEntryX` of your own.
