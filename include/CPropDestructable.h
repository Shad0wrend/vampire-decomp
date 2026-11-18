// CPropDestructable: declared by pcdecomp transplant for 0x101938d0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

// 0x10192130 (stub 0x1000ea39), cdecl, caller pops 0x28: the debris spawner CPropDestructable::sub_10193cc0 calls with
// (this->slot8(), pPhys, this->slot217(), this->slot219(), &vel, &angVel, [this+0xdc], [this+0x76c], 0, 0).
// The three virtual calls (slots 8 / 217 / 219) take NO arguments: their results are pushed as arguments of this function.
void sub_10192130(int nSlot8, void *pPhys, const void *pAbsOrigin, const void *pAbsAngles, const void *pVel, const void *pAngVel, int nDc, int n76c, int a8, int a9);

struct CPropDestructableDamage    // the 0x4c byte damage info handed to vfunc144: the attacker at +0x28, a value at +0x2c
{
    int m_data[19];

    CPropDestructableDamage *sub_101c2690();    // the default constructor body (stub 0x10001528): returns this
};

// Placeholder virtual slots that keep the slot number of vfunc144 right (CBaseEntity declares the slots up to 133).
#define DESTRUCT_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CPropDestructable : public CBaseEntity
{
public:
    DESTRUCT_SLOTS10(dsa)    // slots 134..143
    virtual void vfunc144(const CPropDestructableDamage *pInfo);    // slot 144 "CPropDestructable::OnTakeDamage"-like: copies the damage info; when the stage counter (+0x784) reached the stage count (+0x77c) fires the output at +0x874 with the attacker and, with the byte at +0x790, breaks through CBreakableProp::vfunc144, else stops taking damage, clears bit 13 of the flags and sets +0x200 = 2; otherwise advances to the next stage (sub_10193cc0) and restores the health from +0x780
    CPropDestructable *sub_10193940();
    void vfunc103();    // slot 103 "CPropDestructable::Spawn": remembers the model name (+0x388 -> +0x794), CBreakableProp::vfunc103, SetModel, stage counter +0x784 = 0, stage health +0x780 = health, AddFlag(0x40000), SetSolid(6) (inlined scope trace), then VPhysicsInitShadow-like sub_100a5bb0 when the dword at +0x788 is set, else VPhysicsInitNormal(6, 0, 0, 0); SetNPCTransparent(0)
    void vfunc104();    // slot 104: fires the model's precache entries (+0x794, eight dwords, up to the first zero, from stage +0x784 on) through the engine's slot 13 (0x1070b22c)
    void sub_100a5bb0();    // stub 0x10007284, called by Spawn
    void sub_10007c57(const CPropDestructableDamage *pInfo);    // CBreakableProp::vfunc144, called directly
    void sub_10193cc0(int stage, int a);    // switches to the given stage (stub 0x1000d35f)
    int vfunc142(const void *pInfo);    // slot 142: false once the flag byte at +0x791 is set; copies the 0x4c byte damage record (a CVDmg_t pointer at +0, a plain damage value at +0x2c) and, when its damage (GetDmg of the record, else the plain value) exceeds the stage health (+0x78c), hands the copy with the excess as the plain value to CBreakableProp::vfunc142
    int sub_10008a1c(void *pInfo);    // CBreakableProp::vfunc142 (stub 0x10008a1c), called directly
    void sub_10193ea0(inputdata_t *pInput);    // an input handler that takes an integer off the stage health: when the integer exceeds the stage health (+0x78c) the health is lowered by the excess, the OnHealthChanged output (+0x748) fires with the new health, and at 0 or less the prop takes a damage record (attacker = the input's caller, damage = the integer) through slot 144
    void vfunc113();    // slot 113 (the base CBreakableProp::vfunc113 via stub 0x10004dbd, then the stage index of the last model: +0x77c = the count of the non-zero entries of +0x794, then sub_10193cc0(the stage counter +0x784, 0))

    char m_pad03e0[0x730 - 0x3e0];
    COutputEvent m_Output730;    // 0x730
    COutputEvent m_OnHealthChanged748;    // 0x748
    char m_pad0760[0x77c - 0x760];
    int m_n77c;    // 0x77c: the stage count / index of the last model entry
    char m_pad0780[0x784 - 0x780];
    int m_nStage784;    // 0x784: the stage counter
    int m_nPhysicsMoveOnLevel;	// 0x0788
    int m_nStageHealth78c;    // 0x78c
    bool m_bBreakOnEnd;	// 0x0790
    bool m_bOnlyDmgOnInput;	// 0x0791
    char m_pad0792[0x794 - 0x792];
    int m_hModels794[8];    // 0x794: the model names' indices of the stages, zero ends the list
    COutputEvent m_Outputs7b4[8];    // 0x7b4: one output per stage
    COutputEvent m_Output874;    // 0x874: fired when the last stage is reached

    virtual CBaseEntity *vfunc5(unsigned int flags);    // the scalar deleting destructor: destroys the outputs, the base destructor body (sub_1008b3c0), then frees when bit 0 of flags is set
    void sub_1008b3c0();    // CBaseAnimating destructor body (stub 0x10004c3c), called directly
public:
    virtual datamap_t * vfunc82();
public:
    virtual void vfunc265();
};
