// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103faed0 size=0x6
#include "COccultBloodBuff.h"
namespace lifted {
extern char g_10944bfc;
}
int COccultBloodBuff::vfunc80()
{
    return (int)&lifted::g_10944bfc;
}
// END FUNCTION

// FUNCTION: 0x103faef0 size=0x3
#include "COccultBloodBuff.h"
int COccultBloodBuff::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409fd0 size=0x1e
#include "COccultBloodBuff.h"

void sub_100aa7b0(void *p);

// TARGET: COccultBloodBuff::vfunc5
COccultBloodBuff *COccultBloodBuff::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
