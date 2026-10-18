// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10102cc0 size=0x1e
#include "CEnvShake.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvShake::vfunc5
CEnvShake *CEnvShake::vfunc5(unsigned int flags)
{
	sub_100117f2();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
