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

// FUNCTION: 0x101a0260 size=0x8a
#include "CSave.h"

struct CFieldView	// the 0x2c byte typedescription_t, only the offset
{
	char m_pad0000[8];
	int m_nOffset;
	char m_pad000c[0x2c - 0xc];
};

int CSave::vfunc3(int a, int b, int c, int d, int e)
{
	int nFieldsToSave = sub_101a01f0((const void *)b, (typedescription_t *)d, e);
	vfunc9((const char *)a, &nFieldsToSave, 1);
	for (int i = 0; i < e; i++, d += 0x2c) {
		CFieldView *pField = (CFieldView *)d;
		void *pData = (char *)b + pField->m_nOffset;
		if (!sub_1019fe10(pData, (typedescription_t *)pField))
			continue;
		if (!sub_101a01c0((const char *)a, pData, (void *)c, (typedescription_t *)pField))
			break;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a0390 size=0xb9
#include "CSave.h"
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CSave::vfunc5(const void *p)
{
	sub_101a05f0(p, 0);
	int pos = vfunc0();
	CUtlVector4 *v = (CUtlVector4 *)((char *)this + 4);
	int elem = v->m_size;
	if (1 + v->m_size > v->m_allocationCount && v->m_growSize != -1) {
		int newSize = v->m_allocationCount + (1 + v->m_size - v->m_allocationCount);
		while (v->m_allocationCount < newSize) {
			if (v->m_allocationCount != 0) {
				if (v->m_growSize != 0)
					v->m_allocationCount += v->m_growSize;
				else
					v->m_allocationCount += v->m_allocationCount;
			} else {
				v->m_allocationCount = 8;
			}
		}
		if (v->m_pMemory)
			v->m_pMemory = (int *)Plat_Realloc(v->m_pMemory, v->m_allocationCount * 4);
		else
			v->m_pMemory = (int *)Plat_Alloc(v->m_allocationCount * 4);
	}
	v->m_size += 1;
	v->m_pElements = v->m_pMemory;
	int numToMove = v->m_size - elem - 1;
	if (numToMove > 0)
		memmove(v->m_pMemory + elem + 1, v->m_pMemory + elem, numToMove * 4);
	int *dst = v->m_pMemory + elem;
	if (dst)
		*dst = pos;
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
