// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e2740 size=0x6
#include "CWeaponRanged_FlameThrower.h"
namespace lifted {
extern char g_10940998;
}
int CWeaponRanged_FlameThrower::vfunc80()
{
    return (int)&lifted::g_10940998;
}
// END FUNCTION

// FUNCTION: 0x103e2760 size=0x3
#include "CWeaponRanged_FlameThrower.h"
int CWeaponRanged_FlameThrower::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e29d0 size=0x6
#include "CWeaponRanged_FlameThrower.h"
namespace lifted {
extern char g_10665e00;
}
CWeaponActivityRecord *CWeaponRanged_FlameThrower::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_10665e00;
}
// END FUNCTION

// FUNCTION: 0x103e29f0 size=0x6
#include "CWeaponRanged_FlameThrower.h"
int CWeaponRanged_FlameThrower::vfunc363()
{
    return 0x6b;
}
// END FUNCTION

// FUNCTION: 0x103e2ad0 size=0x8c
#include "CWeaponRanged_FlameThrower.h"


CWeaponRanged_FlameThrower::CWeaponRanged_FlameThrower() : m_n1530(-1), m_n1554(0), m_n1558(0), m_n155c(0), m_n1560(0), m_n1564(0)
{
	m_b1519 = 0;
	m_n151c = 0;
	m_b1518 = 0;
	m_n1510 = -1;
	m_f1524 = gpGlobals->curtime;
	m_f1528 = gpGlobals->curtime;
	m_n1514 = 0;
	m_n152c = 0;
	for (int i = 0; i < 0x2ee; i++)
		m_aBuf[i] = 0;
}
// END FUNCTION

// FUNCTION: 0x103e2b90 size=0x86
#include "CBaseCombatWeapon.h"
#include "CWeaponRanged_FlameThrower.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CBaseEntity  *CWeaponRanged_FlameThrower::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)&m_n1554)->~CUtlVector<int>();
	((CBaseCombatWeapon *)this)->sub_10250c50();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION

