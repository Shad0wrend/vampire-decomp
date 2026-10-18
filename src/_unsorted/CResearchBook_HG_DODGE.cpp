// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10409dc0 size=0x1e
#include "CResearchBook_HG_DODGE.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_HG_DODGE::vfunc5
CResearchBook_HG_DODGE *CResearchBook_HG_DODGE::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
