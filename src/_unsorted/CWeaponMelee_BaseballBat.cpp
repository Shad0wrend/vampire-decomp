// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e4190 size=0x6
#include "CWeaponMelee_BaseballBat.h"
namespace lifted {
extern char g_10941d04;
}
int CWeaponMelee_BaseballBat::vfunc80()
{
    return (int)&lifted::g_10941d04;
}
// END FUNCTION

// FUNCTION: 0x103e41b0 size=0x3
#include "CWeaponMelee_BaseballBat.h"
int CWeaponMelee_BaseballBat::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e4360 size=0x6
#include "CWeaponMelee_BaseballBat.h"
namespace lifted {
extern char g_106668a8;
}
int CWeaponMelee_BaseballBat::vfunc362()
{
    return (int)&lifted::g_106668a8;
}
// END FUNCTION

// FUNCTION: 0x103e4380 size=0x6
#include "CWeaponMelee_BaseballBat.h"
int CWeaponMelee_BaseballBat::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103e4450 size=0x11
#include "CWeaponMelee_BaseballBat.h"

// TARGET: CWeaponMelee_BaseballBat::vfunc103
void CWeaponMelee_BaseballBat::vfunc103()
{
	sub_100047be();
	m_b871 = 0;
}
// END FUNCTION

// FUNCTION: 0x103ecb40 size=0x1e
#include "CWeaponMelee_BaseballBat.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_BaseballBat::vfunc5
CWeaponMelee_BaseballBat *CWeaponMelee_BaseballBat::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
