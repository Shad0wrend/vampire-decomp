// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f9060 size=0x6
#include "COccultRegen.h"
namespace lifted {
extern char g_1067f3b0;
}
datamap_t * COccultRegen::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1067f3b0);
}
// END FUNCTION

// FUNCTION: 0x103f9130 size=0x1e
#include "COccultRegen.h"

void sub_100aa7b0(void *p);

// TARGET: COccultRegen::vfunc5
CBaseEntity *COccultRegen::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f9380 size=0x6
#include "COccultRegen.h"
namespace lifted {
extern char g_10945730;
}
int COccultRegen::vfunc80()
{
    return (int)&lifted::g_10945730;
}
// END FUNCTION

// FUNCTION: 0x103f93a0 size=0x3
#include "COccultRegen.h"
int COccultRegen::vfunc81()
{
    return 0;
}
// END FUNCTION
