// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10409d90 size=0x1e
#include "CResearchBook_MG_MELEE.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_MG_MELEE::vfunc5
CResearchBook_MG_MELEE *CResearchBook_MG_MELEE::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
