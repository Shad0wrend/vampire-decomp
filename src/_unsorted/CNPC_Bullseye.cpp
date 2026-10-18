// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10356740 size=0x1e
#include "CNPC_Bullseye.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_Bullseye::vfunc5
CNPC_Bullseye *CNPC_Bullseye::vfunc5(unsigned int flags)
{
	sub_10006c26();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
