// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10113cc0 size=0x1e
#include "CFunc_Dust.h"

void sub_100aa7b0(void *p);

// TARGET: CFunc_Dust::vfunc5
CFunc_Dust *CFunc_Dust::vfunc5(unsigned int flags)
{
	sub_10004fca();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
