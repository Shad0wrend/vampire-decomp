// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10402690 size=0x6
#include "CItemGPishaBook.h"
namespace lifted {
extern char g_10944e54;
}
int CItemGPishaBook::vfunc80()
{
    return (int)&lifted::g_10944e54;
}
// END FUNCTION

// FUNCTION: 0x104026b0 size=0x3
#include "CItemGPishaBook.h"
int CItemGPishaBook::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a7b0 size=0x1e
#include "CItemGPishaBook.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGPishaBook::vfunc5
CItemGPishaBook *CItemGPishaBook::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
