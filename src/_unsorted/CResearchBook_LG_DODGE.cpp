// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10409d30 size=0x1e
#include "CResearchBook_LG_DODGE.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_LG_DODGE::vfunc5
CResearchBook_LG_DODGE *CResearchBook_LG_DODGE::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
