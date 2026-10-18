// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10409c10 size=0x1e
#include "CResearchBook_LG_COMP.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_LG_COMP::vfunc5
CResearchBook_LG_COMP *CResearchBook_LG_COMP::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
