// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10404c30 size=0x6
#include "CItemGHannahsApptBook.h"
namespace lifted {
extern char g_1094398c;
}
int CItemGHannahsApptBook::vfunc80()
{
    return (int)&lifted::g_1094398c;
}
// END FUNCTION

// FUNCTION: 0x10404c50 size=0x3
#include "CItemGHannahsApptBook.h"
int CItemGHannahsApptBook::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040aa50 size=0x1e
#include "CItemGHannahsApptBook.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGHannahsApptBook::vfunc5
CItemGHannahsApptBook *CItemGHannahsApptBook::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
