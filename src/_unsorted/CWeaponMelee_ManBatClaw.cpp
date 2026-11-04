// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ebd20 size=0x6
#include "CWeaponMelee_ManBatClaw.h"
namespace lifted {
extern char g_10942454;
}
void *CWeaponMelee_ManBatClaw::vfunc80()
{
    return (void *)((int)&lifted::g_10942454);
}
// END FUNCTION

// FUNCTION: 0x103ebd40 size=0x3
#include "CWeaponMelee_ManBatClaw.h"
int CWeaponMelee_ManBatClaw::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ebef0 size=0x6
#include "CWeaponMelee_ManBatClaw.h"
namespace lifted {
extern char g_106780b4;
}
CWeaponActivityRecord *CWeaponMelee_ManBatClaw::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_106780b4);
}
// END FUNCTION

// FUNCTION: 0x103ebf10 size=0x6
#include "CWeaponMelee_ManBatClaw.h"
int CWeaponMelee_ManBatClaw::vfunc363()
{
    return 3;
}
// END FUNCTION

// FUNCTION: 0x103ebfa0 size=0x4
#include "CWeaponMelee_ManBatClaw.h"
int CWeaponMelee_ManBatClaw::vfunc373()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x103ed050 size=0x1e
#include "CWeaponMelee_ManBatClaw.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_ManBatClaw::vfunc5
CBaseCombatWeapon *CWeaponMelee_ManBatClaw::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
