// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c77f0 size=0x1e
#include "CNPC_VVentrue.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VVentrue::vfunc5
CNPC_VVentrue *CNPC_VVentrue::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
