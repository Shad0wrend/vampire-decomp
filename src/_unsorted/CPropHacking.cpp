// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10219ee0 size=0x1e
#include "CPropHacking.h"

void sub_100aa7b0(void *p);

// TARGET: CPropHacking::vfunc5
CPropHacking *CPropHacking::vfunc5(unsigned int flags)
{
	sub_1000befb();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
