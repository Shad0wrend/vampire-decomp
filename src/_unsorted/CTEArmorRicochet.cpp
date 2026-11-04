// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005a410 size=0x6
#include "CTEArmorRicochet.h"
namespace lifted {
extern char g_106beac4;
}
ServerClass *CTEArmorRicochet::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106beac4);
}
// END FUNCTION

// FUNCTION: 0x1005a430 size=0x3
#include "CTEArmorRicochet.h"
int CTEArmorRicochet::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1005a630 size=0x1e
#include "CTEArmorRicochet.h"

// TARGET: CTEArmorRicochet::vfunc2
CTEMetalSparks *CTEArmorRicochet::vfunc2(unsigned int flags)
{
	sub_1000e340();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
