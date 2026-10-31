// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fe0b0 size=0x6
#include "CItemGRing03.h"
namespace lifted {
extern char g_10944204;
}
int CItemGRing03::vfunc80()
{
    return (int)&lifted::g_10944204;
}
// END FUNCTION

// FUNCTION: 0x103fe0d0 size=0x3
#include "CItemGRing03.h"
int CItemGRing03::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a2d0 size=0x1e
#include "CItemGRing03.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGRing03::vfunc5
CItemGRing03 *CItemGRing03::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
