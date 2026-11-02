// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040d5b0 size=0x3
#include "CWeaponPhysCannon.h"

int CWeaponPhysCannon::vfunc81()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1040d9e0 size=0x7d
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::CWeaponPhysCannon
CWeaponPhysCannon::CWeaponPhysCannon()
{
	m_flGlow928 = 0;
	m_flGlowTarget92c = 0;
	m_b910 = 0;
	m_n918 = 0;
}
// END FUNCTION

// FUNCTION: 0x1040da80 size=0x3
#include "CWeaponPhysCannon.h"
char CWeaponPhysCannon::vfunc312()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1040daa0 size=0x2b
#include "CWeaponPhysCannon.h"

struct CGargoyleMemberUnit {
	void sub_10011a77();
};

struct CGargoyleBaseUnit {
	void sub_10013a57();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CWeaponPhysCannon::vfunc5
CBaseCombatWeapon *CWeaponPhysCannon::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x96c))->sub_10011a77();
	((CGargoyleBaseUnit *)this)->sub_10013a57();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1040db00 size=0x19
#include "CWeaponPhysCannon.h"

struct CPhysCannonGrabPlaceholder {
	void sub_100dc8d0(int a, int b);
};

void CWeaponPhysCannon::vfunc103()
{
	CBaseCombatWeapon::vfunc103();
	((CPhysCannonGrabPlaceholder *)((char *)this + 0x270))->sub_100dc8d0(0, 0);
}
// END FUNCTION

// FUNCTION: 0x1040db30 size=0x1c
#include "CWeaponPhysCannon.h"

struct CUnit1040bf90
{
	void sub_1040bf90();
};

// TARGET: CWeaponPhysCannon::vfunc130
void CWeaponPhysCannon::vfunc130(void *pArg)
{
	CBaseCombatWeapon::vfunc130(pArg);
	((CUnit1040bf90 *)((char *)this + 0x96c))->sub_1040bf90();
}
// END FUNCTION

// FUNCTION: 0x1040dc40 size=0x18
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::vfunc299
void CWeaponPhysCannon::vfunc299(const float *pVelocity)
{
	sub_1040dbb0();
	sub_1001089d(pVelocity);
}
// END FUNCTION

// FUNCTION: 0x1040dc70 size=0xc
char __fastcall sub_1040dc70(char *self)
{
	return self[0x911] == 0;
}
// END FUNCTION

// FUNCTION: 0x1040dc90 size=0x2a
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::vfunc316
char CWeaponPhysCannon::vfunc316(int a)
{
	if (m_bGrab911)
		return 0;
	sub_1040dbb0();
	return CBaseCombatWeapon::vfunc316(a);
}
// END FUNCTION

// FUNCTION: 0x1040dcd0 size=0xe
#include "CWeaponPhysCannon.h"
// TARGET: CWeaponPhysCannon::vfunc291
void CWeaponPhysCannon::vfunc291()
{
	vfunc307(0xbc);
}
// END FUNCTION

// FUNCTION: 0x1040e620 size=0x7b
#include "CWeaponPhysCannon.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;

struct CPhysCannonView
{
	char m_pad0000[0x730];
	float m_flNextTime;
	char m_pad0734[0x911 - 0x734];
	char m_bActive;
};

struct CPhysCannonOwner
{
	char m_pad0000[0xa8];
	void *m_pCharacter;
};

struct CPhysCannonCharacter
{
	void sub_100b7fa0(Vector *pOut, int a, int b);	// stub 0x1000cb8f
};

// TARGET: CWeaponPhysCannon::vfunc326
void CWeaponPhysCannon::vfunc326()
{
	CPhysCannonView *v = (CPhysCannonView *)this;
	if (v->m_flNextTime > gpGlobals->curtime)
		return;
	CPhysCannonOwner *pOwner = (CPhysCannonOwner *)sub_102521f0();
	if (!pOwner)
		return;
	CPhysCannonCharacter *pChar = (CPhysCannonCharacter *)pOwner->m_pCharacter;
	if (!pChar || !v->m_bActive)
		return;
	Vector vecPos;
	pChar->sub_100b7fa0(&vecPos, 0, 0);
	sub_10410bf0(&vecPos, g_10739d08.sub_101e8640(pChar));
	vfunc307(0xc0);
}
// END FUNCTION

// FUNCTION: 0x1040e6c0 size=0x113
#include "CWeaponPhysCannon.h"


struct CannonView1040e6c0 {
	char pad0[0x730];
	float m_f730;
	float m_f734;
	char pad1[0x91c - 0x738];
	unsigned int m_n91c;
};
struct CharView1040e6c0 {
	char pad[0xa8];
	struct PlayerView1040e6c0 *m_pPlayer;
};
struct PlayerView1040e6c0 {
	char pad[0x2088];
	unsigned int m_n2088;
	unsigned int m_n208c;
};

