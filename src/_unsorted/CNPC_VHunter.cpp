// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103880a0 size=0x1e
#include "CNPC_VHunter.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VHunter::vfunc5
CNPC_VHunter *CNPC_VHunter::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
