// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103eba10 size=0x6
#include "CWeaponMelee_HengeyokaiFist.h"
namespace lifted {
extern char g_10940c38;
}
int CWeaponMelee_HengeyokaiFist::vfunc80()
{
    return (int)&lifted::g_10940c38;
}
// END FUNCTION

// FUNCTION: 0x103eba30 size=0x3
#include "CWeaponMelee_HengeyokaiFist.h"
int CWeaponMelee_HengeyokaiFist::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ebbe0 size=0x6
#include "CWeaponMelee_HengeyokaiFist.h"
namespace lifted {
extern char g_10678080;
}
CWeaponActivityRecord *CWeaponMelee_HengeyokaiFist::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_10678080);
}
// END FUNCTION

// FUNCTION: 0x103ebc00 size=0x6
#include "CWeaponMelee_HengeyokaiFist.h"
int CWeaponMelee_HengeyokaiFist::vfunc363()
{
    return 3;
}
// END FUNCTION

// FUNCTION: 0x103ebc90 size=0x4
#include "CWeaponMelee_HengeyokaiFist.h"
int CWeaponMelee_HengeyokaiFist::vfunc373()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x103ed020 size=0x1e
#include "CWeaponMelee_HengeyokaiFist.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_HengeyokaiFist::vfunc5
CBaseEntity  *CWeaponMelee_HengeyokaiFist::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
