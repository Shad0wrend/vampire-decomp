// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f4e70 size=0x97
#include "CWeaponLockpick.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;

struct CHandleX {
    unsigned int m_Index;
    CBaseEntity *Get() const
    {
        if (m_Index != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
            if (s->m_Serial == (int)(m_Index >> 13))
                return (CBaseEntity *)s->m_pEntity;
        }
        return 0;
    }
};

typedef void (__fastcall *PFN_Void)(void *);

void CWeaponLockpick::vfunc319()
{
    sub_10253ea0();
    void *pOwner = sub_102521f0();
    CBaseCombatCharacter *pChar;
    if (pOwner == 0)
        pChar = 0;
    else
        pChar = *(CBaseCombatCharacter **)((char *)pOwner + 0xa8);
    if (!vfunc314() && pChar) {
        CHandleX *h = (CHandleX *)((char *)pChar + 0xea4);
        if (!h->Get()) {
            CBaseEntity *pUnarmed = (CBaseEntity *)pChar->sub_10335950("item_w_unarmed");
            if (pUnarmed)
                h->m_Index = *pUnarmed->vfunc1();
            else
                h->m_Index = 0xffffffff;
        }
        ((PFN_Void)(*(void ***)pChar)[456])(pChar);
    }
}
// END FUNCTION

// FUNCTION: 0x103f4f40 size=0x78
#include "CWeaponLockpick.h"
struct CLockpickOwner { char pad[0xa8]; void *m_p; };

void CWeaponLockpick::vfunc292(int a)
{
    CLockpickOwner *pOwner = (CLockpickOwner *)sub_102521f0();
    if (pOwner && pOwner->m_p) {
        vfunc307(vfunc328());
        vfunc333(1, 1, 0, 0, 0, 0);
        float t = vfunc332() + gpGlobals->curtime;
        m_f730 = t;
        m_f734 = t;
        vfunc310(t);
    }
}
// END FUNCTION

// FUNCTION: 0x103f5070 size=0x2c
struct CThinkOwner103f5070 {
    int sub_100080f8(void *fn, float a, float b, int c, int d, int e);
};
struct CLockUnit103f5070 {
    CThinkOwner103f5070 *sub_10252290();
    int sub_103f5070();
};
void sub_10005d99();

// TARGET: sub_103f5070
int CLockUnit103f5070::sub_103f5070()
{
    CThinkOwner103f5070 *pOwner = (CThinkOwner103f5070 *)sub_10252290();
    if (pOwner != 0) {
        return pOwner->sub_100080f8((void *)sub_10005d99, 64.0f, 0.7f, 0, 0, 0x46004003);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409af0 size=0x1e
#include "CWeaponLockpick.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponLockpick::vfunc5
CWeaponLockpick *CWeaponLockpick::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
