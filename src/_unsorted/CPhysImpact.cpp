// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004ee90 size=0x8
unsigned char sub_10001109();
// TARGET: sub_1004ee90
unsigned char sub_1004ee90()
{
    unsigned char r = sub_10001109();
    r &= 0xfd;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1004eeb0 size=0x6
#include "CPhysImpact.h"
namespace lifted {
extern char g_1053d224;
}
datamap_t *CPhysImpact::vfunc82()
{
    return (datamap_t *)&lifted::g_1053d224;
}
// END FUNCTION

// FUNCTION: 0x10050580 size=0x1e
#include "CPhysImpact.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysImpact::vfunc5
CPhysImpact *CPhysImpact::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
