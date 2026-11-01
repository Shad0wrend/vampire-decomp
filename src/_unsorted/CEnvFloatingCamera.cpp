// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101036e0 size=0x6
#include "CEnvFloatingCamera.h"
namespace lifted {
extern char g_10569fd4;
}
datamap_t *CEnvFloatingCamera::vfunc82()
{
    return (datamap_t *)&lifted::g_10569fd4;
}
// END FUNCTION

// FUNCTION: 0x10103900 size=0x1e
#include "CEnvFloatingCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvFloatingCamera::vfunc5
CEnvFloatingCamera *CEnvFloatingCamera::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
