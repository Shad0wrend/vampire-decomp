// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d1cc0 size=0x68
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern int g_10447108[];
struct SFilter {
    void *vt;
    int m4;
    void *m8;
    int mc;
    int m10;
    int m14;
    void *m18;
    SFilter *sub_100d1cc0(unsigned char flag);
};
// TARGET: SFilter::sub_100d1cc0
SFilter *SFilter::sub_100d1cc0(unsigned char flag)
{
    m14 = 0;
    if (m10 != -1) {
        if (m8) { Plat_Free(m8); m8 = 0; }
        mc = 0;
    }
    m18 = m8;
    if (m10 != -1) {
        if (m8) { Plat_Free(m8); m8 = 0; }
        mc = 0;
    }
    vt = g_10447108;
    if (flag & 1)
        delete this;
    return this;
}
// END FUNCTION
