// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10400e60 size=0x6
#include "CItemGVampyrApocrypha.h"
namespace lifted {
extern char g_10946424;
}
int CItemGVampyrApocrypha::vfunc80()
{
    return (int)&lifted::g_10946424;
}
// END FUNCTION

// FUNCTION: 0x10400e80 size=0x3
#include "CItemGVampyrApocrypha.h"
int CItemGVampyrApocrypha::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a600 size=0x1e
#include "CItemGVampyrApocrypha.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGVampyrApocrypha::vfunc5
CItemGVampyrApocrypha *CItemGVampyrApocrypha::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
