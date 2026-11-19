// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e48b0 size=0x6
#include "CWeaponMelee_Claws.h"
namespace lifted {
extern char g_109421e8;
}
int CWeaponMelee_Claws::vfunc80()
{
    return (int)&lifted::g_109421e8;
}
// END FUNCTION

// FUNCTION: 0x103e48d0 size=0x3
#include "CWeaponMelee_Claws.h"
int CWeaponMelee_Claws::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e4a80 size=0x6
#include "CWeaponMelee_Claws.h"
namespace lifted {
extern char g_10668808;
}
CWeaponActivityRecord *CWeaponMelee_Claws::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_10668808);
}
// END FUNCTION

// FUNCTION: 0x103e4aa0 size=0x6
#include "CWeaponMelee_Claws.h"
int CWeaponMelee_Claws::vfunc363()
{
    return 0xe0;
}
// END FUNCTION

// FUNCTION: 0x103e4b30 size=0x6
#include "CWeaponMelee_Claws.h"
int CWeaponMelee_Claws::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecba0 size=0x1e
#include "CWeaponMelee_Claws.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Claws::vfunc5
CBaseEntity  *CWeaponMelee_Claws::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
