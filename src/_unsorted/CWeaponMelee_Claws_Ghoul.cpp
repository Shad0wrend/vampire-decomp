// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e4c10 size=0x6
#include "CWeaponMelee_Claws_Ghoul.h"
namespace lifted {
extern char g_109417e8;
}
int CWeaponMelee_Claws_Ghoul::vfunc80()
{
    return (int)&lifted::g_109417e8;
}
// END FUNCTION

// FUNCTION: 0x103e4c30 size=0x3
#include "CWeaponMelee_Claws_Ghoul.h"
int CWeaponMelee_Claws_Ghoul::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e4de0 size=0x6
#include "CWeaponMelee_Claws_Ghoul.h"
namespace lifted {
extern char g_10669298;
}
int CWeaponMelee_Claws_Ghoul::vfunc362()
{
    return (int)&lifted::g_10669298;
}
// END FUNCTION

// FUNCTION: 0x103ecbd0 size=0x1e
#include "CWeaponMelee_Claws_Ghoul.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Claws_Ghoul::vfunc5
CWeaponMelee_Claws_Ghoul *CWeaponMelee_Claws_Ghoul::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
