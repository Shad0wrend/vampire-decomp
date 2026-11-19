// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10234f60 size=0x6
#include "CWeaponRanged_Pistol_Glock.h"
namespace lifted {
extern char g_10751a30;
}
int CWeaponRanged_Pistol_Glock::vfunc80()
{
    return (int)&lifted::g_10751a30;
}
// END FUNCTION

// FUNCTION: 0x10234f80 size=0x3
#include "CWeaponRanged_Pistol_Glock.h"
int CWeaponRanged_Pistol_Glock::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10235130 size=0x6
#include "CWeaponRanged_Pistol_Glock.h"
namespace lifted {
extern char g_105b8f60;
}
CWeaponActivityRecord *CWeaponRanged_Pistol_Glock::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_105b8f60;
}
// END FUNCTION

// FUNCTION: 0x10235150 size=0x6
#include "CWeaponRanged_Pistol_Glock.h"
int CWeaponRanged_Pistol_Glock::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a3b0 size=0x1e
#include "CWeaponRanged_Pistol_Glock.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Pistol_Glock::vfunc5
CBaseEntity  *CWeaponRanged_Pistol_Glock::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
