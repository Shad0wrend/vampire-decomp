// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103eafb0 size=0x6
#include "CWeaponMelee_GargoyleFist.h"
namespace lifted {
extern char g_10942484;
}
int CWeaponMelee_GargoyleFist::vfunc80()
{
    return (int)&lifted::g_10942484;
}
// END FUNCTION

// FUNCTION: 0x103eafd0 size=0x3
#include "CWeaponMelee_GargoyleFist.h"
int CWeaponMelee_GargoyleFist::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103eb180 size=0x6
#include "CWeaponMelee_GargoyleFist.h"
namespace lifted {
extern char g_10677fcc;
}
CWeaponActivityRecord *CWeaponMelee_GargoyleFist::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_10677fcc);
}
// END FUNCTION

// FUNCTION: 0x103eb1a0 size=0x6
#include "CWeaponMelee_GargoyleFist.h"
int CWeaponMelee_GargoyleFist::vfunc363()
{
    return 3;
}
// END FUNCTION

// FUNCTION: 0x103eb230 size=0x4
#include "CWeaponMelee_GargoyleFist.h"
int CWeaponMelee_GargoyleFist::vfunc373()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x103ecf90 size=0x1e
#include "CWeaponMelee_GargoyleFist.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_GargoyleFist::vfunc5
CBaseEntity  *CWeaponMelee_GargoyleFist::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
