// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f50e0 size=0x6
#include "CEntityFlame.h"
namespace lifted {
extern char g_10565b94;
}
datamap_t * CEntityFlame::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10565b94);
}
// END FUNCTION

// FUNCTION: 0x100f51e0 size=0x6
#include "CEntityFlame.h"
namespace lifted {
extern char g_106eb41c;
}
int CEntityFlame::vfunc80()
{
    return (int)&lifted::g_106eb41c;
}
// END FUNCTION

// FUNCTION: 0x100f5200 size=0x3
#include "CEntityFlame.h"
int CEntityFlame::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100f5490 size=0x1e
#include "CEntityFlame.h"

void sub_100aa7b0(void *p);

// TARGET: CEntityFlame::vfunc5
CBaseEntity *CEntityFlame::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
