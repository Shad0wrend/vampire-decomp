// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103bf580 size=0x70
#include "CNPC_VTzimisce.h"

struct SEnt { int pad; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

void *CNPC_VTzimisce::sub_103bf580(void *pDefault)
{
    switch (m_state) {
    case 1:
        if (vfunc167())
            return vfunc167()->vfunc220();
        break;
    case 2:
        break;
    default:
        return pDefault;
    }
    unsigned h = m_hTarget;
    if (h != 0xffffffff) {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        if (he->serial == (h >> 13) && he->p != 0)
            return m_posBuf;
    }
    return pDefault;
}
// END FUNCTION
