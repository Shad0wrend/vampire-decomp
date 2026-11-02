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
