// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x104000f0 size=0x6
#include "CItemGLarryBriefcase.h"
namespace lifted {
extern char g_10944000;
}
int CItemGLarryBriefcase::vfunc80()
{
    return (int)&lifted::g_10944000;
}
// END FUNCTION

// FUNCTION: 0x10400110 size=0x3
#include "CItemGLarryBriefcase.h"
int CItemGLarryBriefcase::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a510 size=0x1e
#include "CItemGLarryBriefcase.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGLarryBriefcase::vfunc5
CItemGLarryBriefcase *CItemGLarryBriefcase::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
