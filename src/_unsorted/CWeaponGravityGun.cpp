// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10149ee0 size=0x1a
#include "CWeaponGravityGun.h"
char CWeaponGravityGun::vfunc316(int a)
{
	sub_1014d110();
	CBaseCombatWeapon::vfunc316(a);
	return 1;
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
