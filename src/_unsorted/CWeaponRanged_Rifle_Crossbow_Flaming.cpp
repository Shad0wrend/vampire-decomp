// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10234c20 size=0x6
#include "CWeaponRanged_Rifle_Crossbow_Flaming.h"
namespace lifted {
extern char g_10752338;
}
int CWeaponRanged_Rifle_Crossbow_Flaming::vfunc80()
{
    return (int)&lifted::g_10752338;
}
// END FUNCTION

// FUNCTION: 0x10234c40 size=0x3
#include "CWeaponRanged_Rifle_Crossbow_Flaming.h"
int CWeaponRanged_Rifle_Crossbow_Flaming::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10234df0 size=0x6
#include "CWeaponRanged_Rifle_Crossbow_Flaming.h"
namespace lifted {
extern char g_105b83d0;
}
int CWeaponRanged_Rifle_Crossbow_Flaming::vfunc362()
{
    return (int)&lifted::g_105b83d0;
}
// END FUNCTION

// FUNCTION: 0x10234e10 size=0x6
#include "CWeaponRanged_Rifle_Crossbow_Flaming.h"
int CWeaponRanged_Rifle_Crossbow_Flaming::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a380 size=0x1e
#include "CWeaponRanged_Rifle_Crossbow_Flaming.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_Crossbow_Flaming::vfunc5
CWeaponRanged *CWeaponRanged_Rifle_Crossbow_Flaming::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
