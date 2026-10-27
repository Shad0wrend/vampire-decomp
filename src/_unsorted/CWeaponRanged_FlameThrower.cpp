// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
#include "CWeaponRanged_FlameThrower.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CWeaponRanged *CWeaponRanged_FlameThrower::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)&m_n1554)->~CUtlVector<int>();
	((CBaseCombatWeapon *)this)->sub_10250c50();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103e2c70 size=0x7a
#include "CWeaponRanged_FlameThrower.h"

struct ISoundSink { virtual void PrecacheSound(const char *s, int n); };
struct IEmitSink {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16();
    virtual void PrecacheEmitter(const char *s, int n);
};
extern ISoundSink *g_1070b248;
extern IEmitSink *g_1070b22c;

void CWeaponRanged_FlameThrower::vfunc104()
{
    CWeaponRanged::vfunc104();
    g_1070b22c->PrecacheEmitter("Flamethrower_Chain_emitter", 0);
    g_1070b22c->PrecacheEmitter("Flamethrower_Muzzle_Active_emitter", 0);
    g_1070b22c->PrecacheEmitter("Flamethrower_Muzzle_Inactive_emitter", 0);
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
