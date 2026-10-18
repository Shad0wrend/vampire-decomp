// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a1400 size=0x68
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern int g_104626bc[];
struct SRestore {
    void *vt;
    void *m4;
    int m8;
    int mc;
    int m10;
    void *m14;
    SRestore *sub_101a1400(unsigned char flag);
};
// TARGET: SRestore::sub_101a1400
SRestore *SRestore::sub_101a1400(unsigned char flag)
{
    m10 = 0;
    if (mc != -1) {
        if (m4) { Plat_Free(m4); m4 = 0; }
        m8 = 0;
    }
    m14 = m4;
    if (mc != -1) {
        if (m4) { Plat_Free(m4); m4 = 0; }
        m8 = 0;
    }
    vt = g_104626bc;
    if (flag & 1)
        delete this;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101a1ed0 size=0x18
#include "CRestore.h"
char CRestore::vfunc16()
{
	char c = 0;
	sub_101a1f90(&c, 1);
	return c;
}
// END FUNCTION
