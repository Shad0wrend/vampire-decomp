// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10149b70 size=0x63
#include "CWeaponGravityGun.h"
CGravControllerPoint::CGravControllerPoint()
{
    m_hAttached78.Set(0);
    m_hOther7c.Set(0);
}
// TARGET: CWeaponGravityGun::CWeaponGravityGun
CWeaponGravityGun::CWeaponGravityGun()
{
	m_n910 = 0;
	m_bB25 = 0;
	m_b914 = 0;
	m_b8b4 = 1;
	m_hB1c = -1;
	m_hB18 = -1;
}
// END FUNCTION

// FUNCTION: 0x10149ee0 size=0x1a
#include "CWeaponGravityGun.h"
char CWeaponGravityGun::vfunc316(int a)
{
	sub_1014d110();
	CBaseCombatWeapon::vfunc316(a);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10149f10 size=0xd
#include "CWeaponGravityGun.h"

void CWeaponGravityGun::vfunc298(CBaseEntity *pOwner, float unused)
{
	sub_10252ea0(pOwner, unused);
}
// END FUNCTION

// FUNCTION: 0x10149f30 size=0x5
#include "CWeaponGravityGun.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponGravityGun::vfunc300
// the game's 0x10149f30: a tail call (jmp) of CBaseCombatWeapon::vfunc300
void CWeaponGravityGun::vfunc300()
{
	CBaseCombatWeapon::vfunc300();
}
// END FUNCTION

// FUNCTION: 0x10149f50 size=0x16
#include "CWeaponGravityGun.h"

// TARGET: CWeaponGravityGun::vfunc117
unsigned int CWeaponGravityGun::vfunc117()
{
	unsigned int result = CBaseCombatWeapon::vfunc117();
	if (m_n910)
		result |= 0x40;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10149f80 size=0x3
// TARGET: sub_10149f80
bool __cdecl sub_10149f80() { return true; }
// END FUNCTION

// FUNCTION: 0x10149fa0 size=0x7
#include "CWeaponGravityGun.h"

char CWeaponGravityGun::vfunc267()
{
	return m_bB25;
}
// END FUNCTION

// FUNCTION: 0x10149fc0 size=0x2b
#include "CWeaponGravityGun.h"

struct CGargoyleMemberUnit {
	void sub_1000a123();
};

struct CGargoyleBaseUnit {
	void sub_10013a57();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CWeaponGravityGun::vfunc5
CBaseCombatWeapon *CWeaponGravityGun::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x93c))->sub_1000a123();
	((CGargoyleBaseUnit *)this)->sub_10013a57();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1014a000 size=0x30
#include "CWeaponGravityGun.h"
void CWeaponGravityGun::vfunc103()
{
	vfunc104();
	vfunc105((const char *)vfunc343());
	m_bB25 = 0;
	m_b914 = 0;
}
// END FUNCTION

// FUNCTION: 0x1014a040 size=0x4f
#include "CWeaponGravityGun.h"
#include "engineiface.h"
#include "engineserver.h"
extern const char *g_1057b8a0;
extern const char *g_1057b888[6];
extern int g_1071a36c;
// TARGET: CWeaponGravityGun::vfunc104
void CWeaponGravityGun::vfunc104()
{
	CBaseCombatWeapon::vfunc104();
	enginesound->vfunc0(g_1057b8a0, 0);
	for (unsigned int i = 0; i < 6; i++)
		enginesound->vfunc0(g_1057b888[i], 0);
	g_1071a36c = engine->vfunc13("hud/PhysicsHand_Closed.vmt", 0);
}
// END FUNCTION

// FUNCTION: 0x1014aa80 size=0x67
#include "CWeaponGravityGun.h"
#include "CEHandleGet.h"

void *CWeaponGravityGun::vfunc285()
{
	unsigned int &h = *(unsigned int *)((char *)this + 0x918);
	if (EHandle_Get(h)) {
		unsigned int h2 = *(volatile unsigned int *)&h;
		return EHandle_Get(h2);
	}
	return sub_1014a1b0();
}
// END FUNCTION

// FUNCTION: 0x1014ab10 size=0x9c
#include "CBaseCombatCharacter.h"
#include "CWeaponGravityGun.h"

class CBaseCombatCharacter;
struct EntX { char pad[0x36c]; void *m_pPhys; };
struct EntInfo { EntX *ent; int serial; int pad; };
struct PhysObjX {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11();
	virtual float vfunc12();
};
struct GravTuneX {
	float sub_101e8480(CBaseCombatCharacter *pChar);
	float sub_101e8640(CBaseCombatCharacter *pChar);
};
extern char *g_10566458;
extern GravTuneX g_10739d08;
extern float g_104454c4;
extern float g_104492dc;

float CWeaponGravityGun::vfunc278()
{
	EntX *ent = 0;
	unsigned int h = *(unsigned int *)((char *)this + 0x918);
	if (h != 0xffffffff) {
		EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
		if (e->serial == (h >> 13))
			ent = e->ent;
	}
	PhysObjX *pObj = ent ? (PhysObjX *)ent->m_pPhys : 0;
	char *owner = (char *)sub_102521f0();
	if (owner) {
		CBaseCombatCharacter *pChar = *(CBaseCombatCharacter **)(owner + 0xa8);
		if (pChar && pObj) {
			float mass = pObj->vfunc12();
			if (mass <= g_104454c4)
				mass = 1.0f;
			g_10739d08.sub_101e8480(pChar);
			return g_10739d08.sub_101e8640(pChar) / mass;
		}
	}
	return g_104492dc;
}
// END FUNCTION

// FUNCTION: 0x1014dcc0 size=0x61
#include "CWeaponGravityGun.h"
// TARGET: CWeaponGravityGun::vfunc326
void CWeaponGravityGun::vfunc326()
{
	float *pf = (float *)((char *)this + 0x730);
	if (*pf > gpGlobals->curtime)
		return;
	float t = gpGlobals->curtime + 0.01;
	int h = m_n910;
	*pf = t;
	if (h == 0) {
		vfunc307(0xbc);
		sub_1014a0b0();
		sub_1014c0f0();
		return;
	}
	sub_1014abe0();
	sub_1014c2d0();
}
// END FUNCTION

// FUNCTION: 0x1014e180 size=0x1e8
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CWeaponGravityGun.h"
#include "CPhysFixed.h"
#include "IPhysicsEnvironment.h"
#include "globalvars.h"
#include "CEHandleGet.h"
#include "CGravControllerPoint.h"
#include "CEntityVSlots.h"
struct GGStats
{
	float sub_101e86e0(void *pChar);
	float sub_101e8640(void *pChar);
};
extern GGStats g_10739d08;
extern IPhysicsEnvironment *g_10723940;
extern int g_1057b7bc;
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *p);
void sub_10158c00(int a, int b);
namespace block_1014e180 {
#define WV1(n) virtual void w##n();
#define WV10(p) WV1(p##0) WV1(p##1) WV1(p##2) WV1(p##3) WV1(p##4) WV1(p##5) WV1(p##6) WV1(p##7) WV1(p##8) WV1(p##9)
struct CWeaponView278 {
	WV10(0) WV10(1) WV10(2) WV10(3) WV10(4) WV10(5) WV10(6) WV10(7) WV10(8) WV10(9)
	WV10(10) WV10(11) WV10(12) WV10(13) WV10(14) WV10(15) WV10(16) WV10(17) WV10(18) WV10(19)
	WV10(20) WV10(21) WV10(22) WV10(23) WV10(24) WV10(25) WV10(26)
	WV1(270) WV1(271) WV1(272) WV1(273) WV1(274) WV1(275) WV1(276) WV1(277)
	virtual float slot278();
};
struct CMotionCtlView {
	virtual void v0();
	virtual void v1();
	virtual void v2(IPhysicsObject *pObject);
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(int n);
};
struct GGCtl : CGravControllerPoint
{
	void SetTargetPosition(const Vector &target)
	{
		m_vec10 = target;
		if (m_hAttached78 == 0)
			m_vec1c = target;
		m_fl8c = gpGlobals->frametime;
	}
	void sub_101487a0(CBaseEntity *pEntity, IPhysicsObject *pObject, const Vector *pCenter, CBaseEntity *pOwner);
};
void GGCtl::sub_101487a0(CBaseEntity *pEntity, IPhysicsObject *pObject, const Vector *pCenter, CBaseEntity *pOwner)
{
	m_hAttached78 = pEntity;
	m_hOther7c = pOwner;
	pObject->vfunc27(&m_vec04, pCenter);
	m_vec1c = *pCenter;
	pObject->vfunc18(0, &m_vec5c);
	float flVel = (float)g_1057b7bc;
	pObject->vfunc17(0, (const Vector *)&flVel);
	m_n74 = 0;
	m_pController90 = ::g_10723940->vfunc39(this);
	((CMotionCtlView *)m_pController90)->v2(pObject);
	((CMotionCtlView *)m_pController90)->v8(2);
	SetTargetPosition(*pCenter);
	g_10739d08.sub_101e8640(pOwner);
	m_vec5c.z = ((CWeaponView278 *)sub_1032e7b0(pOwner))->slot278();
	m_vec80 = *(Vector *)((CEntityVSlots *)pEntity)->slot219();
	float flMul = g_10739d08.sub_101e86e0(pOwner);
	{
		Vector tmp;
		Vector *pv = pObject->vfunc15(&tmp);
		m_vec68 = *pv * flMul;
	}
	int nObjA = m_hAttached78.Get()->m_obj36c;
	sub_10158c00(m_hOther7c.Get()->m_obj36c, nObjA);
}
}
struct CGunConstraint { virtual void v0(); virtual void v1(); virtual void v2(); virtual void SetGameData(void *pData); };
struct CGravityPelletV
{
	char m_pad000[0x1a0];
	unsigned char m_r1a0, m_g1a1, m_b1a2;
	char m_pad1a3[0x730 - 0x1a3];
	CGunConstraint *m_pConstraint;
	bool m_isInert;
	CBaseEntity *GetMoveParent() { return ((EHANDLE *)&((CBaseEntity *)this)->m_hMoveParent)->Get(); }
	void SetRenderColor(unsigned char r, unsigned char g, unsigned char b) { m_r1a0 = r; m_g1a1 = g; m_b1a2 = b; }
	void MakeInert() { SetRenderColor(64, 64, 128); m_isInert = true; }
	bool MakeConstraint(CBaseEntity *pObject);
};
struct CWeaponGravityGunUnit : CWeaponGravityGun { void sub_1014c110(); };
extern void *g_10723938;
void sub_1014e3f0(void *pRef, void *pAtt, matrix3x4_t *pXform);

