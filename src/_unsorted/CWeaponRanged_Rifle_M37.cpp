// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102355e0 size=0x6
#include "CWeaponRanged_Rifle_M37.h"
namespace lifted {
extern char g_10752588;
}
int CWeaponRanged_Rifle_M37::vfunc80()
{
    return (int)&lifted::g_10752588;
}
// END FUNCTION

// FUNCTION: 0x10235600 size=0x3
#include "CWeaponRanged_Rifle_M37.h"
int CWeaponRanged_Rifle_M37::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102357b0 size=0x6
#include "CWeaponRanged_Rifle_M37.h"
namespace lifted {
extern char g_105ba680;
}
CWeaponActivityRecord *CWeaponRanged_Rifle_M37::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_105ba680;
}
// END FUNCTION

// FUNCTION: 0x102357d0 size=0x6
#include "CWeaponRanged_Rifle_M37.h"
int CWeaponRanged_Rifle_M37::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a410 size=0x1e
#include "CWeaponRanged_Rifle_M37.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_M37::vfunc5
CBaseEntity  *CWeaponRanged_Rifle_M37::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
