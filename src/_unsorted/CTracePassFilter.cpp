// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cd880 size=0x21
bool sub_101d2fc0(void *p, int value);

struct CTracePassFilterX
{
    bool sub_101cd880(void *p, int unused);
};

// TARGET: sub_101cd880
bool CTracePassFilterX::sub_101cd880(void *p, int unused)
{
    int value = *(int *)((char *)this + 4);
    if (value != 0) {
        if (!sub_101d2fc0(p, value)) {
            return false;
        }
    }
    return true;
}
// END FUNCTION
