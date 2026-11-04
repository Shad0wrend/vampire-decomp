// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10236930 size=0x6
#include "CWeaponRanged_Rifle_SuperShotgun.h"
namespace lifted {
extern char g_107525a4;
}
int CWeaponRanged_Rifle_SuperShotgun::vfunc80()
{
    return (int)&lifted::g_107525a4;
}
// END FUNCTION

// FUNCTION: 0x10236950 size=0x3
#include "CWeaponRanged_Rifle_SuperShotgun.h"
int CWeaponRanged_Rifle_SuperShotgun::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10236b00 size=0x6
#include "CWeaponRanged_Rifle_SuperShotgun.h"
namespace lifted {
extern char g_105bdb48;
}
int CWeaponRanged_Rifle_SuperShotgun::vfunc362()
{
    return (int)&lifted::g_105bdb48;
}
// END FUNCTION

// FUNCTION: 0x10236b20 size=0x6
#include "CWeaponRanged_Rifle_SuperShotgun.h"
int CWeaponRanged_Rifle_SuperShotgun::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a4d0 size=0x1e
#include "CWeaponRanged_Rifle_SuperShotgun.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_SuperShotgun::vfunc5
CWeaponRanged *CWeaponRanged_Rifle_SuperShotgun::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
