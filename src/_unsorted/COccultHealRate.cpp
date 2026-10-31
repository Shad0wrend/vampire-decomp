// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fbad0 size=0x6
#include "COccultHealRate.h"
namespace lifted {
extern char g_109471ec;
}
int COccultHealRate::vfunc80()
{
    return (int)&lifted::g_109471ec;
}
// END FUNCTION

// FUNCTION: 0x103fbaf0 size=0x3
#include "COccultHealRate.h"
int COccultHealRate::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a090 size=0x1e
#include "COccultHealRate.h"

void sub_100aa7b0(void *p);

// TARGET: COccultHealRate::vfunc5
COccultHealRate *COccultHealRate::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
