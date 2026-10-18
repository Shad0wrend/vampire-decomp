// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f5ad0 size=0x1e
#include "CEnvShooter.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvShooter::vfunc5
CEnvShooter *CEnvShooter::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
