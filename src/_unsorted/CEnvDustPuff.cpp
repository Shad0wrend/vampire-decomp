// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10114540 size=0x6
#include "datamap.h"
#include "CEnvDustPuff.h"
namespace lifted {
extern char g_1056fd24;
}
datamap_t *CEnvDustPuff::vfunc82()
{
    return (datamap_t *)&lifted::g_1056fd24;
}
// END FUNCTION

// FUNCTION: 0x10114680 size=0x1e
#include "CEnvDustPuff.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvDustPuff::vfunc5
CEnvDustPuff *CEnvDustPuff::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
