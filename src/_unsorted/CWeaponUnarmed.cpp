// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f5120 size=0x6
#include "CWeaponUnarmed.h"
namespace lifted {
extern char g_10948c64;
}
int CWeaponUnarmed::vfunc80()
{
    return (int)&lifted::g_10948c64;
}
// END FUNCTION

// FUNCTION: 0x103f5140 size=0x3
#include "CWeaponUnarmed.h"
int CWeaponUnarmed::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f52f0 size=0x6
#include "CWeaponUnarmed.h"

extern char g_1067ef98;

void *CWeaponUnarmed::sub_103f52f0()
{
	return &g_1067ef98;
}
// END FUNCTION

// FUNCTION: 0x103f5310 size=0x6
#include "CWeaponUnarmed.h"

int CWeaponUnarmed::sub_103f5310()
{
	return 0x29;
}
// END FUNCTION

// FUNCTION: 0x103f5430 size=0x1e
#include "CWeaponUnarmed.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponUnarmed::vfunc5
CWeaponUnarmed *CWeaponUnarmed::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f5460 size=0x1
// TARGET: sub_103f5460
void sub_103f5460()
{
}
// END FUNCTION

// FUNCTION: 0x103f5480 size=0x1
// TARGET: sub_103f5480
void sub_103f5480()
{
}
// END FUNCTION

// FUNCTION: 0x103f56d0 size=0x3
#include "CWeaponUnarmed.h"

int CWeaponUnarmed::vfunc360()
{
	return 0;
}
// END FUNCTION
