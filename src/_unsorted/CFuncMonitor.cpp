// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101151c0 size=0x7f
#include "CFuncMonitor.h"
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
extern EntInfo *g_10566458;
static inline void *HGet(const CFuncMonitorHandle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
bool CFuncMonitor::vfunc32(void *pEntity)
{
    if (pEntity == HGet(&m_hCamera))
        return true;
    return HGet(&m_hCamera) == 0;
}
// END FUNCTION
