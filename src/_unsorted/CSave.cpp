// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019f980 size=0x68
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern int g_104625f4[];
struct SSave {
    void *vt;
    void *m4;
    int m8;
    int mc;
    int m10;
    void *m14;
    SSave *sub_1019f980(unsigned char flag);
};
// TARGET: SSave::sub_1019f980
SSave *SSave::sub_1019f980(unsigned char flag)
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
    vt = g_104625f4;
    if (flag & 1)
        delete this;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1019fa80 size=0x14
#include "CSave.h"

bool CSave::vfunc10(const void *pData, int nBytes)
{
	return sub_1000643d(pData, nBytes * 4);
}
// END FUNCTION

// FUNCTION: 0x1019fad0 size=0x14
#include "CSave.h"

bool CSave::vfunc14(const void *pData, int nBytes)
{
	return sub_1000643d(pData, nBytes * 4);
}
// END FUNCTION

// FUNCTION: 0x1019fc20 size=0x1a
#include "CSave.h"

void CSave::vfunc7(int a, int b, int count)
{
    sub_101a05b0(a, count * 2, b);
}
// END FUNCTION

// FUNCTION: 0x101a0480 size=0xb
#include "CSave.h"
extern char g_106b8540[];

void CSave::vfunc4()
{
	vfunc5(g_106b8540);
}
// END FUNCTION
