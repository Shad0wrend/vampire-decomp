// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f8a50 size=0x3
#include "CResearchBook_LG_STEALTH.h"
int CResearchBook_LG_STEALTH::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409df0 size=0x1e
#include "CResearchBook_LG_STEALTH.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_LG_STEALTH::vfunc5
CResearchBook_LG_STEALTH *CResearchBook_LG_STEALTH::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
