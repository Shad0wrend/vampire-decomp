// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10101480 size=0x12
#include "CEnvLaser.h"

CEnvLaser::CEnvLaser()
{
}
// END FUNCTION

// FUNCTION: 0x101014b0 size=0x1e
#include "CEnvLaser.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvLaser::vfunc5
CEnvLaser *CEnvLaser::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
