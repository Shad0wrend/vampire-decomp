// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e6760 size=0x6
#include "CWeaponMelee_OccultBlade.h"
namespace lifted {
extern char g_109418b0;
}
int CWeaponMelee_OccultBlade::vfunc80()
{
    return (int)&lifted::g_109418b0;
}
// END FUNCTION

// FUNCTION: 0x103e6780 size=0x3
#include "CWeaponMelee_OccultBlade.h"
int CWeaponMelee_OccultBlade::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e6930 size=0x6
#include "CWeaponMelee_OccultBlade.h"
namespace lifted {
extern char g_1066f160;
}
CWeaponActivityRecord *CWeaponMelee_OccultBlade::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_1066f160);
}
// END FUNCTION

// FUNCTION: 0x103e6950 size=0x6
#include "CWeaponMelee_OccultBlade.h"
int CWeaponMelee_OccultBlade::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103ecd50 size=0x1e
#include "CWeaponMelee_OccultBlade.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_OccultBlade::vfunc5
CBaseEntity  *CWeaponMelee_OccultBlade::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
