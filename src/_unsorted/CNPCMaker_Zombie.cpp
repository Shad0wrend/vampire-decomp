// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034c9f0 size=0x6
#include "CNPCMaker_Zombie.h"
namespace lifted {
extern char g_106253e8;
}
datamap_t * CNPCMaker_Zombie::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106253e8);
}
// END FUNCTION

// FUNCTION: 0x1034cad0 size=0x14
#include "CNPCMaker_Zombie.h"

// TARGET: CNPCMaker_Zombie::vfunc370
int CNPCMaker_Zombie::vfunc370(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPCMaker_Zombie::*pm)(int);
	} u;
	u.p = vt[368];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034cb00 size=0x14
#include "CNPCMaker_Zombie.h"

// TARGET: CNPCMaker_Zombie::vfunc371
int CNPCMaker_Zombie::vfunc371(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPCMaker_Zombie::*pm)(int);
	} u;
	u.p = vt[369];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034cb30 size=0x5
#include "CNPCMaker_Zombie.h"
bool CNPCMaker_Zombie::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034cb50 size=0x5
#include "CNPCMaker_Zombie.h"
bool CNPCMaker_Zombie::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034cb70 size=0x5
#include "CNPCMaker_Zombie.h"
bool CNPCMaker_Zombie::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034cb90 size=0x5
#include "CNPCMaker_Zombie.h"
bool CNPCMaker_Zombie::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034cbb0 size=0x3
#include "CNPCMaker_Zombie.h"
void CNPCMaker_Zombie::vfunc619(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1034cbd0 size=0x3
#include "CNPCMaker_Zombie.h"
void CNPCMaker_Zombie::vfunc620(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1034cbf0 size=0x41
#include "CNPCMaker_Zombie.h"
#include "COutputEvent.h"

struct CGargoyleBaseUnit { void sub_100123af(); };
void sub_100aa7b0(void *p);

CNPCMaker_Zombie *CNPCMaker_Zombie::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x6698))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x6680))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x6668))->sub_100cd2d0();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1034cc60 size=0x127
#include "CNPCMaker_Zombie.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
extern "C" __declspec(dllimport) float __cdecl RandomFloat(float flMin, float flMax);
void sub_10015c4e();

