// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ef6c0 size=0x88
#include "CWeaponThrown_Chang_Energy_Ball.h"
#include "CBaseCombatWeapon.h"
#include "IVEngineServer.h"

struct ISoundPrecache_t
{
	virtual void vfunc0(const char *pszSound, int bPreload);
};

extern IVEngineServer *g_1070b22c;
extern ISoundPrecache_t *g_1070b248;

void CWeaponThrown_Chang_Energy_Ball::vfunc104()
{
	g_1070b22c->vfunc17((int)"grenade_frag_emitter", 1);
	g_1070b22c->vfunc17((int)"grenade_concussion_emitter", 1);
	g_1070b22c->vfunc17((int)"grenade_smoke_emitter", 1);
	g_1070b248->vfunc0("weapons/ranged/grenade_pineapple/tic.wav", 0);
	g_1070b22c->vfunc13("models/scenery/misc/relief/relief_damaged.mdl", 1);
	g_1070b22c->vfunc13("models/scenery/misc/relief/relief_damaged2.mdl", 1);
	g_1070b22c->vfunc13("models/scenery/misc/relief/relief_damaged3.mdl", 1);
	((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103f13e0 size=0x1e
#include "CWeaponThrown_Chang_Energy_Ball.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Chang_Energy_Ball::vfunc5
CWeaponThrown_Chang_Energy_Ball *CWeaponThrown_Chang_Energy_Ball::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
