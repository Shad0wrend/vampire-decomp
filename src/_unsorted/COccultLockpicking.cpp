// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f9cd0 size=0x6
#include "COccultLockpicking.h"
namespace lifted {
extern char g_10943840;
}
int COccultLockpicking::vfunc80()
{
    return (int)&lifted::g_10943840;
}
// END FUNCTION

// FUNCTION: 0x103f9cf0 size=0x3
#include "COccultLockpicking.h"
int COccultLockpicking::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409eb0 size=0x1e
#include "COccultLockpicking.h"

void sub_100aa7b0(void *p);

// TARGET: COccultLockpicking::vfunc5
COccultLockpicking *COccultLockpicking::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
