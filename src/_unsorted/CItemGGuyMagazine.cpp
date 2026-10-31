// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10401e80 size=0x6
#include "CItemGGuyMagazine.h"
namespace lifted {
extern char g_109453f0;
}
int CItemGGuyMagazine::vfunc80()
{
    return (int)&lifted::g_109453f0;
}
// END FUNCTION

// FUNCTION: 0x10401ea0 size=0x3
#include "CItemGGuyMagazine.h"
int CItemGGuyMagazine::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a720 size=0x1e
#include "CItemGGuyMagazine.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGGuyMagazine::vfunc5
CItemGGuyMagazine *CItemGGuyMagazine::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