void CWeaponPhysCannon::vfunc327()
{
	CannonView1040e6c0 *c = (CannonView1040e6c0 *)this;
	if (!(c->m_f734 > gpGlobals->curtime)) {
		CharView1040e6c0 *pOwner = (CharView1040e6c0 *)sub_102521f0();
		if (pOwner) {
			PlayerView1040e6c0 *pPlayer = pOwner->m_pPlayer;
			if (pPlayer) {
				if (m_bGrab911 && (pPlayer->m_n208c & 0x800)) {
					c->m_f730 = gpGlobals->curtime + 0.5;
					c->m_f734 = gpGlobals->curtime + 0.5;
					sub_104106a0(1, 0);
					vfunc307(0xbc);
					return;
				}
				switch (sub_1040e9c0()) {
				case 0:
					vfunc307(0xbc);
					c->m_f734 = gpGlobals->curtime + 0.5f;
					c->m_n91c |= pPlayer->m_n2088;
					break;
				case 1:
					c->m_f734 = gpGlobals->curtime + 0.1f;
					break;
				case 2:
					c->m_f734 = gpGlobals->curtime + 0.01f;
					break;
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1040e830 size=0x39
#include "CWeaponPhysCannon.h"

// TARGET: CWeaponPhysCannon::vfunc321
void CWeaponPhysCannon::vfunc321()
{
    if (vfunc309()) {
        if (m_bGrab911 != 0) {
            vfunc307(0xc2);
            return;
        }
        vfunc307(0xb6);
    }
}
// END FUNCTION

// FUNCTION: 0x10410770 size=0x88
#include "CWeaponPhysCannon.h"
#include "CEntityVSlots.h"

float sub_1013d400(float flTarget, float flValue, float flStep);

struct CPhysCannonPlayerView
{
	CEntityVSlots *sub_1015d680(int index);	// the view model `index` (stub 0x10013d09)
};

struct CPhysCannonOwnerView
{
	char m_pad0000[0xa8];
	CPhysCannonPlayerView *m_pPlayer;	// 0xa8
};

// TARGET: CWeaponPhysCannon::vfunc318
void CWeaponPhysCannon::vfunc318()
{
	CPhysCannonOwnerView *pOwner = (CPhysCannonOwnerView *)sub_102521f0();
	if (pOwner) {
		CPhysCannonPlayerView *pPlayer = pOwner->m_pPlayer;
		if (pPlayer) {
			float flCurrent = m_flGlow928;
			float flTarget = m_flGlowTarget92c;
			m_flGlow928 = sub_1013d400(flTarget, flCurrent, 0.1f);
			CEntityVSlots *pViewModel = pPlayer->sub_1015d680(0);
			if (pViewModel)
				pViewModel->slot261("active", m_flGlow928);
			if (m_bGrab911)
				sub_10410620();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10410ae0 size=0xd0
#include "CWeaponPhysCannon.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#define PV(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PV100(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
struct PlayerSlots
{
    PV100(a0) PV100(a1) PV100(a2) PV100(a3) PV(a40) PV(a41) PV(a42) PV(a43) PV(a44)
    virtual void a450(); virtual void a451(); virtual void a452(); virtual void a453(); virtual void a454(); virtual void a455();
    virtual void vfunc456();
};
extern CGlobalEntityList *g_10566458;
extern char g_1055f6bc[];
void CWeaponPhysCannon::vfunc319()
{
    char *pOwner = (char *)sub_102521f0();
    char *pPlayer = pOwner ? *(char **)(pOwner + 0xa8) : 0;
    if (!pPlayer) {
        *(int *)((char *)this + 0x91c) = 0;
        return;
    }
    if (*(char *)(pPlayer + 0x2088) & 1)
        vfunc326();
    else
        vfunc321();
    unsigned int h = *(unsigned int *)((char *)this + 0xab8);
    if (h != -1) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (h >> 13) && s->m_pEntity)
            return;
    }
    bool valid = false;
    if (*(unsigned int *)(pPlayer + 0xea4) != -1) {
        unsigned int h2 = *(unsigned int *)(pPlayer + 0xea4);
        CGlobalEntityList_Slot *s2 = &g_10566458->m_Slots[h2 & 0x1fff];
        valid = s2->m_Serial == (h2 >> 13) && s2->m_pEntity;
    }
    if (!valid) {
        CBaseEntity *pWeapon = (CBaseEntity *)((CBaseCombatCharacter *)pPlayer)->sub_10335950(g_1055f6bc);
        if (pWeapon)
            *(unsigned int *)(pPlayer + 0xea4) = *pWeapon->vfunc1();
        else
            *(unsigned int *)(pPlayer + 0xea4) = -1;
    }
    ((PlayerSlots *)pPlayer)->vfunc456();
}
// END FUNCTION

// FUNCTION: 0x10411440 size=0x2c
struct CSlotObj10411440 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void vfunc9(int a);
};
struct CPhysCannonUnit10411440 {
    char pad[0x968];
    int m_i968;
    CSlotObj10411440 *sub_10004746();
    void sub_10411440();
};

// TARGET: sub_10411440
void CPhysCannonUnit10411440::sub_10411440()
{
    if (m_i968 != 0) {
        CSlotObj10411440 *pObj = sub_10004746();
        pObj->vfunc9(m_i968);
        m_i968 = 0;
    }
}
// END FUNCTION
