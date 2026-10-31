// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ff380 size=0x6
#include "CItemGLillyPurse.h"
namespace lifted {
extern char g_109449a0;
}
int CItemGLillyPurse::vfunc80()
{
    return (int)&lifted::g_109449a0;
}
// END FUNCTION

// FUNCTION: 0x103ff3a0 size=0x3
#include "CItemGLillyPurse.h"
int CItemGLillyPurse::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a420 size=0x1e
#include "CItemGLillyPurse.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGLillyPurse::vfunc5
CItemGLillyPurse *CItemGLillyPurse::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
