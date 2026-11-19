// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e5280 size=0x6
#include "CWeaponMelee_Claws_Protean5.h"
namespace lifted {
extern char g_10940fc8;
}
int CWeaponMelee_Claws_Protean5::vfunc80()
{
    return (int)&lifted::g_10940fc8;
}
// END FUNCTION

// FUNCTION: 0x103e52a0 size=0x3
#include "CWeaponMelee_Claws_Protean5.h"
int CWeaponMelee_Claws_Protean5::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e5450 size=0x6
#include "CWeaponMelee_Claws_Protean5.h"
namespace lifted {
extern char g_1066a7b8;
}
CWeaponActivityRecord *CWeaponMelee_Claws_Protean5::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_1066a7b8);
}
// END FUNCTION

// FUNCTION: 0x103e5470 size=0x6
#include "CWeaponMelee_Claws_Protean5.h"
int CWeaponMelee_Claws_Protean5::vfunc363()
{
    return 0xe0;
}
// END FUNCTION

// FUNCTION: 0x103e5500 size=0x6
#include "CWeaponMelee_Claws_Protean5.h"
int CWeaponMelee_Claws_Protean5::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecc30 size=0x1e
#include "CWeaponMelee_Claws_Protean5.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Claws_Protean5::vfunc5
CBaseEntity  *CWeaponMelee_Claws_Protean5::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
