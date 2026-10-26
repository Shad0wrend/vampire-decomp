// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
