// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bcf30 size=0x9
unsigned int CCopyRecipientFilter::vfunc1() { return m_flags >> 1 & 1; }
// END FUNCTION

// FUNCTION: 0x101bcf70 size=0xd
int CCopyRecipientFilter::vfunc3(int index)
{
	return m_pRecipients[index];
}
// END FUNCTION

// FUNCTION: 0x101bcf90 size=0xa
unsigned int CCopyRecipientFilter::vfunc7()
{
	return (m_flags >> 2) & 1;
}
// END FUNCTION

// FUNCTION: 0x101bd0f0 size=0x68
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
    SFilter *sub_101bd0f0(unsigned char flag);
};
// TARGET: SFilter::sub_101bd0f0
SFilter *SFilter::sub_101bd0f0(unsigned char flag)
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
