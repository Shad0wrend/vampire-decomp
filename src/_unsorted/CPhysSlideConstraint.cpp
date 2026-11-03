// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002bd30 size=0x6
#include "datamap.h"
#include "CPhysSlideConstraint.h"
namespace lifted {
extern char g_10538ea8;
}
datamap_t *CPhysSlideConstraint::vfunc82()
{
    return (datamap_t *)&lifted::g_10538ea8;
}
// END FUNCTION

// FUNCTION: 0x1002cb40 size=0x1e
#include "CPhysSlideConstraint.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysSlideConstraint::vfunc5
CPhysSlideConstraint *CPhysSlideConstraint::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