// FUNCTION: 0x103e2c50 size=0x5
#include "CWeaponRanged_FlameThrower.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponRanged_FlameThrower::vfunc103
// the game's 0x103e2c50: a tail call (jmp) of CBaseCombatWeapon::vfunc103
void CWeaponRanged_FlameThrower::vfunc103()
{
	((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x103e2c70 size=0x7a
#include "CWeaponRanged_FlameThrower.h"

struct ISoundSink { virtual void PrecacheSound(const char *s, int n); };
extern ISoundSink *g_1070b248;

void CWeaponRanged_FlameThrower::vfunc104()
{
    CWeaponRanged::vfunc104();
    engine->vfunc17("Flamethrower_Chain_emitter", 0);
    engine->vfunc17("Flamethrower_Muzzle_Active_emitter", 0);
    engine->vfunc17("Flamethrower_Muzzle_Inactive_emitter", 0);
    g_1070b248->PrecacheSound("Weapons/Ranged/Flamethrower/Activate.wav", 0);
    g_1070b248->PrecacheSound("Weapons/Ranged/Flamethrower/Deactivate.wav", 0);
    g_1070b248->PrecacheSound("Weapons/Ranged/Flamethrower/Empty.wav", 0);
    m_unk1550 = 1;
}
// END FUNCTION

// FUNCTION: 0x103e2e70 size=0x33
// TARGET: CWeaponRanged_FlameThrower::vfunc265
#include "CWeaponRanged_FlameThrower.h"

void CWeaponRanged_FlameThrower::vfunc265()
{
	if (*(int *)((char *)this + 0x74c) > 0) {
		if (m_b1519 != 0) {
			sub_103e2d10("Weapons/Ranged/Flamethrower/Deactivate.wav", 1);
		}
		m_b1519 = 0;
	}
	*((char *)this + 0x1520) = 1;
}
// END FUNCTION

// FUNCTION: 0x103e2ec0 size=0x4d
#include "CWeaponRanged_FlameThrower.h"
#include "globalvars.h"
void __fastcall sub_102382f0(CWeaponRanged_FlameThrower *p);
void CWeaponRanged_FlameThrower::vfunc326()
{
    if (*(int *)((char *)this + 0x74c) > 0) {
        if (!m_b1519) {
            sub_103e2d10("Weapons/Ranged/Flamethrower/Activate.wav", 1);
            *(float *)&m_n151c = gpGlobals->curtime + 0.75f;
        }
        m_b1519 = 1;
    }
    *((char *)this + 0x1520) = 1;
    sub_102382f0(this);
}
// END FUNCTION

// FUNCTION: 0x103e2f30 size=0x183
#include "CBaseEntity.h"
#include "CWeaponRanged_FlameThrower.h"
#include "CEntityVSlots.h"
#include "ehandle.h"

float sub_103e1680();
int sub_103e1c80(void *pBuf, void *pRec, int a);
CBaseEntity *sub_103e1d90(CEntityVSlots *pOwner);

// TARGET: CWeaponRanged_FlameThrower::vfunc372
void CWeaponRanged_FlameThrower::vfunc372()
{
	CWeaponRanged::vfunc372();
	m_b89a = 0;
	CEntityVSlots *pOwner = (CEntityVSlots *)sub_102521f0();
	if (!pOwner)
		return;
	if (!m_b1519 && m_b1518 && m_f151c < gpGlobals->curtime)
	{
		m_b1518 = 0;
		return;
	}
	if (--m_n74c <= 0)
	{
		m_b1518 = 0;
		return;
	}
	m_b1518 = 1;
	Vector vecDir;
	pOwner->slot369(&vecDir);
	sub_103e3d80(m_vOrigin14dc, 0);
	pOwner->slot199(&m_vVel14e8, 0);
	m_vVel14e8 += vecDir * sub_103e1680();
	m_n14d8 = 0;
	m_n14d4 = 1;
	if (m_unk1550)
	{
		if (m_n1510 == -1)
		{
			CBaseEntity *pFlame = sub_103e3130();
			if (pFlame)
				*((char *)pFlame + 0x488) = 1;
			CBaseEntity *pEnt = sub_103e1d90(pOwner);
			*(EHANDLE *)&m_n1530 = pEnt;
		}
		m_n1510 = sub_103e1c80(m_aBuf, &m_n14d4, m_n1510);
	}
	m_n1514 = engine->vfunc120();
}
// END FUNCTION

// FUNCTION: 0x103e31c0 size=0x24
void __fastcall sub_1000c59f(void *pSelf);
void __fastcall sub_100138bd(void *pSelf);

// TARGET: sub_103e31c0
void __fastcall sub_103e31c0(void *pSelf)
{
    sub_1000c59f(pSelf);
    if (*(char *)((char *)pSelf + 0x1518) != 0) {
        ((void (__fastcall *)(void *))(*(void ***)pSelf)[0x5d0 / 4])(pSelf);
    }
    sub_100138bd(pSelf);
}
// END FUNCTION

// FUNCTION: 0x103e3200 size=0x24
void __fastcall sub_1000c266(void *pSelf);
void __fastcall sub_100138bd(void *pSelf);

// TARGET: sub_103e3200
void __fastcall sub_103e3200(void *pSelf)
{
    sub_1000c266(pSelf);
    if (*(char *)((char *)pSelf + 0x1518) != 0) {
        ((void (__fastcall *)(void *))(*(void ***)pSelf)[0x5d0 / 4])(pSelf);
    }
    sub_100138bd(pSelf);
}
// END FUNCTION

// FUNCTION: 0x103e3240 size=0x50
#include "CWeaponRanged_FlameThrower.h"
#include "CEntityVSlots.h"
void CWeaponRanged_FlameThrower::vfunc291()
{
	if (m_b1520) {
		if (m_b1519)
			sub_103e2d10("Weapons/Ranged/Flamethrower/Deactivate.wav", 1);
		sub_103e2d10("Weapons/Ranged/Flamethrower/Empty.wav", 4);
	}
	m_b1520 = 0;
	m_b1519 = 0;
	((CEntityVSlots *)this)->slot307(0xc4);
}
// END FUNCTION
