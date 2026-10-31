// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f8d30 size=0x6
#include "CResearchBook_LG_FIREARMS.h"
namespace lifted {
extern char g_10948418;
}
int CResearchBook_LG_FIREARMS::vfunc80()
{
    return (int)&lifted::g_10948418;
}
// END FUNCTION

// FUNCTION: 0x103f8d50 size=0x3
#include "CResearchBook_LG_FIREARMS.h"
int CResearchBook_LG_FIREARMS::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409e20 size=0x1e
#include "CResearchBook_LG_FIREARMS.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_LG_FIREARMS::vfunc5
CResearchBook_LG_FIREARMS *CResearchBook_LG_FIREARMS::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
