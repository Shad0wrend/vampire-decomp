// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102365f0 size=0x6
#include "CWeaponRanged_Rifle_SteyrAug.h"
namespace lifted {
extern char g_107522a8;
}
int CWeaponRanged_Rifle_SteyrAug::vfunc80()
{
    return (int)&lifted::g_107522a8;
}
// END FUNCTION

// FUNCTION: 0x10236610 size=0x3
#include "CWeaponRanged_Rifle_SteyrAug.h"
int CWeaponRanged_Rifle_SteyrAug::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102367c0 size=0x6
#include "CWeaponRanged_Rifle_SteyrAug.h"
namespace lifted {
extern char g_105bcfb8;
}
int CWeaponRanged_Rifle_SteyrAug::vfunc362()
{
    return (int)&lifted::g_105bcfb8;
}
// END FUNCTION

// FUNCTION: 0x102367e0 size=0x6
#include "CWeaponRanged_Rifle_SteyrAug.h"
int CWeaponRanged_Rifle_SteyrAug::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a4a0 size=0x1e
#include "CWeaponRanged_Rifle_SteyrAug.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_SteyrAug::vfunc5
CBaseEntity *CWeaponRanged_Rifle_SteyrAug::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
