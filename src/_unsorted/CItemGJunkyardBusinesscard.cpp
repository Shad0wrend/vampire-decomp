// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10404ee0 size=0x6
#include "CItemGJunkyardBusinesscard.h"
namespace lifted {
extern char g_10948448;
}
int CItemGJunkyardBusinesscard::vfunc80()
{
    return (int)&lifted::g_10948448;
}
// END FUNCTION

// FUNCTION: 0x10404f00 size=0x3
#include "CItemGJunkyardBusinesscard.h"
int CItemGJunkyardBusinesscard::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040aa80 size=0x1e
#include "CItemGJunkyardBusinesscard.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGJunkyardBusinesscard::vfunc5
CItemGJunkyardBusinesscard *CItemGJunkyardBusinesscard::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
