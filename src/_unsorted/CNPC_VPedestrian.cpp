// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a1e40 size=0x1e
#include "CNPC_VPedestrian.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VPedestrian::vfunc5
CNPC_VPedestrian *CNPC_VPedestrian::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
