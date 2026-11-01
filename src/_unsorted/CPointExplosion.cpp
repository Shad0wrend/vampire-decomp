// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10104530 size=0x6
#include "CPointExplosion.h"
namespace lifted {
extern char g_1056aec4;
}
datamap_t *CPointExplosion::vfunc82()
{
    return (datamap_t *)&lifted::g_1056aec4;
}
// END FUNCTION

// FUNCTION: 0x10104bd0 size=0x1e
#include "CPointExplosion.h"

void sub_100aa7b0(void *p);

// TARGET: CPointExplosion::vfunc5
CPointExplosion *CPointExplosion::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
