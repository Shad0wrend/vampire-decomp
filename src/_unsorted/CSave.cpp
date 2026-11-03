// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019f870 size=0x84
#include "CSave.h"

// TARGET: ??0CSave@@QAE@PAX@Z
CSave::CSave(void *pData) : CSaveSections(pData)
{
	((CUtlVector<int> *)&m_pSections)->EnsureCapacity(0x20);
}
// END FUNCTION

// FUNCTION: 0x1019f930 size=0x13
#include "CSave.h"
namespace lifted {
int __stdcall sub_10008d4b(int, int, int);
}
void CSave::vfunc2(void * a0, const char * a1)
{
    lifted::sub_10008d4b(*(int *)&a0, *(int *)&a1, *(int *)&a1);
}
// END FUNCTION

// FUNCTION: 0x1019f960 size=0x4
#include "CSave.h"
int CSave::vfunc38()
{
    return *(int *)((char *)this + 0x1c);
}
// END FUNCTION

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

// FUNCTION: 0x1019fa10 size=0x7
#include "CSave.h"
int CSave::vfunc0()
{
    return *(int *)((char *)(*(int *)((char *)this + 0x18)) + 8);
}
// END FUNCTION

// FUNCTION: 0x1019fa30 size=0x1d
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

// FUNCTION: 0x1019fa60 size=0x10
#include "CSave.h"

