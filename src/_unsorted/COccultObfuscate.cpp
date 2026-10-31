// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fa2d0 size=0x6
#include "COccultObfuscate.h"
namespace lifted {
extern char g_10948dd4;
}
int COccultObfuscate::vfunc80()
{
    return (int)&lifted::g_10948dd4;
}
// END FUNCTION

// FUNCTION: 0x103fa2f0 size=0x3
#include "COccultObfuscate.h"
int COccultObfuscate::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409f10 size=0x1e
#include "COccultObfuscate.h"

void sub_100aa7b0(void *p);

// TARGET: COccultObfuscate::vfunc5
COccultObfuscate *COccultObfuscate::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
