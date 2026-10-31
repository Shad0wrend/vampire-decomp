// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x104013c0 size=0x6
#include "CItemGEDanePrintReport.h"
namespace lifted {
extern char g_109473bc;
}
int CItemGEDanePrintReport::vfunc80()
{
    return (int)&lifted::g_109473bc;
}
// END FUNCTION

// FUNCTION: 0x104013e0 size=0x3
#include "CItemGEDanePrintReport.h"
int CItemGEDanePrintReport::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a660 size=0x1e
#include "CItemGEDanePrintReport.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGEDanePrintReport::vfunc5
CItemGEDanePrintReport *CItemGEDanePrintReport::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