// TARGET: CSave::vfunc8
bool CSave::vfunc8(const void *pData, int nBytes)
{
	return sub_1000643d(pData, nBytes * 2);
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

// FUNCTION: 0x1019fb20 size=0x21
#include <string.h>
#pragma intrinsic(strlen)

struct CSaveFwd2
{
    void sub_1000643d(const char *pszName, int count);
    void sub_1019fb20(const char *pszName);
};

// TARGET: sub_1019fb20
void CSaveFwd2::sub_1019fb20(const char *pszName)
{
    sub_1000643d(pszName, strlen(pszName) + 1);
}
// END FUNCTION

// FUNCTION: 0x1019fb60 size=0x40
#include "CSave.h"
#include <string.h>

extern char g_106b8540[];

// TARGET: CSave::vfunc19
void CSave::vfunc19(const char **ppStrings, int count)
{
	for (int i = 0; i < count; i++) {
		const char *pString = ppStrings[i];
		if (!pString) {
			pString = g_106b8540;
		}
		sub_1000643d(pString, strlen(pString) + 1);
	}
}
// END FUNCTION

// FUNCTION: 0x1019fbb0 size=0xf
#include "CSave.h"

// TARGET: CSave::vfunc24
void CSave::vfunc24(const Vector &value)
{
	sub_1000643d(&value, 12);
}
// END FUNCTION

// FUNCTION: 0x1019fbd0 size=0x13
#include "vampire.h"

struct CUnknown1019fbd0
{
	void sub_101a07b0(int a, int b);
};

// TARGET: sub_1019fbd0
void __fastcall sub_1019fbd0(void *pThis, int, int a, int b)
{
	((CUnknown1019fbd0 *)pThis)->sub_101a07b0(a, b * 12);
}
// END FUNCTION

// FUNCTION: 0x1019fc20 size=0x1a
#include "CSave.h"

void CSave::vfunc7(int a, int b, int count)
{
    sub_101a05b0(a, count * 2, b);
}
// END FUNCTION

// FUNCTION: 0x1019fc50 size=0x1e
#include "CSave.h"

void CSave::vfunc9(const char *pszName, void *pData, int count)
{
    sub_101a05b0((int)pszName, count * 4, (int)pData);
}
// END FUNCTION

// FUNCTION: 0x1019fc80 size=0x17
#include "CSave.h"
namespace lifted {
struct C10006be5 { int sub_10006be5(int, int, int); };
}
int CSave::vfunc11(int a0, int a1, int a2)
{
    return ((lifted::C10006be5 *)this)->sub_10006be5(a0, a2, a1);
}
// END FUNCTION

// FUNCTION: 0x1019fcb0 size=0x1e
#include "CSave.h"

void CSave::vfunc13(const char *pszName, void *pData, int count)
{
    sub_101a05b0((int)pszName, count * 4, (int)pData);
}
// END FUNCTION

// FUNCTION: 0x1019fd20 size=0x59
#include "CSave.h"
#include <string.h>
void CSave::vfunc17(const char *pszName, void *pData, int count)
{
	const char **ppStrings = (const char **)pData;
	int total = 0;
	for (int i = 0; i < count; i++)
		total += strlen(ppStrings[i] ? ppStrings[i] : "") + 1;
	sub_101a05f0(pszName, total);
	vfunc19(ppStrings, count);
}
// END FUNCTION

// FUNCTION: 0x1019fda0 size=0x14
#include "CSave.h"

// TARGET: CSave::vfunc22
void CSave::vfunc22(const char *pszName, const Vector &value)
{
	vfunc21(pszName, &value, 1);
}
// END FUNCTION

// FUNCTION: 0x101a0260 size=0x8a
#include "datamap.h"
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

// FUNCTION: 0x101a04a0 size=0x6d
#include "utlrbtree.h"
#include "CSave.h"

void CSave::vfunc6()
{
    CUtlVector<int> &stack = *(CUtlVector<int> *)((char *)this + 4);
    int pos = vfunc0();
    int start = (*(int *volatile *)&m_pSections)[stack.Count() - 1];
    int size = pos - start;
    stack.Remove(stack.Count() - 1);
    vfunc1(start - 4);
    sub_1000643d(&size, 2);
    vfunc1(pos);
}
// END FUNCTION

// FUNCTION: 0x101a0a00 size=0x53
#include "CSave.h"
struct SaveEB { char pad[0x12e8]; float flOffset; };
void CSave::vfunc26(const char *pszName, void *pData, int count)
{
    sub_101a05f0(pszName, count * 4);
    for (int i = 0; i < count; i++) {
        float off = ((SaveEB *)m_pEntityBlock)->flOffset;
        float f = ((float *)pData)[i] - off;
        vfunc16(&f, 4);
    }
}
// END FUNCTION

// FUNCTION: 0x101a0a80 size=0x3f
#include "vampire.h"
#include "CSave.h"

// TARGET: CSave::vfunc25
void CSave::vfunc25(const float *pValues, int count)
{
    for (int i = 0; i < count; i++)
    {
        float flValue;
        flValue = *(float *)((char *)m_pEntityBlock + 0x12e8);
        flValue = pValues[i] - flValue;
        vfunc16(&flValue, 4);
    }
}
// END FUNCTION

// FUNCTION: 0x101a0ad0 size=0x81
#include "CSave.h"

struct CSaveEntityBlockView {
    char pad[0x12c4];
    int m_nLandmark;
    char pad2[0x12dc - 0x12c8];
    Vector m_vecLandmark;
};
extern Vector g_1070d1b0;

void CSave::vfunc30(const char *pszName, const Vector &value)
{
    CSaveEntityBlockView *pBlock = (CSaveEntityBlockView *)m_pEntityBlock;
    const Vector *pOffset;
    if (pBlock->m_nLandmark)
        pOffset = &pBlock->m_vecLandmark;
    else
        pOffset = &g_1070d1b0;
    Vector vecOffset = *pOffset;
    Vector vecOut = value - vecOffset;
    vfunc22(pszName, vecOut);
}
// END FUNCTION

// FUNCTION: 0x101a0b90 size=0x7c
#include "CSave.h"

struct CSaveBlockX
{
	char m_pad0000[0x12c4];
	int m_bLandmark;	// 0x12c4
	char m_pad12c8[0x12dc - 0x12c8];
	Vector m_vecLandmarkOffset;	// 0x12dc
};

extern Vector g_1070d1b0;

void CSave::vfunc28(const Vector &value)
{
	CSaveBlockX *pBlock = (CSaveBlockX *)m_pEntityBlock;
	Vector vecOffset = pBlock->m_bLandmark ? pBlock->m_vecLandmarkOffset : g_1070d1b0;
	Vector vecResult = value - vecOffset;
	vfunc24(vecResult);
}
// END FUNCTION

// FUNCTION: 0x101a0c30 size=0x2d
#include "CSave.h"

// TARGET: CSave::vfunc29
void CSave::vfunc29(const char *pszName, void *pData, int count)
{
	sub_101a05f0(pszName, count * 12);
	vfunc27((const Vector *)pData, count);
}
// END FUNCTION

// FUNCTION: 0x101a0c70 size=0x8d
#include "CSave.h"

struct CSaveBlockX
{
	char m_pad0000[0x12c4];
	int m_bLandmark;	// 0x12c4
	char m_pad12c8[0x12dc - 0x12c8];
	Vector m_vecLandmarkOffset;	// 0x12dc
};

extern Vector g_1070d1b0;

inline Vector GetLandmarkOffsetX(CSaveBlockX *pBlock)
{
	return pBlock->m_bLandmark ? pBlock->m_vecLandmarkOffset : g_1070d1b0;
}

void CSave::vfunc27(const Vector *pValues, int count)
{
	for (int i = 0; i < count; i++) {
		Vector vecResult;
		vecResult = pValues[i] - GetLandmarkOffsetX((CSaveBlockX *)m_pEntityBlock);
		vfunc16(&vecResult, 12);
	}
}
// END FUNCTION

// FUNCTION: 0x101a0d30 size=0x4c
#include "CSave.h"
#include <string.h>
const char *sub_1019f760(void *pMap, int pFunc);
__declspec(dllimport) void Warning(const char *fmt, ...);
void CSave::vfunc31(void *pBase, const char *pszName, void *pData, int count)
{
    const char *pName = sub_1019f760(pBase, *(int *)pData);
    if (pName) {
        sub_101a05b0((int)pszName, strlen(pName) + 1, (int)pName);
        return;
    }
    Warning("Invalid function pointer in entity!");
}
// END FUNCTION

// FUNCTION: 0x101a0da0 size=0x61
#include "CSave.h"
void CSave::vfunc33(const char *pszName, void *pData, int count)
{
	int tmp[256];
	for (int i = 0; i < count; i++)
		tmp[i] = sub_101a08f0(((void **)pData)[i]);
	vfunc9(pszName, tmp, count);
}
// END FUNCTION

// FUNCTION: 0x101a0e30 size=0x59
#include "CSave.h"
void CSave::vfunc32(const int *pHandles, int count)
{
	int indices[256];
	for (int i = 0; i < count; i++)
		indices[i] = sub_101a08f0((void *)pHandles[i]);
	vfunc10(indices, count);
}
// END FUNCTION

// FUNCTION: 0x101a0eb0 size=0x61
#include "CSave.h"
void CSave::vfunc35(const char *pszName, void *pData, int count)
{
	int tmp[256];
	for (int i = 0; i < count; i++)
		tmp[i] = sub_101a0830(((CSaveEdict **)pData)[i]);
	vfunc9(pszName, tmp, count);
}
// END FUNCTION

// FUNCTION: 0x101a0f40 size=0x59
#include "CSave.h"
void CSave::vfunc34(CSaveEdict *const *pEdicts, int count)
{
	int indices[256];
	for (int i = 0; i < count; i++)
		indices[i] = sub_101a0830(pEdicts[i]);
	vfunc10(indices, count);
}
// END FUNCTION

// FUNCTION: 0x101a0fc0 size=0x89
#include "CSave.h"

void CSave::vfunc37(const char *pszName, void *pData, int count)
{
	int entityArray[256];
	EHANDLE *pEHandles = (EHANDLE *)pData;
	for (int i = 0; i < count; i++)
		entityArray[i] = sub_101a08f0(pEHandles[i].Get());
	vfunc9(pszName, entityArray, count);
}
// END FUNCTION

// FUNCTION: 0x101a1080 size=0x81
#include "CSave.h"

void CSave::vfunc36(const void *pData, int count)
{
    int buf[256];
    const EHANDLE *pHandles = (const EHANDLE *)pData;
    for (int i = 0; i < count; i++)
        buf[i] = sub_101a08f0(((EHANDLE *)&pHandles[i])->Get());
    vfunc10(buf, count);
}
// END FUNCTION
