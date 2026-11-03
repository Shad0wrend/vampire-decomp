// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e9170 size=0x6
#include "CWeaponMelee_ChangClaw.h"
namespace lifted {
extern char g_109412e8;
}
int CWeaponMelee_ChangClaw::vfunc80()
{
    return (int)&lifted::g_109412e8;
}
// END FUNCTION

// FUNCTION: 0x103e9190 size=0x3
#include "CWeaponMelee_ChangClaw.h"
int CWeaponMelee_ChangClaw::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e9340 size=0x6
#include "CWeaponMelee_ChangClaw.h"
namespace lifted {
extern char g_10674b90;
}
int CWeaponMelee_ChangClaw::vfunc362()
{
    return (int)&lifted::g_10674b90;
}
// END FUNCTION

// FUNCTION: 0x103e9360 size=0x6
#include "CWeaponMelee_ChangClaw.h"
int CWeaponMelee_ChangClaw::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103e93f0 size=0x11
#include "CWeaponMelee_ChangClaw.h"

// TARGET: CWeaponMelee_ChangClaw::vfunc103
void CWeaponMelee_ChangClaw::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103e9420 size=0x6
#include "CWeaponMelee_ChangClaw.h"
int CWeaponMelee_ChangClaw::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecf00 size=0x1e
#include "CWeaponMelee_ChangClaw.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_ChangClaw::vfunc5
CWeaponMelee_ChangClaw *CWeaponMelee_ChangClaw::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
