// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011e2b0 size=0x11
#include "CGameMovement.h"

float *CGameMovement::vfunc2(char flag, int unused)
{
	if (flag)
		return (float *)((char *)this + 0x2c);
	return (float *)((char *)this + 0x14);
}
// END FUNCTION
