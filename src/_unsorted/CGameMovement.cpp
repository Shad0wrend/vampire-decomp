// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011e1d0 size=0x1e
#include "CGameMovement.h"

// TARGET: CGameMovement::vfunc0
CGameMovement *CGameMovement::vfunc0(unsigned int flags)
{
	sub_100102f3();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1011e2b0 size=0x11
#include "CGameMovement.h"

float *CGameMovement::vfunc2(char flag, int unused)
{
	if (flag)
		return (float *)((char *)this + 0x2c);
	return (float *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x1011e2e0 size=0x11
#include "CGameMovement.h"

float *CGameMovement::vfunc3(char flag, int unused)
{
	if (flag)
		return (float *)((char *)this + 0x38);
	return (float *)((char *)this + 0x20);
}
// END FUNCTION