inline bool CGravityPelletV::MakeConstraint(CBaseEntity *pObject)
{
	void *pReference = g_10723938;
	if (GetMoveParent())
		pReference = (void *)GetMoveParent()->m_obj36c;
	void *pAttached = (void *)pObject->m_obj36c;
	if (!pReference || !pAttached)
		return false;
	CPhysFixedParams fixed;
	sub_1014e3f0(pReference, pAttached, &fixed.attachedRefXform);
	fixed.constraint.Defaults();
	m_pConstraint = (CGunConstraint *)g_10723940->vfunc14(pReference, pAttached, 0, &fixed);
	m_pConstraint->SetGameData(this);
	MakeInert();
	return true;
}

// TARGET: CWeaponGravityGun::vfunc321
void CWeaponGravityGun::vfunc321()
{
	if (!vfunc309())
		return;
	vfunc307(0xb6);
	if (!m_n910)
		return;
	CBaseEntity *pObject = m_hHeld918.Get();
	if (pObject && m_bB24) {
		CGravityPelletV *pPellet = (CGravityPelletV *)m_slots9d0[m_hB1c].m_hA.Get();
		if (pPellet->MakeConstraint(pObject)) {
			m_flTimes730[0] = gpGlobals->curtime + 0.75;
			((CGravityPelletV *)m_slots9d0[m_hB18].m_hA.Get())->MakeInert();
		}
	}
	sub_1014d110();
	((CWeaponGravityGunUnit *)this)->sub_1014c110();
}
// END FUNCTION

// FUNCTION: 0x1014e470 size=0x69
#include "CWeaponGravityGun.h"

struct PlayerObj {
    char m_pad0000[0x2088];
    unsigned int m_nFlags2088;
    unsigned int m_nFlags208c;
};

struct OwnerEnt {
    char m_pad0000[0xa8];
    PlayerObj *m_pPlayer;
};

// TARGET: CWeaponGravityGun::vfunc319
void CWeaponGravityGun::vfunc319()
{
    OwnerEnt *pOwner = (OwnerEnt *)sub_102521f0();
    if (!pOwner)
        return;
    PlayerObj *p = pOwner->m_pPlayer;
    if (!p)
        return;
    if (p->m_nFlags208c & 0x800)
        vfunc327();
    else if (p->m_nFlags2088 & 1)
        vfunc326();
    else if (p->m_nFlags208c & 0x2000)
        vfunc325();
    else if (p->m_nFlags2088 & 0x20)
        vfunc326();
    else
        vfunc321();
}
// END FUNCTION

// FUNCTION: 0x1014e500 size=0x3
// TARGET: sub_1014e500
bool __cdecl sub_1014e500() { return false; }
// END FUNCTION
