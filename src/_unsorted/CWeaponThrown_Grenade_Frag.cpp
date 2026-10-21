// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
