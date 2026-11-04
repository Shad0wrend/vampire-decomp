// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e60c0 size=0x6
#include "CWeaponMelee_Katana.h"
namespace lifted {
extern char g_10941b0c;
}
void *CWeaponMelee_Katana::vfunc80()
{
    return (void *)((int)&lifted::g_10941b0c);
}
// END FUNCTION

// FUNCTION: 0x103e60e0 size=0x3
#include "CWeaponMelee_Katana.h"
int CWeaponMelee_Katana::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e6290 size=0x6
#include "CWeaponMelee_Katana.h"
namespace lifted {
extern char g_1066d738;
}
CWeaponActivityRecord *CWeaponMelee_Katana::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_1066d738);
}
// END FUNCTION

// FUNCTION: 0x103e62b0 size=0x6
#include "CWeaponMelee_Katana.h"
int CWeaponMelee_Katana::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103eccf0 size=0x1e
#include "CWeaponMelee_Katana.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Katana::vfunc5
CBaseCombatWeapon *CWeaponMelee_Katana::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
