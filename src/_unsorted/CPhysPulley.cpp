// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002c300 size=0x6
#include "CPhysPulley.h"
namespace lifted {
extern char g_10538f44;
}
CPhysPulley::Datamap82 CPhysPulley::vfunc82()
{
    return (CPhysPulley::Datamap82)&lifted::g_10538f44;
}
// END FUNCTION

// FUNCTION: 0x1002cba0 size=0x1e
#include "CPhysPulley.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysPulley::vfunc5
CPhysPulley *CPhysPulley::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
