// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034aab0 size=0x1e
#include "CGenericNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CGenericNPC::vfunc5
CGenericNPC *CGenericNPC::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
