// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012d040 size=0x6
#include "CHudTimer.h"
namespace lifted {
extern char g_10573960;
}
datamap_t * CHudTimer::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10573960);
}
// END FUNCTION

// FUNCTION: 0x1012d1b0 size=0x3
#include "CHudTimer.h"
int CHudTimer::vfunc81()
{
    return 0;
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
bool CHudTimer::vfunc86(int a, int b, int c, int d, int e)
{
    if (*((char *)this + 0x470) != 0)
    {
        if (*(int *)((char *)this + 0x474) != g_1070b228[1])
            return false;
    }
    return true;
}
// END FUNCTION
