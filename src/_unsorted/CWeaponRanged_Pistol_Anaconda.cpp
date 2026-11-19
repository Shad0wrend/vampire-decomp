// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102344e0 size=0x6
#include "CWeaponRanged_Pistol_Anaconda.h"
namespace lifted {
extern char g_107523fc;
}
int CWeaponRanged_Pistol_Anaconda::vfunc80()
{
    return (int)&lifted::g_107523fc;
}
// END FUNCTION

// FUNCTION: 0x10234500 size=0x3
#include "CWeaponRanged_Pistol_Anaconda.h"
int CWeaponRanged_Pistol_Anaconda::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102346b0 size=0x6
#include "CWeaponRanged_Pistol_Anaconda.h"
namespace lifted {
extern char g_105b6cb0;
}
CWeaponActivityRecord *CWeaponRanged_Pistol_Anaconda::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_105b6cb0;
}
// END FUNCTION

// FUNCTION: 0x102346d0 size=0x6
#include "CWeaponRanged_Pistol_Anaconda.h"
int CWeaponRanged_Pistol_Anaconda::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a320 size=0x1e
#include "CWeaponRanged_Pistol_Anaconda.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Pistol_Anaconda::vfunc5
CBaseEntity  *CWeaponRanged_Pistol_Anaconda::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
