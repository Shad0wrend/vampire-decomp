// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103eb2c0 size=0x6
#include "CWeaponMelee_Tzimisce2Claw.h"
namespace lifted {
extern char g_1094188c;
}
int CWeaponMelee_Tzimisce2Claw::vfunc80()
{
    return (int)&lifted::g_1094188c;
}
// END FUNCTION

// FUNCTION: 0x103eb2e0 size=0x3
#include "CWeaponMelee_Tzimisce2Claw.h"
int CWeaponMelee_Tzimisce2Claw::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103eb490 size=0x6
#include "CWeaponMelee_Tzimisce2Claw.h"
namespace lifted {
extern char g_10678000;
}
int CWeaponMelee_Tzimisce2Claw::vfunc362()
{
    return (int)&lifted::g_10678000;
}
// END FUNCTION

// FUNCTION: 0x103eb4b0 size=0x6
#include "CWeaponMelee_Tzimisce2Claw.h"
int CWeaponMelee_Tzimisce2Claw::vfunc363()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x103eb540 size=0x11
#include "CWeaponMelee_Tzimisce2Claw.h"

// TARGET: CWeaponMelee_Tzimisce2Claw::vfunc103
void CWeaponMelee_Tzimisce2Claw::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103eb570 size=0x6
#include "CWeaponMelee_Tzimisce2Claw.h"
int CWeaponMelee_Tzimisce2Claw::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecfc0 size=0x1e
#include "CWeaponMelee_Tzimisce2Claw.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Tzimisce2Claw::vfunc5
CWeaponMelee_Tzimisce2Claw *CWeaponMelee_Tzimisce2Claw::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
