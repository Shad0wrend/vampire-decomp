// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f1d00 size=0x1e
#include "CDisciplineWeapon.h"

void sub_100aa7b0(void *p);

// TARGET: CDisciplineWeapon::vfunc5
CDisciplineWeapon *CDisciplineWeapon::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f2360 size=0x8
#include "CDisciplineWeapon.h"
void CDisciplineWeapon::vfunc327() { vfunc326(); }
// END FUNCTION
