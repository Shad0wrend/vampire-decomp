// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10270790 size=0x29
#include "CTraceFilterSoundOcclude.h"

// TARGET: CTraceFilterSoundOcclude::vfunc0
bool CTraceFilterSoundOcclude::vfunc0(void *pEnt, int contentsMask)
{
    if (pEnt == sub_1000aa0b())
        return 1;
    if (pEnt)
    {
        if (((CTraceFilterSoundOcclude *)pEnt)->sub_100a93d0())
            return 1;
    }
    return 0;
}
// END FUNCTION
