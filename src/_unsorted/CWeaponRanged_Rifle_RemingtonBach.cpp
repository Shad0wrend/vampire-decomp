// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10236300 size=0x6
#include "CWeaponRanged_Rifle_RemingtonBach.h"
namespace lifted {
extern char g_10751938;
}
int CWeaponRanged_Rifle_RemingtonBach::vfunc80()
{
    return (int)&lifted::g_10751938;
}
// END FUNCTION

// FUNCTION: 0x10236320 size=0x3
#include "CWeaponRanged_Rifle_RemingtonBach.h"
int CWeaponRanged_Rifle_RemingtonBach::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102364d0 size=0x6
#include "CWeaponRanged_Rifle_RemingtonBach.h"
namespace lifted {
extern char g_105bc428;
}
CWeaponActivityRecord *CWeaponRanged_Rifle_RemingtonBach::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_105bc428;
}
// END FUNCTION

// FUNCTION: 0x102364f0 size=0x6
#include "CWeaponRanged_Rifle_RemingtonBach.h"
int CWeaponRanged_Rifle_RemingtonBach::vfunc363()
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x1023a470 size=0x1e
#include "CWeaponRanged_Rifle_RemingtonBach.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_RemingtonBach::vfunc5
CBaseEntity *CWeaponRanged_Rifle_RemingtonBach::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
