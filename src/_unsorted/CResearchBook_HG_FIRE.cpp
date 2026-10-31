// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f7830 size=0x6
#include "CResearchBook_HG_FIRE.h"
namespace lifted {
extern char g_10948560;
}
int CResearchBook_HG_FIRE::vfunc80()
{
    return (int)&lifted::g_10948560;
}
// END FUNCTION

// FUNCTION: 0x103f7850 size=0x3
#include "CResearchBook_HG_FIRE.h"
int CResearchBook_HG_FIRE::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409cd0 size=0x1e
#include "CResearchBook_HG_FIRE.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_HG_FIRE::vfunc5
CResearchBook_HG_FIRE *CResearchBook_HG_FIRE::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
