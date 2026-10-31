// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e6400 size=0x6
#include "CWeaponMelee_Knife.h"
namespace lifted {
extern char g_10941804;
}
int CWeaponMelee_Knife::vfunc80()
{
    return (int)&lifted::g_10941804;
}
// END FUNCTION

// FUNCTION: 0x103e6420 size=0x3
#include "CWeaponMelee_Knife.h"
int CWeaponMelee_Knife::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ecd20 size=0x1e
#include "CWeaponMelee_Knife.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Knife::vfunc5
CWeaponMelee_Knife *CWeaponMelee_Knife::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
