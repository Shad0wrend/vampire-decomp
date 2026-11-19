// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102352a0 size=0x6
#include "CWeaponRanged_Pistol_DesertEagle.h"
namespace lifted {
extern char g_10751eec;
}
int CWeaponRanged_Pistol_DesertEagle::vfunc80()
{
    return (int)&lifted::g_10751eec;
}
// END FUNCTION

// FUNCTION: 0x102352c0 size=0x3
#include "CWeaponRanged_Pistol_DesertEagle.h"
int CWeaponRanged_Pistol_DesertEagle::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10235470 size=0x6
#include "CWeaponRanged_Pistol_DesertEagle.h"
namespace lifted {
extern char g_105b9af0;
}
CWeaponActivityRecord *CWeaponRanged_Pistol_DesertEagle::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_105b9af0;
}
// END FUNCTION

// FUNCTION: 0x10235490 size=0x6
#include "CWeaponRanged_Pistol_DesertEagle.h"
int CWeaponRanged_Pistol_DesertEagle::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a3e0 size=0x1e
#include "CWeaponRanged_Pistol_DesertEagle.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Pistol_DesertEagle::vfunc5
CBaseEntity  *CWeaponRanged_Pistol_DesertEagle::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
