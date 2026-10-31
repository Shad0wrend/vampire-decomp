// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f7b30 size=0x6
#include "CResearchBook_MG_BRAWL.h"
namespace lifted {
extern char g_109475b4;
}
int CResearchBook_MG_BRAWL::vfunc80()
{
    return (int)&lifted::g_109475b4;
}
// END FUNCTION

// FUNCTION: 0x103f7b50 size=0x3
#include "CResearchBook_MG_BRAWL.h"
int CResearchBook_MG_BRAWL::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409d00 size=0x1e
#include "CResearchBook_MG_BRAWL.h"

void sub_100aa7b0(void *p);

// TARGET: CResearchBook_MG_BRAWL::vfunc5
CResearchBook_MG_BRAWL *CResearchBook_MG_BRAWL::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
