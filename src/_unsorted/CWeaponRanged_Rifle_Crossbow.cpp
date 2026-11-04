// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102348e0 size=0x6
#include "CWeaponRanged_Rifle_Crossbow.h"
namespace lifted {
extern char g_10752890;
}
int CWeaponRanged_Rifle_Crossbow::vfunc80()
{
    return (int)&lifted::g_10752890;
}
// END FUNCTION

// FUNCTION: 0x10234900 size=0x3
#include "CWeaponRanged_Rifle_Crossbow.h"
int CWeaponRanged_Rifle_Crossbow::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10234ab0 size=0x6
#include "CWeaponRanged_Rifle_Crossbow.h"
namespace lifted {
extern char g_105b7840;
}
int CWeaponRanged_Rifle_Crossbow::vfunc362()
{
    return (int)&lifted::g_105b7840;
}
// END FUNCTION

// FUNCTION: 0x10234ad0 size=0x6
#include "CWeaponRanged_Rifle_Crossbow.h"
int CWeaponRanged_Rifle_Crossbow::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a350 size=0x1e
#include "CWeaponRanged_Rifle_Crossbow.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_Crossbow::vfunc5
CWeaponRanged *CWeaponRanged_Rifle_Crossbow::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
