// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e2ad0 size=0x8c
#include "CWeaponRanged_FlameThrower.h"

struct GlobalVarsT { char pad[0xc]; float curtime; };
extern GlobalVarsT *g_1070b228;

CWeaponRanged_FlameThrower::CWeaponRanged_FlameThrower() : m_n1530(-1), m_n1554(0), m_n1558(0), m_n155c(0), m_n1560(0), m_n1564(0)
{
	m_b1519 = 0;
	m_n151c = 0;
	m_b1518 = 0;
	m_n1510 = -1;
	m_f1524 = g_1070b228->curtime;
	m_f1528 = g_1070b228->curtime;
	m_n1514 = 0;
	m_n152c = 0;
	for (int i = 0; i < 0x2ee; i++)
		m_aBuf[i] = 0;
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
