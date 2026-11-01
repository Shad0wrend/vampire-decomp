// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cc870 size=0x6
#include "CAI_DynamicLink.h"
namespace lifted {
extern char g_10608f58;
}
CAI_DynamicLink::Datamap82 CAI_DynamicLink::vfunc82()
{
    return (CAI_DynamicLink::Datamap82)&lifted::g_10608f58;
}
// END FUNCTION

// FUNCTION: 0x102cceb0 size=0x1e
#include "CAI_DynamicLink.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_DynamicLink::vfunc5
CAI_DynamicLink *CAI_DynamicLink::vfunc5(unsigned int flags)
{
	sub_10009101();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
