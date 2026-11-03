// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ef5e0 size=0x6
#include "datamap.h"
#include "CWeaponThrown_Chang_Energy_Ball.h"
namespace lifted {
extern char g_1067d234;
}
datamap_t *CWeaponThrown_Chang_Energy_Ball::vfunc82()
{
    return (datamap_t *)&lifted::g_1067d234;
}
// END FUNCTION

// FUNCTION: 0x103ef670 size=0x3f
#include "CWeaponThrown_Chang_Energy_Ball.h"


// TARGET: CWeaponThrown_Chang_Energy_Ball::vfunc103
void CWeaponThrown_Chang_Energy_Ball::vfunc103()
{
    sub_100047be();
    *(int *)((char *)this + 0x910) = 0x43800000;
    *((char *)this + 0x91c) = 0;
    *(int *)((char *)this + 0x938) = *(int *)&gpGlobals->curtime;
    int value = *(int *)&gpGlobals->curtime;
    *((char *)this + 0x928) = 1;
    *(int *)((char *)this + 0x93c) = value;
}
// END FUNCTION

// FUNCTION: 0x103ef6c0 size=0x88
#include "CWeaponThrown_Chang_Energy_Ball.h"
#include "CBaseCombatWeapon.h"

struct ISoundPrecache_t
{
	virtual void vfunc0(const char *pszSound, int bPreload);
};

extern ISoundPrecache_t *g_1070b248;

void CWeaponThrown_Chang_Energy_Ball::vfunc104()
{
	engine->vfunc17((const char *)"grenade_frag_emitter", 1);
	engine->vfunc17((const char *)"grenade_concussion_emitter", 1);
	engine->vfunc17((const char *)"grenade_smoke_emitter", 1);
	g_1070b248->vfunc0("weapons/ranged/grenade_pineapple/tic.wav", 0);
	engine->vfunc13("models/scenery/misc/relief/relief_damaged.mdl", 1);
	engine->vfunc13("models/scenery/misc/relief/relief_damaged2.mdl", 1);
	engine->vfunc13("models/scenery/misc/relief/relief_damaged3.mdl", 1);
	((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103efa00 size=0x1c
#include "CWeaponThrown_Chang_Energy_Ball.h"

// TARGET: CWeaponThrown_Chang_Energy_Ball::vfunc230
void CWeaponThrown_Chang_Energy_Ball::vfunc230(int bFirst, CEnergyBallThrowInfo *pInfo)
{
	sub_103f00c0((&pInfo->m_n68)[bFirst == 0]);
}
// END FUNCTION

// FUNCTION: 0x103f0600 size=0xc
#include "CWeaponThrown_Chang_Energy_Ball.h"
namespace lifted {
int __stdcall sub_100013b6(int);
}
int CWeaponThrown_Chang_Energy_Ball::vfunc142(int a0)
{
    lifted::sub_100013b6(0);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f0620 size=0x6
#include "CWeaponThrown_Chang_Energy_Ball.h"
namespace lifted {
extern char g_1067d48c;
}
int CWeaponThrown_Chang_Energy_Ball::vfunc362()
{
    return (int)&lifted::g_1067d48c;
}
// END FUNCTION

// FUNCTION: 0x103f0640 size=0x6
#include "CWeaponThrown_Chang_Energy_Ball.h"
int CWeaponThrown_Chang_Energy_Ball::vfunc363()
{
    return 1;
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
