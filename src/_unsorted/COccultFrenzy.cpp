// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f99d0 size=0x6
#include "COccultFrenzy.h"
namespace lifted {
extern char g_10947180;
}
int COccultFrenzy::vfunc80()
{
    return (int)&lifted::g_10947180;
}
// END FUNCTION

// FUNCTION: 0x103f99f0 size=0x3
#include "COccultFrenzy.h"
int COccultFrenzy::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409e80 size=0x1e
#include "COccultFrenzy.h"

void sub_100aa7b0(void *p);

// TARGET: COccultFrenzy::vfunc5
COccultFrenzy *COccultFrenzy::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
