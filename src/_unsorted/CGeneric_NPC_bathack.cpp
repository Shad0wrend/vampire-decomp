// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035adb0 size=0x1e
#include "CGeneric_NPC_bathack.h"

void sub_100aa7b0(void *p);

// TARGET: CGeneric_NPC_bathack::vfunc5
CGeneric_NPC_bathack *CGeneric_NPC_bathack::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
