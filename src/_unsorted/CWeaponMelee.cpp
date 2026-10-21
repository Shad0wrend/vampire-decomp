// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e9b40 size=0x1e
#include "CWeaponMelee_TzimisceMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee::vfunc5
CBaseCombatWeapon *CWeaponMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103ea5b0 size=0xd5
#include "CWeaponMelee.h"

extern "C" int atoi(const char *);

// TARGET: CWeaponMelee::vfunc370
void CWeaponMelee::vfunc370(int *event, CBaseCombatWeapon *other)
{
	switch (event[0])
	{
	case 0xbb9:
	case 0xbd6: case 0xbd7: case 0xbd8: case 0xbd9: case 0xbda: case 0xbdb: case 0xbdc: case 0xbdd:
	case 0xbdf: case 0xbe0: case 0xbe1: case 0xbe2: case 0xbe3: case 0xbe4:
	case 0xbe7:
		if (*(int *)((char *)other + 0xa8) == 0)
			vfunc326();
		return;
	case 0xbbb:
		return;
	case 0xfa1:
		sub_10093b10(atoi((const char *)event[1]), 1);
		return;
	case 0xfa2:
		sub_10093b10(atoi((const char *)event[1]), 0);
		return;
	}
	CBaseCombatWeapon::vfunc370(event, other);
}
// END FUNCTION

// FUNCTION: 0x103ea6d0 size=0xc1
#include "CWeaponMelee.h"
#include "CEntityVSlots.h"

bool CWeaponMelee::vfunc283(CBaseEntity *pTarget)
{
	if (!pTarget)
		return false;
	if (!((CEntityVSlots *)pTarget)->slot158())
		return false;
	CEntityVSlots *pOwner = (CEntityVSlots *)sub_102521f0();
	if (!pOwner)
		return false;
	if (pOwner == (CEntityVSlots *)pTarget)
		return false;
	Vector vecOwner = pOwner->slot192();
	Vector vecTarget = ((CEntityVSlots *)pTarget)->slot192();
	if (vecOwner.DistToSqr(vecTarget) > 22500.0f)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x103eac30 size=0x19
#include "CWeaponMelee_TzimisceMelee.h"

void CWeaponMelee::vfunc367(int a, int b, int c)
{
	sub_103ea7e0(0x4b, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x103eae00 size=0x78
#include "CWeaponMelee.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CMeleeOwnerSlot429View {
    S100(a0) S100(a1) S100(a2) S100(a3)
    S10(b0) S10(b1)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8();
    virtual void vfunc429();
};
struct CMeleeSlot372View {
    S100(a0) S100(a1) S100(a2)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6)
    virtual void c0(); virtual void c1();
    virtual bool vfunc372(int a, int b, int c);
};
struct CMeleePlayerView {
    char m_pad[0x1538];
    unsigned int m_h1538;
    int m_n153C;
};

void CWeaponMelee::vfunc327()
{
    CMeleePlayerView *pPlayer = (CMeleePlayerView *)sub_102521f0();
    CMeleeOwnerSlot429View *pOwner = (CMeleeOwnerSlot429View *)sub_10252290();
    if (pPlayer) {
        unsigned int h = pPlayer->m_h1538;
        CGlobalEntityList_Ent *pEnt = 0;
        if (h != 0xffffffff) {
            CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
            if (pSlot->m_Serial == (int)(h >> 13))
                pEnt = pSlot->m_pEntity;
        }
        if (!pEnt || pPlayer->m_n153C == -1) {
            if (((CMeleeSlot372View *)this)->vfunc372(0x4e, 1, 0) && pOwner)
                pOwner->vfunc429();
        }
    }
}
// END FUNCTION
