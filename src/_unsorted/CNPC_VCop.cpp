// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10370970 size=0x1e
#include "CNPC_VCop.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VCop::vfunc5
CNPC_VCop *CNPC_VCop::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
