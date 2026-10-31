// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x104003a0 size=0x6
#include "CItemGHorrorTape_1.h"
namespace lifted {
extern char g_10944c50;
}
int CItemGHorrorTape_1::vfunc80()
{
    return (int)&lifted::g_10944c50;
}
// END FUNCTION

// FUNCTION: 0x104003c0 size=0x3
#include "CItemGHorrorTape_1.h"
int CItemGHorrorTape_1::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a540 size=0x1e
#include "CItemGHorrorTape_1.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGHorrorTape_1::vfunc5
CItemGHorrorTape_1 *CItemGHorrorTape_1::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
