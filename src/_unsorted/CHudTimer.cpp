// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012d040 size=0x6
#include "datamap.h"
#include "CHudTimer.h"
namespace lifted {
extern char g_10573960;
}
datamap_t * CHudTimer::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10573960);
}
// END FUNCTION

// FUNCTION: 0x1012d190 size=0x6
#include "CHudTimer.h"
namespace lifted {
extern char g_1070bce4;
}
int CHudTimer::vfunc80()
{
    return (int)&lifted::g_1070bce4;
}
// END FUNCTION

// FUNCTION: 0x1012d1b0 size=0x3
#include "CHudTimer.h"
int CHudTimer::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1012d440 size=0x2b
#include "CHudTimer.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CHudTimer::vfunc5
CBaseEntity *CHudTimer::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1012d720 size=0x10
#include "CHudTimer.h"

void CHudTimer::sub_1012d720()
{
	sub_1012d5c0();
	CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x1012d810 size=0x25
#include "CHudTimer.h"

extern int *g_1070b228;

// TARGET: CHudTimer::vfunc86
char CHudTimer::vfunc86(int a, int b, int c, int d, int e)
{
    if (*((char *)this + 0x470) != 0)
    {
        if (*(int *)((char *)this + 0x474) != g_1070b228[1])
            return false;
    }
    return true;
}
// END FUNCTION
