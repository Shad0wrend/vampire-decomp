// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
