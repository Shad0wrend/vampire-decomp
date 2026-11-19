// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10236fb0 size=0x6
#include "CWeaponRanged_Pistol_Thirtyeight.h"
namespace lifted {
extern char g_10751a58;
}
int CWeaponRanged_Pistol_Thirtyeight::vfunc80()
{
    return (int)&lifted::g_10751a58;
}
// END FUNCTION

// FUNCTION: 0x10236fd0 size=0x3
#include "CWeaponRanged_Pistol_Thirtyeight.h"
int CWeaponRanged_Pistol_Thirtyeight::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10237180 size=0x6
#include "CWeaponRanged_Pistol_Thirtyeight.h"
namespace lifted {
extern char g_105bed60;
}
CWeaponActivityRecord *CWeaponRanged_Pistol_Thirtyeight::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_105bed60;
}
// END FUNCTION

// FUNCTION: 0x102371a0 size=0x6
#include "CWeaponRanged_Pistol_Thirtyeight.h"
int CWeaponRanged_Pistol_Thirtyeight::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a530 size=0x1e
#include "CWeaponRanged_Pistol_Thirtyeight.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Pistol_Thirtyeight::vfunc5
CBaseEntity  *CWeaponRanged_Pistol_Thirtyeight::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
