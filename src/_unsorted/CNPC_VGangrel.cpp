// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103770b0 size=0x1e
#include "CNPC_VGangrel.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VGangrel::vfunc5
CNPC_VGangrel *CNPC_VGangrel::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
