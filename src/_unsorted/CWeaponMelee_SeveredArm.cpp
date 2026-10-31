// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e7a10 size=0x6
#include "CWeaponMelee_SeveredArm.h"
namespace lifted {
extern char g_10942438;
}
int CWeaponMelee_SeveredArm::vfunc80()
{
    return (int)&lifted::g_10942438;
}
// END FUNCTION

// FUNCTION: 0x103e7a30 size=0x3
#include "CWeaponMelee_SeveredArm.h"
int CWeaponMelee_SeveredArm::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ece10 size=0x1e
#include "CWeaponMelee_SeveredArm.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_SeveredArm::vfunc5
CWeaponMelee_SeveredArm *CWeaponMelee_SeveredArm::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
