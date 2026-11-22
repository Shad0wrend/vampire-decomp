// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004ca80 size=0x6
#include "datamap.h"
#include "CPhysicsSpring.h"
namespace lifted {
extern char g_1053cca0;
}
datamap_t *CPhysicsSpring::vfunc82()
{
    return (datamap_t *)&lifted::g_1053cca0;
}
// END FUNCTION

// FUNCTION: 0x1004d0d0 size=0x1e
#include "CPhysicsSpring.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsSpring::vfunc5
CPhysicsSpring *CPhysicsSpring::vfunc5(unsigned int flags)
{
	sub_10013840();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
