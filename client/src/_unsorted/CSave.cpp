// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10128fb0 size=0x1d
#include "CSave.h"

// TARGET: CSave::vfunc1
void CSave::vfunc1(int pos)
{
	int *piVar1 = (int *)m_pData;
	if (pos >= 0 && pos < piVar1[3]) {
		piVar1[2] = pos;
		piVar1[1] = piVar1[0] + pos;
	}
}
// END FUNCTION

// FUNCTION: 0x101290f0 size=0x1a
#include "CSave.h"

void CSave::vfunc7(int a, int b, int count)
{
    sub_10129830(a, count * 2, b);
}
// END FUNCTION

// FUNCTION: 0x10129110 size=0x1e
#include "CSave.h"

void CSave::vfunc9(const char *pszName, void *pData, int count)
{
    sub_10129830((int)pszName, count * 4, (int)pData);
}
// END FUNCTION

// FUNCTION: 0x10129170 size=0x22
#include "CSave.h"
#include <string.h>
#pragma intrinsic(strlen)

void CSave::vfunc18(int a, const char *psz)
{
	sub_10129830(a, strlen(psz) + 1, (int)psz);
}
// END FUNCTION

// FUNCTION: 0x101291a0 size=0x59
#include "CSave.h"
#include <string.h>
void CSave::vfunc17(const char *pszName, void *pData, int count)
{
	const char **ppStrings = (const char **)pData;
	int total = 0;
	for (int i = 0; i < count; i++)
		total += strlen(ppStrings[i] ? ppStrings[i] : "") + 1;
	sub_10129860(pszName, total);
	vfunc19(ppStrings, count);
}
// END FUNCTION

// FUNCTION: 0x10129220 size=0x2b
#include "CSave.h"

// TARGET: CSave::vfunc21
void CSave::vfunc21(const char *pszName, const void *pData, int count)
{
	sub_10129860(pszName, count * sizeof(Vector));
	sub_101299c0(pData, count * sizeof(Vector));
}
// END FUNCTION

// FUNCTION: 0x10129690 size=0xb9
#include "CSave.h"
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CSave::vfunc5(const void *p)
{
	sub_10129860(p, 0);
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

// FUNCTION: 0x10129b00 size=0x53
#include "CSave.h"
struct SaveEB { char pad[0x12e8]; float flOffset; };
void CSave::vfunc26(const char *pszName, void *pData, int count)
{
    sub_10129860(pszName, count * 4);
    for (int i = 0; i < count; i++) {
        float off = ((SaveEB *)m_pEntityBlock)->flOffset;
        float f = ((float *)pData)[i] - off;
        vfunc16(&f, 4);
    }
}
// END FUNCTION

// FUNCTION: 0x10129cb0 size=0x2d
#include "CSave.h"

// TARGET: CSave::vfunc29
void CSave::vfunc29(const char *pszName, void *pData, int count)
{
	sub_10129860(pszName, count * 12);
	vfunc27((const Vector *)pData, count);
}
// END FUNCTION
