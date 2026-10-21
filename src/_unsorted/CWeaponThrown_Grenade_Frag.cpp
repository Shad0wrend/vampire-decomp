// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ee510 size=0xdb
#include "CBaseEntity.h"
struct SGlobals { int pad[3]; float curtime; };
extern SGlobals *g_1070b228;
void sub_1000dcd8();

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SSlots
{
	V100(a) V100(b) V100(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual void s307(int a);
	virtual void d8(); virtual void d9();
	V100(e)
	V10(f0) V10(f1) V10(f2)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8();
	virtual void s449(int a, int b);
};

// TARGET: CWeaponThrown_Grenade_Frag::vfunc326
void CWeaponThrown_Grenade_Frag::vfunc326()
{
	char *self = (char *)this;
	if (sub_103ee8f0()) {
		*(char *)(self + 0x930) = 0;
		*(float *)(self + 0x924) = g_1070b228->curtime;
		*(int *)(self + 0x920) = 1;
		char *owner = (char *)sub_102521f0();
		if (owner) {
			SSlots *sub = *(SSlots **)(owner + 0xa8);
			if (sub)
				sub->s449(5, 0);
		}
		*(float *)(self + 0x91c) = g_1070b228->curtime + 3.3f;
		((SSlots *)this)->s307(0xb8);
		return;
	}
	if (*(int *)(self + 0x920) == 1 && (*(float *)((int)self + 0x924) + 0.3f) < g_1070b228->curtime) {
		*(int *)(self + 0x920) = 3;
		*(float *)(self + 0x91c) = 3.0f + g_1070b228->curtime;
		((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000dcd8, 0, 0);
		*(float *)((int)self + 0x17c) = g_1070b228->curtime + 1.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x103ee990 size=0xb4
#include "CWeaponThrown_Grenade_Frag.h"
#include "CBaseEntity.h"

struct CGrenadeStateX
{
	char m_pad0000[0x17c];
	float m_flNextThink;
	char m_pad0180[0x86c - 0x180];
	int m_n86c;
	char m_pad0870[0x920 - 0x870];
	int m_nState;
	float m_flTime;
	char m_pad0928[0x930 - 0x928];
	char m_bDone;
};

struct CGrenadeCharX
{
	void sub_1015fbb0(int nSound, int a);
};

struct CGrenadeOwnerEntX
{
	char m_pad0000[0xa8];
	CGrenadeCharX *m_pChar;
};

struct CWeaponUnit
{
	void sub_103ed920();
};

struct CGlobalVars1070b228
{
	char m_pad0000[0xc];
	float curtime;
};

extern CGlobalVars1070b228 *g_1070b228;
void sub_1000d62f();

// TARGET: CWeaponThrown_Grenade_Frag::vfunc265
void CWeaponThrown_Grenade_Frag::vfunc265()
{
	CGrenadeStateX *p = (CGrenadeStateX *)this;
	if (!p->m_bDone) {
		if (p->m_nState == 3 && p->m_flTime + 0.3f < g_1070b228->curtime) {
			p->m_nState = 5;
			((CWeaponUnit *)this)->sub_103ed920();
			CGrenadeOwnerEntX *pOwner = (CGrenadeOwnerEntX *)sub_102521f0();
			if (pOwner && pOwner->m_pChar) {
				if (p->m_n86c == 0)
					pOwner->m_pChar->sub_1015fbb0(0xef9, 1);
				else
					pOwner->m_pChar->sub_1015fbb0(0xefb, 1);
			}
		} else if (p->m_nState == 1) {
			p->m_nState = 3;
			p->m_flNextThink = p->m_flTime + 0.3f;
			((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000d62f, 0, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103eea80 size=0x8
void CWeaponThrown_Grenade_Frag::vfunc266()
{
	m_bFlag918 = true;
}
// END FUNCTION

// FUNCTION: 0x103eed20 size=0xf6
#include "CWeaponThrown_Grenade_Frag.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CPhysObjX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3)
	PV(40)
	virtual void vfunc41(const float *pVelocity, const float *pAngVelocity);
};

struct CGrenadeSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1) PV100(2)
	PV10(30) PV10(31) PV10(32) PV10(33) PV10(34)
	PV(350) PV(351) PV(352) PV(353) PV(354) PV(355) PV(356) PV(357) PV(358)
	virtual void vfunc359();
};

struct CGrenadeThisX
{
	char m_pad0000[0x11c];
	const char *m_classname;
	char m_pad0120[0x91c - 0x120];
	float m_flTimer;
	char m_pad0920[0x930 - 0x920];
	char m_bNoThrow;
};
struct CGrenadeProjX
{
	char m_pad0000[0x17c];
	float m_flNextThink;
	char m_pad0180[0x931 - 0x180];
	char m_b931;
};
struct CGlobalVars1070b228
{
	char m_pad0000[0xc];
	float curtime;
};
extern CGlobalVars1070b228 *g_1070b228;
extern float g_1070d9d0[];
extern void (__cdecl *g_109f3628)(const char *fmt);
CBaseEntity *sub_100a99d0(const char *classname, const float *origin, const float *angles, CBaseEntity *owner);
void sub_1000c568();

// TARGET: CWeaponThrown_Grenade_Frag::vfunc372
CBaseEntity *CWeaponThrown_Grenade_Frag::vfunc372(Vector vecOrigin, Vector vecAngles, Vector vecVelocity, Vector angVelocity)
{
	CGrenadeThisX *pThis = (CGrenadeThisX *)this;
	CBaseEntity *pGrenade = sub_100a99d0(pThis->m_classname ? pThis->m_classname : g_106b8540, &vecOrigin.x, g_1070d9d0, 0);
	if (pGrenade) {
		CGrenadeProjX *pProj = (CGrenadeProjX *)pGrenade;
		pGrenade->m_nTakeDamage = 2;
		pProj->m_b931 = 1;
		pGrenade->m_iHealth = 1;
		CPhysObjX *pPhys = (CPhysObjX *)pGrenade->m_obj36c;
		pGrenade->m_pfnTouch = 0;
		if (!pPhys) {
			pPhys = (CPhysObjX *)pGrenade->sub_100a5ea0(2, 0, 0, 0);
			if (!pPhys) {
				g_109f3628("No physics data for grenade\n");
				((CGrenadeSlotsX *)pGrenade)->vfunc359();
				return 0;
			}
		}
		if (!pThis->m_bNoThrow)
			pPhys->vfunc41(&vecVelocity.x, &angVelocity.x);
		pGrenade->sub_100ac4e0((int)sub_1000c568, 0, 0);
		if (pThis->m_flTimer < g_1070b228->curtime)
			pThis->m_flTimer = g_1070b228->curtime;
		pProj->m_flNextThink = pThis->m_flTimer + 0.01f;
	}
	return pGrenade;
}
// END FUNCTION

// FUNCTION: 0x103f13b0 size=0x1e
#include "CWeaponThrown_Grenade_Frag.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Grenade_Frag::vfunc5
CWeaponThrown_Grenade_Frag *CWeaponThrown_Grenade_Frag::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
