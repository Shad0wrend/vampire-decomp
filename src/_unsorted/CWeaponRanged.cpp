// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10238110 size=0x1e
#include "CWeaponRanged.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged::vfunc5
CWeaponRanged *CWeaponRanged::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102382f0 size=0x12
extern int g_1088aee4;
void __stdcall sub_102383b0(int a);
void sub_102382f0()
{
	g_1088aee4 = 0;
	sub_102383b0(0);
}
// END FUNCTION

// FUNCTION: 0x10239250 size=0x8
// TARGET: CWeaponRanged::vfunc329
void CWeaponRanged::vfunc329()
{
	vfunc328();
}
// END FUNCTION