// TARGET: CNPCMaker_Zombie::vfunc103
void CNPCMaker_Zombie::vfunc103()
{
    {
        ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    m_n66b0 = 0;
    vfunc104();
    if (m_b66c3)
        m_b66c2 = 1;
    if (!m_b66c0) {
        sub_100ac4e0((int)sub_10015c4e, 0, 0);
        *(float *)((char *)this + 0x17c) = RandomFloat(1.0f, 2.0f) + m_flSpawnDelay + gpGlobals->curtime;
    } else {
        sub_100ac4e0(0, 0, 0);
    }
    sub_100b3b00();
    m_n66b8 = 0;
    m_nCounters[0] = 999999;
    m_nCounters[1] = 999999;
    m_nCounters[2] = 999999;
    m_nCounters[3] = 999999;
    m_nCounters[4] = 999999;
}
// END FUNCTION

// FUNCTION: 0x1034cde0 size=0xc7
#include "CNPCMaker_Zombie.h"
#include "CEntityVSlots.h"

extern "C" __declspec(dllimport) void __cdecl Warning(const char *fmt, ...);
extern char g_106b8540[];
void sub_101d0ec0(const char *pszClassname);
void sub_101cd940(CBaseEntity *pEnt);

// TARGET: CNPCMaker_Zombie::vfunc104
void CNPCMaker_Zombie::vfunc104()
{
	int nOut;
	const char *pszModel = *vfunc9(&nOut);
	if (!pszModel)
		pszModel = g_106b8540;
	if (*pszModel) {
		engine->vfunc13(pszModel, 0);
		*(int *)((char *)this + 0x1a98) = 0;
		*(int *)((char *)this + 0x5dec) = 0;
		sub_1027bb50();
		const char *pszTemplate = *(const char **)((char *)this + 0x665c);
		if (!pszTemplate)
			pszTemplate = g_106b8540;
		sub_101d0ec0(pszTemplate);
		sub_101d0ec0("item_w_zombie_fists");
		return;
	}
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	Vector *pOrigin = pSlots->slot220();
	Warning("%s at %.0f %.0f %0.f missing modelname\n", sub_100ab4f0(), pOrigin->x, pSlots->slot220()->y, pSlots->slot220()->z);
	sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x1034d0a0 size=0x7a
#include "CNPCMaker_Zombie.h"
#include "CEntityVSlots.h"
#include <math.h>

CBaseEntity *sub_101cda50();

char CNPCMaker_Zombie::vfunc618(char bForce)
{
	if (bForce)
		return 1;
	CBaseEntity *pPlayer = sub_101cda50();
	if (pPlayer) {
		Vector *pMine = ((CEntityVSlots *)this)->slot217();
		Vector *pTheirs = ((CEntityVSlots *)pPlayer)->slot217();
		float flDist = fabs(pTheirs->z - pMine->z) + fabs(pTheirs->y - pMine->y) + fabs(pTheirs->x - pMine->x);
		if (flDist * 0.9f > m_flRange)
			return 0;
	}
	return sub_1034b580(0);
}
// END FUNCTION

// FUNCTION: 0x1034d140 size=0x133
#include "CNPCMaker_Zombie.h"
#include "CEntityVSlots.h"
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VZombie.h"

struct ZWeapon : CEntityVSlots
{
	char m_pad0004[0xa0 - 4];
	int m_n00a0;
	char m_pad00a4[0x204 - 0xa4];
	unsigned int m_flags204;
};

extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10587908[];
extern char g_1062567c[];
int sub_101d1280(CBaseEntity *pEnt);
void sub_101cd940(CBaseEntity *pEnt);
ZWeapon *sub_10136580(const char *pszName);
CEntityVSlots *sub_100fbc90(const char *pszName, const float *pOrigin, const float *pAngles, float flTime);
void __fastcall sub_100fbaf0(CEntityVSlots *pEnt, float flTime);

// TARGET: CNPCMaker_Zombie::vfunc617
CAI_BaseNPCTroika *CNPCMaker_Zombie::vfunc617(int a)
{
	ZWeapon *pWeapon = 0;
	CAI_BaseNPCTroika *pNPC = sub_1034b7b0(a);
	if (!pNPC)
		return 0;
	if (!((CBaseCombatCharacter *)this)->sub_1032d890("item_w_zombie_fists", 0))
	{
		pWeapon = sub_10136580("item_w_zombie_fists");
		if (!pWeapon)
		{
			sub_101cd940((CBaseEntity *)pNPC);
			return 0;
		}
	}
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	CEntityVSlots *pBase = (CEntityVSlots *)pNPC;
	Vector vec;
	pWeapon->slot62(&pSelf->slot193(&vec)->x);
	int n = pWeapon->m_n00a0;
	pWeapon->m_flags204 |= 0x40000000;
	sub_101d1280((CBaseEntity *)pWeapon);
	if (!pWeapon->slot116())
		pBase->slot383(n, 0);
	CNPC_VZombie *pZombie = (CNPC_VZombie *)__RTDynamicCast(pNPC, 0, g_10587908, g_1062567c, 0);
	if (pZombie)
		pZombie->sub_103e0980(m_n76d0);
	CEntityVSlots *pEmitter = sub_100fbc90("Zombies_spawning_emitter", &pSelf->slot217()->x, &pSelf->slot219()->x, -1.0f);
	if (pEmitter)
		sub_100fbaf0(pEmitter, 15.0f);
	pBase->slot67();
	((CNPC_VZombie *)pNPC)->sub_1029f300(0);
	return pNPC;
}
// END FUNCTION
