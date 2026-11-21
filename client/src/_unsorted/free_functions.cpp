// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10001000 size=0x2a
struct CUnkElem { };
typedef void (CUnkElem::*CUnkElemFn)();

// TARGET: sub_10001000
void __stdcall sub_10001000(char *ptr, unsigned size, int count, CUnkElemFn fn)
{
    while (--count >= 0) {
        (((CUnkElem *)ptr)->*fn)();
        ptr += size;
    }
}
// END FUNCTION

// FUNCTION: 0x10001030 size=0x31
struct CUnknown1004ddc0 { };
typedef void (CUnknown1004ddc0::*PMF_1004ddc0)();

// TARGET: sub_10001030
void __stdcall sub_10001030(char *ptr, unsigned size, int count, PMF_1004ddc0 pmf)
{
	ptr += size * count;
	while (--count >= 0) {
		ptr -= size;
		(((CUnknown1004ddc0 *)ptr)->*pmf)();
	}
}
// END FUNCTION

// FUNCTION: 0x10003c10 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory192 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10003c10(int num);
};

void CUtlMemory192::sub_10003c10(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 0xc0);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 0xc0);
}
// END FUNCTION

// FUNCTION: 0x10004ce0 size=0x62
#include "Vector.h"
#include <stdlib.h>
// TARGET: Vector::sub_10004ce0
void Vector::sub_10004ce0(float minVal, float maxVal)
{
	float scale = (maxVal - minVal) * 3.051851e-5f;
	x = rand() * scale + minVal;
	y = rand() * scale + minVal;
	z = rand() * scale + minVal;
}
// END FUNCTION

// FUNCTION: 0x10004d80 size=0x43
#include "Vector.h"
Vector Vector::sub_10004d80(float fl) const
{
	Vector res;
	VectorMultiply(*this, fl, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x10005de0 size=0x1b
struct CSubObj1005f190 {
	virtual int v0();
	virtual char v1();
	char pad[0x28];
	int m_n2c;
};

struct CFoo1005f190 {
	char pad[4];
	CSubObj1005f190 *m_pSub;
	int sub_10005de0();
};

// TARGET: sub_10005de0
int CFoo1005f190::sub_10005de0()
{
	if (m_pSub->v1()) {
		return 0;
	}
	return m_pSub->m_n2c;
}
// END FUNCTION

// FUNCTION: 0x10005e00 size=0x8f
#include "Ray_t.h"

// TARGET: Ray_t::sub_10005e00
inline void Ray_t::sub_10005e00(const float *pStart, const float *pEnd)
{
    VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
    m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
    m_StartOffset[2] = 0;
    m_StartOffset[1] = 0;
    m_StartOffset[0] = 0;
    m_IsRay = true;
    m_Extents[2] = 0;
    m_Extents[1] = 0;
    m_Extents[0] = 0;
    m_Start[0] = pStart[0];
    m_Start[1] = pStart[1];
    m_Start[2] = pStart[2];
    m_b32 = 0;
    m_n34 = 0;
    m_b33 = 0;
}
static void (Ray_t::*s_sub_1004f7a0)(const float *, const float *) = &Ray_t::sub_10005e00;
// END FUNCTION

// FUNCTION: 0x10027d20 size=0x191
#include "Vector.h"
void sub_100dfc60(const Vector &a, const Vector &b, int r, int g, int bl, bool noDepthTest, float duration);

void sub_10027d20(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, bool noDepthTest, float duration)
{
    Vector o = origin;
    double t0 = maxs.z; o.z = o.z - t0 * 0.5;
    Vector p1 = o + mins;
    Vector p2 = o + maxs;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.x += maxs.x - mins.x;
    p2.x -= maxs.x - mins.x;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.y += maxs.y - mins.y;
    p2.y -= maxs.y - mins.y;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.x -= maxs.x - mins.x;
    p2.x += maxs.x - mins.x;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
}
// END FUNCTION

// FUNCTION: 0x10028920 size=0xe1
extern char *(*g_101e3188)(char *, const char *, int);
extern char g_1027aedc[];
extern char g_1027aed8[];
char *sub_101d1300(const char *, const char *);
double sub_101d12af(const char *);

void sub_10028920(float *out, const char *str)
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    char buf[48];
    char *(*pfnCopy)(char *, const char *, int) = g_101e3188;
    pfnCopy(buf, str, 48);
    char *p = sub_101d1300(buf, g_1027aedc);
    if (p) {
        pfnCopy(buf, p + 1, 48);
        x = (float)sub_101d12af(buf);
    }
    p = sub_101d1300(buf, g_1027aed8);
    if (p) {
        pfnCopy(buf, p + 1, 48);
        y = (float)sub_101d12af(buf);
    }
    p = sub_101d1300(buf, g_1027aed8);
    if (p) {
        pfnCopy(buf, p + 1, 48);
        z = (float)sub_101d12af(buf);
    }
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
// END FUNCTION

// FUNCTION: 0x100291c0 size=0x32
#include <string.h>

int *__fastcall sub_100291c0(int *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    memset(p + 5, 0, 0x41 * 4);
    *(char *)(p + 0x46) = 0;
    p[0xd] = -1;
    return p;
}
// END FUNCTION

// FUNCTION: 0x10029370 size=0x44
#include "utlrbtree.h"
#include "utlvector.h"
struct SVecHolder {
    CUtlVector<int> m_List;
    char pad[0x118 - sizeof(CUtlVector<int>)];
    char m_bFlag;
};
void __fastcall sub_10029370(SVecHolder *p)
{
    p->m_bFlag = 0;
    p->m_List.Purge();
}
// END FUNCTION

// FUNCTION: 0x10029450 size=0x35
#include "CCameraShotTable.h"
extern void (*g_101e3108)(const char *pszFormat, ...);
CCameraShot_t *CCameraShotTable::sub_10029450(int index)
{
	if (index <= m_size && index >= 0)
		return &m_pMemory[index];
	g_101e3108("Invalid camera shot index\n");
	return &m_default;
}
// END FUNCTION

// FUNCTION: 0x10029e70 size=0x36
// TARGET: sub_10029e70
struct CLinkElem
{
	int m_pad00[8];
	int m_iPrev;	// 0x20
	int m_iNext;	// 0x24
	int m_pad28[5];
};

void sub_10029e70(CLinkElem *pBase, CLinkElem *pNode)
{
	if (pNode->m_iNext != -1) {
		pBase[pNode->m_iNext].m_iPrev = -1;
	}
	if (pNode->m_iPrev != -1) {
		pBase[pNode->m_iPrev].m_iNext = -1;
	}
	pNode->m_iPrev = -1;
	pNode->m_iNext = -1;
}
// END FUNCTION

// FUNCTION: 0x1002a040 size=0x33
void sub_10029eb0(int *base, int *entry, int arg);

int sub_1002a040(int *p, int arg)
{
    int count = 0;
    int *entry = p;
    int i = 0x32;
    do {
        if (*entry != 0) {
            sub_10029eb0(p, entry, arg);
            count++;
        }
        entry += 0xf;
        i--;
    } while (i != 0);
    return count;
}
// END FUNCTION

// FUNCTION: 0x1002a0e0 size=0x4c
struct Node60 { int d[8]; int m_n20; int m_n24; int e[5]; };
int sub_1002a080(Node60 *);
void sub_1002a0e0(Node60 *list, Node60 *src, int parent)
{
    int idx = sub_1002a080(list);
    Node60 *n = &list[idx];
    *n = *src;
    n->m_n20 = -1;
    if (parent != -1) {
        n->m_n24 = parent;
        list[parent].m_n20 = idx;
    } else {
        n->m_n24 = -1;
    }
}
// END FUNCTION

// FUNCTION: 0x1002c080 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_1002c080(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x1002c130 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1002c130
	void sub_1002c130(int num);
};

void CMem8b_t::sub_1002c130(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1002d430 size=0x33
#include "CUtlMemory12.h"
extern void *(*g_101e3100)(int);

CUtlMemory12 *CUtlMemory12::sub_1002d430(int growSize, int allocationCount)
{
    m_pMemory = 0;
    m_allocationCount = allocationCount;
    m_growSize = growSize;
    if (allocationCount)
        m_pMemory = (char *)g_101e3100(allocationCount * 12);
    return this;
}
// END FUNCTION

// FUNCTION: 0x1002d470 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1002d470()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1002d620 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory36 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1002d620(int num);
};

void CUtlMemory36::sub_1002d620(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 36);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 36);
}
// END FUNCTION

// FUNCTION: 0x1002d690 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1002d690(int num);
};

void CUtlMemory12::sub_1002d690(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x10039080 size=0x19
#include "Vector.h"
Vector &Vector::sub_10039080(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x10039e60 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10039e60()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10043150 size=0x76
extern int g_104d4970, g_104d4974, g_104d4978;
struct Rec64 {
    int m00;
    int m04, m08, m0c, m10, m14, m18;
    char m1c;
    int m20, m24, m28, m2c, m30, m34, m38;
    int m3c;
    int m40;
    short m44;
    int m48;
    int m4c, m50, m54;
    int m58, m5c, m60;
    void sub_10043150(int v);
};
void Rec64::sub_10043150(int v)
{
    m3c = v;
    m04 = 0;
    m08 = 0;
    m0c = 0;
    m10 = 0;
    m14 = 0;
    m18 = 0;
    m48 = 0;
    m20 = 0;
    m44 = 0;
    m40 = 0;
    m1c = 0;
    m4c = g_104d4970;
    m50 = g_104d4974;
    m54 = g_104d4978;
    m58 = g_104d4970;
    m5c = g_104d4974;
    m60 = g_104d4978;
    m24 = 0;
    m28 = 0;
    m2c = 0;
    m30 = 0;
    m34 = 0;
    m38 = 0;
}
// END FUNCTION

// FUNCTION: 0x10043580 size=0xfa
#include "CUnknown100dc9f0.h"
#include "TempVector.h"

float *CUnknown100dc9f0::sub_10043580(const float *pPoint, float *pOut)
{
	Vector &vecTemp = AllocTempVector();
	VectorSubtract(m_maxs, m_mins, vecTemp);
	Vector vecSize = vecTemp;
	pOut[0] = (vecSize.x != 0.0f) ? (pPoint[0] - m_mins.x) / vecSize.x : 0.5f;
	pOut[1] = (vecSize.y != 0.0f) ? (pPoint[1] - m_mins.y) / vecSize.y : 0.5f;
	pOut[2] = (vecSize.z != 0.0f) ? (pPoint[2] - m_mins.z) / vecSize.z : 0.5f;
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x100437f0 size=0x6d
#include "CUnknown100dcd00.h"

struct RandomStream
{
	virtual void a0();
	virtual float RandomFloat(float lo, float hi);
};
extern RandomStream *g_104a5738;

// TARGET: CUnknown100dcd00::sub_100437f0
void CUnknown100dcd00::sub_100437f0(const float *pA, const float *pB, int arg)
{
	float v[3];
	v[0] = g_104a5738->RandomFloat(pA[0], pB[0]);
	v[1] = g_104a5738->RandomFloat(pA[1], pB[1]);
	v[2] = g_104a5738->RandomFloat(pA[2], pB[2]);
	sub_10043680(v, arg);
}
// END FUNCTION

// FUNCTION: 0x10044420 size=0x21
struct CUnkVT100ddc00
{
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3(unsigned short value);
};

extern CUnkVT100ddc00 *g_104a5808;

struct CUnk100ddc00
{
    void sub_10044420();
};

// TARGET: sub_10044420
void CUnk100ddc00::sub_10044420()
{
    unsigned short h = *(unsigned short *)((char *)this + 0x46);
    if (h != 0xffff) {
        g_104a5808->vf3(h);
        *(unsigned short *)((char *)this + 0x46) = 0xffff;
    }
}
// END FUNCTION

// FUNCTION: 0x10045630 size=0x3b
#include "Vector.h"

void sub_10045630(Vector *a, Vector *b, Vector *out)
{
    CrossProduct(*a, *b, *out);
}
// END FUNCTION

// FUNCTION: 0x10049f20 size=0x19
struct CUnknown100f2f90 { void * sub_10049f20(int, int, int); };
void * CUnknown100f2f90::sub_10049f20(int a0, int a1, int a2)
{
    *(int *)this = a0;
    *(int *)((char *)this + 4) = a1;
    *(int *)((char *)this + 8) = a2;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10049f40 size=0x43
#include "Vector.h"
Vector Vector::sub_10049f40(const Vector &v) const
{
	Vector res;
	VectorAdd(*this, v, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x1004b220 size=0x4b
#include "Vector.h"
#include <math.h>
// TARGET: sub_1004b220
float __cdecl sub_1004b220(const Vector *v)
{
    if (v->y == 0 && v->x == 0)
        return 0;
    float yaw = (float)atan2(v->y, v->x) * 57.29578f;
    if (yaw < 0)
        yaw += 360;
    return yaw;
}
// END FUNCTION

// FUNCTION: 0x1004b7e0 size=0xa7
#include "CTraceEntList.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CTraceEntList::sub_1004b7e0(int value)
{
	int elem = m_size;
	if (1 + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (1 + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 8;
			}
		}
		if (m_pMemory)
			m_pMemory = (int *)Plat_Realloc(m_pMemory, m_allocationCount * 4);
		else
			m_pMemory = (int *)Plat_Alloc(m_allocationCount * 4);
	}
	m_size += 1;
	m_pElements = m_pMemory;
	int numToMove = m_size - elem - 1;
	if (numToMove > 0)
		memmove(m_pMemory + elem + 1, m_pMemory + elem, numToMove * 4);
	int *p = m_pMemory + elem;
	if (p)
		*p = value;
}
// END FUNCTION

// FUNCTION: 0x1004ba40 size=0x46
#include <stdarg.h>
extern int (__cdecl *g_101e31a8)(char *pDest, int maxLen, const char *pFormat, va_list params);
extern char g_103ecd98[4][1024];
extern int g_103edddc;
char *sub_1004ba40(const char *format, ...)
{
	va_list argptr;
	g_103edddc = (g_103edddc + 1) % 4;
	va_start(argptr, format);
	g_101e31a8(g_103ecd98[g_103edddc], sizeof(g_103ecd98[0]), format, argptr);
	va_end(argptr);
	return g_103ecd98[g_103edddc];
}
// END FUNCTION

// FUNCTION: 0x1004ba90 size=0x1f
extern char g_103ecd98[];

// TARGET: sub_1004ba90
bool sub_1004ba90(char *p)
{
    char *q = g_103ecd98;
    do
    {
        if (q == p)
        {
            return true;
        }
        q += 0x400;
    } while (q < g_103ecd98 + 0x1000);
    return false;
}
// END FUNCTION

// FUNCTION: 0x1004e830 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1004e830(int num);
};

// TARGET: UtlMem::sub_1004e830
void UtlMem::sub_1004e830(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10050100 size=0x3d
#include "CUtlVector16.h"

extern void (__cdecl *g_101e30fc)(void *);

void CUtlVector16::sub_10050100()
{
	m_size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100557c0 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_100557c0(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x10055800 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_10055800(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10055890 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_10055890(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x100558d0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100558d0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10055900 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10055900
	void sub_10055900(int num);
};

void CMem8b_t::sub_10055900(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10057470 size=0x72
struct Elem { char data[0x88]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);

void __fastcall sub_10057470(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_101e3104(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_101e3100(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10067a50 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10067a50(int num);
};

// TARGET: UtlMem::sub_10067a50
void UtlMem::sub_10067a50(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10067f70 size=0x48
#include "utlrbtree.h"
#include "utlvector.h"
struct CTreeHolder1024a120;
void __fastcall sub_101391d0(CTreeHolder1024a120 *p);
extern CTreeHolder1024a120 g_103ef0c8;
extern CUtlVector<int> g_104770f8;
void sub_10067f70()
{
    sub_101391d0(&g_103ef0c8);
    g_104770f8.Purge();
}
// END FUNCTION

// FUNCTION: 0x10068120 size=0x3f
struct CActivityTable
{
	int sub_10138cb0(const char *pszName);	// the index of the name, -1 when there is none (stub 0x1000cc2a)
};

struct CActivityEntry
{
	int m_n00;
	int m_n04;
};

extern CActivityTable g_103ef0c8;
extern CActivityEntry *g_104770f8;
extern char g_10288bf0[];
typedef void (*FnDevWarning)(int level, const char *pszFormat, ...);
extern FnDevWarning g_101e3120;

// TARGET: sub_10068120
CActivityEntry *sub_10068120(const char *pszName)
{
	int iIndex = g_103ef0c8.sub_10138cb0(pszName);
	if (iIndex < 0) {
		return 0;
	}
	if (iIndex >= 0x118d) {
		g_101e3120(1, g_10288bf0, pszName);
		return 0;
	}
	return &g_104770f8[iIndex];
}
// END FUNCTION

// FUNCTION: 0x10068160 size=0x2a
struct CUnknown10412470Ent
{
    int key;
    int value;
};

extern int g_10477104;
extern CUnknown10412470Ent *g_104770f8;

// TARGET: sub_10068160
CUnknown10412470Ent *sub_10068160(int key)
{
    int i;
    for (i = 0; i < g_10477104; i++) {
        if (g_104770f8[i].key == key)
            return &g_104770f8[i];
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10068300 size=0x2f
// TARGET: sub_10068300
extern int g_10477160;
extern int *g_10477154;

bool sub_10068300(int value)
{
    int idx = 0;
    if (g_10477160 > 0)
    {
        do
        {
            if (g_10477154[idx] == value)
            {
                goto found;
            }
            idx++;
        } while (idx < g_10477160);
    }
    idx = -1;
found:
    return idx >= 0;
}
// END FUNCTION

// FUNCTION: 0x10078da0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10078da0
	void sub_10078da0(int num);
};

void CMem8b_t::sub_10078da0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10078f20 size=0x19
struct CUnk10427480
{
	int m_nCount;

	int *sub_10078f20(int i);
};

// TARGET: sub_10078f20
int *CUnk10427480::sub_10078f20(int i)
{
	if (i >= m_nCount) {
		return 0;
	}
	return (int *)this + i * 9 + 1;
}
// END FUNCTION

// FUNCTION: 0x10078f90 size=0x53
struct SubObj { virtual void v0(); virtual bool v1(); char pad[0x24]; float f28; };
struct Inner { int pad0; SubObj *pObj; };
struct Entry { int pad[4]; int m10; int pad14[2]; Inner *m1c; int pad20; };
struct CTable {
    int count;
    int pad4[8];
    Entry e[1];
    int sub_10078f90(int i);
};
extern float g_101e34f0;
// TARGET: CTable::sub_10078f90
int CTable::sub_10078f90(int i)
{
    if (i >= 1 && i < count) {
        Entry &en = e[i - 1];
        if (en.m10 != -1) return en.m10;
        Inner *p = en.m1c;
        if (p) {
            if (p->pObj->v1()) return (int)g_101e34f0;
            return (int)p->pObj->f28;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10078ff0 size=0x58
struct CTblObjInner { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x24]; float m_f28; };
struct CTblObj { int m_n0; CTblObjInner *m_p4; };
struct CTblEntry { int m_pad0[5]; int m_n14; int m_n18; int m_pad1c; CTblObj *m_p20; };
struct CTbl { int m_nCount; CTblEntry m_entries[1]; int sub_10078ff0(int i); };
extern float g_101e34f0;
int CTbl::sub_10078ff0(int i)
{
	if (i >= 1 && i < m_nCount) {
		CTblEntry *e = (CTblEntry *)((char *)this + i * 36);
		if (e->m_n14 == -1) {
			CTblObj *p = e->m_p20;
			if (p) {
				if (p->m_p4->vfunc1())
					return (int)g_101e34f0;
				return (int)p->m_p4->m_f28;
			}
		} else
			return e->m_n18;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10079050 size=0x55
#include "CGameRulesSlotTable.h"

extern float g_101e34f0;

int CGameRulesSlotTable::sub_10079050(int index)
{
	if (index >= 1 && index < m_nCount)
	{
		int *p = (int *)this;
		if (p[index * 9 + 6] != -1)
			return p[index * 9 + 6];
		CGameRulesSlotHolder *pHolder = (CGameRulesSlotHolder *)p[index * 9 + 9];
		if (pHolder)
		{
			if (pHolder->m_pInner->vfunc1())
				return (int)g_101e34f0;
			return (int)pHolder->m_pInner->m_fValue28;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100790b0 size=0x1c
struct CUnknown104276a0 {
	int m_nCount;	// 0x00
	int sub_100790b0(int i);
};

// TARGET: CUnknown104276a0::sub_100790b0
int CUnknown104276a0::sub_100790b0(int i)
{
	if (i >= 1 && i < m_nCount)
		return *(int *)((char *)this + i * 36 + 8);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100790d0 size=0x1c
struct CUnknown104276d0 {
	int m_nCount;	// 0x00
	int sub_100790d0(int i);
};

// TARGET: CUnknown104276d0::sub_100790d0
int CUnknown104276d0::sub_100790d0(int i)
{
	if (i >= 1 && i < m_nCount)
		return *(int *)((char *)this + i * 36 + 12);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100790f0 size=0x69
#include "CUnknown10427700.h"
#include <string.h>

extern char *(*g_101e3188)(char *, const char *, int);

bool CUnknown10427700::sub_100790f0(const char *name, int a, int b)
{
    if (m_nEntries == 0x20)
        return false;
    unsigned int len = strlen(name);
    m_entries[m_nEntries].m_pName = (char *)operator new(len + 1);
    g_101e3188(m_entries[m_nEntries].m_pName, name, len + 1);
    m_entries[m_nEntries].m_a = a;
    m_entries[m_nEntries].m_b = b;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10079260 size=0x4d
#include "CUnknown10427700.h"
void CUnknown10427700::sub_10079260(const char *name, int a, int b, int plrDmg, int npcDmg, int maxCarry)
{
    if (sub_100790f0(name, a, b)) {
        m_entries[m_nEntries].m_plrDmg = plrDmg;
        m_entries[m_nEntries].m_npcDmg = npcDmg;
        m_entries[m_nEntries].m_maxCarry = maxCarry;
        m_nEntries++;
    }
}
// END FUNCTION

// FUNCTION: 0x100792d0 size=0x1e
struct CUnk10427970Entry {
	void *m_p0;
	char m_pad0004[0x24 - 4];
};

struct CUnk10427970 {
	char m_pad0000[0x28];
	CUnk10427970Entry m_arr[31];
	void sub_100792d0();
};

// TARGET: CUnk10427970::sub_100792d0
void CUnk10427970::sub_100792d0()
{
	for (int i = 0; i < 31; i++)
	{
		operator delete(m_arr[i].m_p0);
	}
}
// END FUNCTION

// FUNCTION: 0x10079480 size=0x63
struct SEntry { char pad[0x1c]; float a[3]; float b[3]; };
SEntry *sub_1008d9d0(int, int);
// TARGET: sub_10079480
int sub_10079480(int a, int b, float *pA, float *pB)
{
	SEntry *p = sub_1008d9d0(a, b);
	if (p == 0) {
		pA[0] = 0; pA[1] = 0; pA[2] = 0;
		pB[0] = 0; pB[1] = 0; pB[2] = 0;
		return 0;
	}
	pA[0] = p->a[0]; pA[1] = p->a[1]; pA[2] = p->a[2];
	pB[0] = p->b[0]; pB[1] = p->b[1]; pB[2] = p->b[2];
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100797c0 size=0x1c
void sub_10079520(void *p);

// TARGET: sub_100797c0
void __cdecl sub_100797c0(char *p)
{
	if (p && *(int *)(p + 0x118) == 0)
		sub_10079520(p);
}
// END FUNCTION

// FUNCTION: 0x100797e0 size=0x16d
#include "StudioHdr.h"

void sub_100797c0(StudioHdr *pHdr);
int sub_100797e0(StudioHdr *pHdr, int activity, int *pSeqOut, int *pWeightOut, int base, char bExclude100, char bExclude200, int maxWeight);

int sub_100797e0(StudioHdr *pHdr, int activity, int *pSeqOut, int *pWeightOut, int base, char bExclude100, char bExclude200, int maxWeight)
{
	if (activity <= 0)
		return 0;
	if (!pHdr)
		return 0;
	int nFound = 0;
	unsigned int flags = 0x80;
	if (pHdr->m_nLocalSeq) {
		sub_100797c0(pHdr);
		StudioSeqDesc *pDesc = pHdr->LocalSeq(0);
		for (int i = 0; i < pHdr->m_nLocalSeq; i++, pDesc++) {
			if (pDesc->m_nActivity == activity
				&& (!bExclude100 || !(pDesc->m_flags & 0x100))
				&& (!bExclude200 || !(pDesc->m_flags & 0x200))
				&& (maxWeight < 0 || pDesc->m_nMaxWeight < 0 || maxWeight >= pDesc->m_nMaxWeight)) {
				pSeqOut[nFound] = base + i;
				pWeightOut[nFound] = pDesc->m_nActivityWeight;
				flags = pDesc->m_flags;
				nFound++;
			}
		}
	}
		if (0) nFound += pHdr->m_nIncludeIndex + 0;
	if (flags & 0x80) {
		for (int i = 0; i < pHdr->m_nIncludeModels; i++) {
			StudioIncludeModel *pInc = pHdr->IncludeModel(i);
			if (pInc->m_pVirtual)
				nFound += sub_100797e0(pInc->m_pVirtual->vfunc1(pHdr, i), activity, pSeqOut + nFound, pWeightOut + nFound, pInc->m_nBase + base, bExclude100, bExclude200, maxWeight);
		}
	}
	return nFound;
}
// END FUNCTION

// FUNCTION: 0x100799d0 size=0x6d
extern int g_102aaee0;
int sub_100799d0(int n, int *items, int *w)
{
    int sum, i, r;
    if (n < 1)
        return -1;
    if (n == 1)
        return items[0];
    sum = 0;
    for (i = 0; i < n; i++)
        sum += w[i];
    if (sum < 1) {
        i = g_102aaee0;
        if (i >= 0 && i < n)
            return items[i];
        return items[0];
    }
    r = g_102aaee0;
    for (i = 0; i < n; i++) {
        if (r < w[i])
            return items[i];
        r -= w[i];
    }
    return items[0];
}
// END FUNCTION

// FUNCTION: 0x10079a40 size=0x47
int sub_10079a40(int n, int *values, int *weights)
{
	if (n < 1)
		return -1;
	if (n == 1)
		return *values;
	int best = 0;
	int bestVal = 0x80000000;
	for (int i = 0; i < n; i++) {
		if (weights[i] > bestVal) {
			bestVal = weights[i];
			best = i;
		}
	}
	return values[best];
}
// END FUNCTION

// FUNCTION: 0x10079a90 size=0x6e
int sub_100797e0(int, int, char *, char *, int, int, int, int);
int sub_10079950(int, char *, char *);

int sub_10079a90(int a, int b, int c, int d, int e)
{
	char x[0x2000];
	char y[0x2000];
	if (a == 0)
		return 0;
	int r = sub_100797e0(a, b, x, y, 0, c, d, e);
	return sub_10079950(r, x, y);
}
// END FUNCTION

// FUNCTION: 0x10079b70 size=0x6e
int sub_100797e0(int, int, char *, char *, int, int, int, int);
int sub_10079a40(int, char *, char *);

int sub_10079b70(int a, int b, int c, int d, int e)
{
	char x[0x2000];
	char y[0x2000];
	if (a == 0)
		return 0;
	int r = sub_100797e0(a, b, x, y, 0, c, d, e);
	return sub_10079a40(r, x, y);
}
// END FUNCTION

// FUNCTION: 0x10079cf0 size=0x40
int sub_10079d30(int a, int b);
int sub_10079c20(int a, int b);
int sub_10079b70(int a, int b, int c, int d, int e);

// TARGET: sub_10079cf0
int sub_10079cf0(int a, int b)
{
    int iVar1 = sub_10079d30(a, b);
    if (iVar1 < 0) {
        iVar1 = sub_10079c20(a, b);
        if (iVar1 != -1) {
            return sub_10079b70(a, iVar1, 0, 0, -1);
        }
        iVar1 = -1;
    }
    return iVar1;
}
// END FUNCTION

// FUNCTION: 0x10079fe0 size=0x1b
// TARGET: sub_10079fe0
int sub_10079fe0(int v)
{
    if (v == 0x3ec || v == 0x3f0) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007a030 size=0x1d
// TARGET: sub_1007a030
struct CUnk10428970
{
    char pad[8];
    int m_8;
};
CUnk10428970 *__cdecl sub_1008d9d0(int a, int b);
int __cdecl sub_1007a030(int a, int b)
{
    CUnk10428970 *p = sub_1008d9d0(a, b);
    if (p)
    {
        return p->m_8;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007a140 size=0x13d
struct CStudioHdr;
char *sub_1008da80(CStudioHdr *pStudioHdr, int iSequence, CStudioHdr **ppOwner);
extern void (__cdecl *g_101e3108)(const char *fmt, ...);	// Msg

// TARGET: sub_1007a140
int sub_1007a140(CStudioHdr *pStudioHdr, int iFrom, int iTo, int *pDirection)
{
	CStudioHdr *pFromHdr;
	CStudioHdr *pToHdr;
	char *pFrom = sub_1008da80(pStudioHdr, iFrom, &pFromHdr);
	char *pTo = sub_1008da80(pStudioHdr, iTo, &pToHdr);
	unsigned int uEntryNode;
	unsigned int uExitNode;
	if (!pFrom || !(uEntryNode = *(unsigned int *)(pFrom + 0x270)) || !pTo || !(uExitNode = *(unsigned int *)(pTo + 0x270)) || pFromHdr != pToHdr)
	{
		*pDirection = 1;
		return iTo;
	}
	unsigned int uNode = *pDirection > 0 ? *(unsigned int *)(pFrom + 0x274) : uEntryNode;
	if (uNode == uExitNode)
	{
		*pDirection = 1;
		return iTo;
	}
	char *pBase = (char *)pFromHdr;
	unsigned int uStep = *(unsigned char *)(pBase + *(int *)(pBase + 0x150) * (uNode - 1) + *(int *)(pBase + 0x154) + uExitNode - 1);
	if (uStep == 0)
		return iTo;
	int i = 0;
	char *pSeq = pBase + *(int *)(pBase + 0x114);
	int nSeqs = *(int *)(pBase + 0x110);
	if (0 < nSeqs)
	{
		do
		{
			if (*(unsigned int *)(pSeq + 0x270) == uNode && *(unsigned int *)(pSeq + 0x274) == uStep)
			{
				*pDirection = 1;
				return i;
			}
			if (*(unsigned int *)(pSeq + 0x278) != 0 && *(unsigned int *)(pSeq + 0x274) == uNode && *(unsigned int *)(pSeq + 0x270) == uStep)
			{
				*pDirection = -1;
				return i;
			}
			i++;
			pSeq += 0x2fc;
		} while (i < nSeqs);
	}
	g_101e3108("error in transition graph");
	*pDirection = 1;
	return iTo;
}
// END FUNCTION

// FUNCTION: 0x1007a280 size=0x53
struct SeqHdr { char pad[0x140]; int m140; int m144; };
// TARGET: sub_1007a280
void __cdecl sub_1007a280(SeqHdr *p, int *pv, int a, int b)
{
    if (p && a <= p->m140) {
        int *e = (int *)((char *)p + p->m144 + a * 16);
        int n = e[1];
        if (b < n) {
            int d = e[2];
            *pv = (b - (*pv / d) % n) * d + *pv;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1007a2e0 size=0x47
struct SeqHdr { char pad[0x140]; int count; int tableOffset; };
struct SeqRec { int a; int n; int divisor; int d; };
int sub_1007a2e0(SeqHdr *hdr, int value, int index)
{
	if (!hdr)
		return 0;
	if (index > hdr->count)
		return 0;
	SeqRec *rec = (SeqRec *)((char *)hdr + hdr->tableOffset + index * 16);
	int n = rec->n;
	if (n <= 1)
		return 0;
	return (value / rec->divisor) % n;
}
// END FUNCTION

// FUNCTION: 0x1007a330 size=0x35
extern char g_102de300[];

struct CStrTable10428d50 {
	char m_pad[0x140];
	int m_nCount;
	int m_nTableOfs;
};

// TARGET: sub_1007a330
char *sub_1007a330(CStrTable10428d50 *pTable, int index)
{
	char *base = (char *)pTable;
	if (!base)
		return g_102de300;
	if (index > pTable->m_nCount)
		return g_102de300;
	char *entry = base + pTable->m_nTableOfs + index * 16;
	return entry + *(int *)entry;
}
// END FUNCTION

// FUNCTION: 0x1007a3d0 size=0x2c
struct CTable10428e20 {
    char pad[0x140];
    int m_i140;
    int m_i144;
};

// TARGET: sub_1007a3d0
int sub_1007a3d0(CTable10428e20 *p, int idx)
{
    if (p == 0) {
        return 0;
    }
    if (idx > p->m_i140) {
        return 0;
    }
    return *(int *)((char *)p + 4 + p->m_i144 + idx * 16);
}
// END FUNCTION

// FUNCTION: 0x1007a440 size=0x2e
// TARGET: sub_1007a440
void sub_10108430(void *pDest, const float *pData);

void sub_1007a440(char *pObj, int index, const float *pData)
{
    if (index >= 0)
    {
        sub_10108430(pObj + *(int *)(pObj + 0x14c) + index * 0x3c + 0xc, pData);
    }
}
// END FUNCTION

// FUNCTION: 0x1007a4d0 size=0x2d
extern char g_102de300[];

// TARGET: sub_1007a4d0
char *sub_1007a4d0(char *pObj, int nIndex)
{
	if (pObj == 0) {
		return g_102de300;
	}
	int *p = (int *)(pObj + *(int *)(pObj + 0x104) + nIndex * 12);
	if (p == 0) {
		return g_102de300;
	}
	return (char *)(*p + (int)p);
}
// END FUNCTION

// FUNCTION: 0x1007aca0 size=0x2b
#include "CUnknown100290c0.h"

// TARGET: CUnknown100290c0::sub_1007aca0
unsigned int CUnknown100290c0::sub_1007aca0(unsigned int *pHandle)
{
    unsigned int h = *pHandle;
    if (h != 0xffffffff) {
        CUnknown100290c0Slot *pSlot = &m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13)) {
            return pSlot->m_Value;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007b250 size=0x351
struct CWeaponStruct44 { int d[17]; };
struct CWeaponStruct88 { int d[34]; };
struct CWeaponStructBig { int d[0x39e9]; };
struct CWeaponCopy
{
	int m0;
	char m4[0x80];
	char m84[0x80];
	int m104, m108, m10c, m110, m114;
	char m118[0x80];
	CWeaponStruct44 m198;
	char m1dc[0x80];
	int m25c, m260, m264, m268, m26c, m270;
	CWeaponStruct88 m274[2];
	int m384, m388, m38c, m390, m394, m398, m39c, m3a0, m3a4, m3a8, m3ac, m3b0, m3b4, m3b8, m3bc, m3c0, m3c4, m3c8, m3cc, m3d0, m3d4, m3d8, m3dc, m3e0, m3e4, m3e8, m3ec, m3f0, m3f4, m3f8, m3fc, m400, m404, m408, m40c;
	char m410[0x80];
	CWeaponStructBig m490;
	int mec34[10];
	int mec5c[10];

	CWeaponCopy *sub_1007b250(const CWeaponCopy *p);
};

// TARGET: CWeaponCopy::sub_1007b250
CWeaponCopy *CWeaponCopy::sub_1007b250(const CWeaponCopy *p)
{
	unsigned i0, i1, i3, i4, i8;
	int i6, i10, i11, i9;
	m0 = p->m0;
	for (i0 = 0; i0 < 0x80; i0++) m4[i0] = p->m4[i0];
	for (i1 = 0; i1 < 0x80; i1++) m84[i1] = p->m84[i1];
	m104 = p->m104; m108 = p->m108; m10c = p->m10c; m110 = p->m110; m114 = p->m114;
	for (i3 = 0; i3 < 0x80; i3++) m118[i3] = p->m118[i3];
	m198 = p->m198;
	for (i4 = 0; i4 < 0x80; i4++) m1dc[i4] = p->m1dc[i4];
	m25c = p->m25c; m260 = p->m260; m264 = p->m264; m268 = p->m268; m26c = p->m26c; m270 = p->m270;
	for (i6 = 0; i6 < 2; i6++) m274[i6] = p->m274[i6];
	m384 = p->m384; m388 = p->m388; m38c = p->m38c; m390 = p->m390; m394 = p->m394; m398 = p->m398; m39c = p->m39c; m3a0 = p->m3a0; m3a4 = p->m3a4; m3a8 = p->m3a8; m3ac = p->m3ac; m3b0 = p->m3b0; m3b4 = p->m3b4; m3b8 = p->m3b8; m3bc = p->m3bc; m3c0 = p->m3c0; m3c4 = p->m3c4; m3c8 = p->m3c8; m3cc = p->m3cc; m3d0 = p->m3d0; m3d4 = p->m3d4; m3d8 = p->m3d8; m3dc = p->m3dc; m3e0 = p->m3e0; m3e4 = p->m3e4; m3e8 = p->m3e8; m3ec = p->m3ec; m3f0 = p->m3f0; m3f4 = p->m3f4; m3f8 = p->m3f8; m3fc = p->m3fc; m400 = p->m400; m404 = p->m404; m408 = p->m408; m40c = p->m40c;
	for (i8 = 0; i8 < 0x80; i8++) m410[i8] = p->m410[i8];
	m490 = p->m490;
	for (i10 = 0; i10 < 10; i10++) mec34[i10] = p->mec34[i10];
	for (i11 = 0; i11 < 10; i11++) mec5c[i11] = p->mec5c[i11];
	return this;
}
// END FUNCTION

// FUNCTION: 0x1007cdc0 size=0x1c
namespace block_10256200 {
unsigned char __fastcall sub_1007cd70(unsigned char *self)
{
	unsigned char v = self[0x778];
	v >>= 1;
	v &= 1;
	return v;
}
}
using namespace block_10256200;

char *__fastcall sub_1007b160(void *p);

// TARGET: sub_1007cdc0
unsigned char __fastcall sub_1007cdc0(void *p)
{
	if (sub_1007cd70((unsigned char *)p))
		return 0;
	return *(int *)(sub_1007b160(p) + 0x24d0) == 4;
}
// END FUNCTION

// FUNCTION: 0x1007d930 size=0x1a
char *sub_1007b160();

// TARGET: sub_1007d930
char sub_1007d930()
{
	int v = *(int *)(sub_1007b160() + 0x24d0);
	if (v >= 0 && v <= 2) {
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1007ddd0 size=0x1c
extern unsigned int g_102af670;

void sub_1007ddd0(void *p)
{
	if (p == 0)
		g_102af670 = 0xffffffff;
	else
		g_102af670 = *(unsigned int *)((char *)p + 0x48);
}
// END FUNCTION

// FUNCTION: 0x100865a0 size=0x1e
struct CUnknown100bc460 { void * sub_100865a0(); };
void * CUnknown100bc460::sub_100865a0()
{
    *(int *)this = 0;
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = -1;
    *(int *)((char *)this + 0xc) = 0;
    *(char *)((char *)this + 0x10) = 0;
    *(char *)((char *)this + 0x11) = 1;
    *(int *)((char *)this + 0x14) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10086620 size=0x3b
#include "bf_write.h"

// TARGET: bf_write::sub_10086620
void bf_write::sub_10086620(void *pData, int nBytes, int iStartBit, int nBits)
{
	m_pData = (unsigned long *)pData;
	m_nDataBytes = nBytes;
	m_bOverflow = false;
	if (nBits == -1) {
		m_nDataBits = nBytes * 8;
	} else {
		m_nDataBits = nBits;
	}
	m_iCurBit = iStartBit;
}
// END FUNCTION

// FUNCTION: 0x100866b0 size=0x1d9
#include "bf_write.h"

#define g_BitWriteMasks g_104871b0

struct bf_write03 : public bf_write
{
	void WriteSBitLong(int data, int numbits);

	bool CheckForOverflow(int nBits)
	{
		if (m_iCurBit + nBits > m_nDataBits)
		{
			SetOverflowFlag();
		}

		return m_bOverflow;
	}

	void SetOverflowFlag()
	{
		if (m_bAssertOnOverflow)
		{
		}

		m_bOverflow = true;
	}

	void WriteOneBitNoCheck(int nValue)
	{
		if (nValue)
			((unsigned char *)m_pData)[m_iCurBit >> 3] |= (1 << (m_iCurBit & 7));
		else
			((unsigned char *)m_pData)[m_iCurBit >> 3] &= ~(1 << (m_iCurBit & 7));

		++m_iCurBit;
	}

	void WriteOneBit(int nValue)
	{
		if (!CheckForOverflow(1))
			WriteOneBitNoCheck(nValue);
	}

	void WriteUBitLong(unsigned int curData, int numbits, bool bCheckRange = true)
	{
		// Bounds checking..
		if ((m_iCurBit + numbits) > m_nDataBits)
		{
			m_iCurBit = m_nDataBits;
			SetOverflowFlag();
			return;
		}

		int nBitsLeft = numbits;
		int iCurBit = m_iCurBit;

		// Mask in a dword.
		unsigned int iDWord = iCurBit >> 5;

		unsigned long iCurBitMasked = iCurBit & 31;
		((unsigned long *)m_pData)[iDWord] &= g_BitWriteMasks[iCurBitMasked][nBitsLeft];
		((unsigned long *)m_pData)[iDWord] |= curData << iCurBitMasked;

		// Did it span a dword?
		int nBitsWritten = 32 - iCurBitMasked;
		if (nBitsWritten < nBitsLeft)
		{
			nBitsLeft -= nBitsWritten;
			iCurBit += nBitsWritten;
			curData >>= nBitsWritten;

			unsigned long iCurBitMasked = iCurBit & 31;
			((unsigned long *)m_pData)[iDWord + 1] &= g_BitWriteMasks[iCurBitMasked][nBitsLeft];
			((unsigned long *)m_pData)[iDWord + 1] |= curData << iCurBitMasked;
		}

		m_iCurBit += numbits;
	}

	void sub_100866b0(int data, int numbits);
};

// TARGET: bf_write03::sub_100866b0
void bf_write03::sub_100866b0(int data, int numbits)
{
	// Note: it does this wierdness here so it's bit-compatible with regular integer data in the buffer.
	// (Some old code writes direct integers right into the buffer).
	if (data < 0)
	{
		WriteUBitLong((unsigned int)(0x80000000 + data), numbits - 1, false);
		WriteOneBit(1);
	}
	else
	{
		WriteUBitLong((unsigned int)data, numbits - 1);
		WriteOneBit(0);
	}
}
// END FUNCTION

// FUNCTION: 0x10086970 size=0x316
#include "bf_write.h"

bool bf_write::sub_10086970(const void *pInData, int nBits)
{
	unsigned char *pOut = (unsigned char *)pInData;
	int nBitsLeft = nBits;

	while (((unsigned long)pOut & 3) != 0 && nBitsLeft >= 8) {
		WriteUBitLongIndexed(*pOut, 8);
		++pOut;
		nBitsLeft -= 8;
	}

	if (nBitsLeft >= 32) {
		int nDwords = (unsigned int)nBitsLeft >> 5;
		nBitsLeft -= nDwords * 32;
		do {
			WriteUBitLongIndexed(*(unsigned long *)pOut, 32);
			pOut += 4;
		} while (--nDwords);
	}

	if (nBitsLeft >= 8) {
		int nBytes = (unsigned int)nBitsLeft >> 3;
		nBitsLeft -= nBytes * 8;
		do {
			WriteUBitLongIndexed(*pOut, 8);
			++pOut;
		} while (--nBytes);
	}

	if (nBitsLeft)
		WriteUBitLongIndexed(*pOut, nBitsLeft);

	return !m_bOverflow;
}
// END FUNCTION

// FUNCTION: 0x10086c90 size=0x277
#include "bf_read.h"
#include "bf_write.h"

struct bf_writeWBFB : bf_write
{
	// the 2003 SDK's bf_write::WriteUBitLong, as WriteBitsFromBuffer inlines it
	void WriteUBitLong2003(unsigned int curData, int numbits)
	{
		if ((m_iCurBit + numbits) > m_nDataBits) {
			m_iCurBit = m_nDataBits;
			m_bOverflow = true;
			return;
		}

		int nBitsLeft = numbits;
		int iCurBit = m_iCurBit;

		unsigned int iDWord = iCurBit >> 5;
		unsigned long iCurBitMasked = iCurBit & 31;
		m_pData[iDWord] &= g_104871b0[iCurBitMasked][nBitsLeft];
		m_pData[iDWord] |= curData << iCurBitMasked;

		int nBitsWritten = 32 - iCurBitMasked;
		if (nBitsWritten < nBitsLeft) {
			nBitsLeft -= nBitsWritten;
			iCurBit += nBitsWritten;
			curData >>= nBitsWritten;

			iCurBitMasked = iCurBit & 31;
			m_pData[iDWord + 1] &= g_104871b0[iCurBitMasked][nBitsLeft];
			m_pData[iDWord + 1] |= curData << iCurBitMasked;
		}

		m_iCurBit += numbits;
	}
};

bool bf_write::sub_10086c90(bf_read *pIn, int nBits)
{
	while (nBits > 32) {
		((bf_writeWBFB *)this)->WriteUBitLong2003(pIn->ReadUBitLong(32), 32);
		nBits -= 32;
	}
	((bf_writeWBFB *)this)->WriteUBitLong2003(pIn->ReadUBitLong(nBits), nBits);
	return !m_bOverflow && !pIn->m_bOverflow;
}
// END FUNCTION

// FUNCTION: 0x10086f10 size=0xfd
#include "bf_write.h"
void bf_write::sub_10086f10(float fAngle, int numbits)
{
	unsigned int shift = 1 << numbits;
	int t1 = fAngle * shift; unsigned int t0 = (t1) / 360; unsigned int t2 = shift - 1; unsigned int curData = (t0) & (t2);
	int nBits = m_nDataBits;
	int bit; bit = m_iCurBit;
	if (bit + numbits > nBits) {
		m_iCurBit = nBits;
		m_bOverflow = true;
		return;
	}
	int iDWord = bit >> 5;
	int iCur = bit & 31;
	m_pData[iDWord] &= g_104871b0[iCur][numbits];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < numbits) {
		int t3 = n + bit; int iCur2 = (t3) & 31;
		*(m_pData + iDWord + 1) &= g_104871b0[iCur2][numbits - n];
		*(m_pData + iDWord + 1) |= (curData >> n) << iCur2;
	}
	m_iCurBit += numbits;
}
// END FUNCTION

// FUNCTION: 0x10087210 size=0xb7
#include "bf_write.h"

struct bf_writeX : bf_write
{
	void SetOverflowFlag() { m_bOverflow = true; }
	void WriteUBitLong(unsigned int curData, int numbits, bool bCheckRange);
};

void bf_write::sub_10087210(unsigned int curData, int numbits, bool bCheckRange)
{
	extern unsigned long g_104871b0[32][33];

	// Bounds checking..
	if((m_iCurBit+numbits) > m_nDataBits)
	{
		m_iCurBit = m_nDataBits;
		((bf_writeX *)this)->SetOverflowFlag();
		return;
	}

	int nBitsLeft = numbits;
	int iCurBit = m_iCurBit;

	// Mask in a dword.
	unsigned int iDWord = iCurBit >> 5;

	unsigned long iCurBitMasked = iCurBit & 31;
	((unsigned long*)m_pData)[iDWord] &= g_104871b0[iCurBitMasked][nBitsLeft];
	((unsigned long*)m_pData)[iDWord] |= curData << iCurBitMasked;

	// Did it span a dword?
	int nBitsWritten = 32 - iCurBitMasked;
	if(nBitsWritten < nBitsLeft)
	{
		nBitsLeft -= nBitsWritten;
		iCurBit += nBitsWritten;
		curData >>= nBitsWritten;

		unsigned long iCurBitMasked = iCurBit & 31;
		((unsigned long*)m_pData)[iDWord+1] &= g_104871b0[iCurBitMasked][nBitsLeft];
		((unsigned long*)m_pData)[iDWord+1] |= curData << iCurBitMasked;
	}

	m_iCurBit += numbits;
}
// END FUNCTION

// FUNCTION: 0x100872d0 size=0xad
#include "bf_write.h"

extern unsigned int g_10487230[];

void bf_write::sub_100872d0(unsigned int curData)
{
	int bit = m_iCurBit;
	if (bit + 32 > m_nDataBits) {
		m_bOverflow = true;
		m_iCurBit = m_nDataBits;
		return;
	}
	int iCur = bit & 31;
	int iDWord = bit >> 5;
	m_pData[iDWord] &= g_10487230[iCur * 33];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < 32) {
		int iCur2 = (n + bit) & 31;
		m_pData[iDWord + 1] &= g_10487230[iCur2 * 33 - n];
		m_pData[iDWord + 1] |= (curData >> n) << iCur2;
	}
	m_iCurBit += 32;
}
// END FUNCTION

// FUNCTION: 0x10087380 size=0x1a9
#include "bf_write.h"

void bf_write::sub_10087380(const Vector &fa)
{
	int xflag, yflag, zflag;
	xflag = (fa[0] >= 0.0625) || (fa[0] <= -0.0625);
	yflag = (fa[1] >= 0.0625) || (fa[1] <= -0.0625);
	zflag = (fa[2] >= 0.0625) || (fa[2] <= -0.0625);

	WriteOneBit(xflag);
	WriteOneBit(yflag);
	WriteOneBit(zflag);

	if (xflag)
		sub_10087010(fa[0]);
	if (yflag)
		sub_10087010(fa[1]);
	if (zflag)
		sub_10087010(fa[2]);
}
// END FUNCTION

// FUNCTION: 0x10087650 size=0x19e
#include "bf_write.h"
#include "Vector.h"

void bf_write::sub_10087650(const Vector &fa)
{
	int xflag, yflag;
	xflag = (fa[0] >= 0.0004885197850512946) || (fa[0] <= -0.0004885197850512946);
	yflag = (fa[1] >= 0.0004885197850512946) || (fa[1] <= -0.0004885197850512946);
	WriteOneBit(xflag);
	WriteOneBit(yflag);
	if (xflag)
		sub_10087530(fa[0]);
	if (yflag)
		sub_10087530(fa[1]);
	WriteOneBit(fa[2] <= -0.0004885197850512946);
}
// END FUNCTION

// FUNCTION: 0x10087830 size=0xad
#include "bf_write.h"

extern unsigned int g_104871d0[];

void bf_write::sub_10087830(unsigned int curData)
{
	int bit = m_iCurBit;
	if (bit + 8 > m_nDataBits) {
		m_bOverflow = true;
		m_iCurBit = m_nDataBits;
		return;
	}
	int iCur = bit & 31;
	int iDWord = bit >> 5;
	m_pData[iDWord] &= g_104871d0[iCur * 33];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < 8) {
		int iCur2 = (n + bit) & 31;
		m_pData[iDWord + 1] &= g_104871d0[iCur2 * 33 - n];
		m_pData[iDWord + 1] |= (curData >> n) << iCur2;
	}
	m_iCurBit += 8;
}
// END FUNCTION

// FUNCTION: 0x100878f0 size=0xad
#include "bf_write.h"

extern unsigned int g_104871f0[];

void bf_write::sub_100878f0(unsigned int curData)
{
	int bit = m_iCurBit;
	if (bit + 16 > m_nDataBits) {
		m_bOverflow = true;
		m_iCurBit = m_nDataBits;
		return;
	}
	int iCur = bit & 31;
	int iDWord = bit >> 5;
	m_pData[iDWord] &= g_104871f0[iCur * 33];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < 16) {
		int iCur2 = (n + bit) & 31;
		m_pData[iDWord + 1] &= g_104871f0[iCur2 * 33 - n];
		m_pData[iDWord + 1] |= (curData >> n) << iCur2;
	}
	m_iCurBit += 16;
}
// END FUNCTION

// FUNCTION: 0x100879e0 size=0x45
struct CStrParser {
	char m_pad[0x10];
	char m_bFailed;
	void sub_10087820(int c);
	bool sub_100879e0(const char *s);
};
bool CStrParser::sub_100879e0(const char *s)
{
	if (s) {
		char c;
		do {
			sub_10087820(*s);
			c = *s;
			s++;
		} while (c != 0);
	} else {
		sub_10087820(0);
	}
	return m_bFailed == 0;
}
// END FUNCTION

// FUNCTION: 0x10087a30 size=0x1e
struct CUnknown100bc460 { void * sub_10087a30(); };
void * CUnknown100bc460::sub_10087a30()
{
    *(int *)this = 0;
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = -1;
    *(int *)((char *)this + 0xc) = 0;
    *(char *)((char *)this + 0x10) = 0;
    *(char *)((char *)this + 0x11) = 1;
    *(int *)((char *)this + 0x14) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10087ab0 size=0x3b
#include "bf_write.h"

// TARGET: bf_write::sub_10087ab0
void bf_write::sub_10087ab0(void *pData, int nBytes, int iStartBit, int nBits)
{
	m_pData = (unsigned long *)pData;
	m_nDataBytes = nBytes;
	m_bOverflow = false;
	if (nBits == -1) {
		m_nDataBits = nBytes * 8;
	} else {
		m_nDataBits = nBits;
	}
	m_iCurBit = iStartBit;
}
// END FUNCTION

// FUNCTION: 0x10087b30 size=0x7b
#include "bf_read.h"

// bf_read's bit-by-bit peek without the bounds check (2003 bitbuf.h ReadOneBitNoCheck inlined), position restored by
// subtracting numbits.
struct bf_readX : bf_read
{
	int ReadOneBitNoCheck()
	{
		int value = ((const unsigned char *)m_pData)[m_iCurBit >> 3] & (1 << (m_iCurBit & 7));
		++m_iCurBit;
		return !!value;
	}
	unsigned int sub_10087b30(int numbits);
};

unsigned int bf_readX::sub_10087b30(int numbits)
{
	unsigned int r;
	int i;

	r = 0;
	for(i=0; i < numbits; i++)
	{
		r |= ReadOneBitNoCheck() << i;
	}
	m_iCurBit -= numbits;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10087bb0 size=0x233
#include "bf_read.h"

// TARGET: bf_read::sub_10087bb0
bool bf_read::sub_10087bb0(void *pOutData, int nBits)
{
	unsigned char *pOut = (unsigned char *)pOutData;
	int nBitsLeft = nBits;

	while (((unsigned long)pOut & 3) != 0 && nBitsLeft >= 8) {
		*pOut = (unsigned char)ReadUBitLong(8);
		++pOut;
		nBitsLeft -= 8;
	}

	if (nBitsLeft >= 32) {
		unsigned int nDwords = (unsigned int)nBitsLeft >> 5;
		nBitsLeft -= nDwords * 32;
		do {
			*((unsigned long *)pOut) = ReadUBitLong(32);
			pOut += sizeof(unsigned long);
			--nDwords;
		} while (nDwords);
	}

	if (nBitsLeft >= 8) {
		unsigned int nBytes = (unsigned int)nBitsLeft >> 3;
		nBitsLeft -= nBytes * 8;
		do {
			*pOut = (unsigned char)ReadUBitLong(8);
			++pOut;
			--nBytes;
		} while (nBytes);
	}

	if (nBitsLeft)
		*pOut = (unsigned char)ReadUBitLong(nBitsLeft);

	return !m_bOverflow;
}
// END FUNCTION

// FUNCTION: 0x10087df0 size=0xa1
#include "bf_read.h"

float bf_read::sub_10087df0(int numbits)
{
	float shift = (float)(1 << numbits);
	int i = ReadUBitLong(numbits);
	float fReturn = (float)i * (360.0 / shift);
	return fReturn;
}
// END FUNCTION

// FUNCTION: 0x10087f50 size=0xd4
#include "bf_read.h"

// TARGET: bf_read::sub_10087f50
int bf_read::sub_10087f50(int numbits)
{
    int bits = numbits - 1;
    int ret = ReadUBitLong(bits);
    if (ReadOneBit())
        ret -= (1 << bits);
    return ret;
}
// END FUNCTION

// FUNCTION: 0x100880c0 size=0x20e
#include "bf_read.h"

// TARGET: bf_read::sub_100880c0
float bf_read::sub_100880c0()
{
	int intval = 0, fractval = 0, signbit = 0;
	float value = 0.0f;
	intval = ReadOneBit();
	fractval = ReadOneBit();
	if (intval || fractval) {
		signbit = ReadOneBit();
		if (intval)
			intval = ReadUBitLong(14) + 1;
		if (fractval)
			fractval = ReadUBitLong(4);
		value = intval + fractval * (1.0 / 16);
		if (signbit)
			value = -value;
	}
	return value;
}
// END FUNCTION

// FUNCTION: 0x10088410 size=0xd1
#include "bf_read.h"

float bf_read::sub_10088410()
{
	int signbit;
	if (m_iCurBit + 1 > m_nDataBits)
		m_bOverflow = true;
	if (!m_bOverflow) {
		int value = ((unsigned char *)m_pData)[m_iCurBit >> 3] & (1 << (m_iCurBit & 7));
		++m_iCurBit;
		signbit = value != 0;
	} else {
		signbit = 0;
	}
	unsigned int fractVal = ReadUBitLong(11);
	float value = fractVal * (1.0 / 2047.0);
	if (signbit)
		value = -value;
	return value;
}
// END FUNCTION

// FUNCTION: 0x100884f0 size=0xec
#include "bf_read.h"
#include <math.h>

void bf_read::sub_100884f0(Vector &fa)
{
	int xflag = ReadOneBitCall();
	int yflag = ReadOneBitCall();
	if (xflag)
		fa[0] = sub_10088410();
	else
		fa[0] = 0.0f;
	if (yflag)
		fa[1] = sub_10088410();
	else
		fa[1] = 0.0f;
	int znegative = ReadOneBitCall();
	float fafafbfb = fa[0] * fa[0] + fa[1] * fa[1];
	if (fafafbfb < 1.0f)
		fa[2] = (float)sqrt(1.0f - fafafbfb);
	else
		fa[2] = 0.0f;
	if (znegative)
		fa[2] = -fa[2];
}
// END FUNCTION

// FUNCTION: 0x100885e0 size=0x3a
#include "bf_read.h"

// TARGET: bf_read::sub_100885e0
int bf_read::sub_100885e0()
{
	int value = ((unsigned char *)m_pData)[m_iCurBit >> 3] & (1 << (m_iCurBit & 7));
	++m_iCurBit;
	return value != 0;
}
// END FUNCTION

// FUNCTION: 0x10088660 size=0x65
#include "bf_read.h"

struct bf_readX : bf_read
{
	int sub_10088660();
};

// TARGET: bf_readX::sub_10088660
int bf_readX::sub_10088660()
{
	return ReadUBitLong(8);
}
// END FUNCTION

// FUNCTION: 0x100886e0 size=0x65
#include "bf_read.h"

struct bf_readX : bf_read
{
	int sub_100886e0();
};

// TARGET: bf_readX::sub_100886e0
int bf_readX::sub_100886e0()
{
	return ReadUBitLong(16);
}
// END FUNCTION

// FUNCTION: 0x10088880 size=0x2f
// TARGET: bf_read::sub_10088880
#include "bf_read.h"

bool bf_read::sub_10088880(int iBit) {
    if (iBit < 0) {
        m_iCurBit = m_nDataBits;
        m_bOverflow = true;
        return false;
    }
    if (iBit > m_nDataBits) {
        m_iCurBit = m_nDataBits;
        m_bOverflow = true;
        return false;
    }
    m_iCurBit = iBit;
    return true;
}
// END FUNCTION

// FUNCTION: 0x100889f0 size=0x1a2
#include "Quaternion.h"
union CBlendAnimValue
{
	struct
	{
		unsigned char valid;
		unsigned char total;
	} num;
	short value;
};

struct CBlendAnim
{
	float weight;
	int pad04[3];
	int offset[4];
};

struct CBlendBone
{
	char pad00[0x2c];
	float value[4];
	char pad3c[0x48 - 0x3c];
	float scale[4];
};

void sub_1010a0b0(Quaternion &p, Quaternion &q, float t, Quaternion &qt);

void sub_100889f0(void *pHdr, int frame, float s, CBlendBone *pbone, CBlendAnim *panim, Quaternion &q)
{
	int j, k;
	Quaternion q1, q2;
	CBlendAnimValue *panimvalue;

	if (panim->weight == 0)
	{
		q.x = 0;
		q.y = 0;
		q.z = 0;
		q.w = 0;
		return;
	} j = 0; while (j < 4) { if (panim->offset[j] == 0)
		{
			q1[j] = q2[j] = pbone->value[j];
		}
		else
		{
			panimvalue = (CBlendAnimValue *)((unsigned char *)panim + panim->offset[j]);
			k = frame;
			while (panimvalue->num.total <= k)
			{
				k = k - panimvalue->num.total;
				panimvalue = panimvalue + (panimvalue->num.valid + 1);
			}
			if (panimvalue->num.valid > k)
			{
				q1[j] = panimvalue[(int)k + 1].value;
				if (panimvalue->num.valid > k + 1)
				{
					q2[j] = panimvalue[k + 2].value;
				}
				else
				{
					if (panimvalue->num.total > k + 1)
						q2[j] = q1[j];
					else
						q2[j] = panimvalue[panimvalue->num.valid + 2].value;
				}
			}
			else
			{
				q1[j] = panimvalue[panimvalue->num.valid].value;
				if (!(panimvalue->num.total > (1 + k))) q2[j] = panimvalue[panimvalue->num.valid + 2].value; else q2[j] = q1[j];
			}
			q1[j] *= (pbone->scale[j]);
			q2[j] = q2[j] * pbone->scale[j];
		} ++j; }
	int *pa1 = (int *)&q1;
	int *pa2 = (int *)&q2;
	if (((pa1[1] ^ pa2[1]) | (pa1[2] ^ pa2[2]) | (pa2[3] ^ pa1[3]) | (pa2[0] ^ pa1[0])) != 0)
	{
		sub_1010a0b0(q1, q2, s, q);
		return;
	} q = q1;
}
// END FUNCTION

// FUNCTION: 0x10088ba0 size=0x153
#include "Vector.h"
struct mstudioanimvalue_t {
    union {
        struct { unsigned char valid; unsigned char total; } num;
        short value;
    };
};
struct mstudioanim_t {
    float weight;
    int offset[6];
};
struct mstudiobone_t {
    char pad[0x20];
    float value[6];
    float pad38;
    float scale[6];
};
void sub_10088ba0(void *pStudioHdr, int frame, float s, mstudiobone_t *pbone, mstudioanim_t *panim, Vector &pos)
{
    if (panim->weight == 0.0) {
        pos.x = 0;
        pos.y = 0;
        pos.z = 0;
        return;
    }
    for (int j = 0; j < 3; j++) {
        pos[j] = pbone->value[j];
        if (panim->offset[j] != 0) {
            mstudioanimvalue_t *panimvalue = (mstudioanimvalue_t *)((unsigned char *)panim + panim->offset[j]);
            int k = frame;
            if (panimvalue->num.total < panimvalue->num.valid)
                k = 0;
            while (panimvalue->num.total <= k) {
                k -= panimvalue->num.total;
                panimvalue += panimvalue->num.valid + 1;
                if (panimvalue->num.total < panimvalue->num.valid)
                    k = 0;
            }
            if (panimvalue->num.valid > k) {
                if (panimvalue->num.valid > k + 1)
                    pos[j] += (panimvalue[k + 1].value * (1.0 - s) + s * panimvalue[k + 2].value) * pbone->scale[j];
                else
                    pos[j] += panimvalue[k + 1].value * pbone->scale[j];
            } else {
                if (panimvalue->num.total <= k + 1)
                    pos[j] += (panimvalue[panimvalue->num.valid].value * (1.0 - s) + s * panimvalue[panimvalue->num.valid + 2].value) * pbone->scale[j];
                else
                    pos[j] += panimvalue[panimvalue->num.valid].value * pbone->scale[j];
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10088d00 size=0x5a
#include "Quaternion.h"

void sub_1010a320(const float *p, float t, float *qt);
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt);
float sub_1010a2b0(Quaternion &q);

void sub_10088d00(float s, const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	Quaternion p1, q1;
	sub_1010a320(&p.x, s, &p1.x);
	sub_1010a450(p1, q, q1);
	sub_1010a2b0(q1);
	qt[0] = q1[0];
	qt[1] = q1[1];
	qt[2] = q1[2];
	qt[3] = q1[3];
}
// END FUNCTION

// FUNCTION: 0x10088e10 size=0x35b
#include "Quaternion.h"
#include "Vector.h"
struct BlendBoneWeight { float weight; int m_unk[7]; };
struct BlendSeqData {
    int m_unk[0x30 / 4];
    int weightOffset;
    BlendBoneWeight *pWeight(int i) const { return (BlendBoneWeight *)((char *)this + weightOffset) + i; }
};
struct BlendSeqDataHolder { char m_data[0x48]; };
struct BlendAnimHdr {
    int m_unk[0x10c / 4];
    int seqOffset;
    BlendSeqData *pSeqData(int i) const { return (BlendSeqData *)((BlendSeqDataHolder *)((char *)this + seqOffset) + i); }
};
struct BlendStudioHdr {
    int m_unk[0xf0 / 4];
    int numbones;
};
struct BlendSeqDesc { int m_unk0; int m_unk4; unsigned char flags; char m_unk9[0x2f]; short idx; };
struct BlendBoneMask {
    int m_unk0;
    unsigned int bits[1];
    bool IsBitSet(int i) const { return (bits[i >> 5] & (1 << (i & 0x1f))) != 0; }
};
struct BlendRemap { int dst; int src; int m_unk[13]; };
void sub_10088d00(float s, const Quaternion &p, const Quaternion &q, Quaternion &qt);
void sub_10088d60(const Quaternion &p, float s, const Quaternion &q, Quaternion &qt);
BlendSeqDesc *sub_10089170(BlendStudioHdr *a, int b, BlendAnimHdr **c, int *d);
void sub_1010a140(const Quaternion &p, const Quaternion &q, float t, Quaternion &qt);

void sub_10088e10(BlendStudioHdr *pStudioHdr, Quaternion *q1, Vector *pos1, int sequence, const Quaternion *q2, const Vector *pos2, float s, const BlendBoneMask *boneMask, int nRemap, const BlendRemap *remap)
{
    Quaternion q3;
    int boneMap[350];
    int seqMap[350];
    BlendAnimHdr *pAnim;
    int i, j;
    float s1, s2;

    if (!(s > 0.0f))
        return;
    if (s > 1.0f)
        s = 1.0f;

    BlendSeqDesc *pSeq = sub_10089170(pStudioHdr, sequence, &pAnim, seqMap);
    if (!pSeq)
        return;
    BlendSeqData *pData = pAnim->pSeqData(pSeq->idx);

    if (nRemap > 0 && remap) {
        for (i = 0; i < pStudioHdr->numbones; i++)
            boneMap[i] = -1;
        for (i = 0; i < nRemap; i++)
            boneMap[remap[i].dst] = remap[i].src;
    } else {
        for (i = 0; i < pStudioHdr->numbones; i++)
            boneMap[i] = i;
    }

    if (pSeq->flags & 4) {
        for (i = 0; i < pStudioHdr->numbones; i++) {
            if (!boneMask->IsBitSet(i) || seqMap[i] < 0)
                continue;
            j = boneMap[i];
            if (j < 0)
                continue;
            s2 = s * pData->pWeight(seqMap[i])->weight;
            if (s2 > 0.0) {
                if (pSeq->flags & 0x10) {
                    sub_10088d60(q1[j], s2, q2[j], q1[j]);
                    pos1[j][0] = pos1[j][0] + pos2[j][0] * s2;
                    pos1[j][1] = pos1[j][1] + pos2[j][1] * s2;
                    pos1[j][2] = pos1[j][2] + pos2[j][2] * s2;
                } else {
                    sub_10088d00(s2, q2[j], q1[j], q1[j]);
                    pos1[j][0] = pos1[j][0] + pos2[j][0] * s2;
                    pos1[j][1] = pos1[j][1] + pos2[j][1] * s2;
                    pos1[j][2] = pos1[j][2] + pos2[j][2] * s2;
                }
            }
        }
        return;
    }

    for (i = 0; i < pStudioHdr->numbones; i++) {
        if (!boneMask->IsBitSet(i) || seqMap[i] < 0)
            continue;
        j = boneMap[i];
        if (j < 0)
            continue;
        s2 = s * pData->pWeight(seqMap[i])->weight;
        if (s2 > 0.0) {
            s1 = 1.0 - s2;
            sub_1010a140(q2[j], q1[j], s1, q3);
            q1[j][0] = q3[0];
            q1[j][1] = q3[1];
            q1[j][2] = q3[2];
            q1[j][3] = q3[3];
            pos1[j][0] = pos1[j][0] * s1 + pos2[j][0] * s2;
            pos1[j][1] = pos1[j][1] * s1 + pos2[j][1] * s2;
            pos1[j][2] = pos1[j][2] * s1 + pos2[j][2] * s2;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10089170 size=0x61
int sub_100891e0(int hdr, int seq, int *pOut, int nBones, int *pRemap);
int sub_10089170(int hdr, int seq, int *pOut, int *pRemap)
{
	int i = 0;
	int nBones = *(int *)(hdr + 0xf0);
	if (0 < nBones) {
		do {
			pRemap[i] = i;
			i++;
		} while (i < nBones);
	}
	if (seq < *(int *)(hdr + 0x110)) {
		*pOut = hdr;
		if (seq < 0)
			seq = 0;
		return *(int *)(hdr + 0x114) + seq * 0x2fc + hdr;
	}
	return sub_100891e0(hdr, seq, pOut, nBones, pRemap);
}
// END FUNCTION

// FUNCTION: 0x100891e0 size=0xd3
struct SStudioHdr;

struct SGroupSource
{
    virtual void v0();
    virtual SStudioHdr *GetHdr(SStudioHdr *hdr, int index);
};

struct SIncludeModel
{
    int m_unk0;
    SGroupSource *m_pSource;	// 0x04
    int m_base;	// 0x08
    int m_count;	// 0x0c
    int m_remapOffset;	// 0x10
};

struct SStudioHdr
{
    char m_pad0000[0x110];
    int m_numSeq;	// 0x110
    int m_seqOffset;	// 0x114
    char m_pad0118[0x194 - 0x118];
    int m_numInclude;	// 0x194
    int m_includeOffset;	// 0x198
};

// TARGET: sub_100891e0
char *sub_100891e0(SStudioHdr *hdr, int seq, SStudioHdr **ppOut, int count, int *remap)
{
    int off = 0;
    for (int i = 0; i < hdr->m_numInclude; i++, off += 0x74) {
        SIncludeModel *inc = (SIncludeModel *)((char *)hdr + hdr->m_includeOffset + off);
        int rel = seq - inc->m_base;
        if (rel >= 0 && rel < inc->m_count && inc->m_pSource) {
            SStudioHdr *found = inc->m_pSource->GetHdr(hdr, i);
            if (found) {
                for (int j = 0; j < count; j++) {
                    if (remap[j] >= 0)
                        remap[j] = *(short *)((char *)inc + inc->m_remapOffset + remap[j] * 0x38);
                }
                if (rel < found->m_numSeq) {
                    *ppOut = found;
                    if (rel < 0)
                        rel = 0;
                    return (char *)found + found->m_seqOffset + rel * 0x2fc;
                }
                return sub_100891e0(found, seq - inc->m_base, ppOut, count, remap);
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100892c0 size=0x237
#include "Vector.h"
struct BlendQuat { float x, y, z, w; float operator[](int i) const { return (&x)[i]; } float &operator[](int i) { return (&x)[i]; } };
struct BlendOwner { char pad[0xf0]; int m_nCount; };
struct BlendSeq
{
	char pad[0x30];
	int m_nOffset;
	float weight(int i) { return *(float *)((char *)this + m_nOffset + i * 0x20); }
};
struct BlendMask { int m_n0; unsigned int m_bits[1]; };
void sub_1010a0b0(const BlendQuat *p, const BlendQuat *q, float t, BlendQuat *qt);

// TARGET: sub_100892c0
void sub_100892c0(BlendOwner *pOwner, BlendQuat *q1, Vector *pos1, BlendSeq *pSeq, const BlendQuat *q2, const Vector *pos2, float s, BlendMask *pMask)
{
	int i;
	if (s <= 0.0f)
		return;
	if (s >= 1.0) {
		for (i = 0; i < pOwner->m_nCount; i++) {
			if ((pMask->m_bits[i >> 5] & (1 << (i & 0x1f))) && pSeq->weight(i) > 0.0) {
				q1[i] = q2[i];
				pos1[i] = pos2[i];
			}
		}
	} else {
		float s1 = 1.0 - s;
		for (i = 0; i < pOwner->m_nCount; i++) {
			if ((pMask->m_bits[i >> 5] & (1 << (i & 0x1f))) && pSeq->weight(i) > 0.0) {
				BlendQuat q3;
				sub_1010a0b0(&q2[i], &q1[i], s1, &q3);
				q1[i][0] = q3[0];
				q1[i][1] = q3[1];
				q1[i][2] = q3[2];
				q1[i][3] = q3[3];
				pos1[i][0] = pos1[i][0] * s1 + pos2[i][0] * s;
				pos1[i][1] = pos1[i][1] * s1 + pos2[i][1] * s;
				pos1[i][2] = pos1[i][2] * s1 + pos2[i][2] * s;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10089500 size=0x152
#include <math.h>

struct PoseParamDescX
{
	char pad00[8];
	float start;
	float end;
	float loop;
};
struct StudioHdrX
{
	char pad00[0x184];
	int poseparamindex;
};
struct SeqDescX
{
	char pad00[0x23c];
	int groupsize[2];
	int paramindex[2];
	float paramstart[2];
	float paramend[2];
};
extern float g_101e34f0;

void sub_10089500(StudioHdrX *pStudioHdr, const float *poseParameter, SeqDescX &seqdesc, int iLocalIndex, float &flSetting, int &index)
{
	int iPose = seqdesc.paramindex[iLocalIndex];
	if (iPose == -1) {
		flSetting = 0;
		index = 0;
		return;
	}
	PoseParamDescX &Pose = *(PoseParamDescX *)((char *)pStudioHdr + pStudioHdr->poseparamindex + iPose * 0x14);
	float flValue = poseParameter[iPose];
	if (Pose.loop != g_101e34f0) {
		float wrap = (Pose.end + Pose.start) * 0.5 + Pose.loop * 0.5;
		float shift = Pose.loop - wrap;
		flValue = flValue - Pose.loop * floor((flValue + shift) / Pose.loop);
	}
	flSetting = (flValue - (seqdesc.paramstart[iLocalIndex] - Pose.start) / (Pose.end - Pose.start)) /
		((seqdesc.paramend[iLocalIndex] - Pose.start) / (Pose.end - Pose.start) - (seqdesc.paramstart[iLocalIndex] - Pose.start) / (Pose.end - Pose.start));
	if (flSetting < g_101e34f0)
		flSetting = 0.0f;
	else if (flSetting > 1.0f)
		flSetting = 1.0f;
	index = 0;
	if (seqdesc.groupsize[iLocalIndex] > 1) {
		index = (int)((seqdesc.groupsize[iLocalIndex] - 1) * flSetting);
		if (index == seqdesc.groupsize[iLocalIndex] - 1)
			index = seqdesc.groupsize[iLocalIndex] - 2;
		flSetting = (seqdesc.groupsize[iLocalIndex] - 1) * flSetting - index;
	}
}
// END FUNCTION

// FUNCTION: 0x10089660 size=0x57
struct SBone160 { char m_pad[0xa0]; };
struct SBoneOwner { char m_pad0[0x58]; };
void sub_10108450(void *pSrc, void *pOut);
void sub_10108a50(void *pDst, void *pIn, int a);
void sub_10089660(char *pOwner, int iSrc, int iDst, int a)
{
	char tmp[0x30];
	sub_10108450(pOwner + iSrc * 0xa0 + *(int *)(pOwner + 0xf4) + 0x58, tmp);
	sub_10108a50(pOwner + iDst * 0xa0 + *(int *)(pOwner + 0xf4) + 0x58, tmp, a);
}
// END FUNCTION

// FUNCTION: 0x100896c0 size=0x75
#include "StudioHdr.h"
#include "Quaternion.h"

void sub_100896c0(StudioHdr *pStudioHdr, Vector pos[], Quaternion q[])
{
	for (int i = 0; i < pStudioHdr->m_nBones; i++)
	{
		StudioBone *pbone = pStudioHdr->Bone(i);
		pos[i] = pbone->m_pos;
		q[i].x = pbone->m_quat.x;
		q[i].y = pbone->m_quat.y;
		q[i].z = pbone->m_quat.z;
		q[i].w = pbone->m_quat.w;
	}
}
// END FUNCTION

// FUNCTION: 0x10089b20 size=0xdf
struct CBlendStudioHdr { char m_pad[0xf0]; int numbones; int boneindex; };
struct CBlendBone { char m_pad[0xa0]; };
struct CBlendAnim { char m_pad[0x20]; };
struct CBlendSeqDesc { char m_pad0[0xc]; int numframes; char m_pad10[0x30 - 0x10]; int animindex; };
struct CBlendBoneMask { int m_unused; unsigned int m_bits[1]; int IsBitSet(int i) const { return m_bits[i >> 5] & (1 << (i & 0x1f)); } };
struct CBlendVec { float x, y, z; };
struct CBlendQuat { float x, y, z, w; };

void sub_100889f0(CBlendStudioHdr *pHdr, int iFrame, float s, CBlendBone *pBone, CBlendAnim *pAnim, CBlendQuat &q);
void sub_10088ba0(CBlendStudioHdr *pHdr, int iFrame, float s, CBlendBone *pBone, CBlendAnim *pAnim, CBlendVec &pos);

void sub_10089b20(CBlendStudioHdr *pStudioHdr, CBlendVec *pos, CBlendQuat *q, CBlendSeqDesc *pSeq, float cycle, CBlendBoneMask *pMask)
{
	int numbones = pStudioHdr->numbones;
	if (numbones <= 0)
		return;
	int iFrame;
	float s;
	float fFrame = (pSeq->numframes - 1) * cycle;
	iFrame = (int)fFrame;
	s = fFrame - iFrame;
	CBlendBone *pbone = (CBlendBone *)((char *)pStudioHdr + pStudioHdr->boneindex);
	CBlendAnim *panim = (CBlendAnim *)((char *)pSeq + pSeq->animindex);
	for (int i = 0; i < numbones; i++, pbone++, panim++) {
		if (pMask->IsBitSet(i)) {
			sub_100889f0(pStudioHdr, iFrame, s, pbone, panim, q[i]);
			sub_10088ba0(pStudioHdr, iFrame, s, pbone, panim, pos[i]);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10089c40 size=0x4c9
struct IStudioProv { virtual void v0(); virtual char *v1(char *h, int n); };
struct Q4 { float x, y, z, w; };
struct V3 { float x, y, z; };
struct M34 { float m[3][4]; };
struct BoneMap { short idx; char chain; char xform; short from; short to; M34 mat; };
struct Bone { int name; int parent; char pad08[0x18]; V3 pos; Q4 quat; char pad3c[0xa0 - 0x3c]; };
struct BoneBits { int nBits; unsigned int words[11];
    void sub_1008e370(char *pMask, BoneMap *pTable, char *pSource); };
void sub_10089740(char *h, V3 *p, Q4 *q, int f, int a5, float *pp, char *a7);
void sub_10088e10(char *h, Q4 *q, V3 *p, int f, Q4 *q2, V3 *p2, float s, char *a7, int a, int b);
void sub_10107e40(M34 *m, Q4 *q, V3 *p);
void sub_10107f80(V3 *a, M34 *b, V3 *c);
void sub_10108450(M34 *a, M34 *b);
void sub_10108a50(M34 *a, M34 *b, M34 *c);
void sub_10109420(M34 *a);
void sub_1010a540(Q4 *a, V3 *b, M34 *c);
static inline void CopyQ(Q4 &d, const Q4 &s) { d = s; }
static inline void CopyV(V3 &d, const V3 &s) { d = s; }
void sub_10089c40(char *hdr, V3 *outPos, Q4 *outQ, int frame, int a5, float *pp, char *a7);
void sub_10089c40(char *hdr, V3 *outPos, Q4 *outQ, int frame, int a5, float *pp, char *a7)
{
    V3 pos[350];
    Q4 q[350];
    float vals[24];
    if (frame >= *(int *)(hdr + 0x110)) {
        int i;
        for (i = 0; i < *(int *)(hdr + 0x194); i++) {
            char *d = hdr + *(int *)(hdr + 0x198) + i * 0x74;
            if (*(int *)(d + 8) <= frame && *(int *)(d + 8) + *(int *)(d + 0xc) > frame && *(IStudioProv **)(d + 4)) {
                char *sh = (*(IStudioProv **)(d + 4))->v1(hdr, i);
                if (sh) {
                    int k;
                    short *pIdx;
                    for (k = 0, pIdx = (short *)(d + 0x44); k < 24; k++, pIdx++) {
                        int idx = *pIdx;
                        vals[k] = idx >= 0 ? pp[idx] : 0.0f;
                    }
                    {
                        BoneBits bits;
                        bits.sub_1008e370(a7, (BoneMap *)(d + *(int *)(d + 0x10)), sh);
                        sub_10089c40(sh, pos, q, frame - *(int *)(d + 8), a5, vals, (char *)&bits);
                    }
                    {
                        int b;
                        for (b = 0; b < *(int *)(hdr + 0xf0); b++) {
                            BoneMap *s = (BoneMap *)(d + *(int *)(d + 0x10)) + b;
                            if (s->idx < 0) {
                                Bone *bone = (Bone *)(hdr + *(int *)(hdr + 0xf4)) + b;
                                outPos[b].x = bone->pos.x; outPos[b].y = bone->pos.y; outPos[b].z = bone->pos.z;
                                outQ[b].x = bone->quat.x; outQ[b].y = bone->quat.y; outQ[b].z = bone->quat.z; outQ[b].w = bone->quat.w;
                            } else if (!s->chain) {
                                if (!s->xform)
                                    { V3 *p = &pos[s->idx]; outPos[b].x = p->x; outPos[b].y = p->y; outPos[b].z = p->z; }
                                else
                                    sub_10107f80(&pos[s->idx], &s->mat, &outPos[b]);
                                CopyQ(outQ[b], q[s->idx]);
                            } else {
                                M34 mat, tmp, m1, inv, m2;
                                V3 v;
                                int j;
                                sub_1010a540(&q[s->idx], &pos[s->idx], &mat);
                                j = *(int *)(sh + *(int *)(sh + 0xf4) + s->idx * 0xa0 + 4);
                                while (j != s->to) {
                                    sub_1010a540(&q[j], &pos[j], &m2);
                                    sub_10108a50(&m2, &mat, &mat);
                                    j = *(int *)(sh + *(int *)(sh + 0xf4) + j * 0xa0 + 4);
                                }
                                sub_10109420(&tmp);
                                j = s->from;
                                while (j != s->to) {
                                    sub_1010a540(&q[j], &pos[j], &m1);
                                    sub_10108450(&m1, &inv);
                                    sub_10108a50(&tmp, &inv, &tmp);
                                }
                                sub_10108a50(&tmp, &mat, &mat);
                                if (!s->xform)
                                    sub_10107e40(&mat, &outQ[b], &outPos[b]);
                                else {
                                    sub_10107e40(&mat, &outQ[b], &v);
                                    sub_10107f80(&v, &s->mat, &outPos[b]);
                                }
                            }
                        }
                    }
                    return;
                }
            }
        }
        frame = 0;
    } else if (frame < 0) {
        frame = 0;
    }
    sub_10089740(hdr, outPos, outQ, frame, a5, pp, a7);
    {
        int f = frame;
        if (f < 0) f = 0;
        char *g = hdr + *(int *)(hdr + 0x114) + f * 0x2fc;
        int j;
        for (j = 0; j < *(int *)(g + 0x294); j++) {
            int e = *(int *)(g + *(int *)(g + 0x298) + j * 4);
            sub_10089c40(hdr, pos, q, e, a5, pp, a7);
            sub_10088e10(hdr, outQ, outPos, e, q, pos, 1.0f, a7, 0, 0);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1008a110 size=0xc7
void sub_10089740(int a1, void *pB, void *pA, int a4, int a5, int a6, int a7);
void sub_10088e10(int a1, int a3, int a2, int a4, void *pA, void *pB, float flWeight, int a7, int a9, int a10);

void sub_1008a110(int a1, int a2, int a3, int a4, int a5, int a6, int a7, float flWeight)
{
	char bufA[0x15e0];
	char bufB[0x1068];
	if (flWeight > 1.0f)
		flWeight = 1.0f;
	else if (flWeight < 0.0f)
		flWeight = 0.0f;
	sub_10089740(a1, bufB, bufA, a4, a5, a6, a7);
	sub_10088e10(a1, a3, a2, a4, bufA, bufB, flWeight, a7, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1008a690 size=0xde
struct CBoneVecX {
	float x, y, z;
	~CBoneVecX() {}
};
struct CBoneQuatX {
	float x, y, z, w;
	~CBoneQuatX() {}
};

void sub_10089c40(char *pStudioHdr, CBoneVecX *pos, CBoneQuatX *q, int sequence, int cycle, int a6, int a7);
void sub_10088e10(char *pStudioHdr, void *a2, void *a3, int sequence, CBoneQuatX *q2, CBoneVecX *pos2, float flWeight, int a8, int a9, int a10);

void sub_1008a690(char *pStudioHdr, void *pos, void *q, int a4, int a5)
{
	if (*(unsigned int *)(pStudioHdr + 0xe4) & 0x200) {
		static CBoneQuatX q2[350];
		static CBoneVecX pos2[350];
		for (int i = 0; i < *(int *)(pStudioHdr + 0x110); i++) {
			int k = i;
			if (k < 0)
				k = 0;
			if (*(unsigned char *)(*(int *)(pStudioHdr + 0x114) + k * 0x2fc + 8 + (int)pStudioHdr) & 8) {
				sub_10089c40(pStudioHdr, pos2, q2, i, 0, a4, a5);
				sub_10088e10(pStudioHdr, q, pos, i, q2, pos2, 1.0f, a5, 0, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1008a8e0 size=0x2de
#include "StudioHdr.h"
#include "matrix3x4_t.h"
void sub_101094b0(const float *angles, const float *origin, float *matrix);
void sub_1010a540(const float *q, const float *pos, float *matrix);
void sub_10108a50(const float *a, const float *b, float *out);

// TARGET: sub_1008a8e0
void sub_1008a8e0(StudioHdr *pStudioHdr, const float *angles, const float *origin, const float *pos, const float *q, int iBone, matrix3x4_t *pBoneToWorld, StudioBoneMask *pMask)
{
	int boneList[350];
	int n = 0;
	if (iBone < -1 || iBone >= pStudioHdr->m_nBones)
		iBone = 0;
	StudioBone *pbones = pStudioHdr->Bone(0);
	if (iBone == -1) {
		n = pStudioHdr->m_nBones;
		for (int i = 0; i < n; i++)
			boneList[n - i - 1] = i;
	} else {
		do {
			boneList[n++] = iBone;
			iBone = pbones[iBone].m_iParent;
		} while (iBone != -1);
	}
	matrix3x4_t R;
	matrix3x4_t B;
	sub_101094b0(angles, origin, &R.m_flMatVal[0][0]);
	for (int j = n - 1; j >= 0; j--) {
		int i = boneList[j];
		if (!(pMask->m_bits[i >> 5] & (1 << (i & 31))))
			continue;
		sub_1010a540(q + i * 4, pos + i * 3, &B.m_flMatVal[0][0]);
		int parent = pbones[i].m_iParent;
		if (parent == -1) {
			sub_10108a50(&R.m_flMatVal[0][0], &B.m_flMatVal[0][0], &pBoneToWorld[i].m_flMatVal[0][0]);
		} else if (!(pbones[i].m_bFlags88 & 2)) {
			sub_10108a50(&pBoneToWorld[parent].m_flMatVal[0][0], &B.m_flMatVal[0][0], &pBoneToWorld[i].m_flMatVal[0][0]);
		} else {
			float (*O)[4] = pBoneToWorld[i].m_flMatVal;
			float (*P)[4] = pBoneToWorld[parent].m_flMatVal;
			float (*r)[4] = R.m_flMatVal;
			float (*b)[4] = B.m_flMatVal;
			O[0][0] = r[0][0] * b[0][0] + (r[0][1] * b[1][0] + r[0][2] * b[2][0]);
			O[0][1] = r[0][0] * b[0][1] + (r[0][1] * b[1][1] + r[0][2] * b[2][1]);
			O[0][2] = r[0][0] * b[0][2] + (r[0][1] * b[1][2] + r[0][2] * b[2][2]);
			O[0][3] = P[0][0] * b[0][3] + (P[0][1] * b[1][3] + P[0][2] * b[2][3]) + P[0][3];
			O[1][0] = r[1][0] * b[0][0] + (r[1][1] * b[1][0] + r[1][2] * b[2][0]);
			O[1][1] = r[1][0] * b[0][1] + r[1][1] * b[1][1] + r[1][2] * b[2][1];
			O[1][2] = r[1][0] * b[0][2] + r[1][1] * b[1][2] + r[1][2] * b[2][2];
			O[1][3] = P[1][0] * b[0][3] + P[1][1] * b[1][3] + P[1][2] * b[2][3] + P[1][3];
			O[2][0] = r[2][0] * b[0][0] + (r[2][1] * b[1][0] + r[2][2] * b[2][0]);
			O[2][1] = r[2][0] * b[0][1] + r[2][1] * b[1][1] + r[2][2] * b[2][1];
			O[2][2] = r[2][0] * b[0][2] + r[2][1] * b[1][2] + r[2][2] * b[2][2];
			O[2][3] = P[2][0] * b[0][3] + P[2][1] * b[1][3] + P[2][2] * b[2][3] + P[2][3];
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1008ae50 size=0x32f
#include <math.h>

struct matrix3x4_view { float m[12]; };
struct QuatTriggerView
{
	float inv_tolerance;	// 0x00
	float trigger[4];	// 0x04
	float pos[3];		// 0x14
	float quat[4];		// 0x20
};
struct QuatInterpView
{
	int control;		// 0x00
	int numtriggers;	// 0x04
	int triggerindex;	// 0x08
	QuatTriggerView *pTrigger(int i) { return (QuatTriggerView *)((char *)this + triggerindex) + i; }
};
struct BoneView
{
	int m_pad0;
	int parent;		// 0x04
	char m_pad8[0x90 - 8];
	int procindex;		// 0x90
	char m_pad94[0xa0 - 0x94];
	void *pProcedure() { if (procindex == 0) return 0; else return (char *)this + procindex; }
};
struct BoneAccView
{
	int m_pad0;
	matrix3x4_view *m_pBones;	// 0x04
	matrix3x4_view &GetBone(int i) { return m_pBones[i]; }
};

void sub_10108450(const matrix3x4_view *pIn, matrix3x4_view *pOut);
void sub_10108a50(const matrix3x4_view *pIn1, const matrix3x4_view *pIn2, matrix3x4_view *pOut);
void sub_10107e40(const matrix3x4_view *pMatrix, float *pQuat, float *pPos);
float sub_1010a420(const float *p, const float *q);
void sub_1010a020(const float *p, const float *q, float *qt);
void sub_1010a540(const float *q, const float *pos, matrix3x4_view *pMatrix);
void sub_1010a930(const float *q, float *angles);
void sub_10109440(const float *angles, const float *pos, matrix3x4_view *pMatrix);

#define QI_MAX(a, b) (((a) > (b)) ? (a) : (b))

// TARGET: sub_1008ae50
void sub_1008ae50(BoneView *pbones, int ibone, BoneAccView *bonetoworld)
{
	matrix3x4_view bonematrix;

	QuatInterpView *pProc = (QuatInterpView *)pbones[ibone].pProcedure();
	if (pProc && pbones[pProc->control].parent != -1)
	{
		float src[4];
		float weight[32];
		float scale = 0.0f;
		float quat[4];
		float pos[3];

		matrix3x4_view worldToControlParent;
		sub_10108450(&bonetoworld->GetBone(pbones[pProc->control].parent), &worldToControlParent);
		matrix3x4_view controlBoneToControlParent;
		sub_10108a50(&worldToControlParent, &bonetoworld->GetBone(pProc->control), &controlBoneToControlParent);
		sub_10107e40(&controlBoneToControlParent, src, pos);

		int i;
		for (i = 0; i < pProc->numtriggers; i++)
		{
			float dot = (float)fabs(sub_1010a420(pProc->pTrigger(i)->trigger, src));
			weight[i] = 1.0 - (acos(dot) * pProc->pTrigger(i)->inv_tolerance) * 2;
			weight[i] = QI_MAX(0.0f, weight[i]);
			scale += weight[i];
		}

		if (scale <= 0.001)
		{
			float angles[3];
			sub_1010a930(pProc->pTrigger(0)->quat, angles);
			sub_10109440(angles, pProc->pTrigger(0)->pos, &bonematrix);
			sub_10108a50(&bonetoworld->GetBone(pbones[ibone].parent), &bonematrix, &bonetoworld->GetBone(ibone));
			return;
		}

		scale = 1.0 / scale;

		quat[0] = 0.0f; quat[1] = 0.0f; quat[2] = 0.0f; quat[3] = 0.0f;
		pos[0] = 0.0f; pos[1] = 0.0f; pos[2] = 0.0f;

		for (i = 0; i < pProc->numtriggers; i++)
		{
			if (weight[i] != 0.0f)
			{
				float s = scale * weight[i];
				QuatTriggerView *pTrigger = pProc->pTrigger(i);

				sub_1010a020(pTrigger->quat, quat, quat);

				quat[0] = quat[0] + s * pTrigger->quat[0];
				quat[1] = quat[1] + s * pTrigger->quat[1];
				quat[2] = quat[2] + s * pTrigger->quat[2];
				quat[3] = quat[3] + s * pTrigger->quat[3];
				pos[0] = pos[0] + s * pTrigger->pos[0];
				pos[1] = pos[1] + s * pTrigger->pos[1];
				pos[2] = pos[2] + s * pTrigger->pos[2];
			}
		}
		sub_1010a540(quat, pos, &bonematrix);
	}

	sub_10108a50(&bonetoworld->GetBone(pbones[ibone].parent), &bonematrix, &bonetoworld->GetBone(ibone));
}
// END FUNCTION

// FUNCTION: 0x1008b180 size=0x54
struct Elem_100c40e0 { char pad[0x88]; unsigned char flags; char pad2[3]; int type; char pad3[0xa0-0x90]; };
struct Base_100c40e0 { char pad[0xf4]; int offset; };
void sub_1008ae50(Elem_100c40e0 *, int, int);
void sub_1008abc0(Elem_100c40e0 *, int, int);
bool sub_1008b180(Base_100c40e0 *p, int idx, int arg)
{
    Elem_100c40e0 *base = (Elem_100c40e0 *)((char *)p + p->offset);
    if (base[idx].flags & 1) {
        switch (base[idx].type) {
        case 1:
            sub_1008abc0(base, idx, arg);
            return true;
        case 2:
            sub_1008ae50(base, idx, arg);
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1008b360 size=0x3b
struct CEntry100c4340
{
	char m_pad0000[0x14];
	int m_key;
};

struct CHolder100c4340
{
	char m_pad0000[0xf8];
	int m_nCount;
	int m_nOffset;
};

// TARGET: sub_1008b360
CEntry100c4340 *sub_1008b360(CHolder100c4340 *pHolder, int key)
{
	int n = pHolder->m_nCount;
	if (1 <= n)
	{
		int i = 0;
		CEntry100c4340 *p = (CEntry100c4340 *)((char *)pHolder + pHolder->m_nOffset);
		if (p->m_key == key)
			return p;
		long k;
		do
		{
			i++;
			if (i == n)
				return 0;
			p++;
			k = p->m_key;
		} while (k != key);
		return p;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b3e0 size=0xd3
#include <math.h>

struct S100c43e0PoseParam
{
	char m_pad00[8];
	float start;	// 0x08
	float end;	// 0x0c
	float loop;	// 0x10
};

extern float g_101e34f0;
S100c43e0PoseParam *sub_1008d930(const void *pStudioHdr, int iParameter);

float sub_1008b3e0(const void *pStudioHdr, int iParameter, float flValue, float *pCtlValue)
{
	S100c43e0PoseParam *pPoseParam = sub_1008d930(pStudioHdr, iParameter);
	if (!pPoseParam)
		return g_101e34f0;
	const S100c43e0PoseParam &PoseParam = *pPoseParam;
	if (PoseParam.loop != g_101e34f0)
	{
		float wrap = (PoseParam.start + PoseParam.end) / 2.0 + PoseParam.loop / 2.0;
		float shift = PoseParam.loop - wrap;
		flValue = flValue - PoseParam.loop * floor((flValue + shift) / PoseParam.loop);
	}
	*pCtlValue = (flValue - PoseParam.start) / (PoseParam.end - PoseParam.start);
	if (*pCtlValue < g_101e34f0)
		*pCtlValue = 0.0f;
	else if (*pCtlValue > 1.0f)
		*pCtlValue = 1.0f;
	return (PoseParam.end - PoseParam.start) * *pCtlValue + PoseParam.start;
}
// END FUNCTION

// FUNCTION: 0x1008b4c0 size=0x2b
float *sub_1008d930(int a, int b);

// TARGET: sub_1008b4c0
float sub_1008b4c0(int a, int b, float t)
{
	float *p = sub_1008d930(a, b);
	if (p != 0)
		return (p[3] - p[2]) * t + p[2];
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x1008b530 size=0x25
// TARGET: sub_1008b530
int *sub_1008b530(char *pThis, int key)
{
    int *pNode = *(int **)(pThis + 0x28);
    while (pNode != 0) {
        if (*pNode == key) {
            return pNode + 1;
        }
        if (*pNode > key) {
            return 0;
        }
        pNode = (int *)pNode[0xd];
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b560 size=0x21
// TARGET: sub_1008b560
void sub_1008b560(int *pTable, char *pSrc)
{
    int *p = *(int **)(pSrc + 0x28);
    while (p != 0) {
        pTable[p[0]] = (int)(p + 1);
        p = (int *)p[13];
    }
}
// END FUNCTION

// FUNCTION: 0x1008b590 size=0x5e
struct SPoolEntry100c { char pad[0x38]; };
extern SPoolEntry100c g_104892c8[512];
extern int g_10491338[0xb0];
extern char g_10498e7c;
extern int g_10498e78;
extern SPoolEntry100c *g_10498e74;
extern int g_104902c4;
char sub_1008b590()
{
	if (g_10498e7c == 0) {
		for (int i = 0; i < 0x1c00; i++)
			((int *)g_104892c8)[i] = 0;
		for (int j = 0; j < 0xb0; j++)
			g_10491338[j] = 0;
		g_10498e7c = 1;
		g_10498e78 = 0;
		g_10498e74 = g_104892c8;
		int *p = (int *)g_104892c8 + 0xd;
		do {
			*p = (int)(p + 1);
			p += 0xe;
		} while ((int)p < (int)g_104892c8 + 0x7034);
		g_104902c4 = 0;
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b5f0 size=0xc2
struct CacheEntry {
	int m_a;
	int m_b;
	float m_c;
	float m_v1[3];
	float m_v2[3];
	unsigned int m_nFlags;
};

extern int g_10491338[];
extern unsigned int g_10498e78;

void sub_1008b590();

CacheEntry *sub_1008b5f0(int a, int b, float c, const float *v1, const float *v2, unsigned int nFlags)
{
	sub_1008b590();
	unsigned int i = g_10498e78;
	do {
		CacheEntry *e = (CacheEntry *)&g_10491338[i * 11];
		if (e->m_a == a && e->m_b == b && e->m_c == c
			&& v1[0] == e->m_v1[0] && v1[1] == e->m_v1[1] && v1[2] == e->m_v1[2]
			&& v2[0] == e->m_v2[0] && v2[1] == e->m_v2[1] && v2[2] == e->m_v2[2]
			&& (e->m_nFlags & nFlags) == nFlags)
			return e;
		i = (i - 1) & 0xf;
	} while (i != g_10498e78);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b6c0 size=0x143
#include "Vector.h"
struct Item48 { int d[12]; };
struct Node { int idx; Item48 item; Node *next; };
struct Rec { int a; int b; int c; Vector v1; Vector v2; unsigned flags; Node *head; };
struct Ent { char pad[0x88]; unsigned flags; char pad2[0xa0 - 0x8c]; };
struct Src {
    char pad[0xf0];
    int count;
    int offset;
    Ent *Ents() { return (Ent *)((char *)this + offset); }
};
extern int g_10498e78;
extern Rec g_10491338[16];
extern Node *g_10498e74;
void sub_1008b590();
void sub_1008b810(Rec *);
void sub_1008b850();

Rec *sub_1008b6c0(Src *src, int b, int c, Vector *v1, Vector *v2, unsigned flags, Item48 *items)
{
    sub_1008b590();
    g_10498e78 = (1 + g_10498e78) & 0xf;
    Rec *r = &*(g_10491338 + g_10498e78);
    sub_1008b810(r);
    r->a = (int)src;
    r->b = b;
    r->c = c;
    r->v1 = *v1;
    r->v2 = *v2;
    r->flags = flags;
    r->head = 0;
    Node *last = 0;
    { long i = 0; while ((int)i < src->count) { if ((flags & src->Ents()[i].flags) || !(src->Ents()[0].flags & 0xfffc)) {
            Node *n = g_10498e74;
            if (!n) {
                sub_1008b850();
                n = g_10498e74;
            }
            g_10498e74 = n->next;
            if (!r->head)
                r->head = n;
            else
                last->next = n;
            n->idx = i;
            n->item = *(items + i);
            last = n;
        } i += 1; } }
    if (last)
        last->next = 0;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1008b810 size=0x35
// TARGET: sub_1008b810
struct CUnknownFreeNode100c4980
{
	char m_pad0000[0x34];
	CUnknownFreeNode100c4980 *m_pNext;	// 0x34
};

struct CUnknownFreeList100c4980
{
	int m_n00;
	char m_pad04[0x28 - 4];
	CUnknownFreeNode100c4980 *m_pHead;	// 0x28
};

extern CUnknownFreeNode100c4980 *g_10498e74;

void sub_1008b810(CUnknownFreeList100c4980 *pList)
{
	CUnknownFreeNode100c4980 *pNode = pList->m_pHead;
	while (pNode != 0) {
		CUnknownFreeNode100c4980 *pNext = pNode->m_pNext;
		pNode->m_pNext = g_10498e74;
		g_10498e74 = pNode;
		pNode = pNext;
	}
	pList->m_n00 = 0;
	pList->m_pHead = 0;
}
// END FUNCTION

// FUNCTION: 0x1008b850 size=0x3b
extern int g_10498e78;
extern int g_10498e74;
extern int g_10491338[];
void sub_1008b810(int *p);

// TARGET: sub_1008b850
void sub_1008b850()
{
    int i = g_10498e78 + 1;
    if (i != g_10498e78) {
        do {
            i &= 0xf;
            sub_1008b810(&g_10491338[i * 11]);
            if (g_10498e74) {
                return;
            }
            i++;
        } while (i != g_10498e78);
    }
}
// END FUNCTION

// FUNCTION: 0x1008d930 size=0x9f
struct SPoseHdr;

struct SIncModelSource
{
	virtual void v0();
	virtual SPoseHdr *GetHeader(SPoseHdr *pHdr, int a);
};

struct SIncludeModel
{
	int m_unk0;
	SIncModelSource *m_pSource;	// 0x04
	char m_pad08[0x14 - 0x08];
	short m_poseIndex[0x18];	// 0x14
	char m_pad44[0x74 - 0x44];
};

struct SPoseHdr
{
	char m_pad0000[0x180];
	int m_numPoseParams;	// 0x180
	int m_poseOffset;	// 0x184
	char m_pad0188[0x194 - 0x188];
	int m_numIncludes;	// 0x194
	int m_includeOffset;	// 0x198
};

SPoseHdr *sub_1008d930(SPoseHdr *pHdr, int index);

SPoseHdr *sub_1008d930(SPoseHdr *pHdr, int index)
{
	int i = 0;
	if (pHdr && index >= 0 && index < 0x18) {
		if (index < pHdr->m_numPoseParams)
			return (SPoseHdr *)((char *)pHdr + pHdr->m_poseOffset + index * 0x14);
		for (i = 0; i < pHdr->m_numIncludes; i++) {
			SIncludeModel *pInc = (SIncludeModel *)((char *)pHdr + pHdr->m_includeOffset + i * 0x74);
			if (pInc->m_poseIndex[index] >= 0 && pInc->m_pSource) {
				SPoseHdr *pIncHdr = pInc->m_pSource->GetHeader(pHdr, i);
				if (pIncHdr) {
					SPoseHdr *p = sub_1008d930(pIncHdr, pInc->m_poseIndex[index]);
					if (p)
						return p;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008d9d0 size=0xad
struct StudioHdr;

struct IncludeModelProvider
{
	virtual void v0();
	virtual StudioHdr *vfunc1(StudioHdr *pHdr, int index);
};

struct IncludeModel
{
	int m_pad0000;
	IncludeModelProvider *m_pProvider;	// 0x04
	int m_nBaseSequence;	// 0x08
	int m_nNumSequences;	// 0x0c
	int m_nBoneRemapIndex;	// 0x10
	char m_pad0014[0x74 - 0x14];
};

struct SeqDesc
{
	char m_pad[0x2fc];
};

struct StudioHdr
{
	char m_pad0000[0x110];
	int numseq;	// 0x110
	int seqindex;	// 0x114
	char m_pad0118[0x194 - 0x118];
	int numincludemodels;	// 0x194
	int includemodelindex;	// 0x198
	SeqDesc *pSeqdesc(int i) const { if (i < 0 || i >= numseq) i = 0; return (SeqDesc *)((char *)this + seqindex) + i; }
};

SeqDesc *sub_1008d9d0(StudioHdr *pHdr, int iSequence);

SeqDesc *sub_1008d9d0(StudioHdr *pHdr, int iSequence)
{
	if (pHdr && iSequence >= 0) {
		if (iSequence < pHdr->numseq)
			return pHdr->pSeqdesc(iSequence);
		for (int j = 0; j < pHdr->numincludemodels; j++) {
			IncludeModel *pInc = (IncludeModel *)((char *)pHdr + (pHdr->includemodelindex + j * sizeof(IncludeModel)));
			if (pInc->m_nBaseSequence <= iSequence && pInc->m_nBaseSequence + pInc->m_nNumSequences > iSequence && pInc->m_pProvider) {
				StudioHdr *pSub = pInc->m_pProvider->vfunc1(pHdr, j);
				if (pSub) {
					SeqDesc *r = sub_1008d9d0(pSub, iSequence - pInc->m_nBaseSequence);
					if (r)
						return r;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008da80 size=0xb8
struct CStudioSub
{
	virtual void v0();
	virtual char *vfunc1(char *hdr, int index);
};

struct CStudioInclude	// 0x74 byte record
{
	int m_0;
	CStudioSub *m_pSub;	// 0x04
	int m_nStart;	// 0x08
	int m_nCount;	// 0x0c
};

struct CStudioHdr
{
	char m_pad0[0x110];
	int m_numSeq;	// 0x110
	int m_seqOffset;	// 0x114
	char m_pad118[0x194 - 0x118];
	int m_numInc;	// 0x194
	int m_incOffset;	// 0x198
};

char *sub_1008da80(CStudioHdr *pHdr, int index, CStudioHdr **ppOwner);

// TARGET: sub_1008da80
char *sub_1008da80(CStudioHdr *pHdr, int index, CStudioHdr **ppOwner)
{
	int i = 0;
	if (pHdr != 0 && index >= 0) {
		if (index < pHdr->m_numSeq) {
			*ppOwner = pHdr;
			return (char *)pHdr + pHdr->m_seqOffset + index * 0x2fc;
		}
		if (pHdr->m_numInc > 0) {
			int off = 0;
			do {
				CStudioInclude *pInc = (CStudioInclude *)((char *)pHdr + pHdr->m_incOffset + off);
				if (pInc->m_nStart <= index && pInc->m_nStart + pInc->m_nCount > index && pInc->m_pSub != 0) {
					char *pSub = pInc->m_pSub->vfunc1((char *)pHdr, i);
					if (pSub != 0) {
						char *r = sub_1008da80((CStudioHdr *)pSub, index - pInc->m_nStart, ppOwner);
						if (r != 0)
							return r;
					}
				}
				i++;
				off += 0x74;
			} while (i < pHdr->m_numInc);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008db40 size=0x12d
#include "StudioHdr.h"

extern float g_101e34f0;

struct PoseParams
{
    float m_a[24];
};

void *sub_1008db40(StudioHdr *pHdr, int iSeq, StudioHdr **ppOwner, float *pOut, const float *pIn);	// the stub of this function

void *sub_1008db40(StudioHdr *pHdr, int iSeq, StudioHdr **ppOwner, float *pOut, const float *pIn)
{
    if (pHdr && iSeq >= 0) {
        if (iSeq < pHdr->m_nLocalSeq) {
            *ppOwner = pHdr;
            *(PoseParams *)pOut = *(const PoseParams *)pIn;
            return (char *)pHdr + *(int *)((char *)pHdr + 0x114) + iSeq * 0x2fc;
        }
        for (int i = 0; i < pHdr->m_nIncludeModels; i++) {
            StudioIncludeModel *pInc = pHdr->IncludeModel(i);
            if (pInc->m_nBase <= iSeq && pInc->m_nBase + pInc->m_nCount > iSeq && pInc->m_pVirtual) {
                StudioHdr *pIncHdr = pInc->m_pVirtual->vfunc1(pHdr, i);
                if (pIncHdr) {
                    float local[24];
                    for (int k = 0; k < 24; k++) {
                        int idx = pInc->m_aPoseParamRemap[k];
                        local[k] = idx >= 0 ? pIn[idx] : g_101e34f0;
                    }
                    void *p = sub_1008db40(pIncHdr, iSeq - pInc->m_nBase, ppOwner, pOut, local);
                    if (p)
                        return p;
                }
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008dc70 size=0xf0
struct StudioHdr;
struct ModelCache { virtual void v0(); virtual StudioHdr *vfunc1(StudioHdr *pHdr, int index); };
struct InclModel
{
    char pad0[4];
    ModelCache *m_pCache;
    int m_nBase;
    int m_nCount;
    int m_nRemapOfs;
    char pad14[0x74 - 0x14];
};
struct StudioHdr
{
    char pad0[0xf0];
    int m_nRemap;
    char pad1[0x110 - 0xf4];
    int m_nLocal;
    char pad2[0x194 - 0x114];
    int m_nIncl;
    int m_nInclOfs;
};
int sub_1008dc70(StudioHdr *pHdr, int a, int b);
int sub_1008dc70(StudioHdr *pHdr, int a, int b)
{
    int idx = 0;
    if (pHdr != 0 && a >= 0 && b >= 0) {
        if (a < pHdr->m_nLocal) {
            if (b < pHdr->m_nRemap)
                return b;
        } else {
            for (int i = 0; i < pHdr->m_nIncl; i++) {
                InclModel *pRec = (InclModel *)((char *)pHdr + pHdr->m_nInclOfs + i * 0x74);
                if (pRec->m_nBase <= a && pRec->m_nBase + pRec->m_nCount > a && pRec->m_pCache) {
                    StudioHdr *pSub = pRec->m_pCache->vfunc1(pHdr, i);
                    if (pSub) {
                        idx = sub_1008dc70(pSub, a - pRec->m_nBase, b);
                        if (idx >= 0) {
                            for (int j = 0; j < pHdr->m_nRemap; j++) {
                                if (*(short *)((char *)pRec + pRec->m_nRemapOfs + j * 0x38) == idx)
                                    return j;
                            }
                        }
                    }
                }
            }
        }
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1008dd60 size=0xca
struct StudioHdr;

struct IncludeModelProvider
{
	virtual void v0();
	virtual StudioHdr *vfunc1(StudioHdr *pHdr, int index);
};

struct IncludeModel
{
	int m_pad0000;
	IncludeModelProvider *m_pProvider;	// 0x04
	int m_nBaseSequence;	// 0x08
	int m_nNumSequences;	// 0x0c
	int m_nBoneRemapIndex;	// 0x10
	char m_pad0014[0x74 - 0x14];
};

struct StudioHdr
{
	char m_pad0000[0xf0];
	int numbones;	// 0xf0
	char m_pad00f4[0x110 - 0xf4];
	int numseq;	// 0x110
	int seqindex;	// 0x114
	char m_pad0118[0x194 - 0x118];
	int numincludemodels;	// 0x194
	int includemodelindex;	// 0x198
};

int sub_1008dd60(StudioHdr *pHdr, int iSequence, int iBone);	// the stub of this function, used by its recursion

int sub_1008dd60(StudioHdr *pHdr, int iSequence, int iBone)
{
	if (pHdr && iSequence >= 0 && iBone >= 0 && iBone < pHdr->numbones) {
		if (iSequence < pHdr->numseq)
			return iBone;
		for (int j = 0; j < pHdr->numincludemodels; j++) {
			IncludeModel *pInc = (IncludeModel *)((char *)pHdr + (pHdr->includemodelindex + j * sizeof(IncludeModel)));
			if (pInc->m_nBaseSequence <= iSequence && pInc->m_nBaseSequence + pInc->m_nNumSequences > iSequence && pInc->m_pProvider) {
				StudioHdr *pSub = pInc->m_pProvider->vfunc1(pHdr, j);
				if (pSub) {
					int r = sub_1008dd60(pSub, iSequence - pInc->m_nBaseSequence, *(short *)((char *)pInc + pInc->m_nBoneRemapIndex + iBone * 0x38));
					if (r >= 0)
						return r;
				}
			}
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1008e230 size=0x82
#include "CUnknown100c7f30.h"

struct Bone100c7f30 { int m_unk[0x22]; unsigned int flags; int m_unk8c[5]; };
struct Hdr100c7f30 : CUnknown100c7f30Hdr {
    Bone100c7f30 *pBone(int i) { return (Bone100c7f30 *)((char *)this + m_boneOffset) + i; }
};

void CUnknown100c7f30::sub_1008e230(CUnknown100c7f30Hdr *hdr, unsigned int mask)
{
    if (hdr == 0) {
        m_count = 0;
        return;
    }
    unsigned int *out = m_bits;
    unsigned int acc = 0;
    unsigned int bit = 1;
    int n = hdr->m_numBones;
    m_count = n;
    if (n > 0) {
        Bone100c7f30 *pb = ((Hdr100c7f30 *)hdr)->pBone(0);
        if ((int)bit == -1) acc = (-(int)(mask & pb->flags) >> 16) & (int)bit; else acc = (-(int)(mask & pb->flags) >> 16) & (int)bit;
        while (--n != 0) {
            bit += bit;
            pb++;
            if (bit == 0) {
                *out++ = acc;
                bit = 1;
                acc = 0;
            }
            if ((char)(int)n == -1) acc += (-(int)(mask & pb->flags) >> 16) & bit; else acc += (-(int)(mask & pb->flags) >> 16) & bit;
        }
    }
    *out = acc;
}
// END FUNCTION

// FUNCTION: 0x1008e370 size=0xa4
#include "CUnknown100c80d0.h"

void CUnknown100c80d0::sub_1008e370(const unsigned int *pMask, const short *pTable, const void *pSource)
{
	if (pSource && pTable) {
		m_nBits = *(const int *)((const char *)pSource + 0xf0);
		int n = (m_nBits + 31) >> 5;
		if (n != 0) {
			unsigned int *p = &m_words[n];
			do {
				p--;
				n--;
				*p = 0;
			} while (n != 0);
		}
		unsigned int count = *pMask;
		if (count) {
			const unsigned int *pw = pMask;
			unsigned int bit = 1;
			unsigned int bits = *++pw;
			pw++;
			for (;;) {
				if (bits & bit) {
					int s = *pTable;
					if (s >= 0)
						m_words[s >> 5] |= 1 << (s & 0x1f);
				}
				if (--count == 0)
					return;
				bit += bit;
				pTable += 0x1c;
				if (bit == 0) {
					bits = *pw;
					bit = 1;
					pw++;
				}
			}
		}
	} else {
		m_nBits = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1008e420 size=0x8e
#include "CUnknown100c81b0.h"

void CUnknown100c81b0::sub_1008e420(const CBitVecWords *pSource, int count, const CBoneRecord *pRecords, const CStudioBoneCount *pStudio)
{
	if (!pStudio || !pRecords) {
		m_nBits = 0;
		return;
	}
	m_nBits = pStudio->m_nBits;
	int words = (m_nBits + 31) >> 5;
	if (words != 0) {
		unsigned int *p = m_words + words;
		do {
			p = p - 1;
			words = words - 1;
			*p = 0;
		} while (words != 0);
	}
	for (; count != 0; count--, pRecords++) {
		if (pSource->m_words[pRecords->m_nSource >> 5] & (1 << (pRecords->m_nSource & 31))) {
			if (pRecords->m_nIndex >= 0)
				m_words[pRecords->m_nIndex >> 5] |= 1 << (pRecords->m_nIndex & 31);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1008e5a0 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_1008e5a0(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1008e630 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_1008e630(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x1008e670 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1008e670(int num);
};

// TARGET: UtlMem::sub_1008e670
void UtlMem::sub_1008e670(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10096d10 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096d10()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096d40 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096d40()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096d80 size=0x95
#include "CUtlVector76.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector76::sub_10096d80(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 1;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 76);
        else
            m_pMemory = (char *)g_101e3100(m_allocationCount * 76);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10096e20 size=0x49
#include "CUtlVector76.h"
void *sub_101d0f30(void *, const void *, unsigned int);

void CUtlVector76::sub_10096e20(int elem, int num)
{
    int numToMove = m_size - elem - num;
    if (numToMove > 0 && num > 0)
        sub_101d0f30(m_pMemory + (elem + num) * 76, m_pMemory + elem * 76, numToMove * 76);
}
// END FUNCTION

// FUNCTION: 0x10096e70 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096e70()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096f60 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096f60()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096f90 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096f90()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10097080 size=0x70
struct Elem { char data[0x34]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);

void __fastcall sub_10097080(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_101e3104(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_101e3100(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10097160 size=0x6a
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S101859a0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_10097160(int num);
};
// TARGET: S101859a0::sub_10097160
void S101859a0::sub_10097160(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 1;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 0x48);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 0x48);
}
// END FUNCTION

// FUNCTION: 0x10098720 size=0x59
float sub_10098720(float x, float lo, float hi)
{
	if (x > hi) {
		x = hi;
		return (x - lo) / (hi - lo);
	}
	if (x < lo) {
		x = lo;
		return (x - lo) / (hi - lo);
	}
	return (x - lo) / (hi - lo);
}
// END FUNCTION

// FUNCTION: 0x1009ce10 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_1009ce10(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1009cea0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_1009cea0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x100a3300 size=0x1a
namespace lifted {
extern int g_102afbe8;
extern int g_102afbec;
extern char g_1049e35c;
}
int sub_100a3300()
{
    lifted::g_102afbec = 1;
    lifted::g_102afbe8 = (int)&lifted::g_1049e35c;
    return (int)&lifted::g_102afbe8;
}
// END FUNCTION

// FUNCTION: 0x100a3440 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_100a3440(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100a34d0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_100a34d0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x100a3590 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100a3590()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100a35c0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100a35c0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100a35f0 size=0x76
struct Elem1c { char d[0x1c]; };
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct Mem1c {
    Elem1c *m_p;
    int m_alloc;
    int m_grow;
    void sub_100a35f0(int num);
};
void Mem1c::sub_100a35f0(int num)
{
    if (m_grow == -1)
        return;
    int want = m_alloc + num;
    if (m_alloc < want) {
        int n = m_alloc;
        do {
            if (n != 0) {
                if (m_grow != 0)
                    n += m_grow;
                else
                    n += n;
            } else
                n = 2;
        } while (n < want);
        m_alloc = n;
    }
    if (m_p)
        m_p = (Elem1c *)g_101e3104(m_p, m_alloc * 0x1c);
    else
        m_p = (Elem1c *)g_101e3100(m_alloc * 0x1c);
}
// END FUNCTION

// FUNCTION: 0x100aacb0 size=0x59
struct CUnknown101a5290 {
    void *m_pMemory;
    int m_allocationCount;
    int m_growSize;
    int m_size;
    void *m_pElements;
    void sub_100aacb0();
};

extern void (__cdecl *g_101e30fc)(void *);

// TARGET: sub_100aacb0
void CUnknown101a5290::sub_100aacb0()
{
    void (__cdecl *pFree)(void *) = g_101e30fc;
    m_size = 0;
    if (m_growSize != -1) {
        if (m_pMemory) {
            pFree(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
    m_pElements = m_pMemory;
    if (m_growSize != -1) {
        if (m_pMemory) {
            pFree(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x100aad50 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100aad50()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100ac080 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100ac080(int num);
};

// TARGET: UtlMem::sub_100ac080
void UtlMem::sub_100ac080(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100b4d30 size=0x8f
#include "CUtlVector40.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector40::sub_100b4d30(int num)
{
	if (num + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (num + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 1;
			}
		}
		if (m_pMemory)
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 40);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 40);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100b4dc0 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_100b4dc0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x100b4e00 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100b4e00()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100b9b80 size=0x43
#include "Vector.h"
Vector Vector::sub_100b9b80(const Vector &v) const
{
	Vector res;
	VectorSubtract(*this, v, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x100be200 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100be200(int num);
};

// TARGET: UtlMem::sub_100be200
void UtlMem::sub_100be200(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100c1e70 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_100c1e70(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x100c1eb0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100c1eb0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100c1ee0 size=0x6a
#include "CUnknown101a59f0.h"

extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUnknown101a59f0::sub_100c1ee0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 40);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 40);
}
// END FUNCTION

// FUNCTION: 0x100c4270 size=0x7f
extern "C" unsigned strlen(const char *);
extern void (*g_101e3188)(char *dest, const char *src, int count);

void sub_100c4270(const char *in, char *out)
{
    int len = strlen(in);
    int end = len - 1;
    while (end && in[end] != '.' && in[end] != '/' && in[end] != '\\')
        end--;
    if (in[end] != '.')
        end = len - 1;
    else
        end--;
    int start = len - 1;
    while (start >= 0 && in[start] != '/' && in[start] != '\\')
        start--;
    if (start >= 0 && (in[start] == '/' || in[start] == '\\'))
        start++;
    else
        start = 0;
    g_101e3188(out, &in[start], end - start + 2);
}
// END FUNCTION

// FUNCTION: 0x100c4b10 size=0x81
#include "CUnknown100b6f80.h"

struct CUnknown100b6f80HdrEx : CUnknown100b6f80Hdr
{
	CUnknown100b6f80 *pSetting(int i) const { return (CUnknown100b6f80 *)((char *)this + m_tableOffset90) + i; }
};

struct CUnknown100b6f80Weight { int key; float weight; };

int CUnknown100b6f80::sub_100c4b10(CUnknown100b6f80Hdr *hdr, int index, int *pOut)
{
	*pOut = 0;
	if (m_mode == 1) {
		int i = m_index;
		if (m_mode != 1 || i < 0 || i >= m_count)
			return -1;
		CUnknown100b6f80Weight *p = (CUnknown100b6f80Weight *)((char *)this + m_tableOffset) + i;
		if (!p || p->key == -1)
			return -1;
		CUnknown100b6f80 *s = ((CUnknown100b6f80HdrEx *)hdr)->pSetting(p->key);
		if (!s)
			return -1;
		return s->sub_100c4b10(hdr, index, pOut);
	}
	*pOut = (int)((char *)this + m_tableOffset + index * 12);
	return m_count;
}
// END FUNCTION

// FUNCTION: 0x100c4ba0 size=0x6a
struct TRandom {
	virtual void v0();
	virtual void v1();
	virtual int RandomInt(int lo, int hi);
};
extern TRandom *g_104a5738;

struct TItem {
	int a;
	int weight;
};

struct TSet {
	char pad0[4];
	int type;
	int count;
	char pad0c[4];
	int selected;
	int offset;

	TItem *Get(int i)
	{
		if (type == 1 && i >= 0 && i < count)
			return (TItem *)((char *)this + offset + i * 8);
		return 0;
	}
};

void sub_100c4ba0(int unused, TSet *s)
{
	if (s->type != 1)
		return;
	int chosen = 0;
	int total = 0;
	for (int i = 0; i < s->count; i++) {
		TItem *it = s->Get(i);
		if (it) {
			total += it->weight;
			if (total == 0 || g_104a5738->RandomInt(0, total - 1) < it->weight)
				chosen = i;
		}
	}
	s->selected = chosen;
}
// END FUNCTION

// FUNCTION: 0x100c4c10 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100c4c10(int num);
};

// TARGET: UtlMem::sub_100c4c10
void UtlMem::sub_100c4c10(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100caa00 size=0x7b
#include "CUtlLinkedList12.h"

void CUtlLinkedList12::sub_100caa00(int elem)
{
	if (IsInList(elem)) {
		CUtlLinkedList12Node *pBase = m_pMemory;
		CUtlLinkedList12Node *pOldElem = &pBase[elem];
		if (pOldElem->m_Previous != -1)
			pBase[pOldElem->m_Previous].m_Next = pOldElem->m_Next;
		else
			m_Head = pOldElem->m_Next;
		if (pOldElem->m_Next != -1)
			pBase[pOldElem->m_Next].m_Previous = pOldElem->m_Previous;
		else
			m_Tail = pOldElem->m_Previous;
		pOldElem->m_Previous = pOldElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100caa80 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100caa80(int num);
};

void CUtlMemory12::sub_100caa80(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x100ccb30 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_100ccb30
	void sub_100ccb30(int num);
};

void CMem16_t::sub_100ccb30(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x100cdb00 size=0x36
#include <string.h>

// TARGET: sub_100cdb00
void sub_100cdb00(char *pTable, const char *psz)
{
    if (pTable == 0) {
        return;
    }
    if (psz == 0) {
        return;
    }
    memset(pTable, 0, 0x100);
    char c = *psz;
    if (c != 0) {
        const char *p = psz;
        do {
            p++;
            pTable[c] = 1;
            c = *p;
        } while (c != 0);
    }
}
// END FUNCTION

// FUNCTION: 0x100cdb90 size=0x26c
extern unsigned int g_10234000[256];
#define pulCRCTable g_10234000

void sub_100cdb90(unsigned int *pulCRC, const void *pBuffer, int nBuffer)
{
	unsigned int ulCrc = *pulCRC;
	unsigned char *pb = (unsigned char *)pBuffer;
	unsigned int nFront;
	int nMain;

JustAfew:

	switch (nBuffer)
	{
	case 7:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 6:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 5:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 4:
		ulCrc ^= *(unsigned int *)pb;
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		*pulCRC = ulCrc;
		return;

	case 3:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 2:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 1:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 0:
		*pulCRC = ulCrc;
		return;
	}

	nFront = ((unsigned int)pb) & 3;
	nBuffer -= nFront;
	switch (nFront)
	{
	case 3:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);
	case 2:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);
	case 1:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);
	}

	nMain = nBuffer >> 3;
	while (nMain--)
	{
		ulCrc ^= *(unsigned int *)pb;
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc ^= *(unsigned int *)(pb + 4);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		pb += 8;
	}

	nBuffer &= 7;
	goto JustAfew;
}
// END FUNCTION

// FUNCTION: 0x100d05d0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_100d05d0
	void sub_100d05d0(int num);
};

void CMem16_t::sub_100d05d0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x100d1190 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100d1190(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100d15b0 size=0x22
struct CUnknown100b7a90 {
	void sub_100d1630();
	void *sub_100d15b0(unsigned int flags);
};

// TARGET: CUnknown100b7a90::sub_100d15b0
void *CUnknown100b7a90::sub_100d15b0(unsigned int flags)
{
	sub_100d1630();
	if (flags & 1) {
		operator delete((char *)this - 4);
	}
	return (char *)this - 4;
}
// END FUNCTION

// FUNCTION: 0x100d3380 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3380()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d33d0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d33d0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3470 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3470()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3a80 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100d3a80(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3c30 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_100d3c30(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 8);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x100d3cc0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3cc0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3e00 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3e00()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3e30 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100d3e30(int num);
};

void CUtlMemory12::sub_100d3e30(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x100d3ed0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100d3ed0(int num);
};

// TARGET: UtlMem::sub_100d3ed0
void UtlMem::sub_100d3ed0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100d8690 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d8690()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d8790 size=0x30
#include "CUtlMemory16.h"

extern void *(__cdecl *g_101e3100)(unsigned int);

CUtlMemory16 *CUtlMemory16::sub_100d8790(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount)
		m_pMemory = (char *)g_101e3100(allocationCount * 16);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100d87c0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_100d87c0
	void sub_100d87c0(int num);
};

void CMem16_t::sub_100d87c0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x100d8830 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d8830()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d90b0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d90b0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100df190 size=0x24
struct CUnknown10753434
{
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void vfunc3();
    int m_pad4;
    CUnknown10753434 *m_pNext;	// +0x8
};

extern CUnknown10753434 *g_104cf3d4;
extern int g_104cf3d8;

// TARGET: sub_100df190
void sub_100df190(int a)
{
    g_104cf3d8 = a;
    CUnknown10753434 *p = g_104cf3d4;
    while (p != 0)
    {
        CUnknown10753434 *next = p->m_pNext;
        p->vfunc3();
        p = next;
    }
}
// END FUNCTION

// FUNCTION: 0x100df1c0 size=0x1d
namespace lifted {
extern char g_102348c8;
}
struct CUnknown102454e0 { void * sub_100df1c0(); };
void * CUnknown102454e0::sub_100df1c0()
{
    *(int *)this = (int)&lifted::g_102348c8;
    *(int *)((char *)this + 4) = 0;
    *(char *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)((char *)this + 0x18) = 0;
    *(int *)((char *)this + 8) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x100df2c0 size=0x3d
int sub_101e28e0(const char *, const char *);

struct CUnk10245660Node {
    const char *sub_100df330();
    CUnk10245660Node *sub_100df3a0();
};

CUnk10245660Node *sub_100df300();

CUnk10245660Node *sub_100df2c0(const char *pName)
{
    CUnk10245660Node *pNode;

    pNode = sub_100df300();
    while (pNode != 0) {
        if (sub_101e28e0(pName, pNode->sub_100df330()) == 0) {
            return pNode;
        }
        pNode = pNode->sub_100df3a0();
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e1040 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100e1040()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100e1290 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100e1290()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100e12c0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100e12c0(int num);
};

// TARGET: UtlMem::sub_100e12c0
void UtlMem::sub_100e12c0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100e21f0 size=0x144
#include "utlrbtree.h"
#include "CBaseEntityList.h"

extern void *vt_10234ad4[];
extern void (*g_101e30fc)(void *);

inline void ListRemoveAll(CBaseEntityListLL *p)
{
    if (p->m_NumAlloced) {
        unsigned short prev = CBaseEntityListLL::InvalidIndex();
        for (int i = (int)p->m_NumAlloced; --i >= 0; ) {
            p->InternalElement(i).m_Next = prev;
            p->InternalElement(i).m_Previous = i;
            prev = i;
        }
        p->m_FirstFree = 0;
        p->m_Head = CBaseEntityListLL::InvalidIndex();
        p->m_Tail = CBaseEntityListLL::InvalidIndex();
        p->m_ElementCount = 0;
    }
}

inline void ListPurge(CBaseEntityListLL *p)
{
    if (p->m_growSize != -1) {
        if (p->m_pMemory) {
            g_101e30fc(p->m_pMemory);
            p->m_pMemory = 0;
        }
        p->m_allocationCount = 0;
    }
}

void CBaseEntityList::sub_100e21f0()
{
    unsigned short i = m_Live.m_Head;
    *(void **)this = vt_10234ad4;
    while (i != CBaseEntityListLL::InvalidIndex()) {
        unsigned short element = m_Live.InternalElement(i).m_Element;
        unsigned short next = m_Live.InternalElement(i).m_Next;
        sub_100e2590(element);
        i = next;
    }
    {
        CBaseEntityListLL *pSecond = &m_Second;
        ListRemoveAll(pSecond);
        ListPurge(pSecond);
    }
    {
        CBaseEntityListLL *pLive = &m_Live;
        ListRemoveAll(pLive);
        ListPurge(pLive);
    }
}
// END FUNCTION

// FUNCTION: 0x100e2590 size=0x1ec
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBaseEntityList.h"
#include "CUtlLinkedList6.h"
#include "CBaseHandle.h"
struct S100fa600 { void sub_100e2970(int n); };
struct EntView { virtual void v0(int *p); };
struct ListView { virtual void v0(int, int); virtual void v1(void *pEnt, CBaseHandle h); };
extern void (__cdecl *g_101e310c)(const char *, ...);
struct LL6 : CUtlLinkedList6 {
	CUtlLinkedList6Node &InternalElement(unsigned short i) { return m_pMemory[i]; }
	CUtlLinkedList6Node &InternalElementW(unsigned short i) { return *(CUtlLinkedList6Node *)((char *)m_pMemory + i * sizeof(CUtlLinkedList6Node)); }
	unsigned short Alloc()
	{
		unsigned short elem;
		if (m_FirstFree == InvalidIndex()) {
			if (m_TotalElements == m_allocationCount)
				((S100fa600 *)this)->sub_100e2970(1);
			elem = m_TotalElements;
			++m_TotalElements;
			if (elem == InvalidIndex())
				g_101e310c("CUtlLinkedList overflow!\n");
		} else {
			elem = m_FirstFree;
			m_FirstFree = InternalElement(m_FirstFree).m_Next;
		}
		InternalElementW(elem).m_Next = InternalElementW(elem).m_Previous = elem;
		m_pElements = m_pMemory;
		return elem;
	}
	void LinkToTail(unsigned short elem)
	{
		sub_100e27a0(elem);
		CUtlLinkedList6Node &newElem = InternalElement(elem);
		newElem.m_Next = InvalidIndex();
		newElem.m_Previous = m_Tail;
		m_Tail = elem;
		if (newElem.m_Previous == InvalidIndex())
			m_Head = elem;
		else
			InternalElement(newElem.m_Previous).m_Next = elem;
		++m_ElementCount;
	}
};
void CBaseEntityList::sub_100e2590(unsigned int element)
{
	CBaseEntityListEntry *pEntry = &*(m_EntPtrArray + (int)element);
	if (!(pEntry->m_pEntity)) return; int hTmp = -1;
		((EntView *)pEntry->m_pEntity)->v0(&hTmp);
		int t0; int t1 = pEntry->m_SerialNumber; t0 = t1; ((ListView *)this)->v1(pEntry->m_pEntity, CBaseHandle(element, t0));
		pEntry->m_SerialNumber = pEntry->m_SerialNumber + 1;
		pEntry->m_pEntity = 0;
		((CUtlLinkedList6 *)&m_Live)->Remove(*(unsigned short *)&pEntry->m_pad);
		if ((int)element >= 0x800) {
			unsigned short newElem;
			LL6 *l = (LL6 *)&m_Second; newElem = l->Alloc();
			l->LinkToTail(newElem);
			unsigned short *pe = &l->Element(newElem);
			if (pe)
				*pe = (unsigned short)element;
		}
}
// END FUNCTION

// FUNCTION: 0x100e27a0 size=0x99
#include "CUtlLinkedList6.h"

void CUtlLinkedList6::sub_100e27a0(unsigned short i)
{
	Unlink(i);
}
// END FUNCTION

// FUNCTION: 0x100e2840 size=0x106
#include "utlrbtree.h"
#include "CUtlLinkedList6.h"

extern "C" __declspec(dllimport) void Error(const char *fmt, ...);

unsigned short CUtlLinkedList6::sub_100e2840(bool multilist)
{
	unsigned short elem;
	if (m_FirstFree == InvalidIndex())
	{
		if (m_TotalElements == m_allocationCount)
		{
			if (m_growSize != -1)
			{
				int nAllocationRequested = m_allocationCount + 1;
				while (m_allocationCount < nAllocationRequested)
				{
					if (m_allocationCount != 0)
					{
						if (m_growSize)
							m_allocationCount += m_growSize;
						else
							m_allocationCount += m_allocationCount;
					}
					else
						m_allocationCount = (31 + sizeof(CUtlLinkedList6Node)) / sizeof(CUtlLinkedList6Node);
				}
				if (m_pMemory)
					m_pMemory = (CUtlLinkedList6Node *)_imp__Plat_Realloc(m_pMemory, m_allocationCount * sizeof(CUtlLinkedList6Node));
				else
					m_pMemory = (CUtlLinkedList6Node *)_imp__Plat_Alloc(m_allocationCount * sizeof(CUtlLinkedList6Node));
			}
		}
		elem = m_TotalElements;
		++m_TotalElements;
		if (elem == InvalidIndex())
			Error("CUtlLinkedList overflow!\n");
	}
	else
	{
		elem = m_FirstFree;
		m_FirstFree = InternalElement(m_FirstFree).m_Next;
	}
	if (!multilist)
		InternalElement(elem).m_Next = InternalElement(elem).m_Previous = elem;
	else
		InternalElement(elem).m_Next = InternalElement(elem).m_Previous = InvalidIndex();
	m_pElements = m_pMemory;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x100e2a10 size=0xc1
#include "CUnknown100fde30.h"

CUnknown100fde30 *CUnknown100fde30::sub_100e2a10()
{
	((CUniformRandomStream *)m_stream1)->CUniformRandomStream::CUniformRandomStream();
	((CUniformRandomStream *)m_stream2)->CUniformRandomStream::CUniformRandomStream();
	m_rec1.CUnknown100fde30Rec::CUnknown100fde30Rec();
	m_rec2.CUnknown100fde30Rec::CUnknown100fde30Rec();
	m_field170 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100e2fa0 size=0x1f
extern float g_104cf544;
extern float g_104cf548;
extern float g_104cf54c;

void sub_100e2fa0()
{
    g_104cf544 = 0.0f;
    g_104cf548 = 0.0f;
    g_104cf54c = 0.0f;
}
// END FUNCTION

// FUNCTION: 0x100e2fc0 size=0x1f
namespace lifted {
extern float g_104cf544;
extern int g_104cf548;
extern int g_104cf54c;
}
int sub_100e2fc0(int a0, int a1)
{
    *(float *)((char *)a1) = lifted::g_104cf544;
    *(int *)((char *)a1 + 4) = lifted::g_104cf548;
    *(int *)((char *)a1 + 8) = lifted::g_104cf54c;
    return a1;
}
// END FUNCTION

// FUNCTION: 0x100e2fe0 size=0x10b
void sub_100e30f0();
extern char g_104cf751;
extern char g_104cf550[];
extern char g_104cf650[];

char *sub_100e2fe0(char *data, char *token, char *quoted)
{
    int c;
    int len;
    char *brk;
    if (quoted)
        *quoted = 0;
    if (!data)
        return 0;
    sub_100e30f0();
    brk = g_104cf550;
    if (!g_104cf751)
        brk = g_104cf650;
    len = 0;
    token[0] = 0;
skip:
    c = *data;
    while (c <= 32) {
        if (c == 0)
            return 0;
        c = *++data;
    }
    if (c == '/') {
        if (data[1] == '/') {
            while (*data && *data != '\n')
                data++;
        } else if (data[1] == '*') {
            data += 2;
            while (*data) {
                if (*data == '*' && data[1] == '/') {
                    data += 2;
                    break;
                }
                data++;
            }
        } else
            goto single;
        goto skip;
    }
    if (c == '"') {
        if (quoted)
            *quoted = 1;
        data++;
        for (;;) {
            c = *data++;
            if (c == '\\') {
                if (*data == '"') {
                    c = '"';
                    data++;
                }
            } else if (c == '"' || c == 0)
                break;
            token[len++] = c;
        }
        token[len] = 0;
        return data;
    }
single:
    if (brk[c]) {
        token[0] = c;
        token[1] = 0;
        return data + 1;
    }
    do {
        data++;
        token[len++] = c;
        c = *data;
        if (brk[c])
            break;
    } while (c > 32);
    token[len] = 0;
    return data;
}
// END FUNCTION

// FUNCTION: 0x100e91e0 size=0x1a4
#include "Ray_t.h"
#include <math.h>

struct Ray_tView {
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_f34;
};

void Ray_t::sub_100e91e0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tView *r = (Ray_tView *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100ea590 size=0xd8
#include "CGameMovement.h"
struct SVarA { virtual void v0(); virtual bool v1(); char pad[0x24]; float f28; };
struct SRandom { virtual void v0(); virtual void v1(); virtual int RandomInt(int lo, int hi); };
struct SSound { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(const void *pos, int ch, const char *snd, float vol, int level, int flags, int pitch); };
extern SVarA *g_104cf7cc;
extern SRandom *g_104a5738;
extern SSound *g_104df784;

void CGameMovement::sub_100ea590()
{
    float vol = g_104cf7cc->v1() ? 0.0f : g_104cf7cc->f28;
    if (vol > 1.0)
        vol = 1.0f;
    int pitch = g_104a5738->RandomInt(95, 105);
    switch (g_104a5738->RandomInt(0, 3)) {
    case 0: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepleft1.wav", vol, 75, 0, pitch); break;
    case 1: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepleft2.wav", vol, 75, 0, pitch); break;
    case 2: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepright1.wav", vol, 75, 0, pitch); break;
    case 3: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepright2.wav", vol, 75, 0, pitch); break;
    }
}
// END FUNCTION

// FUNCTION: 0x100eb150 size=0x93
#include "CUnknown100353c0.h"

CUnknown100353c0 *CUnknown100353c0::sub_100eb150(const CUnknown100353c0 *o)
{
	m_w[0] = o->m_w[0];
	m_w[1] = o->m_w[1];
	m_w[2] = o->m_w[2];
	m_w[3] = o->m_w[3];
	m_w[4] = o->m_w[4];
	m_w[5] = o->m_w[5];
	m_inner = o->m_inner;
	m_x = o->m_x;
	m_y = o->m_y;
	m_z = o->m_z;
	m_p = o->m_p;
	m_q = o->m_q;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100ebb50 size=0xa5
#include "CGameMovement.h"

// TARGET: CGameMovement::sub_100ebb50
int CGameMovement::sub_100ebb50(Vector &in, Vector &normal, Vector &out, float overbounce)
{
    float backoff;
    float change;
    float angle;
    int i, blocked;

    angle = normal[2];
    blocked = 0x00;
    if (angle > 0)
        blocked |= 0x01;
    if (!angle)
        blocked |= 0x02;
    backoff = DotProduct(in, normal) * overbounce;
    for (i = 0; i < 3; i++) {
        change = normal[i] * backoff;
        out[i] = in[i] - change;
        if (out[i] > -0.1 && out[i] < 0.1)
            out[i] = 0;
    }
    return blocked;
}
// END FUNCTION

// FUNCTION: 0x100ec3a0 size=0xae
#include "CGameMovement.h"

struct IEngineTraceY { virtual int GetPointContents(const Vector &vecPosition, void *ppEntity); };
extern IEngineTraceY *g_104a582c;
extern char g_102bb1a8;

static inline float DistToSqrY(const Vector &a, const Vector &b)
{
    Vector d;
    VectorSubtract(a, b, d);
    return d.x * d.x + (d.y * d.y + d.z * d.z);
}

// TARGET: CGameMovement::sub_100ec3a0
int CGameMovement::sub_100ec3a0(const Vector &point)
{
    if (g_102bb1a8) {
        if (m_nCachedContents == -9999 || DistToSqrY(point, m_vecCachedPoint) > 1.0f) {
            m_nCachedContents = g_104a582c->GetPointContents(point, 0);
            m_vecCachedPoint = point;
        }
        return m_nCachedContents;
    }
    return g_104a582c->GetPointContents(point, 0);
}
// END FUNCTION

// FUNCTION: 0x100efee0 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100efee0(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100eff70 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_100eff70
	void sub_100eff70(int num);
};

void CMem8b_t::sub_100eff70(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x100f3f90 size=0xcb
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);
extern void *(__cdecl *g_101e3100)(int);
extern void *(__cdecl *g_101e3104)(void *, int);

struct IntVec {
	int *pMemory;
	int allocationCount;
	int growSize;
	int size;
	int *pElements;
};
extern IntVec g_104d1038;

void sub_100f3f90(int src)
{
	int num = g_104d1038.size + 1;
	int elem = g_104d1038.size;
	if (num > g_104d1038.allocationCount && g_104d1038.growSize != -1) {
		while (g_104d1038.allocationCount < num) {
			if (g_104d1038.allocationCount) {
				if (g_104d1038.growSize)
					g_104d1038.allocationCount += g_104d1038.growSize;
				else
					g_104d1038.allocationCount += g_104d1038.allocationCount;
			} else {
				g_104d1038.allocationCount = 8;
			}
		}
		if (g_104d1038.pMemory)
			g_104d1038.pMemory = (int *)g_101e3104(g_104d1038.pMemory, g_104d1038.allocationCount * 4);
		else
			g_104d1038.pMemory = (int *)g_101e3100(g_104d1038.allocationCount * 4);
	}
	g_104d1038.size++;
	g_104d1038.pElements = g_104d1038.pMemory;
	int toMove = g_104d1038.size - elem - 1;
	if (toMove > 0)
		sub_101d0f30(g_104d1038.pMemory + num, g_104d1038.pMemory + elem, toMove * 4);
	int *p = g_104d1038.pMemory + elem;
	if (p)
		*p = src;
}
// END FUNCTION

// FUNCTION: 0x100f40e0 size=0x94
#include "Vector.h"
struct AutoSys {
	virtual bool Init();
	AutoSys *m_pNext;
};
extern AutoSys *g_104d1050;
extern AutoSys **g_104d1038;
extern int g_104d1044;
extern "C" __declspec(dllimport) void __cdecl DevWarning(int level, const char *fmt, ...);
void sub_100f3f90(AutoSys *sys);

static inline int FindSystem(AutoSys *sys)
{
	for (int i = 0; i < g_104d1044; i++) {
		if (g_104d1038[i] == sys)
			return i;
	}
	return -1;
}

bool sub_100f40e0()
{
	for (AutoSys *p = g_104d1050; p; p = p->m_pNext) {
		if (FindSystem(p) == -1)
			sub_100f3f90(p);
		else
			DevWarning(1, "AutoGameSystem already added to game system list!!!\n");
	}
	g_104d1050 = 0;
	for (int i = 0; i < g_104d1044; i++) {
		if (!g_104d1038[i]->Init())
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x100f4200 size=0x2a
void sub_100f42a0(void *pfn);
void sub_100f4310();
extern char *g_104d104c;

// TARGET: sub_100f4200
void sub_100f4200()
{
	sub_100f42a0((void *)sub_100f4310);
	if (g_104d104c) {
		delete g_104d104c;
		g_104d104c = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100f4270 size=0x28
typedef void (__fastcall *PFN_ForEach)(void *pThis);
extern void **g_104d1038;
extern int g_104d1044;
void __cdecl sub_100f4270(PFN_ForEach pfn)
{
	for (int i = 0; i < g_104d1044; i++)
		pfn(g_104d1038[i]);
}
// END FUNCTION

// FUNCTION: 0x10104360 size=0x1a
struct CUnk1011d310
{
	int m_n0;
	int m_n4;
	int m_nLimit8;
	int m_nCurrentC;
	char m_bFlag10;

	char sub_10104360(int a);
};

// TARGET: sub_10104360
char CUnk1011d310::sub_10104360(int a)
{
	int sum = m_nCurrentC + a;
	if (sum > m_nLimit8) {
		m_bFlag10 = 1;
	}
	return m_bFlag10;
}
// END FUNCTION

// FUNCTION: 0x10106be0 size=0x7c
#include "InterfaceReg.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern InterfaceReg *g_104d4050;

InterfaceReg *InterfaceReg::sub_10106be0(void *createFn, const char *pName)
{
    m_pName = pName;
    g_101e3124[*g_101e3128].name = "InterfaceReg::InterfaceReg";
    g_101e3124[*g_101e3128].ent = g_102de300;
    g_101e3124[*g_101e3128].extra = g_102de300;
    ++*g_101e3128;
    m_CreateFn = createFn;
    m_pNext = g_104d4050;
    g_104d4050 = this;
    --*g_101e3128;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10106f30 size=0x69
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
int sub_10106fa0(const char *a, const char *b);

int sub_10106f30(const char *module)
{
    g_101e3124[*g_101e3128].a = "Sys_GetFactory";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    int r = sub_10106fa0(module, "CreateInterface");
    (*g_101e3128)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10106fa0 size=0x6e
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern int (__stdcall *g_101e30d4)(const char *, const char *);
extern int (__stdcall *g_101e30d8)(int);

int sub_10106fa0(const char *a, const char *b)
{
    g_101e3124[*g_101e3128].a = "Sys_GetProcAddress";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    int r = g_101e30d8(g_101e30d4(a, b));
    (*g_101e3128)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10107010 size=0x81
struct SFloatPair { float lo; float range; };

extern void (*g_101e3188)(char *dest, const char *src, int count);
char *sub_101d245b(char *str, const char *delim);
double sub_101d12af(const char *str);

SFloatPair sub_10107010(const char *text)
{
    SFloatPair r;
    r.lo = 0;
    r.range = 0;
    char buf[128];
    g_101e3188(buf, text, 128);
    char *tok = sub_101d245b(buf, ",");
    if (tok) {
        r.lo = (float)sub_101d12af(tok);
        tok = sub_101d245b(0, ",");
        if (tok)
            r.range = sub_101d12af(tok) - r.lo;
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x10107500 size=0x43
#include "Vector.h"
#include <math.h>
float Vector::sub_10107500()
{
	float radius = (float)sqrt(x * x + y * y + z * z);
	float iradius = 1.0f / (radius + 1.192092896e-07f);
	x *= iradius;
	y *= iradius;
	z *= iradius;
	return radius;
}
// END FUNCTION

// FUNCTION: 0x10107550 size=0x41
#include "Vector.h"
#include <math.h>

void __fastcall sub_10107550(Vector *v)
{
	float radius = (float)sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
	float iradius = 1.0f / (radius + 1.1920929e-7f);
	v->x *= iradius;
	v->y *= iradius;
	v->z *= iradius;
}
// END FUNCTION

// FUNCTION: 0x10107be0 size=0xc7
// mathlib _SSE2_cos (SSE2 cos), verbatim
// TARGET: sub_10107be0
// the game builds an ebp frame here (not in _SSE2_SinCos): frame-pointer omission off for this function
extern int g_10235460;	// _ps_am_inv_sign_mask
extern int g_10235430;	// _ps_am_pi_o_2
extern int g_10235440;	// _ps_am_2_o_pi
extern int g_10235470;	// _epi32_1
extern int g_10235420;	// _ps_am_1
extern int g_10235480;	// _epi32_2
extern int g_102354c0;	// _ps_sincos_p3
extern int g_102354b0;	// _ps_sincos_p2
extern int g_102354a0;	// _ps_sincos_p1
extern int g_10235490;	// _ps_sincos_p0

#pragma optimize("y", off)
float sub_10107be0(float x)
{
	__asm
	{
		movss	xmm0, x
		movss	xmm1, g_10235460
		movss	xmm2, g_10235430
		movss	xmm3, g_10235440
		andps	xmm0, xmm1
		addss	xmm0, xmm2
		mulss	xmm0, xmm3

		pxor	xmm3, xmm3
		movd	xmm5, g_10235470
		movss	xmm4, g_10235420
		cvttps2dq	xmm2, xmm0
		pand	xmm5, xmm2
		movd	xmm1, g_10235480
		pcmpeqd	xmm5, xmm3
		cvtdq2ps	xmm6, xmm2
		pand	xmm2, xmm1
		pslld	xmm2, (31 - 1)

		subss	xmm0, xmm6
		movss	xmm3, g_102354c0
		minss	xmm0, xmm4
		subss	xmm4, xmm0
		andps	xmm0, xmm5
		andnps	xmm5, xmm4
		orps	xmm0, xmm5

		movaps	xmm1, xmm0
		movss	xmm4, g_102354b0
		mulss	xmm0, xmm0
		movss	xmm5, g_102354a0
		orps	xmm1, xmm2
		movaps	xmm7, xmm0
		mulss	xmm0, xmm3
		movss	xmm6, g_10235490
		addss	xmm0, xmm4
		mulss	xmm0, xmm7
		addss	xmm0, xmm5
		mulss	xmm0, xmm7
		addss	xmm0, xmm6
		mulss	xmm0, xmm1
		movss   x,    xmm0
	}

	return x;
}
// END FUNCTION

// FUNCTION: 0x10107e40 size=0x61
struct RadianEuler10137e40
{
	float x, y, z;
	inline void Init(float ix, float iy, float iz) { x = ix; y = iy; z = iz; }
};
#define DEG2RAD10137e40(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))
void sub_10107eb0(float *pMatrix, float *pOut);
void sub_1010a790(RadianEuler10137e40 *pAngles, float *pOut);
void sub_10108510(float *pMatrix, int n, float *pOut);
inline void MatrixAngles10137e40(float *matrix, RadianEuler10137e40 &angles)
{
	sub_10107eb0(matrix, (float *)&angles);
	angles.Init(DEG2RAD10137e40(angles.z), DEG2RAD10137e40(angles.x), DEG2RAD10137e40(angles.y));
}
void sub_10107e40(float *pMatrix, float *pQuat, float *pAngles)
{
	RadianEuler10137e40 angles;
	MatrixAngles10137e40(pMatrix, angles);
	sub_1010a790(&angles, pQuat);
	sub_10108510(pMatrix, 3, pAngles);
}
// END FUNCTION

// FUNCTION: 0x10107eb0 size=0xc4
#include <math.h>
#include "matrix3x4_t.h"
#include "QAngle.h"
#pragma intrinsic(atan2, sqrt)

extern float g_10227c6c;

// TARGET: sub_10107eb0
void sub_10107eb0(const matrix3x4_t &matrix, QAngle &angles)
{
    float forward[3], left[3], up[3];
    forward[0] = matrix.m_flMatVal[0][0];
    forward[1] = matrix.m_flMatVal[1][0];
    forward[2] = matrix.m_flMatVal[2][0];
    left[0] = matrix.m_flMatVal[0][1];
    left[1] = matrix.m_flMatVal[1][1];
    left[2] = matrix.m_flMatVal[2][1];
    up[2] = matrix.m_flMatVal[2][2];
    float xyDist = sqrt(forward[0] * forward[0] + forward[1] * forward[1]);
    if (xyDist > 0.001f) {
        angles.y = atan2(forward[1], forward[0]) * g_10227c6c;
        angles.x = atan2(-forward[2], xyDist) * g_10227c6c;
        angles.z = atan2(left[2], up[2]) * g_10227c6c;
    } else {
        angles.z = 0;
        angles.y = atan2(-left[0], left[1]) * g_10227c6c;
        angles.x = atan2(-forward[2], xyDist) * g_10227c6c;
    }
}
// END FUNCTION

// FUNCTION: 0x10108080 size=0x5c
void sub_10108080(const float *in1, const float in2[3][4], float *out)
{
	float tx = in1[0] - in2[0][3];
	float ty = in1[1] - in2[1][3];
	float tz = in1[2] - in2[2][3];
	out[0] = tx * in2[0][0] + ty * in2[1][0] + tz * in2[2][0];
	out[1] = tx * in2[0][1] + ty * in2[1][1] + tz * in2[2][1];
	out[2] = tx * in2[0][2] + ty * in2[1][2] + tz * in2[2][2];
}
// END FUNCTION

// FUNCTION: 0x10108450 size=0xb2
#include "matrix3x4_t.h"

namespace block_10138630 {
	void sub_10108430(const matrix3x4_t &in, matrix3x4_t &out)
	{
		out = in;
	}
}
using namespace block_10138630;
void sub_10108450(const matrix3x4_t &in, matrix3x4_t &out);

inline float Dot3(const float *a, const float *b)
{
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

// TARGET: sub_10108450
void sub_10108450(const matrix3x4_t &in, matrix3x4_t &out)
{
	if (&in == &out) {
		matrix3x4_t in2;
		sub_10108430(in, in2);
		sub_10108450(in2, out);
		return;
	}
	out.m_flMatVal[0][0] = in.m_flMatVal[0][0];
	out.m_flMatVal[0][1] = in.m_flMatVal[1][0];
	out.m_flMatVal[0][2] = in.m_flMatVal[2][0];
	out.m_flMatVal[1][0] = in.m_flMatVal[0][1];
	out.m_flMatVal[1][1] = in.m_flMatVal[1][1];
	out.m_flMatVal[1][2] = in.m_flMatVal[2][1];
	out.m_flMatVal[2][0] = in.m_flMatVal[0][2];
	out.m_flMatVal[2][1] = in.m_flMatVal[1][2];
	out.m_flMatVal[2][2] = in.m_flMatVal[2][2];
	float tmp[3];
	tmp[0] = in.m_flMatVal[0][3];
	tmp[1] = in.m_flMatVal[1][3];
	tmp[2] = in.m_flMatVal[2][3];
	out.m_flMatVal[0][3] = -Dot3(tmp, out.m_flMatVal[0]);
	out.m_flMatVal[1][3] = -Dot3(tmp, out.m_flMatVal[1]);
	out.m_flMatVal[2][3] = -Dot3(tmp, out.m_flMatVal[2]);
}
// END FUNCTION

// FUNCTION: 0x10108510 size=0x22
// TARGET: sub_10108510
void __cdecl sub_10108510(int *pArr, int index, int *pOut)
{
    pOut[0] = pArr[index];
    pOut[1] = pArr[index + 4];
    pOut[2] = pArr[index + 8];
}
// END FUNCTION

// FUNCTION: 0x10108fd0 size=0x3d
// VectorMA (mathlib.cpp, _WIN32 form): Valve's naked x87 asm.
// TARGET: sub_10108fd0
__declspec(naked) void sub_10108fd0(const float *start, float scale, const float *direction, float *dest)
{
	_asm {
		mov	eax, DWORD PTR [esp+0x04]	; *start, s0..s2
		mov ecx, DWORD PTR [esp+0x0c]	; *direction, d0..d2
		mov edx, DWORD PTR [esp+0x10]	; *dest
		fld DWORD PTR [esp+0x08]		; sc
		fld	DWORD PTR [eax]				; s0		| sc
		fld DWORD PTR [ecx]				; d0		| s0	| sc
		fld DWORD PTR [eax+4]			; s1		| d0	| s0	| sc
		fld DWORD PTR [ecx+4]			; d1		| s1	| d0	| s0	| sc
		fld DWORD PTR [eax+8]			; s2		| d1	| s1	| d0	| s0	| sc
		fxch st(4)						; s0		| d1	| s1	| d0	| s2	| sc
		fld DWORD PTR [ecx+8]			; d2		| s0	| d1	| s1	| d0	| s2	| sc
		fxch st(4)						; d0		| s0	| d1	| s1	| d2	| s2	| sc
		fmul st,st(6)					; d0*sc		| s0	| d1	| s1	| d2	| s2	| sc
		fxch st(2)						; d1		| s0	| d0*sc	| s1	| d2	| s2	| sc
		fmul st,st(6)					; d1*sc		| s0	| d0*sc	| s1	| d2	| s2	| sc
		fxch st(4)						; d2 		| s0	| d0*sc	| s1	| d1*sc | s2	| sc
		fmulp st(6),st					; s0		| d0*sc	| s1	| d1*sc	| s2	| d2*sc
		faddp st(1),st					; s0+d0*sc	| s1	| d1*sc	| s2	| d2*sc
		fstp DWORD PTR [edx]			; s1		| d1*sc	| s2	| d2*sc
		faddp st(1),st					; s1+d1*sc	| s2	| d2*sc
		fstp DWORD PTR [edx+4]			; s2		| d2*sc
		faddp st(1),st					; s2+d2*sc
		fstp DWORD PTR [edx+8]			; [Empty stack]
		ret
	}
}
// END FUNCTION

// FUNCTION: 0x10109010 size=0x8a
#include "Vector.h"
#include "QAngle.h"

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm {
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

void sub_10109010(const QAngle &angles, Vector *forward)
{
	float sp, sy, cp, cy;
	SinCos(angles.y * 0.017453292f, &sy, &cy);
	SinCos(angles.x * 0.017453292f, &sp, &cp);
	forward->x = cp * cy;
	forward->y = cp * sy;
	forward->z = -sp;
}
// END FUNCTION

// FUNCTION: 0x10109420 size=0x1f
void sub_10109420(float *p)
{
    for (int i = 0; i < 12; i++)
    {
        ((int *)p)[i] = 0;
    }
    ((int *)p)[0] = 0x3f800000;
    ((int *)p)[5] = 0x3f800000;
    ((int *)p)[10] = 0x3f800000;
}
// END FUNCTION

// FUNCTION: 0x10109440 size=0x22
void __cdecl sub_10109470(int a, int b);
void __cdecl sub_10108540(int a, int b, int c);

// TARGET: sub_10109440
void __cdecl sub_10109440(int a, int b, int c)
{
    sub_10109470(a, c);
    sub_10108540(b, 3, c);
}
// END FUNCTION

// FUNCTION: 0x10109470 size=0x40
#include "Vector.h"

void sub_101094e0(Vector *pVec, int arg);

// TARGET: sub_10109470
void sub_10109470(const Vector *pVec, int arg)
{
    Vector tmp;
    tmp.x = pVec->y * 57.29578f;
    tmp.y = pVec->z * 57.29578f;
    tmp.z = pVec->x * 57.29578f;
    sub_101094e0(&tmp, arg);
}
// END FUNCTION

// FUNCTION: 0x101094b0 size=0x22
void __cdecl sub_101094e0(int a, int b);
void __cdecl sub_10108540(int a, int b, int c);

// TARGET: sub_101094b0
void __cdecl sub_101094b0(int a, int b, int c)
{
    sub_101094e0(a, c);
    sub_10108540(b, 3, c);
}
// END FUNCTION

// FUNCTION: 0x10109910 size=0x33
// TARGET: sub_10109910
#include <math.h>
extern float g_104d4d8c[];

void sub_10109910()
{
    int i = 0;
    float *p = &g_104d4d8c[0];
    do {
        double v = pow(2.0, (double)(i - 128)) * 0.00392156862745098;
        i++;
        p[i] = (float)v;
    } while (i < 256);
}
// END FUNCTION

// FUNCTION: 0x10109e90 size=0x6b
#include "Vector.h"

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm {
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

// TARGET: sub_10109e90
void sub_10109e90(const Vector &in, float yaw, Vector &out)
{
	float cy;
	SinCos(yaw * 0.017453292f, &yaw, &cy);
	float x = in.x;
	float y = in.y;
	out.x = x * cy - y * yaw;
	float a = x * yaw;
	out.y = a + y * cy;
	out.z = in.z;
}
// END FUNCTION

// FUNCTION: 0x1010a020 size=0x82
#include "Quaternion.h"

void sub_1010a020(const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	int i;
	float a = 0;
	float b = 0;
	for (i = 0; i < 4; i++) {
		a += (p[i] - q[i]) * (p[i] - q[i]);
		b += (p[i] + q[i]) * (p[i] + q[i]);
	}
	if (a > b) {
		for (i = 0; i < 4; i++)
			qt[i] = -q[i];
	} else if (&qt != &q) {
		for (i = 0; i < 4; i++)
			qt[i] = q[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010a0b0 size=0x35
void sub_1010a020(int a, int b, void *pOut);
void sub_1010a0f0(int a, void *pIn, int c, int d);

// TARGET: sub_1010a0b0
void sub_1010a0b0(int a, int b, int c, int d)
{
    char local[16];
    sub_1010a020(a, b, local);
    sub_1010a0f0(a, local, c, d);
}
// END FUNCTION

// FUNCTION: 0x1010a0f0 size=0x4a
#include "Quaternion.h"
float sub_1010a2b0(Quaternion &q);
void sub_1010a0f0(const Quaternion &p, const Quaternion &q, float t, Quaternion &qt)
{
	float sclp, sclq;
	int i;
	sclp = 1.0f - t;
	sclq = t;
	for (i = 0; i < 4; i++)
	{
		qt[i] = sclp * p[i] + sclq * q[i];
	}
	sub_1010a2b0(qt);
}
// END FUNCTION

// FUNCTION: 0x1010a140 size=0x35
void sub_1010a020(int a, int b, void *pOut);
void sub_1010a180(int a, void *pIn, int c, int d);

// TARGET: sub_1010a140
void sub_1010a140(int a, int b, int c, int d)
{
    char local[16];
    sub_1010a020(a, b, local);
    sub_1010a180(a, local, c, d);
}
// END FUNCTION

// FUNCTION: 0x1010a180 size=0x12a
#include "Quaternion.h"
#include <math.h>

// TARGET: sub_1010a180
void sub_1010a180(const Quaternion &p, const Quaternion &q, float t, Quaternion &qt)
{
	float omega, cosom, sinom, sclp, sclq;
	int i;

	cosom = p[0] * q[0] + p[1] * q[1] + p[2] * q[2] + p[3] * q[3];

	if ((1.0f + cosom) > 0.000001f) {
		if ((1.0f - cosom) > 0.000001f) {
			omega = acos(cosom);
			sinom = sin(omega);
			sclp = sin((1.0f - t) * omega) / sinom;
			sclq = sin(t * omega) / sinom;
		} else {
			sclp = 1.0f - t;
			sclq = t;
		}
		for (i = 0; i < 4; i++)
			qt[i] = sclp * p[i] + sclq * q[i];
	} else {
		qt[0] = -q[1];
		qt[1] = q[0];
		qt[2] = -q[3];
		qt[3] = q[2];
		sclp = sin((1.0f - t) * (0.5f * 3.14159265358979323846));
		sclq = sin(t * (0.5f * 3.14159265358979323846));
		for (i = 0; i < 3; i++)
			qt[i] = sclp * p[i] + sclq * qt[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010a2b0 size=0x61
#include <math.h>
float sub_1010a2b0(float *q)
{
	float radius, iradius;
	radius = q[3] * q[3] + q[2] * q[2] + q[1] * q[1] + q[0] * q[0];
	if (radius) {
		radius = sqrt(radius);
		iradius = 1.0f / radius;
		q[3] *= iradius;
		q[2] *= iradius;
		q[1] *= iradius;
		q[0] *= iradius;
	}
	return radius;
}
// END FUNCTION

// FUNCTION: 0x1010a420 size=0x25
// TARGET: sub_1010a420
float sub_1010a420(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];
}
// END FUNCTION

// FUNCTION: 0x1010a450 size=0xed
#include "Quaternion.h"

void sub_1010a020(const Quaternion &p, const Quaternion &q, Quaternion &qt);
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt);

// TARGET: sub_1010a450
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	if (&p == &qt)
	{
		Quaternion p2 = p;
		sub_1010a450(p2, q, qt);
		return;
	}
	else
	{
		Quaternion q2;
		sub_1010a020(p, q, q2);

		qt.x = q2.z * p.y + q2.w * p.x - q2.y * p.z + q2.x * p.w;
		qt.y = q2.x * p.z - q2.z * p.x + q2.w * p.y + q2.y * p.w;
		qt.z = q2.y * p.x - q2.x * p.y + q2.w * p.z + q2.z * p.w;
		qt.w = q2.w * p.w - (q2.y * p.y + q2.z * p.z + q2.x * p.x);
	}
}
// END FUNCTION

// FUNCTION: 0x1010a540 size=0x2a
void sub_1010a570(int a, void *p);

void sub_1010a540(int a1, int *pSrc, char *pDst)
{
    sub_1010a570(a1, pDst);
    *(int *)(pDst + 0xc) = pSrc[0];
    *(int *)(pDst + 0x1c) = pSrc[1];
    *(int *)(pDst + 0x2c) = pSrc[2];
}
// END FUNCTION

// FUNCTION: 0x1010a570 size=0xdb
struct Q { float x, y, z, w; };
void sub_1010a570(const Q &q, float *m)
{
    m[0] = 1.0 - 2.0 * q.y * q.y - 2.0 * q.z * q.z;
    m[4] = 2.0 * q.x * q.y + 2.0 * q.w * q.z;
    m[8] = 2.0 * q.x * q.z - 2.0 * q.w * q.y;
    m[1] = 2.0 * q.x * q.y - 2.0 * q.w * q.z;
    m[5] = 1.0f - 2.0f * q.x * q.x - 2.0f * q.z * q.z;
    m[9] = 2.0 * q.y * q.z + 2.0 * q.w * q.x;
    m[2] = 2.0 * q.x * q.z + 2.0 * q.w * q.y;
    m[6] = 2.0 * q.y * q.z - 2.0 * q.w * q.x;
    m[10] = 1.0f - 2.0f * q.x * q.x - 2.0f * q.y * q.y;
}
// END FUNCTION

// FUNCTION: 0x1010a650 size=0x40
#include "Vector.h"
#include "QAngle.h"

#define DEG2RAD(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))

struct SRadianEuler
{
	SRadianEuler(const QAngle &angles)
	{
		Init(DEG2RAD(angles.z), DEG2RAD(angles.x), DEG2RAD(angles.y));
	}
	void Init(float ix, float iy, float iz) { x = ix; y = iy; z = iz; }
	float x, y, z;
};
void sub_1010a790(const SRadianEuler &ang, float *pQuat);

// TARGET: sub_1010a650
void sub_1010a650(const QAngle &angles, float *pQuat)
{
	SRadianEuler radians(angles);
	sub_1010a790(radians, pQuat);
}
// END FUNCTION

// FUNCTION: 0x1010a690 size=0x25
#include "QAngle.h"
#include "matrix3x4_t.h"
struct Q;
struct matrix3x4_t;
class QAngle;

void sub_1010a570(const Q &q, float *out);
void sub_10107eb0(const matrix3x4_t &m, QAngle &ang);

// TARGET: sub_1010a690
void sub_1010a690(const Q &q, QAngle &ang)
{
    float m[12];
    sub_1010a570(q, m);
    sub_10107eb0(reinterpret_cast<const matrix3x4_t &>(m), ang);
}
// END FUNCTION

// FUNCTION: 0x1010a720 size=0x68
#include "Vector.h"

struct Quaternion
{
	float x, y, z, w;
};

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm {
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

// TARGET: sub_1010a720
void sub_1010a720(const Vector &axis, float angle, Quaternion &q)
{
	float ca;
	float rad = angle * 0.017453292f;
	SinCos(rad * 0.5f, &angle, &ca);
	q.x = axis.x * angle;
	q.y = axis.y * angle;
	q.z = axis.z * angle;
	q.w = ca;
}
// END FUNCTION

// FUNCTION: 0x1010a930 size=0x4c
void sub_1010a570(const float *q, float *mat);
void sub_10107eb0(const float *mat, float *angles);

void sub_1010a930(const float *q, float *angles)
{
	float mat[12];
	sub_1010a570(q, mat);
	sub_10107eb0(mat, angles);
	float a = angles[1] * 0.017453292f;
	float b = angles[0] * 0.017453292f;
	float c = angles[2] * 0.017453292f;
	angles[0] = c;
	angles[1] = b;
	angles[2] = a;
}
// END FUNCTION

// FUNCTION: 0x1010ba80 size=0x56
#include "Vector.h"
void sub_1010ba80(const Vector &a, const Vector &v, const Vector &c, Vector &out)
{
	for (int i = 0; i < 3; i++) {
		if (c[i] < a[i])
			out[i] = a[i];
		else if (c[i] > v[i])
			out[i] = v[i];
		else
			out[i] = c[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010bc90 size=0x85
#include "Vector.h"
float sub_1010bae0(const Vector &a, const Vector &b, const Vector &c, Vector &out);
void sub_1010bc90(const Vector &a, const Vector &b, const Vector &c, Vector &out, float *pT)
{
	Vector d;
	float t = sub_1010bae0(a, b, c, d);
	if (t > 1.0f)
		t = 1.0f;
	else if (t < 0.0f)
		t = 0.0f;
	if (pT)
		*pT = t;
	out.x = d.x * t + b.x;
	out.y = d.y * t + b.y;
	out.z = d.z * t + b.z;
}
// END FUNCTION

// FUNCTION: 0x1010c2e0 size=0x3f
// TARGET: sub_1010c2e0
float sub_1010c2e0(float a, float b, float c)
{
    if (a - b > c) {
        return b + c;
    }
    if (a - b < -c) {
        return b - c;
    }
    return a;
}
// END FUNCTION

// FUNCTION: 0x1010c320 size=0xe1
extern float g_101e34fc;
extern float g_101e34f8;

static inline float anglemod(float a)
{
    a = g_101e34f8 * ((int)(a * g_101e34fc) & 65535);
    return a;
}

// TARGET: sub_1010c320
float sub_1010c320(float target, float value, float speed)
{
    target = anglemod(target);
    value = anglemod(value);
    float delta = target - value;
    if (speed < 0)
        speed = -speed;
    if (delta <= -180) {
        while (delta <= -180)
            delta += 360;
    } else {
        while (delta > 180)
            delta -= 360;
    }
    if (delta > speed)
        value += speed;
    else if (delta < -speed)
        value -= speed;
    else
        value = target;
    return value;
}
// END FUNCTION

// FUNCTION: 0x1010c410 size=0x5f
float sub_1010c410(float a, float b)
{
    float d = a - b;
    if (a > b) {
        while (d > 180.0f)
            d -= 360.0f;
    } else {
        while (d <= -180.0f)
            d += 360.0f;
    }
    return d;
}
// END FUNCTION

// FUNCTION: 0x1010c470 size=0x32
float __cdecl sub_1010c470(float a, float b)
{
    float d = a - b;
    if (d <= -180.0f) {
        return d + 360.0f;
    }
    if (d > 180.0f) {
        d = d - 360.0f;
    }
    return d;
}
// END FUNCTION

// FUNCTION: 0x1010c4b0 size=0x49
float sub_1010c4b0(float angle)
{
	while (angle > 180.0f)
		angle -= 360.0f;
	while (angle <= -180.0f)
		angle += 360.0f;
	return angle;
}
// END FUNCTION

// FUNCTION: 0x1010c500 size=0xa8
#include "Vector.h"
extern float g_101e34f0;

namespace block_1013d6c0 {
float sub_1010c410(float dest, float src)
{
	float delta = dest - src;
	if (dest > src)
	{
		while (delta > 180.0f)
			delta -= 360.0f;
	}
	else
	{
		while (delta <= -180.0f)
			delta += 360.0f;
	}
	return delta;
}
}
using namespace block_1013d6c0;

// TARGET: sub_1010c500
void sub_1010c500(const Vector &p1, const Vector &p2, float t, Vector &out)
{
	if (t > g_101e34f0 && t < 1.0f)
	{
		out.x = sub_1010c410(p2[0], p1[0]) * t + p1[0];
		out.y = sub_1010c410(p2[1], p1[1]) * t + p1[1];
		out.z = sub_1010c410(p2[2], p1[2]) * t + p1[2];
	}
	else
	{
		VectorCopy(t > g_101e34f0 ? p2 : p1, out);
	}
}
// END FUNCTION

// FUNCTION: 0x1010df80 size=0x33
struct CAccum64View {
    char pad0[8];
    __int64 m_qwA;
    char pad1[8];
    __int64 m_qwB;
    void sub_1010df80(const __int64 *pValue);
};

// TARGET: CAccum64View::sub_1010df80
void CAccum64View::sub_1010df80(const __int64 *pValue)
{
    m_qwA += *pValue;
    m_qwB += *pValue;
}
// END FUNCTION

// FUNCTION: 0x1010e290 size=0x3c
#include "Pool.h"
// TARGET: Pool::sub_1010e290
Pool *Pool::sub_1010e290(unsigned int cbItem, unsigned int nItemsPerBlock, unsigned int nMode)
{
	if (cbItem < 4)
		cbItem = 4;
	m_cbItem = cbItem;
	m_nItemsPerBlock = nItemsPerBlock;
	m_nMode = nMode;
	m_nPeak = 0;
	sub_1010e2f0();
	sub_1010e360(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010e340 size=0x18
extern void (__cdecl *g_104df710)(const char *, int);

struct CUnk1013db80 {
    char pad[0x20];
    int m_20;
    void sub_1010e340();
};

void CUnk1013db80::sub_1010e340()
{
    if (g_104df710)
        g_104df710("Memory leak: mempool blocks left in memory: %d\n", m_20);
}
// END FUNCTION

// FUNCTION: 0x1010e3e0 size=0x53
struct Pool {
    unsigned int m_size;
    int m_f4;
    int m_mode;
    int m_f0c[4];
    void *m_pFree;
    int m_nUsed;
    int m_nPeak;
    unsigned int pad;
    unsigned int *sub_1010e3e0(unsigned int n);
};
void __fastcall sub_1010e360(Pool *p);
// TARGET: Pool::sub_1010e3e0
unsigned int *Pool::sub_1010e3e0(unsigned int n)
{
    if (n > m_size)
        return 0;
    unsigned int *p = (unsigned int *)m_pFree;
    if (!p) {
        if (!m_mode)
            return 0;
        sub_1010e360(this);
        p = (unsigned int *)m_pFree;
        if (!p)
            return 0;
    }
    m_nUsed++;
    m_nPeak = m_nPeak > m_nUsed ? m_nPeak : m_nUsed;
    m_pFree = (void *)*p;
    return p;
}
// END FUNCTION

// FUNCTION: 0x1010f390 size=0x4b
struct SCopy {
    int a, b, c, d;
    char e, f;
    char g[2];
    SCopy &sub_1010f390(const SCopy &o);
};
SCopy &SCopy::sub_1010f390(const SCopy &o)
{
    a = o.a; b = o.b; c = o.c; d = o.d;
    e = o.e; f = o.f;
    for (unsigned i = 0; i < 2; i++)
        g[i] = o.g[i];
    return *this;
}
// END FUNCTION

// FUNCTION: 0x1010f870 size=0x42
#include "CUtlVector96.h"
extern "C" void *memmove(void *, const void *, unsigned int);

void CUtlVector96::sub_1010f870(int elem, int num)
{
    int numToMove = m_size - elem - num;
    if (numToMove > 0 && num > 0)
        memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * sizeof(UtlElem96));
}
// END FUNCTION

// FUNCTION: 0x10112250 size=0x19
struct E101b6b60 { unsigned short a; unsigned short pad; int b; };

// TARGET: sub_10112250
void sub_10112250(E101b6b60 *dst, const E101b6b60 *src)
{
	if (dst) {
		dst->a = src->a;
		dst->b = src->b;
	}
}
// END FUNCTION

// FUNCTION: 0x10112270 size=0x116
#include "utlmemory.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CUnknown10249fc0_Entry { int m_n0; int m_nKey; };
#include "CUtlRBTree16.h"
extern void *(*g_101e3104)(void *, unsigned int);
extern void *(*g_101e3100)(unsigned int);
struct Mem16 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void Grow(int num)
    {
        if (m_nGrowSize == -1)
            return;
        int a = *(int *)&m_nAllocationCount;
        int nAllocationRequested = a + num;
        if (a < nAllocationRequested) {
            do {
                if (a != 0) {
                    if (m_nGrowSize != 0)
                        a += m_nGrowSize;
                    else
                        a += a;
                } else
                    a = 2;
            } while (a < nAllocationRequested);
            m_nAllocationCount = a;
        }
        if (m_pMemory)
            m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount << 4);
        else
            m_pMemory = g_101e3100(m_nAllocationCount << 4);
    }
};
unsigned short CUtlRBTree16::sub_10112270()
{
    const CUtlRBTree16Of<CUnknown10249fc0_Entry> *tree = (const CUtlRBTree16Of<CUnknown10249fc0_Entry> *)this;
    unsigned short elem;
    if (m_FirstFree == InvalidIndex()) {
        if (m_unk8 == m_TotalElements)
            ((Mem16 *)&m_pElements)->Grow(1);
        elem = m_TotalElements++;
    } else {
        elem = m_FirstFree;
        m_FirstFree = tree->Links(m_FirstFree).m_Right;
    }
    unsigned short *p = (unsigned short *)&m_pElements[elem].m_Data;
    if (p)
        *p = 0xffff;
    return elem;
}
// END FUNCTION

// FUNCTION: 0x10117ba0 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_10117ba0(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x10117c70 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_10117c70(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x10117d00 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10117d00
	void sub_10117d00(int num);
};

void CMem8b_t::sub_10117d00(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10119d90 size=0x6b
#include "matrix3x4_t.h"
#include <math.h>

void sub_10108510(const matrix3x4_t &mat, int iCol, Vector &out);

int sub_10119d90(const matrix3x4_t &mat, const Vector &dir)
{
	int iBest = 0;
	float flBest = -1.0f;
	for (int i = 0; i < 3; i++) {
		Vector axis;
		sub_10108510(mat, i, axis);
		float flDot = fabs(DotProduct(axis, dir));
		if (flDot > flBest) {
			flBest = flDot;
			iBest = i;
		}
	}
	return iBest;
}
// END FUNCTION

// FUNCTION: 0x10119f70 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10119f70
	void sub_10119f70(int num);
};

void CMem8b_t::sub_10119f70(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10119fe0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10119fe0(int num);
};

void CUtlMemory12::sub_10119fe0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x1011a2c0 size=0xfb
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct SImpactRec {
    int m_a;
    int m_b;
    int m_c;
    int m_d;
    float m_f;
    unsigned short m_key;
    unsigned short m_s;
};

struct S10032fb0 {
    SImpactRec *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    int m_Size;
    SImpactRec *m_pElements;
    void sub_1011a3c0(int num);

    SImpactRec &Element(int i) { return m_pMemory[i]; }
    void GrowVector(int num)
    {
        if (m_Size + num > m_nAllocationCount)
            sub_1011a3c0(m_Size + num - m_nAllocationCount);
        m_Size += num;
        m_pElements = m_pMemory;
    }
    void ShiftElementsRight(int elem, int num)
    {
        int numToMove = m_Size - elem - num;
        if (numToMove > 0)
            memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(SImpactRec));
    }
    int InsertBefore(int elem)
    {
        GrowVector(1);
        ShiftElementsRight(elem, 1);
        return elem;
    }
};

void sub_1011a2c0(S10032fb0 *pVec, int a, int b, int c, int d, unsigned int key, unsigned short s, float f)
{
    for (int i = pVec->m_Size - 1; i >= 0; i--) {
        SImpactRec &rec = pVec->Element(i);
        if (key == rec.m_key) {
            if (f > rec.m_f) {
                rec.m_d = d;
                rec.m_a = a;
                rec.m_b = b;
                rec.m_c = c;
                rec.m_s = s;
            }
            rec.m_f += f;
            return;
        }
    }
    int idx = pVec->InsertBefore(pVec->m_Size);
    SImpactRec &rec = pVec->Element(idx);
    rec.m_a = a;
    rec.m_b = b;
    rec.m_c = c;
    rec.m_d = d;
    rec.m_key = (unsigned short)key;
    rec.m_s = s;
    rec.m_f = f;
}
// END FUNCTION

// FUNCTION: 0x1011a3c0 size=0x6a
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S10032fb0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_1011a3c0(int num);
};
// TARGET: S10032fb0::sub_1011a3c0
void S10032fb0::sub_1011a3c0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 2;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 0x18);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 0x18);
}
// END FUNCTION

// FUNCTION: 0x1011b1d0 size=0x77
#include "CDataObjectAccessSystem.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

void CDataObjectAccessSystem::sub_1011b1d0(int index, void *pData)
{
    g_101e3124[*g_101e3128].name = "CDataObjectAccessSystem::AddDataAccessor";
    g_101e3124[*g_101e3128].ent = g_102de300;
    g_101e3124[*g_101e3128].extra = g_102de300;
    ++*g_101e3128;
    if (index >= 0 && index < 32 && m_data[index] == 0)
        m_data[index] = pData;
    --*g_101e3128;
}
// END FUNCTION

// FUNCTION: 0x1011ecd0 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011ecd0(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011ed80 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011ed80(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011ee30 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011ee30(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011eee0 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011eee0(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f020 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f020()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f050 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f050()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f110 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f110()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f140 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f140()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f200 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f200()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f230 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f230()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f2f0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f2f0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f320 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f320()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f350 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011f490(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011f350(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fd10(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011f490(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f490 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011f550(int num);
	// TARGET: CMem8c_t::sub_1011f490
	int sub_1011f490(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011f490(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011f550(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f550 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011f550
	void sub_1011f550(int num);
};

void CMem8b_t::sub_1011f550(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011f5c0 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011f700(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011f5c0(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fd80(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011f700(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f700 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011f7c0(int num);
	// TARGET: CMem8c_t::sub_1011f700
	int sub_1011f700(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011f700(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011f7c0(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f7c0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011f7c0
	void sub_1011f7c0(int num);
};

void CMem8b_t::sub_1011f7c0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011f830 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011f970(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011f830(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fdf0(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011f970(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f970 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011fa30(int num);
	// TARGET: CMem8c_t::sub_1011f970
	int sub_1011f970(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011f970(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011fa30(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011fa30 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011fa30
	void sub_1011fa30(int num);
};

void CMem8b_t::sub_1011fa30(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011faa0 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011fbe0(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011faa0(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fe60(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011fbe0(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011fbe0 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011fca0(int num);
	// TARGET: CMem8c_t::sub_1011fbe0
	int sub_1011fbe0(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011fbe0(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011fca0(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011fca0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011fca0
	void sub_1011fca0(int num);
};

void CMem8b_t::sub_1011fca0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011fd10 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fd10(int num);
};

void CUtlMemory20::sub_1011fd10(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1011fd80 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fd80(int num);
};

void CUtlMemory20::sub_1011fd80(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1011fdf0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fdf0(int num);
};

void CUtlMemory20::sub_1011fdf0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x101201c0 size=0x6a
#include <malloc.h>

struct IRestoreSrc {
    virtual int StartBlock(int a, const char *name, int c);
    virtual void EndBlock(int h);
    virtual void ReadBytes(char *buf, int size, int h);
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int BlockSize(int h);
};
struct IFieldSink {
    virtual void v0();
    virtual void SetString(int a, const char *s);
};
extern char g_102b6618[];

void sub_101201c0(int a, IFieldSink *sink, IRestoreSrc *src)
{
    int h = src->StartBlock(a, g_102b6618, 0);
    if (h) {
        int size = src->BlockSize(h);
        char *buf = (char *)_alloca(size + 1);
        src->ReadBytes(buf, size, h);
        src->EndBlock(h);
        buf[size] = 0;
        sink->SetString(a, buf);
    }
}
// END FUNCTION

// FUNCTION: 0x10120660 size=0x24
class IPlaceholder10158c00
{
public:
	virtual void vfunc0();
	virtual void vfunc1(int a, int b);
};
extern IPlaceholder10158c00 *g_104e0c98;
void sub_10120560(int a, int b);

// TARGET: sub_10120660
void sub_10120660(int a, int b)
{
    g_104e0c98->vfunc1(a, b);
    sub_10120560(a, b);
}
// END FUNCTION

// FUNCTION: 0x10120730 size=0x25
struct CUnknown109ef590
{
    int m_a;
    int m_b;
    int m_c[0x200];
};

extern CUnknown109ef590 g_104e0ca0;

// TARGET: sub_10120730
void sub_10120730()
{
    g_104e0ca0.m_a = -1;
    g_104e0ca0.m_b = 0;
    for (int i = 0; i < 0x200; i++)
        g_104e0ca0.m_c[i] = 0;
}
// END FUNCTION

// FUNCTION: 0x101209c0 size=0x1b
// TARGET: sub_101209c0
struct CUnk1042da10 {
    unsigned int m_flags;
    void sub_101209c0(char bSet);
};
void CUnk1042da10::sub_101209c0(char bSet)
{
    m_flags = ((((bSet != 0) ^ m_flags) & 1) ^ m_flags);
}
// END FUNCTION

// FUNCTION: 0x101271e0 size=0x7d
struct IApi {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(void *p);
    virtual void v21(); virtual void v22();
    virtual void v23(void *p);
    virtual void v24(void *p);
};
extern IApi *g_104e0c90;
struct Item24 { int a; int b; int c; int d; int e; int f; };
struct Block {
    int count;
    void *m_p;
    int pad[2];
    int m_u14;
    Item24 items[1];
};
void sub_101271e0(int *s)
{
    int *b = s;
    if (*b != 0) {
        int i = 0;
        int *p;
        if (0 < *b) {
            p = b + 6;
            do {
                g_104e0c90->v23((void *)*p);
                *p = 0;
                i++;
                p += 6;
            } while (i < *b);
        }
        i = 0;
        if (0 < *b) {
            p = b + 5;
            do {
                g_104e0c90->v20((void *)*p);
                *p = 0;
                i++;
                p += 6;
            } while (i < *b);
        }
        g_104e0c90->v24((void *)b[1]);
        b[1] = 0;
        *b = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10127320 size=0x87
#include "Vector.h"
struct CRagdollBoneMatrix { float m_f[12]; };
struct CRagdollPhysObject
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
	virtual void vfunc38(const CRagdollBoneMatrix *pMatrix);
};
struct CRagdollElement
{
	char m_pad0000[0xc];
	CRagdollPhysObject *m_pObject;	// 0x0c
	char m_pad0010[4];
	int m_iParent;	// 0x14
};
struct CRagdollLayout
{
	char m_pad0000[8];
	CRagdollElement m_elements[1];	// 0x08, 0x18 bytes each
};
struct CRagdollStudio { char m_pad0000[4]; CRagdollBoneMatrix *m_pBones; };
void sub_10107f80(CRagdollElement *pElem, const CRagdollBoneMatrix *pParent, Vector *pOut);
void sub_10108540(Vector *pIn, int axes, CRagdollBoneMatrix *pMatrix);
bool sub_10127320(CRagdollLayout *pRagdoll, CRagdollStudio *pStudio, int index)
{
	int bone = ((int *)((char *)pRagdoll + 0x2d8))[index];
	if (bone < 0)
		return false;
	CRagdollElement *pElem = &pRagdoll->m_elements[index];
	pElem->m_pObject->vfunc38(&pStudio->m_pBones[bone]);
	if (pElem->m_iParent >= 0) {
		Vector v;
		int parentBone = ((int *)((char *)pRagdoll + 0x2d8))[pElem->m_iParent];
		sub_10107f80(pElem, &pStudio->m_pBones[parentBone], &v);
		sub_10108540(&v, 3, &pStudio->m_pBones[bone]);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101273b0 size=0x116
#include "QAngle.h"
#include "Vector.h"
struct CPhysCollide;
struct SBoundsObj {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36();
	virtual void GetPosition(Vector *pos, QAngle *ang);
	virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42();
	virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48();
	virtual const CPhysCollide *GetCollide();
};
struct SBoundsEntry {
	SBoundsObj *m_pObj;
	int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14;
};
struct SBoundsList {
	int m_nCount;
	int m_unk4; int m_unk8; int m_unkc; int m_unk10;
	SBoundsEntry m_Entries[1];
};
struct SBoundsCollision {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17();
	virtual void CollideGetAABB(Vector &mins, Vector &maxs, const CPhysCollide *pCollide, const Vector &origin, const QAngle &angles);
};
extern SBoundsCollision *g_104e0c8c;

void sub_101273b0(SBoundsList *pList, const Vector &origin, Vector &mins, Vector &maxs)
{
	mins = origin;
	maxs = origin;
	for (int i = 0; i < pList->m_nCount; i++) {
		SBoundsObj *pObj = pList->m_Entries[i].m_pObj;
		Vector pos;
		QAngle ang;
		pObj->GetPosition(&pos, &ang);
		Vector lo, hi;
		g_104e0c8c->CollideGetAABB(lo, hi, pObj->GetCollide(), pos, ang);
		for (int k = 0; k < 3; k++) {
			if (lo[k] < mins[k]) mins[k] = lo[k];
			if (hi[k] > maxs[k]) maxs[k] = hi[k];
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10127830 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_10127830
	void sub_10127830(int num);
};

void CMem16_t::sub_10127830(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x101279a0 size=0x51
#include "CUnknown10248a50.h"
#include <string.h>
extern char g_104e23f8;
void CUnknown10248a50::sub_101279a0(const char *pszName)
{
    if (pszName) {
        m_pszName = new char[strlen(pszName) + 1];
        strcpy(m_pszName, pszName);
    } else {
        m_pszName = 0;
    }
    m_pSub = 0;
    m_pPeer = 0;
    m_pszString = 0;
    *(int *)&m_pad0018 = 0;
    g_104e23f8 = 0;
}
// END FUNCTION

// FUNCTION: 0x10127df0 size=0x23
extern int g_104e3438;
int sub_100e3130(int a, void *b, int c);

// TARGET: sub_10127df0
void *sub_10127df0(int *p, int value)
{
    *p = sub_100e3130(*p, &g_104e3438, value);
    return &g_104e3438;
}
// END FUNCTION

// FUNCTION: 0x10128270 size=0x70
struct CLinkNode1c {
    char m_pad[0x10];
    CLinkNode1c *m_pNext;
    char m_pad14[8];
    CLinkNode1c *sub_101278a0(int a);
    CLinkNode1c *sub_101283b0();
    void sub_101283c0(CLinkNode1c *pNext);
};
struct CLinkList {
    char m_pad[0x14];
    CLinkNode1c *m_pHead;
    CLinkNode1c *sub_10128270(int a);
};

CLinkNode1c *CLinkList::sub_10128270(int a)
{
    void *mem = operator new(0x1c);
    CLinkNode1c *pNode = mem ? ((CLinkNode1c *)mem)->sub_101278a0(a) : 0;
    CLinkNode1c *p = m_pHead;
    if (!p) {
        m_pHead = pNode;
        pNode->m_pNext = p;
        return pNode;
    }
    while (p->sub_101283b0())
        p = p->sub_101283b0();
    p->sub_101283c0(pNode);
    pNode->m_pNext = 0;
    return pNode;
}
// END FUNCTION

// FUNCTION: 0x10128540 size=0x4f
#include "CKeyValuesX.h"
extern "C" double __cdecl atof(const char *);
float CKeyValuesX::sub_10128540(const char *pszKey, float flDefault)
{
	CKeyValuesX *pKey = this;
	if (pszKey)
		pKey = sub_101282e0(pszKey, 0);
	if (pKey) {
		switch (pKey->m_iDataType) {
		case 0:
			return (float)atof(pKey->m_sValue);
		case 1:
			return (float)pKey->m_nValue;
		case 2:
			return pKey->m_flValue;
		default:
			return 0.0f;
		}
	}
	return flDefault;
}
// END FUNCTION

// FUNCTION: 0x10128b60 size=0x1f
namespace lifted {
extern int g_102c3368;
struct C100086a7 { int sub_1012c770(int, int, int, int, int); };
}
struct CUnknown10249470 { int sub_10128b60(int); };
int CUnknown10249470::sub_10128b60(int a0)
{
    return ((lifted::C100086a7 *)(this + 0x20))->sub_1012c770(*(int *)((char *)this + 8), *(int *)((char *)this + 0xc), (int)this, a0, lifted::g_102c3368);
}
// END FUNCTION

// FUNCTION: 0x10128d80 size=0x4d
struct SFuncField {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    void *pSaveRestoreOps;
    int inputFunc;
    void *td;
    int fieldSizeInBytes;
    int unk;
};
struct SFuncMap {
    SFuncField *dataDesc;
    int dataNumFields;
    const char *dataClassName;
    SFuncMap *baseMap;
};
const char *sub_10128d80(SFuncMap *pMap, int pFunc)
{
    for (; pMap; pMap = pMap->baseMap) {
        for (int i = 0; i < pMap->dataNumFields; i++) {
            if ((pMap->dataDesc[i].flags & 0x20) && pMap->dataDesc[i].inputFunc == pFunc)
                return pMap->dataDesc[i].fieldName;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129250 size=0xf7
#include "datamap.h"
#include "CSave.h"

struct SaveRestoreFieldInfoX {
	void *pField;
	void *pOwner;
	typedescription_t *pTypeDesc;
};

struct ISaveRestoreOpsX {
	virtual void v0();
	virtual void v1();
	virtual bool IsEmpty(const SaveRestoreFieldInfoX &fieldInfo);
};

extern int g_102c34b8[];

bool CSave::sub_10129250(void *pData, typedescription_t *pField)
{
	int type;
	if ((pField->flags & 2) && (type = pField->fieldType) != 0) {
		if (type == 9) {
			void *pEmbedded = !(pField->flags & 0x40) ? pData : *(void **)pData;
			typedescription_t *pTest = pField->td->dataDesc;
			typedescription_t *pLimit = pTest + pField->td->dataNumFields;
			if (pTest < pLimit) {
				bool r;
				do {
					r = sub_10129250((char *)pEmbedded + pTest->fieldOffset[0], pTest);
					if (r)
						goto yes;
					pTest++;
				} while (pTest < pLimit);
				return r;
			}
		} else if (type == 10) {
			SaveRestoreFieldInfoX fieldInfo = { pData, (char *)pData - pField->fieldOffset[0], pField };
			if (!((ISaveRestoreOpsX *)pField->pSaveRestoreOps)->IsEmpty(fieldInfo))
				goto yes;
		} else if (type == 12) {
			if (!sub_10129800(pData, (short)pField->fieldSize * 4))
				goto yes;
		} else {
			if (sub_10129800(pData, g_102c34b8[type] * (short)pField->fieldSize))
				return false;
			goto yes;
		}
	}
	return false;
yes:
	return true;
}
// END FUNCTION

// FUNCTION: 0x10129560 size=0x4c
#include "CSave.h"

class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	ISaveRestoreOps *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
	int fieldSizeInBytes;
	int unk;
};

int CSave::sub_10129560(const void *pBaseData, typedescription_t *pFields, int nFields)
{
	int nNonEmpty = 0;
	for (int i = 0; i < nFields; i++) {
		if (sub_10129250((char *)pBaseData + pFields[i].fieldOffset[0], &pFields[i]))
			nNonEmpty++;
	}
	return nNonEmpty;
}
// END FUNCTION

// FUNCTION: 0x10129640 size=0x47
#include "CSave.h"
struct CSaveDesc { int m_n0, m_n4, m_n8; CSaveDesc *m_pParent; };
int CSave::sub_10129640(int a, int b, CSaveDesc *p)
{
    if (p->m_pParent) {
        if (!sub_10129640(a, b, p->m_pParent))
            return 0;
    }
    return vfunc3(p->m_n8, a, b, p->m_n0, p->m_n4);
}
// END FUNCTION

// FUNCTION: 0x10129800 size=0x26
// TARGET: sub_10129800
int __stdcall sub_10129800(const char *pBytes, int nBytes)
{
	for (int i = 0; i < nBytes; i++) {
		if (pBytes[i] != 0)
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10129830 size=0x25
#include "CSave.h"

// TARGET: sub_10129830
void CSave::sub_10129830(int a, int bytes, int b)
{
    sub_10129860((const void *)a, bytes);
    sub_101299c0((const void *)b, bytes);
}
// END FUNCTION

// FUNCTION: 0x10129860 size=0x153
#include "CSave.h"
#include <string.h>
#include <stdlib.h>
#pragma intrinsic(_rotr)

extern void (*g_101e3114)(const char *fmt, ...);	// Warning

struct CSaveTokenData
{
	char m_pad[0x10];
	int m_nTokenCount;
	const char **m_pTokens;
};

struct CSaveBuf
{
	char m_pad[0x18];
	CSaveTokenData *m_pdata;

	int TokenHash(const char *pszToken)
	{
		CSaveTokenData *pdata = m_pdata;
		unsigned int hash = 0;
		for (const char *q = pszToken; *q; q++)
			hash = _rotr(hash, 4) ^ (int)*q;

		unsigned short start = (unsigned short)(hash % pdata->m_nTokenCount);
		for (int i = 0; i < pdata->m_nTokenCount; i++)
		{
			int index = start + i;
			if (index >= pdata->m_nTokenCount)
				index -= pdata->m_nTokenCount;
			if (!pdata->m_pTokens[index] || strcmp(pszToken, pdata->m_pTokens[index]) == 0)
			{
				pdata->m_pTokens[index] = pszToken;
				return index;
			}
		}
		g_101e3114("CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!");
		return 0;
	}
};

// TARGET: CSave::sub_10129860
void CSave::sub_10129860(const void *p, int a)
{
	int size = a;
	int token = ((CSaveBuf *)this)->TokenHash((const char *)p);
	if (a > 0x7fff || a < 0)
		g_101e3114("CSave::WriteHeader() size parameter exceeds 'short'!");
	sub_101299c0(&size, 2);
	sub_101299c0(&token, 2);
}
// END FUNCTION

// FUNCTION: 0x1012a060 size=0x110
#include "CSave.h"

struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    void *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern void (*g_101e3114)(const char *, ...);

bool CSave::sub_1012a060(int a, void *pData, void *pBase, typedescription_t *pField)
{
    switch (pField->fieldType) {
    case 0xb:
        vfunc33(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xd:
        vfunc35(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xc:
        vfunc37(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xe:
        vfunc29(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xf:
        vfunc26(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0x10:
    case 0x11:
        vfunc17(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0x13:
        vfunc31(pBase, pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    default:
        g_101e3114("Bad field type\n");
        return false;
    }
}
// END FUNCTION

// FUNCTION: 0x1012a350 size=0x1bc
#include "datamap.h"
#include "CSave.h"
#include "SaveRestoreFieldInfo_t.h"

extern void (__cdecl *g_101e3114)(const char *pMsg, ...);

struct SaveFieldDesc101a1520
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	short fieldSize;
	short flags;
	const char *externalName;
	struct SaveOps101a1520 *pSaveRestoreOps;
	void *inputFunc;
	void *td;
};

struct SaveOps101a1520
{
	virtual void v0();
	virtual void Save(SaveRestoreFieldInfo_t *pInfo, ISave *pSave);
};

#define SAVE_SLOT(n) virtual void s##n();
struct SaveWriteSlots101a1520
{
	virtual int vfunc0();
	virtual void vfunc1(int pos);
	virtual void vfunc2(void *pData, void *pMap);
	SAVE_SLOT(3) SAVE_SLOT(4) SAVE_SLOT(5) SAVE_SLOT(6) SAVE_SLOT(7) SAVE_SLOT(8) SAVE_SLOT(9) SAVE_SLOT(10) SAVE_SLOT(11)
	virtual void vfunc12(void *pData, int count, int token);
	SAVE_SLOT(13) SAVE_SLOT(14)
	virtual void vfunc15(void *pData, int count, int token);
	SAVE_SLOT(16)
	virtual void vfunc17(void *pData, int count, int token);
	virtual void vfunc18(void *pData, int count, int token);
	virtual void vfunc19(void *pData, int count, int token);
	virtual void vfunc20(void *pData, int count, int token);
	SAVE_SLOT(21)
	virtual void vfunc22(void *pData, int count, int token);
};

void CSave::sub_1012a350(const unsigned short *pToken, void *pData, void *pRootMap, typedescription_t *pDesc)
{
	SaveFieldDesc101a1520 *pField = (SaveFieldDesc101a1520 *)pDesc;
	SaveWriteSlots101a1520 *pSlots = (SaveWriteSlots101a1520 *)this;
	switch (pField->fieldType) {
	case 1:
		pSlots->vfunc18(pData, pField->fieldSize, *pToken);
		return;
	case 2:
		pSlots->vfunc20(pData, pField->fieldSize, *pToken);
		return;
	case 3:
		pSlots->vfunc22(pData, pField->fieldSize, *pToken);
		return;
	case 5:
		pSlots->vfunc17(pData, pField->fieldSize, *pToken);
		return;
	case 6:
		pSlots->vfunc12(pData, pField->fieldSize, *pToken);
		return;
	case 7:
		pSlots->vfunc19(pData, pField->fieldSize, *pToken);
		return;
	case 4:
	case 8:
		pSlots->vfunc15(pData, pField->fieldSize, *pToken);
		return;
	case 9:
		if (pField->flags & 0x40)
			pData = *(void **)pData;
		pSlots->vfunc2(pData, pField->td);
		return;
	case 10: {
		int nEnd = pSlots->vfunc0() + *pToken;
		SaveRestoreFieldInfo_t info = { pData, (char *)pData - pField->fieldOffset[0], pDesc };
		pField->pSaveRestoreOps->Save(&info, this);
		pSlots->vfunc1(nEnd);
		return;
	}
	default:
		g_101e3114("Bad field type\n");
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1012a530 size=0x26
struct CUnknown101a1780Arg {
    char m_pad0000[0x12];
    unsigned short m_wFlags12;	// 0x12
};

struct CUnknown101a1780View {
    char m_pad0000[0x20];
    int m_n20;	// 0x20
    bool sub_1012a530(CUnknown101a1780Arg *p);
};

// TARGET: CUnknown101a1780View::sub_1012a530
bool CUnknown101a1780View::sub_1012a530(CUnknown101a1780Arg *p)
{
    unsigned short f = p->m_wFlags12;
    if ((f & 2) == 0) {
        return false;
    }
    if (m_n20 != 0 && (f & 1) != 0) {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1012a5e0 size=0x26
struct CUnknown101a1780Arg {
    char m_pad0000[0x12];
    unsigned short m_wFlags12;	// 0x12
};

struct CUnknown101a1780View {
    char m_pad0000[0x20];
    int m_n20;	// 0x20
    bool sub_1012a5e0(CUnknown101a1780Arg *p);
};

// TARGET: CUnknown101a1780View::sub_1012a5e0
bool CUnknown101a1780View::sub_1012a5e0(CUnknown101a1780Arg *p)
{
    unsigned short f = p->m_wFlags12;
    if ((f & 2) == 0) {
        return false;
    }
    if (m_n20 != 0 && (f & 1) != 0) {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1012ab00 size=0x47
#include "CSave.h"
struct CSaveDesc { int m_n0, m_n4, m_n8; CSaveDesc *m_pParent; };
int CSave::sub_1012ab00(int a, int b, CSaveDesc *p)
{
    if (p->m_pParent) {
        if (!sub_1012ab00(a, b, p->m_pParent))
            return 0;
    }
    return vfunc3(p->m_n8, a, b, p->m_n0, p->m_n4);
}
// END FUNCTION

// FUNCTION: 0x1012aec0 size=0x34
#include "CRestore.h"
struct CRestoreSaveRecord30 { int m_nId; char m_pad04[0x2c]; };
struct CRestoreSaveTable { char m_pad0000[0x1318]; int m_nRecords; CRestoreSaveRecord30 *m_pRecords; };
CRestoreSaveEnt *CRestore::sub_1012aec0(int index)
{
	CRestoreSaveTable *pTable = (CRestoreSaveTable *)m_pData2;
	if (pTable && index >= 0) {
		int i = 0;
		if (pTable->m_nRecords > 0) {
			CRestoreSaveRecord30 *pRec = pTable->m_pRecords;
			do {
				if (pRec->m_nId == index)
					return (CRestoreSaveEnt *)pRec;
				i++;
				pRec++;
			} while (i < pTable->m_nRecords);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1012b3d0 size=0x1a
namespace lifted {
extern int g_102c3508;
extern int g_102c350c;
extern char g_102c354c;
}
int sub_1012b3d0()
{
    lifted::g_102c350c = 9;
    lifted::g_102c3508 = (int)&lifted::g_102c354c;
    return (int)&lifted::g_102c3508;
}
// END FUNCTION

// FUNCTION: 0x1012c3d0 size=0xa4
#include "CUtlVector40.h"
#include "CUnknown101a59f0.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
struct E40 { int d[10]; };

int CUtlVector40::sub_1012c3d0(int num, const void *pToCopy)
{
	int elem = m_size;
	if (num != 0) {
		if (m_size + num > m_allocationCount)
			((CUnknown101a59f0 *)this)->sub_1012c640(m_size - m_allocationCount + num);
		m_size += num;
		m_pElements = m_pMemory;
		int toMove = m_size - elem - num;
		if (toMove > 0 && num > 0)
			memmove(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, toMove * 40);
		if (pToCopy != 0 && num > 0) {
			int off = elem * 40;
			for (int i = num; i > 0; i--) {
				*(E40 *)(m_pMemory + off) = *(const E40 *)pToCopy;
				pToCopy = (const E40 *)pToCopy + 1;
				off += 40;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1012c480 size=0x33
#include "CUtlMemory40.h"
extern void *(*g_101e3100)(int);

CUtlMemory40 *CUtlMemory40::sub_1012c480(int growSize, int allocationCount)
{
    m_pMemory = 0;
    m_allocationCount = allocationCount;
    m_growSize = growSize;
    if (allocationCount)
        m_pMemory = (char *)g_101e3100(allocationCount * 40);
    return this;
}
// END FUNCTION

// FUNCTION: 0x1012c4c0 size=0xae
#include "CUnknown101a5800.h"
#include "CUnknown101a59f0.h"

int CUnknown101a5800::sub_1012c4c0(int elem, int num, const CVecElem40_t *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUnknown101a59f0 *)this)->sub_1012c640(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		memmove(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, toMove * 40);
	if (pToCopy != 0 && num > 0) {
		int off = elem * 40;
		for (int i = num; i > 0; i--) {
			*(CVecElem40_t *)(m_pMemory + off) = *pToCopy;
			pToCopy++;
			off += 40;
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1012c570 size=0x8f
#include "CUtlVector40.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector40::sub_1012c570(int num)
{
	if (num + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (num + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 1;
			}
		}
		if (m_pMemory)
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 40);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 40);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1012c600 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_1012c600(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x1012c740 size=0x25
struct CUnknown102496d0 {
    int m_0;
    int m_4;
    int m_8;
    int m_c;
    float m_10;
    void sub_1012c740(float flValue);
};

// TARGET: CUnknown102496d0::sub_1012c740
void CUnknown102496d0::sub_1012c740(float flValue)
{
    m_0 = 0;
    m_4 = 0;
    m_8 = 0;
    *(float *)&m_c = flValue;
    m_10 = flValue * flValue * 0.5f;
}
// END FUNCTION

// FUNCTION: 0x1012dd00 size=0x6b
#include "CUnknown101b2570.h"
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
extern int (__cdecl *g_101e31dc)(const char *, const char *, int);
extern void (__cdecl *g_101e3188)(char *, const char *, int);
int sub_1012f7e0(const char *name);
SFloatPair sub_10107010(const char *str);

void CUnknown101b2570::sub_1012dd00(const char *soundlevel)
{
    if (g_101e31dc(soundlevel, "SNDLVL_", strlen("SNDLVL_")) == 0) {
        m_soundlevel.a = (float)sub_1012f7e0(soundlevel);
        m_soundlevel.b = 0;
    } else {
        m_soundlevel = sub_10107010(soundlevel);
    }
    g_101e3188(m_szSoundLevel, soundlevel, 0x20);
}
// END FUNCTION

// FUNCTION: 0x1012e940 size=0x28
#include "CUnknown101b3730.h"
// TARGET: CUnknown101b3730::sub_1012e940
void *CUnknown101b3730::sub_1012e940(int index)
{
    if (index >= 0 && index < m_nRecords)
        return m_pRecords + 0x1c + index * 0xe8;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1012e970 size=0x82
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown1024b370.h"
#include "CMem8_t.h"
#include <string.h>

inline void *operator new(unsigned int, void *p) { return p; }

struct SymbolRecord_t
{
	CUnknown1024b370Symbol symbol;
	int gender;
};

struct SymbolVec_t
{
	CMem8_t m_Memory;	// 0x00
	int m_Size;	// 0x0c
	SymbolRecord_t *m_pElements;	// 0x10

	SymbolRecord_t &Element(int i) { return ((SymbolRecord_t *)m_Memory.m_pMemory)[i]; }

	void InsertBefore(int elem, const SymbolRecord_t &src)
	{
		if (m_Size + 1 > m_Memory.m_nAllocationCount)
			m_Memory.sub_101315b0(m_Size + 1 - m_Memory.m_nAllocationCount);
		m_Size += 1;
		m_pElements = (SymbolRecord_t *)m_Memory.m_pMemory;
		int numToMove = m_Size - elem - 1;
		if (numToMove > 0)
			memmove(&Element(elem + 1), &Element(elem), numToMove * sizeof(SymbolRecord_t));
		new (&Element(elem)) SymbolRecord_t(src);
	}
	void AddToTail(const SymbolRecord_t &src) { InsertBefore(m_Size, src); }
};

struct SymbolTable_t
{
	char m_pad0000[0x20];
	SymbolVec_t m_Vec;	// 0x20
};

// TARGET: CSoundEmitterSystemBase::sub_1012e970
void CSoundEmitterSystemBase::sub_1012e970(void *pTable, const char *pszName, int value)
{
	CUnknown1024b370Symbol sym = ((CUnknown1024b370 *)&m_listb0)->sub_1013d520(pszName);
	SymbolRecord_t e;
	e.symbol = sym;
	e.gender = value;
	((SymbolTable_t *)pTable)->m_Vec.AddToTail(e);
}
// END FUNCTION

// FUNCTION: 0x10130970 size=0x1bd
#include "CUnknown101b6320.h"

CUnknown101b6320 &CUnknown101b6320::sub_10130970(const CUnknown101b6320 &other)
{
	m_bField00 = other.m_bField00;
	m_bField01 = other.m_bField01;
	m_nField04 = other.m_nField04;

	CUnknown101b6320Params *p = &m_params;
	const CUnknown101b6320Params *o = &other.m_params;
	p->m_nField00 = o->m_nField00;
	p->m_nField04 = o->m_nField04;
	p->m_nField08 = o->m_nField08;
	p->m_nField0c = o->m_nField0c;
	p->m_nField10 = o->m_nField10;
	p->m_nField14 = o->m_nField14;
	p->m_nField18 = o->m_nField18;
	p->m_bField1c = o->m_bField1c;
	p->m_bField1d = o->m_bField1d;

	CUnknown101b9140 *v = &p->m_vecA;
	int nA = o->m_vecA.m_Size;
	const CUnknown101b9140Elem *pA = (const CUnknown101b9140Elem *)o->m_vecA.m_pMemory;
	int i;
	for (i = v->m_Size; --i >= 0; )
		v->sub_10130be0();
	v->m_Size = 0;
	v->sub_10131e60(nA, 0);
	for (i = 0; i < nA; i++)
		((CUnknown101b9140Elem *)v->m_pMemory)[i] = pA[i];

	v = &p->m_vecB;
	int nB = o->m_vecB.m_Size;
	const CUnknown101b9140Elem *pB = (const CUnknown101b9140Elem *)o->m_vecB.m_pMemory;
	for (i = v->m_Size; --i >= 0; )
		v->sub_10130be0();
	v->m_Size = 0;
	v->sub_10132db0(0, nB, 0);
	for (i = 0; i < nB; i++)
		((CUnknown101b9140Elem *)v->m_pMemory)[i] = pB[i];

	p->m_bField48 = o->m_bField48;
	unsigned int u;
	for (u = 0; u < 0x20; u++)
		p->m_szVolume[u] = o->m_szVolume[u];
	for (u = 0; u < 0x20; u++)
		p->m_szChannel[u] = o->m_szChannel[u];
	for (u = 0; u < 0x20; u++)
		p->m_szSoundLevel[u] = o->m_szSoundLevel[u];
	for (u = 0; u < 0x20; u++)
		p->m_szPitch[u] = o->m_szPitch[u];
	return *this;
}
// END FUNCTION

// FUNCTION: 0x10130b30 size=0x6d
#include "UtlVec8.h"

struct SElem8 {
	short a;
	int b;
	void sub_10133290();
};

void UtlVec8::sub_10130b30(const SElem8 *src, int num)
{
	m_Size = 0;
	if (num) {
		sub_10130f00(num);
		sub_10130f90(0, num);
		for (int i = 0; i < num; i++) {
			SElem8 *p = (SElem8 *)m_pMemory + i;
			if (p)
				p->sub_10133290();
		}
	}
	for (int i = 0; i < num; i++) {
		SElem8 *d = (SElem8 *)m_pMemory + i;
		d->a = src[i].a;
		d->b = src[i].b;
	}
}
// END FUNCTION

// FUNCTION: 0x10130ba0 size=0x3d
#include "CUtlVector16.h"

extern void (__cdecl *g_101e30fc)(void *);

void CUtlVector16::sub_10130ba0()
{
	m_size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10130f00 size=0x8c
#include "UtlVec8.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void UtlVec8::sub_10130f00(int num)
{
    if (m_Size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_Size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 4;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount << 3);
        else
            m_pMemory = (char *)g_101e3100(m_allocationCount << 3);
    }
    m_Size += num;
    m_pElements = (UtlVec8Elem *)m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10130f90 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_10130f90(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 8], &m_pMemory[elem * 8], numToMove * 8);
}
// END FUNCTION

// FUNCTION: 0x10130fd0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10130fd0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10131480 size=0x19
struct E101b6b60 { unsigned short a; unsigned short pad; int b; };

// TARGET: sub_10131480
void sub_10131480(E101b6b60 *dst, const E101b6b60 *src)
{
	if (dst) {
		dst->a = src->a;
		dst->b = src->b;
	}
}
// END FUNCTION

// FUNCTION: 0x101314a0 size=0x95
#include "CUtlVector130.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector130::sub_101314a0(int num)
{
	if (num + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (num + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 1;
			}
		}
		if (m_pMemory)
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 130);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 130);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10131540 size=0x4b
#include "CUtlVector130.h"

extern "C" void *memmove(void *, const void *, unsigned int);

// TARGET: CUtlVector130::sub_10131540
void CUtlVector130::sub_10131540(int elem, int num)
{
	int numToMove = m_size - elem - num;
	if ((numToMove > 0) && (num > 0))
		memmove(m_pMemory + (elem + num) * 130, m_pMemory + elem * 130, numToMove * 130);
}
// END FUNCTION

// FUNCTION: 0x10131590 size=0x1a
#include <string.h>

// TARGET: sub_10131590
void sub_10131590(void *pDest, void *pSrc)
{
	if (pDest != 0) {
		memcpy(pDest, pSrc, 0x82);
	}
}
// END FUNCTION

// FUNCTION: 0x10131e60 size=0xcf
#include "CUnknown101b9140.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

static inline int InsertMultipleBefore(CUnknown101b9140 *v, int elem, int num, const CUnknown101b9140Elem *pToCopy)
{
	if (num == 0)
		return elem;
	if (v->m_Size + num > v->m_nAllocationCount)
		v->sub_101315b0(v->m_Size - v->m_nAllocationCount + num);
	v->m_Size += num;
	v->m_pElements = (CUnknown101b9140Elem *)v->m_pMemory;
	int numToMove = v->m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&v->m_pElements[elem + num], &v->m_pElements[elem], numToMove * 8);
	for (int i = 0; i < num; i++) {
		CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)v->m_pMemory)[elem + i];
		if (p) {
			p->m_w = 0xffff;
			p->m_d = 0;
		}
	}
	if (pToCopy) {
		for (int i = 0; i < num; i++) {
			CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)v->m_pMemory)[elem + i];
			p->m_w = pToCopy[i].m_w;
			p->m_d = pToCopy[i].m_d;
		}
	}
	return elem;
}

int CUnknown101b9140::sub_10131e60(int num, const CUnknown101b9140Elem *pToCopy)
{
	return InsertMultipleBefore(this, m_Size, num, pToCopy);
}
// END FUNCTION

// FUNCTION: 0x10132d30 size=0x7c
#include "CUnknown101b90a0.h"

extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUnknown101b90a0::sub_10132d30(int num)
{
    if (m_growSize == -1)
        return;
    int newAlloc = m_allocationCount;
    int target = num + newAlloc;
    if (newAlloc < target) {
        do {
            if (newAlloc != 0) {
                if (m_growSize != 0)
                    newAlloc += m_growSize;
                else
                    newAlloc += newAlloc;
            } else
                newAlloc = 1;
        } while (newAlloc < target);
        m_allocationCount = newAlloc;
    }
    if (m_pMemory)
        m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 0xe8);
    else
        m_pMemory = (char *)g_101e3100(m_allocationCount * 0xe8);
}
// END FUNCTION

// FUNCTION: 0x10132db0 size=0xc6
#include "CUnknown101b9140.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

int CUnknown101b9140::sub_10132db0(int elem, int num, const CUnknown101b9140Elem *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_101315b0(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = (CUnknown101b9140Elem *)m_pMemory;
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&m_pElements[elem + num], &m_pElements[elem], numToMove * 8);
	for (int i = 0; i < num; i++) {
		CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)m_pMemory)[elem + i];
		if (p) {
			p->m_w = 0xffff;
			p->m_d = 0;
		}
	}
	if (pToCopy) {
		for (int i = 0; i < num; i++) {
			CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)m_pMemory)[elem + i];
			p->m_w = pToCopy[i].m_w;
			p->m_d = pToCopy[i].m_d;
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x10133540 size=0x1a
namespace lifted {
extern int g_102c4f40;
extern int g_102c4f44;
extern char g_102c4f84;
}
int sub_10133540()
{
    lifted::g_102c4f44 = 4;
    lifted::g_102c4f40 = (int)&lifted::g_102c4f84;
    return (int)&lifted::g_102c4f40;
}
// END FUNCTION

// FUNCTION: 0x10133560 size=0x75
extern "C" double fabs(double);
extern float g_101e34f0;
extern double g_10224050;
void __stdcall sub_101335e0(float);
struct CFloatUnit {
    float a, b, c;
    char d;
    void sub_10133560(float x, float y);
};
// TARGET: CFloatUnit::sub_10133560
void CFloatUnit::sub_10133560(float x, float y)
{
    float diff = x - a;
    if (diff != g_101e34f0 && y > g_101e34f0) {
        b = x;
        double r = fabs(diff / y);
        c = (g_10224050 > r) ? g_10224050 : r;
        return;
    }
    if (x != a)
        d = 1;
    sub_101335e0(x);
}
// END FUNCTION

// FUNCTION: 0x101335e0 size=0x27
#include "CFloatUnit.h"

// TARGET: CFloatUnit::sub_101335e0
void CFloatUnit::sub_101335e0(float flValue)
{
	if (m_flPrev != flValue)
		m_bChanged = 1;
	m_flRate = 0.0f;
	m_flPrev = flValue;
	m_flValue = flValue;
}
// END FUNCTION

// FUNCTION: 0x10133780 size=0x1a
namespace lifted {
extern int g_102c50d4;
extern int g_102c50d8;
extern char g_102c511c;
}
int sub_10133780()
{
    lifted::g_102c50d8 = 0xc;
    lifted::g_102c50d4 = (int)&lifted::g_102c511c;
    return (int)&lifted::g_102c50d4;
}
// END FUNCTION

// FUNCTION: 0x10133960 size=0x1d
#include "CFloatUnit.h"

struct CUnknown101bbbf0 {
	char m_pad0000[0x38];
	unsigned int m_n0038;
	void sub_10133960(float flValue, float flTime);
};

// TARGET: CUnknown101bbbf0::sub_10133960
void CUnknown101bbbf0::sub_10133960(float flValue, float flTime)
{
	m_n0038 |= 2;
	((CFloatUnit *)this)->sub_10133560(flValue, flTime);
}
// END FUNCTION

// FUNCTION: 0x10133980 size=0x3b
#include "CUnknown101bc140.h"
#include "CFloatUnit.h"
// TARGET: CUnknown101bc140::sub_10133980
void CUnknown101bc140::sub_10133980(float flTarget, float flTime)
{
	m_n38 |= 1;
	if (flTarget > 1.0)
		flTarget = 1.0f;
	((CFloatUnit *)&m_flPitchScale)->sub_10133560(flTarget, flTime);
}
// END FUNCTION

// FUNCTION: 0x101339c0 size=0x25
#include "UTIL_BloodStream.h"
#include "CUnknown101bc140.h"

// TARGET: CUnknown101bc140::sub_101339c0
void CUnknown101bc140::sub_101339c0(float flValue)
{
	sub_10133980(0, flValue);
	m_fl24 = g_102ba388->vfunc9() + flValue;
}
// END FUNCTION

// FUNCTION: 0x10134060 size=0x40
#include "CUnknown101bbd10.h"

struct CUnknown101bc540Obj
{
	void sub_10133980(int a, int b);
	void sub_10133960(int a, int b);
};

struct CUnknown101bc540Rec
{
	void *m_pObj;	// +0
	int m_n04;
	int m_n08;	// +0x8
	int m_nMode;	// +0xc
	int m_n10;	// +0x10
};

// TARGET: sub_10134060
void __stdcall sub_10134060(CUnknown101bc540Rec *p)
{
	switch (p->m_nMode) {
	case 2:
		((CUnknown101bbd10 *)p->m_pObj)->sub_10133a20();
		break;
	case 1:
		((CUnknown101bc540Obj *)p->m_pObj)->sub_10133960(p->m_n10, p->m_n08);
		break;
	case 0:
		((CUnknown101bc540Obj *)p->m_pObj)->sub_10133980(p->m_n10, p->m_n08);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10134200 size=0x7e
#include "CUnknown101bc750.h"
struct Mem4;
void __fastcall sub_10135430(Mem4 *, int, int);
void CUnknown101bc750::sub_10134200(int value)
{
    PQHeap101bc750 *h = &m_heap;
    int idx = h->m_Size;
    if (idx + 1 > h->m_allocationCount)
        sub_10135430((Mem4 *)h, idx - h->m_allocationCount + 1, idx - h->m_allocationCount + 1);
    h->m_Size++;
    h->m_pElements = (UtlVec8Elem *)h->m_pMemory;
    h->sub_101353f0(idx, 1);
    ((int *)h->m_pMemory)[idx] = value;
    while (idx != 0) {
        int parent = (idx + 1) / 2 - 1;
        int *mem = (int *)h->m_pMemory;
        if (h->m_pLessFunc(&mem[idx], &mem[parent]))
            break;
        mem = (int *)h->m_pMemory;
        int t = mem[parent];
        mem[parent] = mem[idx];
        ((int *)h->m_pMemory)[idx] = t;
        idx = parent;
    }
}
// END FUNCTION

// FUNCTION: 0x101347f0 size=0x2a
namespace lifted {
extern char g_102366ac;
}
struct CUnknown101bcef0 { void * sub_101347f0(); };
void * CUnknown101bcef0::sub_101347f0()
{
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = 0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)((char *)this + 0x18) = 0;
    *(int *)this = (int)&lifted::g_102366ac;
    *(char *)((char *)this + 0x1c) = 0;
    *(int *)((char *)this + 0x20) = -1;
    *(char *)((char *)this + 0x24) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10134fa0 size=0x9e
#include "CDirtySpatialPartitionEntityList.h"
#include "utlvector.h"
#include "UtlMem.h"

void __cdecl sub_101d1296(void *p);

class CPrimaryBase { public: virtual void pv(); };

class CMyComplete : public CPrimaryBase, public CAutoGameSystem { };

void *CAutoGameSystem::sub_10134fa0(unsigned int flags)
{
	int *v2 = (int *)((char *)this + 0x1c);
	v2[3] = 0;
	((UtlMem *)v2)->sub_10135350();
	v2[4] = v2[0];
	if (v2[2] != -1) {
		if (v2[0] != 0) { Plat_Free((void *)v2[0]); v2[0] = 0; }
		v2[1] = 0;
	}

	((CUtlVector<int> *)((char *)this + 8))->~CUtlVector<int>();

	CAutoGameSystem *base = ((char *)this - 4) ? this : 0;
	base->sub_100f3f80();

	if (flags & 1)
		sub_101d1296((char *)this - 4);
	return (char *)this - 4;
}
// END FUNCTION

// FUNCTION: 0x10135350 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10135350()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10135380 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10135380(int num);
};

// TARGET: UtlMem::sub_10135380
void UtlMem::sub_10135380(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x101353f0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_101353f0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x10138700 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10138700(int num);
};

void CUtlMemory12::sub_10138700(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x10138770 size=0xbd
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

bool CUtlRBTree12::sub_10138770(unsigned short i) const
{
	const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this;
	unsigned short parent = tree->Links(i).m_Parent;
	return tree->Links(parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x10138bd0 size=0xdb
#include "CUtlRBTree16.h"

inline void *operator new(unsigned int, void *p) { return p; }

struct SymConv {
	unsigned short *sub_1013d520(unsigned int *pKey, unsigned int key);
};

struct SymElem {
	unsigned short key;
	int value;
	SymElem() : key(0xffff) {}
	SymElem(const SymElem &o) : key(o.key), value(o.value) {}
};

struct SymTree : CUtlRBTree16 {
	SymConv m_Conv;	// 0x18
	unsigned short *sub_101397f0(unsigned short i);
	void sub_10139460(unsigned short node, unsigned short parent, bool left);
};

struct SymMap {
	SymTree *m_pTree;
	// TARGET
	unsigned short sub_10138bd0(unsigned int key, int value);
};

unsigned short SymMap::sub_10138bd0(unsigned int key, int value)
{
	SymTree *t = m_pTree;
	SymElem el;
	unsigned short *pSym = t->m_Conv.sub_1013d520(&key, key);
	unsigned short cur = t->m_Root;
	el.key = *pSym;
	unsigned short parent = 0xffff;
	bool left = false;
	while (cur != 0xffff) {
		parent = cur;
		if (t->m_LessFunc(&el, (char *)t->m_pElements + cur * 16 + 8)) {
			left = true;
			cur = *t->sub_101397f0(cur);
		} else {
			left = false;
			cur = t->sub_101397f0(cur)[1];
		}
	}
	unsigned short n = t->sub_10139340();
	t->sub_10139460(n, parent, left);
	t->m_NumElements++;
	SymElem *e = (SymElem *)((char *)t->m_pElements + n * 16 + 8);
	if (e) {
		new (e) SymElem(el);
	}
	*(int *)((char *)t->m_pElements + n * 16 + 12) = value;
	return n;
}
// END FUNCTION

// FUNCTION: 0x10139340 size=0x116
#include "utlmemory.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CUnknown10249fc0_Entry { int m_n0; int m_nKey; };
#include "CUtlRBTree16.h"
extern void *(*g_101e3104)(void *, unsigned int);
extern void *(*g_101e3100)(unsigned int);
struct Mem16 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void Grow(int num)
    {
        if (m_nGrowSize == -1)
            return;
        int a = *(int *)&m_nAllocationCount;
        int nAllocationRequested = a + num;
        if (a < nAllocationRequested) {
            do {
                if (a != 0) {
                    if (m_nGrowSize != 0)
                        a += m_nGrowSize;
                    else
                        a += a;
                } else
                    a = 2;
            } while (a < nAllocationRequested);
            m_nAllocationCount = a;
        }
        if (m_pMemory)
            m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount << 4);
        else
            m_pMemory = g_101e3100(m_nAllocationCount << 4);
    }
};
unsigned short CUtlRBTree16::sub_10139340()
{
    const CUtlRBTree16Of<CUnknown10249fc0_Entry> *tree = (const CUtlRBTree16Of<CUnknown10249fc0_Entry> *)this;
    unsigned short elem;
    if (m_FirstFree == InvalidIndex()) {
        if (m_unk8 == m_TotalElements)
            ((Mem16 *)&m_pElements)->Grow(1);
        elem = m_TotalElements++;
    } else {
        elem = m_FirstFree;
        m_FirstFree = tree->Links(m_FirstFree).m_Right;
    }
    unsigned short *p = (unsigned short *)&m_pElements[elem].m_Data;
    if (p)
        *p = 0xffff;
    return elem;
}
// END FUNCTION

// FUNCTION: 0x1013c790 size=0x19
#include "Vector.h"
Vector &Vector::sub_1013c790(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x1013c7b0 size=0x1a
struct CUnk1011d310
{
	int m_n0;
	int m_n4;
	int m_nLimit8;
	int m_nCurrentC;
	char m_bFlag10;

	char sub_1013c7b0(int a);
};

// TARGET: sub_1013c7b0
char CUnk1011d310::sub_1013c7b0(int a)
{
	int sum = m_nCurrentC + a;
	if (sum > m_nLimit8) {
		m_bFlag10 = 1;
	}
	return m_bFlag10;
}
// END FUNCTION

// FUNCTION: 0x1013c8a0 size=0x33
struct CInitView {
    int m_n0;
    int m_n4;
    int m_n8;
    int m_nc;
    int m_n10;
    unsigned char m_b14;
    unsigned char m_b15;
    CInitView *sub_1013c8a0(int a, int b, unsigned char bFlag);
};

// TARGET: CInitView::sub_1013c8a0
CInitView *CInitView::sub_1013c8a0(int a, int b, unsigned char bFlag)
{
    m_n0 = a;
    m_n4 = b;
    m_n8 = -1;
    m_b14 = 0;
    m_nc = 0;
    m_n10 = 0;
    m_b15 = 0;
    if (bFlag != 0)
        m_b15 = 1;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1013c970 size=0x7c
#include "CUnknown1006bea0.h"

extern "C" void *memcpy(void *, const void *, unsigned);
extern "C" void *memset(void *, int, unsigned);

void CUnknown1006bea0::sub_1013c970(void *dest, int count)
{
    int avail = m_size - m_pos;
    if (avail < count) {
        memcpy(dest, m_pData + m_pos, avail);
        memset(dest, 0, count - avail);
        m_pos += avail;
        m_flags |= 2;
    } else {
        memcpy(dest, m_pData + m_pos, count);
        m_pos += count;
    }
}
// END FUNCTION

// FUNCTION: 0x1013c9f0 size=0x41
#include "CUnknown1006bea0.h"
#include <ctype.h>

void CUnknown1006bea0::sub_1013c9f0()
{
    if ((m_flags15 & 1) && !m_flags) {
        int size = m_size;
        while (m_pos < size && isspace(m_pData[m_pos]))
            m_pos++;
    }
}
// END FUNCTION

// FUNCTION: 0x1013ca40 size=0xb1
#include "CUtlBuffer.h"
#include <ctype.h>

void CUtlBuffer::sub_1013ca40(char *pString)
{
	if (m_nError) {
		*pString = 0;
		return;
	}
	if (!(m_nFlags & 1)) {
		int nLeft = m_nSize - m_nGet;
		int i = 0;
		while (i < nLeft) {
			int c = m_pBuffer[m_nGet + i];
			pString[i] = c;
			i++;
			if (c == 0)
				goto done;
		}
		pString[i] = 0;
		m_nError |= 2;
done:
		m_nGet += i;
		return;
	}
	sub_1013c9f0();
	int nSize = m_nSize;
	while (m_nGet < nSize) {
		char c = m_pBuffer[m_nGet];
		if (isspace(c) || c == 0)
			break;
		*pString++ = c;
		m_nGet++;
	}
	*pString = 0;
}
// END FUNCTION

// FUNCTION: 0x1013cb00 size=0xa1
#include "CUnknown1006bea0.h"

void CUnknown1006bea0::sub_1013cb00(char *pString)
{
	if (m_flags) {
		*pString = 0;
		return;
	}
	if (!(m_flags15 & 1)) {
		int nAvail = m_size - m_pos;
		int i = 0;
		while (i < nAvail) {
			int c = m_pData[m_pos + i];
			pString[i] = c;
			i++;
			if (!c)
				goto done;
		}
		pString[i] = 0;
		m_flags |= 2;
done:
		m_pos += i;
		return;
	}
	sub_1013c9f0();
	int size = m_size;
	while (m_pos < size) {
		char c = m_pData[m_pos];
		if (c == '\n' || c == 0)
			break;
		*pString++ = c;
		m_pos++;
	}
	*pString = 0;
}
// END FUNCTION

// FUNCTION: 0x1013cc20 size=0x1d2
#include "CUtlBuffer.h"
#include <stdlib.h>
#include <stdarg.h>

int CUtlBuffer::sub_1013cc20(const char *pFmt, char *list)
{
	if (m_nError || !(m_nFlags & 1))
		return 0;

	int numScanned = 0;
	char c;
	char *pEnd;
	while ((c = *pFmt++) != 0) {
		if (m_nGet >= m_nSize) {
			m_nError |= 2;
			break;
		}

		switch (c) {
		case ' ':
			sub_1013c9f0();
			break;

		case '%': {
			char type = *pFmt++;
			if (type == 0)
				return numScanned;

			switch (type) {
			case 'c': {
				char *ch = va_arg(list, char *);
				*ch = m_pBuffer[m_nGet];
				++m_nGet;
			} break;

			case 'i':
			case 'd': {
				int *i = va_arg(list, int *);
				*i = strtol(m_pBuffer + m_nGet, &pEnd, 10);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 'x': {
				int *i = va_arg(list, int *);
				*i = strtol(m_pBuffer + m_nGet, &pEnd, 16);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 'u': {
				unsigned int *u = va_arg(list, unsigned int *);
				*u = strtoul(m_pBuffer + m_nGet, &pEnd, 10);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 'f': {
				float *f = va_arg(list, float *);
				*f = (float)strtod(m_pBuffer + m_nGet, &pEnd);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 's': {
				char *s = va_arg(list, char *);
				sub_1013ca40(s);
			} break;

			default:
				return numScanned;
			}

			++numScanned;
		} break;

		default:
			if (c != (unsigned char)m_pBuffer[m_nGet])
				return numScanned;
			++m_nGet;
		}
	}
	return numScanned;
}
// END FUNCTION

// FUNCTION: 0x1013d2b0 size=0x71
#include "CUnknown1024b2d0.h"

void sub_1013d230();
void sub_1013d180();
extern void *(*g_101e3100)(int);

CUnknown1024b2d0 *CUnknown1024b2d0::sub_1013d2b0(int arg, int count, char flag)
{
    m_pfn = flag ? (void *)sub_1013d230 : (void *)sub_1013d180;
    m_pData = 0;
    m_count = count;
    m_arg = arg;
    if (count != 0)
        m_pData = g_101e3100(count * 12);
    m_w12 = 0;
    m_w10 = 0xffff;
    m_w14 = 0xffff;
    m_w16 = 0;
    m_i18 = 0;
    m_i1c = 0;
    m_i20 = 8;
    m_i24 = 0;
    m_i28 = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1013d330 size=0x6b
#include "CUnknown1024b370.h"
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *p);

inline void Purge(CUnknown1024b370Mem &m)
{
    if (m.m_growSize != -1) {
        if (m.m_pMemory) {
            Plat_Free(m.m_pMemory);
            m.m_pMemory = 0;
        }
        m.m_allocationCount = 0;
    }
}

void CUnknown1024b370::sub_1013d330()
{
    sub_1013d730();
    int g = m_mem1.m_growSize;
    m_n24 = 0;
    if (g != -1) {
        if (m_mem1.m_pMemory) {
            Plat_Free(m_mem1.m_pMemory);
            m_mem1.m_pMemory = 0;
        }
        m_mem1.m_allocationCount = 0;
    }
    int g2 = m_mem1.m_growSize;
    void *p = m_mem1.m_pMemory;
    m_p28 = p;
    if (g2 != -1) {
        if (p) {
            Plat_Free(p);
            m_mem1.m_pMemory = 0;
        }
        m_mem1.m_allocationCount = 0;
    }
    Purge(m_mem0);
}
// END FUNCTION

// FUNCTION: 0x1013d3a0 size=0x139
#include "CUnknown1024b370.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CRBTree12Entry_1024c1d0 { char data[4]; };
#include "utlsortvector.h"
#include "utlvector.h"
#include "CUtlRBTree12.h"

struct CStringPoolIndex
{
	CStringPoolIndex() {}
	CStringPoolIndex(unsigned short iPool, unsigned short iOffset) : m_iPool(iPool), m_iOffset(iOffset) {}
	unsigned short m_iPool;
	unsigned short m_iOffset;
};

struct CUtlSymbolLessCtx
{
	const char *m_pUserString;
	CUnknown1024b370 *m_pTable;
};
extern CUtlSymbolLessCtx g_105e74d0;

typedef CUtlRBTree12Of<CRBTree12Entry_1024c1d0> SymTree_t;

struct SymLookup_t : SymTree_t
{
	unsigned short Find(const CStringPoolIndex &search) const
	{
		unsigned short current = m_Root;
		while (current != InvalidIndex()) {
			if (m_LessFunc(&search, m_pElements[current].m_Data))
				current = Links(current).m_Left;
			else if (m_LessFunc(m_pElements[current].m_Data, &search))
				current = Links(current).m_Right;
			else
				break;
		}
		return current;
	}
};

CUnknown1024b370Symbol CUnknown1024b370::sub_1013d3a0(const char *pString)
{
	CUnknown1024b370Symbol sym;
	if (!pString) {
		sym.m_Id = 0xffff;
		return sym;
	}
	g_105e74d0.m_pUserString = pString;
	g_105e74d0.m_pTable = this;
	sym.m_Id = ((const SymLookup_t *)this)->Find(CStringPoolIndex(0xffff, 0xffff));
	return sym;
}
// END FUNCTION

// FUNCTION: 0x1013d4e0 size=0x33
// TARGET: sub_1013d4e0
struct CFindItem_1024b590 {
    int a;
    int b;
};
struct CFindList_1024b590 {
    char pad[0x18];
    CFindItem_1024b590 **items;
    char pad2[8];
    int count;
    int sub_1013d4e0(int v);
};
int CFindList_1024b590::sub_1013d4e0(int v)
{
    int i;
    for (i = 0; i < count; i++) {
        if (items[i]->a - items[i]->b >= v) {
            return i;
        }
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1013d6f0 size=0x3c
#include "CUnknown1024b2d0.h"
extern char g_102de300[];

// TARGET: CUnknown1024b2d0::sub_1013d6f0
const char *CUnknown1024b2d0::sub_1013d6f0(CUnknown1024b2d0Id id)
{
    if (id.m_id == 0xffff) return g_102de300;
    unsigned short *pIdx = (unsigned short *)((char *)m_pData + id.m_id * 12 + 8);
    return (const char *)(((int *)m_i18)[pIdx[0]] + pIdx[1] + 8);
}
// END FUNCTION

// FUNCTION: 0x1013d7c0 size=0x56
#include "CUnknown1024b370.h"

extern void (__cdecl *g_101e311c)(const char *fmt, ...);

struct S1024b940Index { unsigned short m_iPool; unsigned short m_iOffset; };
struct S1024b940Node { char links[8]; S1024b940Index m_Index; };

// TARGET: CUnknown1024b370::sub_1013d7c0
void CUnknown1024b370::sub_1013d7c0()
{
	int n = sub_1013d820();
	for (int i = 0; i < n; i++) {
		const S1024b940Index *pIdx = &((S1024b940Node *)m_mem0.m_pMemory)[(unsigned short)i].m_Index;
		g_101e311c("%4d - %s\n", i, (char *)((int *)m_mem1.m_pMemory)[pIdx->m_iPool] + 8 + pIdx->m_iOffset);
	}
}
// END FUNCTION

// FUNCTION: 0x1013dd10 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_1013dd10(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x1013dd50 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1013dd50(int num);
};

// TARGET: UtlMem::sub_1013dd50
void UtlMem::sub_1013dd50(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x1013ddc0 size=0xbd
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

bool CUtlRBTree12::sub_1013ddc0(unsigned short i) const
{
	const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this;
	unsigned short parent = tree->Links(i).m_Parent;
	return tree->Links(parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x1013e3a0 size=0x18b
#include "CUnknown101d3a10.h"
#include "CVStatInfoList_t.h"

extern CVStatInfoList_t g_105f9220;
extern CVStatInfoList_t g_105f90b8;
extern CVStatInfoList_t g_105f8c60;
extern int g_105e7500;

void CUnknown101d3a10::sub_1013e3a0()
{
	int i;
	int n = g_105f9220.m_nStats;
	if (n > 0) {
		if (m_pArray0d0)
			delete m_pArray0d0;
		m_pArray0d0 = new int[n];
		for (i = 0; i < n; i++)
			m_pArray0d0[i] = g_105f9220.sub_1015cfe0(i)->DefaultValue();
	}
	n = g_105f90b8.m_nStats;
	if (n > 0) {
		if (m_pArray0d4)
			delete m_pArray0d4;
		m_pArray0d4 = new int[n];
		for (i = 0; i < n; i++)
			m_pArray0d4[i] = g_105f90b8.sub_1015cfe0(i)->DefaultValue();
	}
	n = g_105f8c60.m_nStats;
	if (n > 0) {
		if (m_pArray0d8)
			delete m_pArray0d8;
		m_pArray0d8 = new int[n];
		for (i = 0; i < n; i++)
			m_pArray0d8[i] = -1;
		for (i = 0; i < n; i++)
			m_pArray0d8[i] = g_105f8c60.sub_1015cfe0(i)->DefaultValue();
	}
	if (m_pArray0dc)
		delete m_pArray0dc;
	n = g_105e7500;
	m_pArray0dc = new int[n];
	for (i = 0; i < g_105e7500; i++)
		m_pArray0dc[i] = 0;
}
// END FUNCTION

// FUNCTION: 0x1013e530 size=0x25c
#include "StatDefault3.h"

extern int g_105f9224;
extern int g_105f90bc;
extern int g_105f8c64;
extern int g_105e7500;

void StatDefault3::sub_1013e530(StatDefault3 *pParent)
{
	int i, n;
	if (m_pszDisplayName == 0)
		m_pszDisplayName = pParent->m_pszDisplayName;
	if (m_14 == 0)
		m_14 = pParent->m_14;
	if (m_18 == 0)
		m_18 = pParent->m_18;
	if (m_1c == 0)
		m_1c = pParent->m_1c;
	if (m_20 == 0)
		m_20 = pParent->m_20;
	if (m_78 == 0)
		m_78 = pParent->m_78;
	if (m_7c == 0)
		m_7c = pParent->m_7c;
	n = g_105f9224;
	for (i = 0; i < n; i++)
		m_d0[0][i] = pParent->m_d0[0][i];
	n = g_105f90bc;
	for (i = 0; i < n; i++)
		m_d0[1][i] = pParent->m_d0[1][i];
	n = g_105f8c64;
	for (i = 0; i < n; i++)
		m_pd8[i] = pParent->m_pd8[i];
	n = g_105e7500;
	for (i = 0; i < n; i++)
		m_dc[i] = pParent->m_dc[i];
	m_8c[0] = pParent->m_8c[0];
	m_8c[1] = pParent->m_8c[1];
	m_8c[2] = pParent->m_8c[2];
	m_8c[3] = pParent->m_8c[3];
	m_8c[4] = pParent->m_8c[4];
	m_8c[5] = pParent->m_8c[5];
	m_8c[6] = pParent->m_8c[6];
	m_8c[7] = pParent->m_8c[7];
	m_8c[8] = pParent->m_8c[8];
	m_8c[9] = pParent->m_8c[9];
	m_8c[10] = pParent->m_8c[10];
	m_8c[11] = pParent->m_8c[11];
	m_ac = pParent->m_ac;
	m_98[0] = pParent->m_98[0];
	m_98[1] = pParent->m_98[1];
	m_98[2] = pParent->m_98[2];
	m_98[3] = pParent->m_98[3];
	m_98[4] = pParent->m_98[4];
	m_98[5] = pParent->m_98[5];
	m_98[6] = pParent->m_98[6];
	m_98[7] = pParent->m_98[7];
	m_98[8] = pParent->m_98[8];
	m_98[9] = pParent->m_98[9];
	m_a4 = pParent->m_a4;
	m_a8 = pParent->m_a8;
	m_a9 = pParent->m_a9;
	m_bc[0] = pParent->m_bc[0];
	m_bc[1] = pParent->m_bc[1];
	m_bc[2] = pParent->m_bc[2];
	m_cc = pParent->m_cc;
}
// END FUNCTION

// FUNCTION: 0x1013f320 size=0x42
#include <stdio.h>
#include <string.h>

extern char g_105e76d8[];
extern char g_102de300[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_102de300; }

struct CClanInfoView
{
	int m_n0;
	int m_n4;
	const char *m_psz8;
	int m_nC;
	int m_n10;
	int m_n14;
	int m_n18;
	const char *m_pszIcon;	// 0x1c
	char *sub_1013f320();
};

char *CClanInfoView::sub_1013f320()
{
	if (m_pszIcon) {
		sprintf(g_105e76d8, "Interface/CharacterMaintenance/%s", STRINGR(m_pszIcon));
		return g_105e76d8;
	}
	strcpy(g_105e76d8, "Interface/CharacterMaintenance/cm_clan_symbol_mercenary");
	return g_105e76d8;
}
// END FUNCTION

// FUNCTION: 0x1013fc80 size=0x22
extern char g_102c6c3c[];
extern char g_102c6c30[];

struct CClanDocLoader
{
    void sub_1013f9b0();
    void sub_1013fb80(const char *pszName);
    void sub_1013fc80();
};

void CClanDocLoader::sub_1013fc80()
{
    sub_1013f9b0();
    sub_1013fb80(g_102c6c3c);
    sub_1013fb80(g_102c6c30);
}
// END FUNCTION

// FUNCTION: 0x1013fdc0 size=0x2f
#include "CStatDefault3List.h"
// TARGET: sub_1013fdc0

void CStatDefault3List::sub_1013fdc0()
{
    int a = 0;
    sub_1013fcb0("ClanDoc", (int)&a);
    sub_1013fcb0("NPCTemplate", (int)&a);
}
// END FUNCTION

// FUNCTION: 0x1013ffa0 size=0x29
struct string_t_v { const char *pszValue; };
inline const char *STRING_V(const string_t_v *s) { return s->pszValue ? s->pszValue : ""; }
struct CEntry101d5e00 { char pad[0xc]; string_t_v m_str; };

struct CUnit101d5e00 {
    int m_4_dummy_unused;
    int m_nCount;
    CEntry101d5e00 **m_ppItems;
    const char *sub_1013ffa0(int index);
};

// TARGET: CUnit101d5e00::sub_1013ffa0
const char *CUnit101d5e00::sub_1013ffa0(int index)
{
    if (index < 0 || index >= m_nCount)
        return 0;
    return STRING_V(&m_ppItems[index]->m_str);
}
// END FUNCTION

// FUNCTION: 0x1013ffd0 size=0x29
extern char g_102de300[];

struct CUnit101d5e40 {
    char *sub_1013ffd0(int index);
};

char *CUnit101d5e40::sub_1013ffd0(int index)
{
    if (index < 0 || index >= *(int *)((char *)this + 4)) {
        return 0;
    }
    char **ppItems = *(char ***)((char *)this + 8);
    char **ppField = (char **)(ppItems[index] + 8);
    if (*ppField == 0) {
        return g_102de300;
    }
    return *ppField;
}
// END FUNCTION

// FUNCTION: 0x101401e0 size=0x29
#include "Vector.h"
struct CUnknown101d61e0_Sub10 {
	int m_n0;
	int m_n4;
	void Init() { m_n0 = 1; m_n4 = 0; }
};
struct CUnknown101d61e0 {
	int m_p0000;
	int m_n0004;
	int m_n0008;
	int m_n000c;
	CUnknown101d61e0_Sub10 m_sub10;
	int m_n0018;
	int m_n001c;
	int m_n0020;
	int m_n0024;
	int m_n0028;
	CUnknown101d61e0 *sub_101401e0(int p);
};

// TARGET: CUnknown101d61e0::sub_101401e0
CUnknown101d61e0 *CUnknown101d61e0::sub_101401e0(int p)
{
	m_sub10.Init();
	m_n0020 = 0;
	m_n0024 = 0;
	m_n0028 = 0;
	m_n000c = 0;
	m_n0004 = 0;
	m_n0008 = 0;
	m_p0000 = p;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10140290 size=0xec
#include "CUnknown101d62d0.h"

CUnknown101d62d0Record *CUnknown101d62d0::sub_10140290()
{
	if (m_nAllocated == m_nCount) {
		m_nAllocated++;
		if (m_ppRecords) {
			CUnknown101d62d0Record **p = new CUnknown101d62d0Record *[m_nAllocated];
			int i = 0;
			if (m_nCount > 0) {
				do {
					p[i] = m_ppRecords[i];
					i++;
				} while (i < m_nCount);
			}
			for (; i < m_nAllocated; i++)
				p[i] = 0;
			delete m_ppRecords;
			m_ppRecords = p;
		} else {
			m_ppRecords = new CUnknown101d62d0Record *[m_nAllocated];
			for (int i = 0; i < m_nAllocated; i++)
				m_ppRecords[i] = 0;
		}
		m_nCount++;
	} else {
		m_nCount++;
	}
	if (m_ppRecords[m_nCount - 1] == 0) {
		CUnknown101d62d0Record *p = new CUnknown101d62d0Record;
		m_ppRecords[m_nCount - 1] = p ? p->sub_10140140() : 0;
	}
	return m_ppRecords[m_nCount - 1];
}
// END FUNCTION

// FUNCTION: 0x10140380 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10140380();
};

// TARGET: CPtrList101d6400::sub_10140380
void CPtrList101d6400::sub_10140380()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x101405b0 size=0xf1
#include "CUnknown101d6750.h"

struct S101d61e0 {
	S101d61e0 *sub_101401e0(int);
	int m_data[11];
};

S101d61e0 *CUnknown101d6750::sub_101405b0()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101d61e0 **p = new S101d61e0 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101d61e0 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101d61e0 *p = new S101d61e0;
		m_pItems[m_count - 1] = p ? p->sub_101401e0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x101406b0 size=0x59
struct CPartListUnit2 {
    void sub_10140210();
};
struct CPartListUnit3 {
    char m_pad0000[4];
    int m_n4;	// 0x4
    int m_nItems;	// 0x8
    CPartListUnit2 **m_ppItems;	// 0xc
    void sub_101406b0();
};

// TARGET: CPartListUnit3::sub_101406b0
void CPartListUnit3::sub_101406b0()
{
    if (m_ppItems) {
        for (int i = 0; i < m_nItems; i++) {
            CPartListUnit2 *p = m_ppItems[i];
            if (p) {
                p->sub_10140210();
                delete p;
            }
            m_ppItems[i] = 0;
        }
        delete m_ppItems;
        m_ppItems = 0;
    }
    m_nItems = 0;
    m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10140a00 size=0x66
struct Elem1006cd00 { void sub_10140530(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_10140a00();
};
// TARGET: S1006cd00::sub_10140a00
void S1006cd00::sub_10140a00()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_10140530();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10140a70 size=0xc5
#include "CUnknown101d5bd0.h"
struct S101d6d50 { void sub_10140a00(); };
struct Loader { bool sub_10140c10(const char *path); };

struct CFileFinder
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual int FindFirst(const char *pattern, int *pHandle);
    virtual int FindNext(int handle);
    virtual void v24();
    virtual void FindClose(int handle);
};

extern CFileFinder *g_104a580c;
extern const char g_102c6c24[];
extern const char g_10286400[];
extern const char g_102c6d50[];
extern const char g_102c6d40[];
extern const char g_102c6d0c[];
extern void (*g_101e3108)(const char *, ...);
extern "C" int sub_101d159d(char *, const char *, ...);

// TARGET: CUnknown101d5bd0::sub_10140a70
void CUnknown101d5bd0::sub_10140a70()
{
    char path[260];
    int handle;

    ((S101d6d50 *)this)->sub_10140a00();
    int count = 0;
    sub_101d159d(path, g_102c6c24, g_10286400, g_102c6d50);
    if (g_104a580c->FindFirst(path, &handle)) {
        do {
            count++;
        } while (g_104a580c->FindNext(handle));
        g_104a580c->FindClose(handle);
        if (count > 0) {
            for (int i = 0; i < count; i++) {
                sub_101d159d(path, g_102c6d40, g_10286400, g_102c6d50, i);
                if (!((Loader *)this)->sub_10140c10(path))
                    g_101e3108(g_102c6d0c, path);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10142000 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10142000();
};

// TARGET: CPtrList101d6400::sub_10142000
void CPtrList101d6400::sub_10142000()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10143a90 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10143a90();
};

// TARGET: CPtrList101d6400::sub_10143a90
void CPtrList101d6400::sub_10143a90()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10144770 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10144770();
};

// TARGET: CPtrList101d6400::sub_10144770
void CPtrList101d6400::sub_10144770()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10145140 size=0x7c
#include <stdio.h>
#include "CUnknown101d82d0.h"
struct CNameRecord { int m_unk0; const char *m_pszText; int m_kind; };
struct CNameRecords { CNameRecord *sub_10145090(int index); };
struct CNameTable { const char *sub_1013ffa0(int index); };
extern CNameRecords g_105e7910;
extern CNameTable g_105e74fc;
extern char g_105e7890[];
extern char g_102de300[];
const char *CUnknown101d82d0_Elem::sub_10145140()
{
	const char **ppsz;
	switch (g_105e7910.sub_10145090(m_a)->m_kind) {
	case 0:
		if (m_b > -1) {
			if (!(m_c & 1))
				return g_105e74fc.sub_1013ffa0(m_b);
			sprintf(g_105e7890, "!%s", g_105e74fc.sub_1013ffa0(m_b));
			return g_105e7890;
		}
		break;
	case 2:
		ppsz = &g_105e7910.sub_10145090(m_a)->m_pszText;
		if (*ppsz)
			return *ppsz;
		break;
	case 1:
		ppsz = &g_105e7910.sub_10145090(m_a)->m_pszText;
		if (*ppsz)
			return *ppsz;
		break;
	}
	return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x101454a0 size=0x1a
namespace lifted {
extern int g_102c77c8;
extern int g_102c77cc;
extern char g_102c780c;
}
int sub_101454a0()
{
    lifted::g_102c77cc = 1;
    lifted::g_102c77c8 = (int)&lifted::g_102c780c;
    return (int)&lifted::g_102c77c8;
}
// END FUNCTION

// FUNCTION: 0x101457a0 size=0x95
#include "CUnknown101d8a70.h"
#include "ConVar.h"

class CvarInterface
{
public:
	virtual void v0();
	virtual void v1();
	virtual ConVar *FindVar(const char *name);
};
extern CvarInterface *g_104a57e0;

void *CUnknown101d8a70::sub_101457a0(void *pValue)
{
	static ConVar *s_pVar = g_104a57e0->FindVar("v_printrolls");
	if (s_pVar)
		sub_10145840(pValue, s_pVar->GetBool());
	else
		sub_10145840(pValue, false);
	return pValue;
}
// END FUNCTION

// FUNCTION: 0x10145ca0 size=0x92
#include "CUnknown101d90c0.h"
extern char g_102de300[];
int *sub_1015fc40(int *pOut, const char *str);
extern "C" int __cdecl sprintf(char *, const char *, ...);

// TARGET: CUnknown101d90c0::sub_10145ca0
bool CUnknown101d90c0::sub_10145ca0(CUnknown101d90c0_Section *pSection)
{
    if (pSection) {
        char buf[0x20];
        int tmp;
        const char *name = m_pszName;
        if (name == 0)
            name = g_102de300;
        CUnknown101d90c0_Section *sec = pSection->vfunc2(name);
        if (sec) {
            m_nName = *sub_1015fc40(&tmp, sec->vfunc13("Name", g_102de300));
            for (int i = 0; i < 100; i++) {
                sprintf(buf, "%d", i);
                m_values[i] = sec->vfunc10(buf, 1);
            }
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10145d40 size=0x1c
struct CUnk101d9190 {
	int m_00[3];
	int m_0c[100];
	int sub_10145d40(int index);
};

// TARGET: CUnk101d9190::sub_10145d40
int CUnk101d9190::sub_10145d40(int index)
{
	if (index >= 0 && index < 100) {
		return m_0c[index];
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10146a90 size=0xf1
#include "CUnknown101db210.h"

struct S6 {
	S6 *sub_101467d0(int);
	int m_data[6];
};

S6 *CUnknown101db210::sub_10146a90()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S6 **p = new S6 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S6 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S6 *p = new S6;
		m_pItems[m_count - 1] = p ? p->sub_101467d0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10146cb0 size=0x55
#include "CStatDefault60List.h"

class IKVNodeView
{
public:
	virtual void v0();
	virtual void v1();
	virtual IKVNodeView *vfunc2(const char *pszName);
	virtual IKVNodeView *vfunc3();
};

// TARGET: CStatDefault60List::sub_10146cb0
char CStatDefault60List::sub_10146cb0(IKVNodeView *pKV, void *pFilter)
{
	sub_10146e00();
	if (pKV) {
		IKVNodeView *pNode = pKV->vfunc2("Affects_Table");
		while (pNode) {
			StatDefault60 *pItem = sub_10146d10();
			if (pItem) {
				pItem->sub_10146990(pNode, pFilter);
				pNode = pNode->vfunc3();
			}
		}
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10146ed0 size=0x25
namespace block_101db960 {
struct CUnitA { int m_0, m_4, m_8, m_c; void *sub_101465b0(); };
void *CUnitA::sub_101465b0()
{
	m_0 = 0;
	m_4 = -1;
	m_8 = -1;
	m_c = 100;
	return this;
}
struct CUnitB { int m_0, m_4, m_8; CUnitB *sub_10146c90(); };
CUnitB *CUnitB::sub_10146c90()
{
	m_8 = 0;
	m_0 = 0;
	m_4 = 0;
	return this;
}
}
using namespace block_101db960;

struct CUnk101db960 {
	int m_0, m_4, m_8, m_c, m_10;
	CUnitA m_a;
	CUnitB m_b;
	CUnk101db960 *sub_10146ed0();
};

// TARGET: CUnk101db960::sub_10146ed0
CUnk101db960 *CUnk101db960::sub_10146ed0()
{
	m_a.sub_101465b0();
	m_b.sub_10146c90();
	m_0 = 0;
	m_4 = 0;
	m_8 = 0;
	m_c = 0;
	m_10 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10147a40 size=0x4e
#include "CUnknown101dcc80.h"
struct CItemVec {
	int m_nGrow;
	int m_nAlloc;
	int m_nCount;
	void **m_pData;
	void sub_101474a0(const CItemVec *pOther);
};
struct CRecListUnit : CUnknown101dcc80 {
	CItemVec m_Items;	// 0x0c
	void sub_10147a40(const CRecListUnit *pOther);
};
void CRecListUnit::sub_10147a40(const CRecListUnit *pOther)
{
	m_Items.sub_101474a0(&pOther->m_Items);
	for (int i = 0; i < pOther->m_nCount; i++)
		*sub_10147a90() = *pOther->m_ppRecords[i];
}
// END FUNCTION

// FUNCTION: 0x10147a90 size=0xe6
#include "CUnknown101dcc80.h"

CUnknown101dcc80Record *CUnknown101dcc80::sub_10147a90()
{
	if (m_nAllocated == m_nCount) {
		m_nAllocated++;
		if (m_ppRecords) {
			CUnknown101dcc80Record **p = new CUnknown101dcc80Record *[m_nAllocated];
			int i = 0;
			if (m_nCount > 0) {
				do {
					p[i] = m_ppRecords[i];
					i++;
				} while (i < m_nCount);
			}
			for (; i < m_nAllocated; i++)
				p[i] = 0;
			delete m_ppRecords;
			m_ppRecords = p;
		} else {
			m_ppRecords = new CUnknown101dcc80Record *[m_nAllocated];
			for (int i = 0; i < m_nAllocated; i++)
				m_ppRecords[i] = 0;
		}
		m_nCount++;
	} else {
		m_nCount++;
	}
	if (m_ppRecords[m_nCount - 1] == 0) {
		CUnknown101dcc80Record *p = new CUnknown101dcc80Record;
		m_ppRecords[m_nCount - 1] = p ? p->sub_10147760() : 0;
	}
	return m_ppRecords[m_nCount - 1];
}
// END FUNCTION

// FUNCTION: 0x10147b80 size=0x5d
#include "CUnknown101dcdb0.h"

void CUnknown101dcdb0::sub_10147b80()
{
	if (m_ppItems) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppItems[i])
				delete m_ppItems[i];
			m_ppItems[i] = 0;
		}
		delete m_ppItems;
		m_ppItems = 0;
	}
	m_nCount = 0;
	m_nGrow = 0;
}
// END FUNCTION

// FUNCTION: 0x10147be0 size=0xac
#include "CUnknown101dce30.h"

bool CUnknown101dce30::sub_10147be0(CUnknown101dc5a0Keys *pKeys, const char *pszName)
{
	if (pKeys) {
		CUnknown101dc5a0Keys *pBlock = pKeys->vfunc2(pszName);
		if (pBlock) {
			CUnknown101dc5a0Keys *p;
			for (p = pBlock->vfunc2("Particle_ThirdPerson"); p; p = p->vfunc3()) {
				CUnknown101dcc80Record *pRecord = m_particles.sub_10147a90();
				pRecord->m_nSlot = 0;
				if (!sub_10147c90(p, pRecord))
					return false;
			}
			for (p = pBlock->vfunc2("Particle_FirstPerson"); p; p = p->vfunc3()) {
				CUnknown101dcc80Record *pRecord = m_particles.sub_10147a90();
				pRecord->m_nSlot = 1;
				if (!sub_10147c90(p, pRecord))
					return false;
			}
			m_sounds.sub_101475e0(pBlock);
		}
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10147e30 size=0x2b
#include "CUnknown101dd480.h"

struct CUnknown101dd480Sub
{
    void sub_101472e0();
    void sub_10147990();
};

// TARGET: CUnknown101dd480::sub_10147e30
CUnknown101dd480 *CUnknown101dd480::sub_10147e30()
{
    ((CUnknown101dd480Sub *)((char *)this + 0x10))->sub_101472e0();
    ((CUnknown101dd480Sub *)((char *)this + 0x20))->sub_10147990();
    m_nHead = -1;
    m_n04 = 0;
    m_n08 = 0;
    m_b0c = 0;
    m_b0d = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101482a0 size=0x8a
#include "S101df260.h"

S101ddec0 *S101ddec0::sub_101482a0()
{
	m_o04.sub_10148020();
	m_o0c.sub_10148020();
	m_o14.sub_10148020();
	m_o20.sub_10148020();
	m_o28.sub_10148020();
	m_o50.sub_10148120();
	m_o5c.sub_10147990();
	m_o78.sub_10147990();
	m_o94.sub_101472e0();
	m_b00 = 0;
	m_pszSchedule34 = 0;
	m_n38 = -1;
	m_n3c = -1;
	m_n40 = 0;
	m_b1d = 0;
	m_b1c = 0;
	m_b1e = 0;
	m_n44 = 0;
	m_n48 = 0;
	m_n4c = 0;
	m_na4 = 0;
	m_na8 = 0;
	m_n30 = 0x32;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10148330 size=0x1f
struct CUnk101ddf80Sub94
{
    void sub_10147300();
};
struct CUnk101ddf80Sub78
{
    void sub_101479b0();
};
struct CUnk101ddf80
{
    char pad[0x5c];
    CUnk101ddf80Sub78 m_5c;
    void sub_10148330();
};
void CUnk101ddf80::sub_10148330()
{
    ((CUnk101ddf80Sub94 *)((char *)this + 0x94))->sub_10147300();
    ((CUnk101ddf80Sub78 *)((char *)this + 0x78))->sub_101479b0();
    ((CUnk101ddf80Sub78 *)((char *)this + 0x5c))->sub_101479b0();
}
// END FUNCTION

// FUNCTION: 0x10148790 size=0x66
#include "S101df260.h"

S101df260 *S101df260::sub_10148790(int a)
{
	m_items[0].sub_101482a0();
	m_items[1].sub_101482a0();
	m_items[2].sub_101482a0();
	m_items[3].sub_101482a0();
	m_items[4].sub_101482a0();
	m_obj364.sub_10148020();
	m_n36c = -1;
	m_n00 = a;
	m_b371 = m_b370 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10148800 size=0x38
// TARGET: CUnknown101df2f0::sub_10148800
struct CUnknownDtorMember101df2f0
{
	char m_pad[0xac];
	void sub_10148330();
};

struct CUnknown101df2f0
{
	char m_pad0000[8];
	CUnknownDtorMember101df2f0 m_m8;
	CUnknownDtorMember101df2f0 m_mb4;
	CUnknownDtorMember101df2f0 m_m160;
	CUnknownDtorMember101df2f0 m_m20c;
	CUnknownDtorMember101df2f0 m_m2b8;
	void sub_10148800();
};

void CUnknown101df2f0::sub_10148800()
{
	m_m2b8.sub_10148330();
	m_m20c.sub_10148330();
	m_m160.sub_10148330();
	m_mb4.sub_10148330();
	m_m8.sub_10148330();
}
// END FUNCTION

// FUNCTION: 0x10148cb0 size=0xe9
struct Vec3X { int x, y, z; };
struct ItemVecX {
	char d[0x10];
	void sub_101474a0(const ItemVecX *pOther);
};
struct RecVecX {
	char d[0x1c];
	void sub_10147a40(const RecVecX *pOther);
};
struct SoundRecX {
	char b0;
	int i4, i8, ic, i10, i14, i18;
	char b1c, b1d, b1e;
	int i20, i24, i28, i2c, i30, i34, i38, i3c, i40, i44, i48, i4c;
	Vec3X v50;
	RecVecX va5c;
	RecVecX va78;
	ItemVecX v94;
	int ia4, ia8;

	SoundRecX *sub_10148cb0(const SoundRecX *o);
};

SoundRecX *SoundRecX::sub_10148cb0(const SoundRecX *o)
{
	b0 = o->b0;
	i4 = o->i4;
	i8 = o->i8;
	ic = o->ic;
	i10 = o->i10;
	i14 = o->i14;
	i18 = o->i18;
	b1c = o->b1c;
	b1d = o->b1d;
	b1e = o->b1e;
	i20 = o->i20;
	i24 = o->i24;
	i28 = o->i28;
	i2c = o->i2c;
	i30 = o->i30;
	i34 = o->i34;
	i38 = o->i38;
	i3c = o->i3c;
	i40 = o->i40;
	i44 = o->i44;
	i48 = o->i48;
	i4c = o->i4c;
	v50 = o->v50;
	va5c.sub_10147a40(&o->va5c);
	va78.sub_10147a40(&o->va78);
	v94.sub_101474a0(&o->v94);
	ia4 = o->ia4;
	ia8 = o->ia8;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10149100 size=0xee
#include "CUnknown101e01e0.h"

struct S101df260 {
	S101df260 *sub_10148790(int);
	int m_data[221];
};

S101df260 *CUnknown101e01e0::sub_10149100()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101df260 **p = new S101df260 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101df260 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101df260 *p = new S101df260;
		m_pItems[m_count - 1] = p ? p->sub_10148790(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x101491f0 size=0x66
struct Elem1006cd00 { void sub_10148800(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_101491f0();
};
// TARGET: S1006cd00::sub_101491f0
void S1006cd00::sub_101491f0()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_10148800();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10149260 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_10149260(const char *name);
};
// TARGET: CNamedList9fd0::sub_10149260
int CNamedList9fd0::sub_10149260(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10149600 size=0x4c
#include "CUnknown101e0f00.h"
#include "S101df260.h"
struct TailList101e08d0 {
	int m_n0;
	int m_nCount;
	S101df260 **m_pp;
	S101df260 *sub_101492b0(int i);
};
struct EntryView101e08d0 {
	char m_pad[0x34];
	char m_b34;
	char m_pad35[0xdc - 0x35];
	TailList101e08d0 m_tail;
	char sub_10149600(int a, int b);
};
// TARGET: EntryView101e08d0::sub_10149600
char EntryView101e08d0::sub_10149600(int a, int b)
{
	char *p;
	for (int i = 0; i < m_tail.m_nCount; i++) {
		p = &m_tail.sub_101492b0(i)->m_items[4].m_b00;
		if (*p) {
			m_b34 = 1;
			return 1;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10149890 size=0xee
#include "CUnknown101e0c30.h"

struct S101e0520 {
	S101e0520 *sub_10149370(int);
	int m_data[58];
};

S101e0520 *CUnknown101e0c30::sub_10149890()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101e0520 **p = new S101e0520 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101e0520 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101e0520 *p = new S101e0520;
		m_pItems[m_count - 1] = p ? p->sub_10149370(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10149980 size=0x6a
#include "CUnknown101d5bd0.h"

extern "C++" void __cdecl operator delete(void *);

// TARGET: CUnknown101d5bd0::sub_10149980
void CUnknown101d5bd0::sub_10149980()
{
    if (m_pData) {
        for (int i = 0; i < m_count; i++) {
            CUnknown101d5bd0Entry *p = m_pData[i];
            if (p) {
                p->sub_10149400();
                operator delete(p);
            }
            m_pData[i] = 0;
        }
        operator delete(m_pData);
        m_pData = 0;
    }
    m_count = 0;
    m_unk0 = 0;
    m_bFlag18 = 1;
}
// END FUNCTION

// FUNCTION: 0x101499f0 size=0xc5
#include "CUnknown101d5bd0.h"
struct S101d6d50 { void sub_10149980(); };
struct Loader { bool sub_10149b90(const char *path); };

struct CFileFinder
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual int FindFirst(const char *pattern, int *pHandle);
    virtual int FindNext(int handle);
    virtual void v24();
    virtual void FindClose(int handle);
};

extern CFileFinder *g_104a580c;
extern const char g_102c6c24[];
extern const char g_10286400[];
extern const char g_102c8800[];
extern const char g_102c6d40[];
extern const char g_102c87cc[];
extern void (*g_101e3108)(const char *, ...);
extern "C" int sub_101d159d(char *, const char *, ...);

// TARGET: CUnknown101d5bd0::sub_101499f0
void CUnknown101d5bd0::sub_101499f0()
{
    char path[260];
    int handle;

    ((S101d6d50 *)this)->sub_10149980();
    int count = 0;
    sub_101d159d(path, g_102c6c24, g_10286400, g_102c8800);
    if (g_104a580c->FindFirst(path, &handle)) {
        do {
            count++;
        } while (g_104a580c->FindNext(handle));
        g_104a580c->FindClose(handle);
        if (count > 0) {
            for (int i = 0; i < count; i++) {
                sub_101d159d(path, g_102c6d40, g_10286400, g_102c8800, i);
                if (!((Loader *)this)->sub_10149b90(path))
                    g_101e3108(g_102c87cc, path);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10149c30 size=0xa7
#include "CUnknown101e0f00.h"
#include "IFileSystemFind.h"

extern IFileSystemFind *g_104a580c;
extern void (__cdecl *g_101e3108)(const char *fmt, const char *arg);

struct CDataVBaseX
{
	virtual void v0();
	virtual void v1();
};
struct CDataNodeX
{
	virtual void v0();
	virtual void v1();
	virtual CDataNodeX *vfunc2(const char *name);
	virtual CDataNodeX *vfunc3();
};
struct CDataFileX
{
	virtual void v0();
	virtual void v1();
	virtual CDataNodeX *vfunc2(const char *name);
	int *m_pVBTable;
};

CDataFileX *__cdecl sub_101545c0(const char *name, IFileSystemFind *pFileSystem);
void __stdcall sub_10149600(CDataNodeX *pNode, CUnknown101e0f00 *pOwner);

// TARGET: CUnknown101e0f00::sub_10149c30
bool CUnknown101e0f00::sub_10149c30(const char *name, int *pIndex)
{
	CDataFileX *pFile = sub_101545c0(name, g_104a580c);
	if (!pFile) {
		g_101e3108("Unable to open data file for: %s\n", name);
		return false;
	}
	CDataNodeX *pNode = pFile->vfunc2("DisciplineTgt");
	while (pNode) {
		void *pEntry = m_ppEntries[(*pIndex)++];
		if (!pEntry) {
			g_101e3108("Unable to parse data file for: %s.  Memory allocation ERROR!\n", name);
			return false;
		}
		sub_10149600(pNode, this);
		pNode = pNode->vfunc3();
	}
	((CDataVBaseX *)((char *)pFile + 4 + pFile->m_pVBTable[1]))->v1();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10149f70 size=0x42
#include "CStatusFlagList.h"
unsigned int CStatusFlagList::sub_10149f70(int nKey, int nSkip)
{
	for (int i = 0; i < m_nCount; i++)
	{
		if (m_ppEntries[i]->m_nKey == nKey)
		{
			if (i + nSkip < m_nCount)
				return m_ppEntries[i + nSkip]->m_nFlags;
			return 0;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1014cfd0 size=0x41
struct CGravityVar101e7dd0 { virtual void v0(); virtual bool IsZero(); char pad[0x28 - 4]; float m_flValue; };
extern CGravityVar101e7dd0 *g_104dfce4;
struct CRules101e7dd0 { char pad[0x3e0]; float m_f3e0; float m_f3e4; float sub_1014cfd0(float a); };
float CRules101e7dd0::sub_1014cfd0(float a)
{
    float g;
    if (g_104dfce4->IsZero())
        g = 0.0f;
    else
        g = g_104dfce4->m_flValue;
    return (a * a / (g + g) - m_f3e0) / m_f3e4;
}
// END FUNCTION

// FUNCTION: 0x1014de80 size=0x1e
struct CUnk101d8230 {
	void sub_101451c0();
};

struct CUnk101e9570 {
	int m_00;
	char m_pad04[0x1c];
	int m_20;
	int m_24;
	CUnk101e9570 *sub_1014de80(int a);
};

// TARGET: CUnk101e9570::sub_1014de80
CUnk101e9570 *CUnk101e9570::sub_1014de80(int a)
{
	((CUnk101d8230 *)((char *)this + 0x1c))->sub_101451c0();
	m_24 = 0;
	m_00 = a;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1014dea0 size=0x75
struct CKVString { int m_pStr; CKVString() {} };

struct CKVNode {
	virtual void v0();
	virtual void v1();
	virtual CKVNode *v2(const char *name);
};

CKVString sub_1015f810(CKVNode *pNode);
CKVString sub_1015f830(CKVNode *pNode, const char *name);

struct CHistoryItem {
	char m_pad0000[8];
	int m_nText;	// 0x08
	int m_nDescription;	// 0x0c
	int m_nShortDescription;	// 0x10
	int m_nShortPenaltyDescription;	// 0x14

	bool sub_1014dea0(CKVNode *pKeys);
	void Load(CKVNode *p)
	{
		m_nText = sub_1015f810(p).m_pStr;
		m_nDescription = sub_1015f830(p, "Description").m_pStr;
		m_nShortDescription = sub_1015f830(p, "ShortDescription").m_pStr;
		m_nShortPenaltyDescription = sub_1015f830(p, "ShortPenaltyDescription").m_pStr;
	}
};

// TARGET: CHistoryItem::sub_1014dea0
bool CHistoryItem::sub_1014dea0(CKVNode *pKeys)
{
	if (!pKeys)
		return true;
	CKVNode *p = pKeys->v2("Text");
	if (p)
		Load(p);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014df20 size=0x96
#include "CUnknown101e98c0.h"

extern CEffectTable g_105f8b98;
int *sub_1015f7e0(int *pOut, CDataNode *pNode, const char *pszName);
void sub_1014dfc0(void *pGenders, const char *pszList);

// TARGET: CUnknown101e98c0Item::sub_1014df20
bool CUnknown101e98c0Item::sub_1014df20(CDataNode *pNode)
{
	if (pNode == 0)
		return true;
	CDataNode *pGeneral = pNode->v2("General");
	if (pGeneral) {
		int tmp;
		m_nInternalName = *sub_1015f7e0(&tmp, pGeneral, "InternalName");
		m_sub.sub_101452d0(pGeneral->v13("CritterScope", ""));
		sub_1014dfc0(m_genders, pGeneral->v13("Genders_Disallowed", ""));
		m_nEffect = g_105f8b98.sub_10157b80(pGeneral->v13("Effect", ""));
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014e090 size=0x67
#include "CUnknown101e98c0.h"

// TARGET: CUnknown101e98c0::sub_1014e090
void CUnknown101e98c0::sub_1014e090()
{
	if (m_ppItems)
	{
		for (int i = 0; i < m_count; i++)
		{
			CUnknown101e98c0Item *p = m_ppItems[i];
			if (p)
			{
				p->m_sub.sub_101451d0();
				delete p;
			}
			m_ppItems[i] = 0;
		}
		operator delete(m_ppItems);
		m_ppItems = 0;
	}
	m_count = 0;
	m_field00 = 0;
}
// END FUNCTION

// FUNCTION: 0x1014e1f0 size=0xac
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
struct HNode { virtual void v0(); virtual void v1(); virtual HNode* Find(const char*); virtual HNode* Next(); };
struct HStream { virtual void v0(); virtual void Close(); };
struct HFile { virtual void v0(); virtual void v1(); virtual HNode* Find(const char*); int* vb; };
struct HItem { void sub_1014dea0(HNode*); };
struct HOwner { HItem* sub_1014e100(); char sub_1014e1f0(const char*); };
extern void* g_104a580c;
HFile* sub_101545c0(const char*, void*);
extern void (*g_101e3108)(const char*, ...);
extern char g_102c99a4[];
extern char g_102c9998[];
extern char g_102c9950[];
// TARGET: HOwner::sub_1014e1f0
char HOwner::sub_1014e1f0(const char* name)
{
	HFile* f = sub_101545c0(name, g_104a580c);
	if (!f) {
		g_101e3108(g_102c99a4, name);
		return 0;
	}
	HNode* n = f->Find(g_102c9998);
	while (n) {
		HItem* it = sub_1014e100();
		if (!it) {
			g_101e3108(g_102c9950, name);
			((HStream*)((char*)f + f->vb[1] + 4))->Close();
			return 0;
		}
		it->sub_1014dea0(n);
		n = n->Next();
	}
	((HStream*)((char*)f + f->vb[1] + 4))->Close();
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1014e2a0 size=0xb3
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CHistoryList.h"

struct CKVBase
{
	virtual void a0();
	virtual void Release();
};
struct CKVNode
{
	virtual void a0(); virtual void a1();
	virtual CKVNode *Find(const char *name);
	virtual CKVNode *Next();
};
struct CKVRoot : virtual CKVBase
{
	virtual void r0(); virtual void r1();
	virtual CKVNode *Find(const char *name);
};
struct CHistEntry
{
	void sub_1014df20(CKVNode *pNode);
};

extern void *g_104a580c;
extern CKVRoot *sub_101545c0(const char *, void *);
extern void (*g_101e3108)(const char *, ...);

bool CHistoryList::sub_1014e2a0(const char *pszFile)
{
	CKVRoot *pRoot = sub_101545c0(pszFile, g_104a580c);
	if (!pRoot) {
		g_101e3108("Unable to open history data file for: %s\n", pszFile);
		return false;
	}
	CKVNode *pNode = pRoot->Find("HistoryData");
	if (pNode) {
		int i = 0;
		do {
			CHistEntry *pEntry = (*(CHistEntry ***)((char *)this + 8))[i++];
			if (!pEntry) {
				g_101e3108("Unable to parse history data file for: %s.  Memory allocation ERROR!\n", pszFile);
				pRoot->Release();
				return false;
			}
			pEntry->sub_1014df20(pNode);
			pNode = pNode->Next();
		} while (pNode);
	}
	pRoot->Release();
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014e630 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_1014e630(const char *name);
};
// TARGET: CNamedList9fd0::sub_1014e630
int CNamedList9fd0::sub_1014e630(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1014e680 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_1014e680(const char *name);
};
// TARGET: CNamedList9fd0::sub_1014e680
int CNamedList9fd0::sub_1014e680(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101501b0 size=0x1c
struct CUnk101ec450 {
	void sub_101501b0(int a, int b);
};
extern void (__cdecl *g_105e863c)(void *, int, int);

// TARGET: CUnk101ec450::sub_101501b0
void CUnk101ec450::sub_101501b0(int a, int b)
{
	if (g_105e863c) {
		g_105e863c(this, a, b);
	}
}
// END FUNCTION

// FUNCTION: 0x101501d0 size=0x1f
extern char *(__cdecl *g_105e8640)(int, int);
extern char g_102de300[];

struct CUnk101ec480
{
    char *sub_101501d0(int b);
};
char *CUnk101ec480::sub_101501d0(int b)
{
    if (g_105e8640)
    {
        return g_105e8640((int)this, b);
    }
    return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x101501f0 size=0x24
typedef const char *(__cdecl *Fn1073a398)(void *pThis, int a, int b);

extern Fn1073a398 g_105e8644;
extern const char g_102de300;

// TARGET: sub_101501f0
const char *__fastcall sub_101501f0(void *pThis, int dummy, int a, int b)
{
	if (g_105e8644)
		return g_105e8644(pThis, a, b);
	return &g_102de300;
}
// END FUNCTION

// FUNCTION: 0x10150bc0 size=0x7b
#include "CUnknown101ed170.h"

void CUnknown101ed170::sub_10150bc0()
{
    if (m_p10 != 0) {
        delete m_p10;
        m_p10 = 0;
    }
    if (m_p14 != 0) {
        delete m_p14;
        m_p14 = 0;
    }
    if (m_p18 != 0) {
        delete m_p18;
        m_p18 = 0;
    }
    if (m_p20 != 0) {
        delete m_p20;
        m_p20 = 0;
    }
    if (m_p24 != 0) {
        delete m_p24;
        m_p24 = 0;
    }
    if (m_p28 != 0) {
        delete m_p28;
        m_p28 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10151840 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10151840();
};

// TARGET: CPtrList101d6400::sub_10151840
void CPtrList101d6400::sub_10151840()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10151890 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10151890();
};

// TARGET: CPtrList101d6400::sub_10151890
void CPtrList101d6400::sub_10151890()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10152bb0 size=0x1a
struct CUnknown101f0b50 { void * sub_10152bb0(int); };
void * CUnknown101f0b50::sub_10152bb0(int a0)
{
    *(int *)this = a0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 8) = -1;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10152bd0 size=0x2a
#include "CUnknown101f0b80.h"

int *sub_1015f7e0(int *pValue, int a, const char *pszName);
extern const char g_102863d0[];

// TARGET: CUnknown101f0b80::sub_10152bd0
void CUnknown101f0b80::sub_10152bd0(int a, int b)
{
    m_n08 = b;
    m_n04 = *sub_1015f7e0(&b, a, g_102863d0);
}
// END FUNCTION

// FUNCTION: 0x10152e30 size=0xeb
#include "CUnknown101f0ea0.h"

struct S101f0b50 {
	S101f0b50 *sub_10152bb0(int);
	int m_data[5];
};

S101f0b50 *CUnknown101f0ea0::sub_10152e30()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101f0b50 **p = new S101f0b50 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101f0b50 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101f0b50 *p = new S101f0b50;
		m_pItems[m_count - 1] = p ? p->sub_10152bb0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10152f20 size=0x60
#include "CReactionData.h"

void CReactionData::sub_10152f20()
{
	if (m_ppEntries) {
		for (int i = 0; i < m_nEntries; i++) {
			delete m_ppEntries[i];
			m_ppEntries[i] = 0;
		}
		delete m_ppEntries;
		m_ppEntries = 0;
	}
	m_nEntries = 0;
	m_n00 = 0;
	if (m_p18) {
		delete m_p18;
		m_p18 = 0;
	}
	m_n14 = 0;
}
// END FUNCTION

// FUNCTION: 0x10152f80 size=0x6b
#include "CUnknown101f1050.h"

extern void (*g_101e3108)(const char *, ...);

int *CUnknown101f1050::sub_10152f80()
{
    int *p = (int *)operator new(m_nCount * 4 + 4);
    if (p) {
        int i = 0;
        if (m_nCount > 0) {
            do {
                i++;
                p[i - 1] = m_pData[i - 1];
            } while (i < m_nCount);
        }
        delete m_pData;
        int n = m_nCount + 1;
        m_pData = p;
        m_nCount = n;
        int *q = &m_pData[m_nCount - 1];
        return q;
    }
    g_101e3108("Unable to allocate memory for strings in ReactionInfoList!.\n");
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10152ff0 size=0xd0
#include "CUnknown101f10e0.h"

struct CReactionKV
{
	virtual void v0(); virtual void v1();
	virtual CReactionKV *FindKey(const char *name);	// slot 2
	virtual CReactionKV *GetNextKey();	// slot 3
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual const char *GetString(const char *name, const char *def);	// slot 13
};

struct CReactionItem { void sub_10152bd0(CReactionKV *pGroup, int id); };
struct CReactionNames { int sub_10153720(const char *name); };

extern CReactionNames g_105e8a58;
extern void (__cdecl *g_101e3108)(const char *fmt, ...);
extern char g_102de300[];
int *sub_1015f7e0(int *pOut, CReactionKV *pData, const char *name);

bool CUnknown101f10e0::sub_10152ff0(void *pData)
{
	CReactionKV *pKV = (CReactionKV *)pData;
	if (pKV) {
		const char *pszName = pKV->GetString("InternalName", g_102de300);
		int id = g_105e8a58.sub_10153720(pszName);
		if (id == -1) {
			int *pSlot = sub_10152f80();
			if (pSlot) {
				int tmp;
				*pSlot = *sub_1015f7e0(&tmp, pKV, "InternalName");
			}
			id = g_105e8a58.sub_10153720(pszName);
		}
		CReactionKV *pGroup = pKV->FindKey("ReactionGroup");
		while (pGroup) {
			CReactionItem *pItem = (CReactionItem *)sub_10152e30();
			if (!pItem) {
				g_101e3108("Unable to parse data file ReactionInfoList.  Memory allocation ERROR!\n");
				return false;
			}
			pItem->sub_10152bd0(pGroup, id);
			pGroup = pGroup->GetNextKey();
		}
		return true;
	}
	g_101e3108("Unable to parse data file for ReactionInfoList.\n");
	return false;
}
// END FUNCTION

// FUNCTION: 0x10153610 size=0x29
extern char g_102ca648[];
extern char g_102de300[];

struct CUnknown101f18b0 {
    char pad_0000[0x14];
    int m_nCount;
    char **m_ppElements;
    char *sub_10153610(int i);
};

// TARGET: CUnknown101f18b0::sub_10153610
char *CUnknown101f18b0::sub_10153610(int i)
{
    if (i < 0 || i >= m_nCount)
        return g_102ca648;
    char **pp = &m_ppElements[i];
    if (*pp == 0)
        return g_102de300;
    return *pp;
}
// END FUNCTION

// FUNCTION: 0x10153680 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_10153680(const char *name);
};
// TARGET: CNamedList9fd0::sub_10153680
int CNamedList9fd0::sub_10153680(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101536d0 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_101536d0(const char *name);
};
// TARGET: CNamedList9fd0::sub_101536d0
int CNamedList9fd0::sub_101536d0(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10153720 size=0x41
extern "C" int sub_101e28e0(const char *a, const char *b);

struct CUnknown101f1a30 {
    char m_pad0000[0x14];
    int m_nCount;
    const char *sub_10153610(int index);
    int sub_10153720(const char *name);
};

// TARGET: sub_10153720
int CUnknown101f1a30::sub_10153720(const char *name)
{
    int i = 0;
    if (m_nCount > 0) {
        do {
            if (sub_101e28e0(sub_10153610(i), name) == 0) {
                return i;
            }
            i++;
        } while (i < m_nCount);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10153ba0 size=0x2d
#include "VKeyValues.h"
char *sub_101546c0(const char *pszSrc);
extern char g_105e8ac8;
void VKeyValues::sub_10153ba0(const char *pszName)
{
	m_pszName14 = sub_101546c0(pszName);
	m_pszValue0c = 0;
	m_nType10 = 0;
	m_pChild1c = 0;
	m_pNext18 = 0;
	m_pParent20 = 0;
	g_105e8ac8 = 0;
}
// END FUNCTION

// FUNCTION: 0x10153c20 size=0x23
struct VB101f2140 { virtual void f0(); virtual void f1(); virtual ~VB101f2140(); };
struct D101f2140 : virtual VB101f2140 { int m_ref; char pad[0x28 - 8]; D101f2140(); };
struct E101f2140 { char pad[4]; void sub_10153c20(); };

// TARGET: E101f2140::sub_10153c20
void E101f2140::sub_10153c20()
{
	D101f2140 *d = (D101f2140 *)((char *)this - 0x28);
	int *pRef = (int *)((char *)this - 0x24);
	if (--*pRef <= 0)
		delete d;
}
// END FUNCTION

// FUNCTION: 0x10153f10 size=0x20
struct CVBaseA { int a; };
struct CVBaseB { int b; };
struct CVDerived : virtual CVBaseA, virtual CVBaseB { int d; };
struct CUnk101f2520
{
    CVDerived *sub_10154540(void *a);
    CVBaseB *sub_10153f10(void *a);
};
CVBaseB *CUnk101f2520::sub_10153f10(void *a)
{
    return ((CUnk101f2520 *)((char *)this - 0x30))->sub_10154540(a);
}
// END FUNCTION

// FUNCTION: 0x10153fb0 size=0x2c
extern int g_105eb338;
extern char g_105eab08[32][64];
extern char g_105e8ac8[];

// TARGET: sub_10153fb0
void sub_10153fb0(void)
{
	char *pDst;
	char *pSrc;
	char c;

	if (g_105eb338 < 0x20)
	{
		pSrc = g_105e8ac8;
		pDst = g_105eab08[g_105eb338];
		g_105eb338 = g_105eb338 + 1;
		do
		{
			c = *pSrc;
			pSrc++;
			*pDst = c;
			pDst++;
		} while (c != 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10153fe0 size=0x2a
#include <string.h>
extern int g_105eb338;
extern char g_105eab08[][64];
extern char g_105e8ac8[];

void sub_10153fe0()
{
    if (g_105eb338 > 0) {
        g_105eb338--;
        strcpy(g_105e8ac8, g_105eab08[g_105eb338]);
    }
}
// END FUNCTION

// FUNCTION: 0x101540a0 size=0x49
#include "VKeyValues.h"
#include <stdlib.h>

int VKeyValuesInterface::sub_101540a0(const char *pszName, int nDefault)
{
	VKeyValues *p = (VKeyValues *)((char *)this - 0x30);
	if (pszName)
		p = p->sub_10154540(pszName);
	if (p) {
		switch (p->m_nType10) {
		case 1:
			return atoi(p->m_pszValue0c);
		case 3:
			return (int)*(float *)&p->m_nValue08;
		default:
			return p->m_nValue08;
		}
	}
	return nDefault;
}
// END FUNCTION

// FUNCTION: 0x101540f0 size=0x29
struct CVBaseView101f27b0 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual int vfunc10(int a, int b);
};

struct CUnknown101f27b0 {
    bool sub_101540f0(int a, bool b);
};

// TARGET: CUnknown101f27b0::sub_101540f0
bool CUnknown101f27b0::sub_101540f0(int a, bool b)
{
    char *self = (char *)this;
    int off = *(int *)(*(char **)(self - 0x30) + 8);
    CVBaseView101f27b0 *base = (CVBaseView101f27b0 *)(self + off - 0x30);
    return (bool)base->vfunc10(a, (unsigned char)b);
}
// END FUNCTION

// FUNCTION: 0x10154120 size=0x2f
#include "VKeyValues.h"
void *VKeyValuesInterface::sub_10154120(const char *pszName, void *pDefault)
{
	VKeyValues *pKey = (VKeyValues *)((char *)this - 0x30);
	if (pszName)
		pKey = pKey->sub_10154540(pszName);
	if (pKey) {
		if (pKey->m_nType10 != 4)
			return 0;
		return (void *)pKey->m_nValue08;
	}
	return pDefault;
}
// END FUNCTION

// FUNCTION: 0x10154150 size=0x4e
#include <stdlib.h>
#include "VKeyValues.h"
// TARGET: VKeyValuesInterface::sub_10154150
float VKeyValuesInterface::sub_10154150(const char *pszName, float flDefault)
{
	VKeyValues *pKey = (VKeyValues *)((char *)this - 0x30);
	if (pszName)
		pKey = pKey->sub_10154540(pszName);
	if (pKey) {
		switch (pKey->m_nType10) {
		case 1:
			return (float)atof(pKey->m_pszValue0c);
		case 2:
			return (float)pKey->m_nValue08;
		case 3:
			return *(float *)&pKey->m_nValue08;
		}
		return 0.0f;
	}
	return flDefault;
}
// END FUNCTION

// FUNCTION: 0x101541a0 size=0x24
struct CUnk101f28a0Owner {
	char pad0000[0xc];
	int m_0c;
	CUnk101f28a0Owner *sub_10154540(int a);
};

struct CUnk101f28a0 {
	int sub_101541a0(int a, int b);
};

// TARGET: CUnk101f28a0::sub_101541a0
int CUnk101f28a0::sub_101541a0(int a, int b)
{
	CUnk101f28a0Owner *p = (CUnk101f28a0Owner *)((char *)this - 0x30);
	if (a)
		p = p->sub_10154540(a);
	if (p)
		return p->m_0c;
	return b;
}
// END FUNCTION

// FUNCTION: 0x101541d0 size=0x58
#include "VKeyValues.h"
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
int VKeyValuesInterface::sub_101541d0(const char *pszName, const char **ppszChoices, int nChoices, int nDefault)
{
    VKeyValues *pKey = (VKeyValues *)((char *)this - 0x30);
    if (pszName)
        pKey = pKey->sub_10154540(pszName);
    if (pKey) {
        for (int i = 0; i < nChoices; i++) {
            if (!sub_101e28e0(pKey->m_pszValue0c, ppszChoices[i]))
                return i;
        }
    }
    return nDefault;
}
// END FUNCTION

// FUNCTION: 0x10154230 size=0x121
#include "VKeyValues.h"
extern "C" int sprintf(char *, const char *, ...);
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_102ca678[];
extern char g_102ca694[];
extern const char g_102de300[];
void *sub_10154720(int n);
// TARGET: VKeyValuesInterface::sub_10154230
char VKeyValuesInterface::sub_10154230(const char *pszName, int nMax, const char *pszFormat, const char **ppszFirstName, const char ***pppszValues, int *pnCount)
{
	char buf[32];
	if (pnCount)
	{
		*pnCount = 0;
		VKeyValues *pThis = (VKeyValues *)((char *)this - 0x30);
		VKeyValues *pKv = (VKeyValues *)__RTDynamicCast(pThis->NameOf()->vfunc2(pszName), 0, g_102ca678, g_102ca694, 0);
		if (pKv)
		{
			*ppszFirstName = pKv->NameOf()->vfunc13("Name", g_102de300);
			int n = 0;
			for (int i = 0; i < nMax; i++)
			{
				sprintf(buf, pszFormat, i);
				if (!*pKv->NameOf()->vfunc13(buf, g_102de300))
					break;
				n++;
			}
			if (n > 0)
			{
				*pnCount = n;
				*pppszValues = (const char **)sub_10154720(n);
				for (int j = 0; j < n; j++)
				{
					sprintf(buf, pszFormat, j);
					(*pppszValues)[j] = pKv->NameOf()->vfunc13(buf, g_102de300);
				}
				return 1;
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10154370 size=0x10b
#include "VKeyValues.h"
#include <stdio.h>
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern int g_102ca678;
extern int g_102ca694;
extern char g_102de300[];

// TARGET: VKeyValuesInterface::sub_10154370
char VKeyValuesInterface::sub_10154370(const char *pszName, int nMax, const char *pszFormat, int **ppValues, int *pnCount)
{
	char buf[32];
	if (pnCount) {
		*pnCount = 0;
		VKeyValues *pKV = (VKeyValues *)__RTDynamicCast(((VKeyValues *)((char *)this - 0x30))->NameOf()->vfunc2(pszName), 0, &g_102ca678, &g_102ca694, 0);
		if (pKV) {
			int n = 0;
			int i = 0;
			if (nMax > 0) {
				do {
					sprintf(buf, pszFormat, i);
					if (!*pKV->NameOf()->vfunc13(buf, g_102de300))
						break;
					n++;
					i++;
				} while (i < nMax);
			}
			if (n > 0) {
				*pnCount = n;
				*ppValues = (int *)operator new(n * 4);
				for (i = 0; i < n; i++) {
					sprintf(buf, pszFormat, i);
					(*ppValues)[i] = pKV->NameOf()->vfunc10(buf, 0);
				}
				return 1;
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10154480 size=0x50
struct VB { virtual void f0(); virtual void f1(); };
struct VNode : virtual VB { int a; };
struct CKV {
	int pad0[3];
	char *m_pName;
	int m_n10;
	char *m_pStr;
	VNode *m_pNext;
	VNode *m_pChild;
	int m_n20;
	void sub_10154480();
};
void sub_10154700(void *);
extern char g_105e8ac8;
void CKV::sub_10154480()
{
	VNode *p = m_pChild;
	while (p) {
		VNode *n = *(VNode **)((char *)p + 0x18);
		p->f1();
		p = n;
	}
	m_pChild = 0;
	sub_10154700(m_pStr);
	sub_10154700(m_pName);
	m_n10 = 0;
	g_105e8ac8 = 0;
	m_pNext = 0;
	m_n20 = 0;
}
// END FUNCTION

// FUNCTION: 0x10154590 size=0x25
extern int g_102ca678[];
extern int g_102ca694[];

// TARGET: sub_10154590
void __fastcall sub_10154590(void *pThis, int dummy, void *pKV)
{
	*(void **)((char *)pThis - 0x10) = __RTDynamicCast(pKV, 0, g_102ca678, g_102ca694, 0);
}
// END FUNCTION

// FUNCTION: 0x10154670 size=0x1d
typedef void (*PFN_109f383c)(int, void *);
extern PFN_109f383c g_101e31d4;

// TARGET: sub_10154670
void __cdecl sub_10154670(int a, char *p)
{
	char *q;
	if (p == 0)
		q = 0;
	else
		q = p + ((int *)*(int *)p)[1];
	g_101e31d4(a, q);
}
// END FUNCTION

// FUNCTION: 0x10154690 size=0x23
extern int g_105e8b08;
int sub_100e3130(int a, void *b, int c);

// TARGET: sub_10154690
void *sub_10154690(int *p, int unused, int value)
{
    *p = sub_100e3130(*p, &g_105e8b08, value);
    return &g_105e8b08;
}
// END FUNCTION

// FUNCTION: 0x101546c0 size=0x3f
#include <string.h>
#include <stdlib.h>

// TARGET: sub_101546c0
char *sub_101546c0(const char *pszSrc)
{
    char *pszDst = 0;
    if (pszSrc != 0) {
        int nLen = strlen(pszSrc);
        char *p = (char *)malloc(nLen + 1);
        memcpy(p, pszSrc, nLen);
        p[nLen] = 0;
        pszDst = p;
    }
    return pszDst;
}
// END FUNCTION

// FUNCTION: 0x10154b40 size=0x21
// TARGET: sub_10154b40
void __fastcall sub_10154b40(int *p)
{
    p[0] = -1;
    p[1] = 0;
    p[2] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[3] = 0;
    p[4] = 0;
}
// END FUNCTION

// FUNCTION: 0x10154f60 size=0x102
#include "CVSoundFileFolder_t.h"
#include <string.h>
typedef void (__cdecl *FnDevWarning)(int level, const char *fmt, ...);
extern FnDevWarning g_101e3120;

// TARGET: CVSoundFileFolder_t::sub_10154f60
void CVSoundFileFolder_t::sub_10154f60(int a, int b, int c)
{
	int newSize = m_pOwner->sub_101554f0();
	int src = ((CUnit101f4530 *)m_pOwner)->sub_101556a0(a, c);
	int dst = ((CUnit101f4530 *)m_pOwner)->sub_101556a0(a, b);
	unsigned char *pNew = new unsigned char[newSize];
	if (dst > newSize)
		g_101e3120(1, "CVSoundFileFolder_t::AddRange IDX SHOULD NOT BE GREATER THAN SIZE?  HUH??? %d %d\n", dst, newSize);
	m_nSize = newSize;
	int i;
	for (i = 0; i <= src; i++)
		pNew[i] = m_pFlags[i];
	for (i = src + 1; i <= dst; i++)
		pNew[i] = 0;
	int delta = dst - src;
	for (i = dst + 1; i < newSize; i++)
		pNew[i] = m_pFlags[i - delta];
	delete m_pFlags;
	m_pFlags = pNew;
	for (i = 0; i < m_nChildren; i++)
		m_pChildren[i]->sub_10154f60(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10155070 size=0x54
#include "CUnknown101f3d80.h"
#include "CUnknown101f4370.h"

struct CUnit101f4530 { int sub_101556a0(int a, int b); };
struct CUnk101f4330 { void sub_10155510(int a, int b); };

void CUnknown101f3d80::sub_10155070(int a, int b)
{
	int idx;
	((CUnknown101f4370 *)m_n04)->sub_10155540((const char *)b, &idx, &b);
	if (idx != -1)
	{
		int n = ((CUnit101f4530 *)m_n04)->sub_101556a0(idx, b);
		((CUnk101f4330 *)m_n04)->sub_10155510(idx, b);
		*((char *)*(int *)((char *)this + 0x14) + n) = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x101553d0 size=0x25
#include "CUnknown101f40f0.h"
#include "CUnknown101f5150.h"

int *sub_1015fc40(void *pOwnerRef, const char *pszName);

// TARGET: CUnknown101f40f0::sub_101553d0
void CUnknown101f40f0::sub_101553d0(CUnknown101f5150 *pOwner, const char *pszName)
{
    m_pParent = (CUnknown101f40f0_Parent *)pOwner;
    m_pszName = (const char *)*sub_1015fc40(&pOwner, pszName);
}
// END FUNCTION

// FUNCTION: 0x10155400 size=0x9b
#include "CUnknown101f40f0.h"
#include <stdio.h>
extern char g_102de300[];

void CUnknown101f40f0::sub_10155400()
{
    char szBuf[260];
    int n = m_pParent->m_nCount;
    m_pInts = (int *)operator new(n * 4);
    for (int i = 0; i < n; i++)
        m_pInts[i] = 1;
    const char *pszName = m_pszName ? m_pszName : g_102de300;
    const char *const *ppParentName = &m_pParent->m_pszName;
    const char *pszParent = *ppParentName ? *ppParentName : g_102de300;
    sprintf(szBuf, "%s\\%s", pszParent, pszName);
    m_Inner.sub_10154b70((int)this, 0, (int)szBuf, (int)(m_pszName ? m_pszName : g_102de300));
    m_Inner.sub_10154c40();
}
// END FUNCTION

// FUNCTION: 0x10155510 size=0x2c
struct CUnkSub101f4330
{
	void sub_10154f60(int a, int b, int c);
};

struct CUnk101f4330
{
	char m_pad00[0xc];
	int *m_pArr;	// 0x0c
	CUnkSub101f4330 m_sub;	// 0x10

	void sub_10155510(int a, int b);
};

// TARGET: CUnk101f4330::sub_10155510
void CUnk101f4330::sub_10155510(int a, int b)
{
	int nNew = b + 1;
	int cur = m_pArr[a];
	if (cur < nNew)
	{
		m_pArr[a] = nNew;
		m_sub.sub_10154f60(a, nNew - 1, cur - 1);
	}
}
// END FUNCTION

// FUNCTION: 0x10155b40 size=0x1d
struct S9 {
	int a, b, c, d, e, f, g, h, i;
	S9 *sub_10155b40();
};
S9 *S9::sub_10155b40()
{
	a = 1;
	b = 0;
	e = 0;
	f = 0;
	g = 0;
	h = 0;
	i = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10155ca0 size=0x1e
int *sub_1015fc40(int *pArg, int value);

struct CUnk101f5120 {
	char m_pad0000[0x24];
	int m_24;
	void sub_10155ca0(int a);
};

// TARGET: CUnk101f5120::sub_10155ca0
void CUnk101f5120::sub_10155ca0(int a)
{
	m_24 = *sub_1015fc40(&a, a);
}
// END FUNCTION

// FUNCTION: 0x10155cc0 size=0x8c
#include "CUnknown101f5150.h"
bool CUnknown101f5150::sub_10155cc0(const char *pszName)
{
    CUnknown101f40f0 **pNew = (CUnknown101f40f0 **)operator new(m_nCount * 4 + 4);
    if (m_nCount > 0) {
        for (int i = 0; i < m_nCount; i++)
            pNew[i] = m_pItems[i];
        operator delete(m_pItems);
    }
    m_pItems = pNew;
    CUnknown101f40f0 *p = (CUnknown101f40f0 *)operator new(0x34);
    p = p ? p->sub_10155380() : 0;
    m_pItems[m_nCount] = p;
    m_pItems[m_nCount]->sub_101553d0(this, pszName);
    m_nCount++;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10156120 size=0x33
// TARGET: sub_10156120
struct CEntryPair_101f5e80 {
    int a;
    void *b;
    void *c;
};
struct CEntryTable_101f5e80 {
    CEntryPair_101f5e80 e[0x118d];
    void sub_10156120();
};
void CEntryTable_101f5e80::sub_10156120()
{
    int i;
    for (i = 0; i < 0x118d; i++) {
        delete e[i].b;
        delete e[i].c;
        e[i].a = 0;
        e[i].b = 0;
        e[i].c = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10156160 size=0x19
struct CUnk101f5ed0
{
	char m_pad0000[8];

	void sub_10156160();
};

// TARGET: sub_10156160
void CUnk101f5ed0::sub_10156160()
{
	int *p = (int *)(m_pad0000 + 8);
	for (int i = 0x118d; i != 0; i--) {
		p[-2] = 0;
		p[-1] = 0;
		p[0] = 0;
		p += 3;
	}
}
// END FUNCTION

// FUNCTION: 0x10156770 size=0x40
struct CUnknownStat101f69a0 {
    int m0;
    int m4;
    int m8;
    int m0c;
    int m10;
    int m14;
    int m18;
    int m1c;
    int m20;
    int m24;
    int m28;
    int m2c;
    int m30;
    int m34;
    int m38;
};

// TARGET: sub_10156770
int __fastcall sub_10156770(CUnknownStat101f69a0 *p)
{
    int iVar1 = ((p->m14 + p->m0) * p->m18) / p->m20;
    if (p->m38 != 100) {
        iVar1 = (p->m38 * iVar1) / 100;
    }
    int iVar2 = p->m28;
    if (iVar1 <= p->m28 && (iVar2 = p->m30, iVar1 >= p->m30)) {
        iVar2 = iVar1;
    }
    return iVar2;
}
// END FUNCTION

// FUNCTION: 0x10156f40 size=0x2a
#include "CUnknown101f73b0.h"

int *sub_1015f7e0(int *pValue, int a, const char *pszName);
extern const char g_102863d0[];

// TARGET: CUnknown101f73b0::sub_10156f40
void CUnknown101f73b0::sub_10156f40(int a, int b)
{
    m_n0c = b;
    m_n08 = *sub_1015f7e0(&b, a, g_102863d0);
}
// END FUNCTION

// FUNCTION: 0x101570b0 size=0x38
// TARGET: CVTraitEffectGroup_t::sub_101570b0
#include "CVTraitEffectGroup_t.h"
#include "CUnknown101f6c50.h"

void CVTraitEffectGroup_t::sub_101570b0(CTraitStatBlock *pBlock)
{
    pBlock->m_ref = m_nId;
    for (int i = 0; i < m_nEffects; i++) {
        ((CUnknown101f6c50 *)&m_pEffects[i])->sub_10156980(pBlock);
    }
}
// END FUNCTION

// FUNCTION: 0x101570f0 size=0x3a
#include "CUnknown101f6c50.h"

struct CUnk101f75f0
{
    char m_pad0000[0xc];
    int m_n0c;    // 0xc
    int m_n10;    // 0x10
    char *m_p14;    // 0x14: an array of 0x44 byte elements
    void sub_101570f0(CTraitStatBlock *pOut);
};

// TARGET: CUnk101f75f0::sub_101570f0
void CUnk101f75f0::sub_101570f0(CTraitStatBlock *pOut)
{
    if (m_n0c == 0) {
        int i = 0;
        *(int *)((char *)pOut + 0x40) = 0;
        if (m_n10 > 0) {
            do {
                ((CUnknown101f6c50 *)(m_p14 + i * 0x44))->sub_10156980(pOut);
                i++;
            } while (i < m_n10);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10157130 size=0x37
#include "CVTraitEffectGroup_t.h"
#include "CVModInfo_t.h"

// TARGET: CVTraitEffectGroup_t::sub_10157130
void CVTraitEffectGroup_t::sub_10157130(CVModInfo_t *pInfo, void *pResult)
{
    for (int i = 0; i < m_nEffects; i++) {
        m_pEffects[i].sub_10156af0(pInfo, (int *)pResult);
    }
}
// END FUNCTION

// FUNCTION: 0x10157390 size=0xeb
#include "CUnknown101f7960.h"

struct S101f7310 {
	S101f7310 *sub_10156ed0(int);
	int m_data[6];
};

S101f7310 *CUnknown101f7960::sub_10157390()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101f7310 **p = new S101f7310 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101f7310 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101f7310 *p = new S101f7310;
		m_pItems[m_count - 1] = p ? p->sub_10156ed0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10157480 size=0x62
#include "CUnknown101f7bb0.h"
void CUnknown101f7bb0::sub_10157480()
{
	if (m_ppItems) {
		for (int i = 0; i < m_nItems; i++) {
			delete m_ppItems[i];
			m_ppItems[i] = 0;
		}
		operator delete(m_ppItems);
		m_ppItems = 0;
	}
	m_nItems = 0;
	m_n0000 = 0;
	if (m_p0018) {
		operator delete(m_p0018);
		m_p0018 = 0;
	}
	m_n0014 = 0;
}
// END FUNCTION

// FUNCTION: 0x10157a20 size=0x9f
#include <stdio.h>
#include "FileSystemViews.h"
#include "CUnknown101d5bd0.h"
extern IFileSystemView *g_104a580c;
extern void (__cdecl *g_101e3108)(const char *fmt, ...);

void CUnknown101d5bd0::sub_10157a20()
{
    int count = 0;
    int handle;
    char szFile[260];
    if (g_104a580c->FindFirst("vdata\\system\\TraitEffects*.txt", &handle)) {
        do {
            count++;
        } while (g_104a580c->FindNext(handle));
        g_104a580c->FindClose(handle);
        if (count > 0) {
            for (int i = 0; i < count; i++) {
                sprintf(szFile, "%sTraitEffects%03d.txt", "vdata\\system\\", i);
                if (!sub_101577a0(szFile))
                    g_101e3108("Unable to open Trait Effect List data file for: %s\n", szFile);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10157ac0 size=0x29
extern char g_102ca648[];
extern char g_102de300[];

struct CUnknown101f18b0 {
    char pad_0000[0x14];
    int m_nCount;
    char **m_ppElements;
    char *sub_10157ac0(int i);
};

// TARGET: CUnknown101f18b0::sub_10157ac0
char *CUnknown101f18b0::sub_10157ac0(int i)
{
    if (i < 0 || i >= m_nCount)
        return g_102ca648;
    char **pp = &m_ppElements[i];
    if (*pp == 0)
        return g_102de300;
    return *pp;
}
// END FUNCTION

// FUNCTION: 0x10157b30 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntryX {
	int m_unk0;
	int m_unk4;
	CNamePtr m_Name;
};
struct CNamedListX {
	int m_unk0;
	int m_count;
	CNamedEntryX **m_pData;
	int sub_10157b30(const char *name);
};
// TARGET: CNamedListX::sub_10157b30
int CNamedListX::sub_10157b30(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10157b80 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntryX {
	int m_unk0;
	int m_unk4;
	CNamePtr m_Name;
};
struct CNamedListX {
	int m_unk0;
	int m_count;
	CNamedEntryX **m_pData;
	int sub_10157b80(const char *name);
};
// TARGET: CNamedListX::sub_10157b80
int CNamedListX::sub_10157b80(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10157bd0 size=0x41
extern "C" int sub_101e28e0(const char *a, const char *b);

struct CUnknown101f1a30 {
    char m_pad0000[0x14];
    int m_nCount;
    const char *sub_10157ac0(int index);
    int sub_10157bd0(const char *name);
};

// TARGET: sub_10157bd0
int CUnknown101f1a30::sub_10157bd0(const char *name)
{
    int i = 0;
    if (m_nCount > 0) {
        do {
            if (sub_101e28e0(sub_10157ac0(i), name) == 0) {
                return i;
            }
            i++;
        } while (i < m_nCount);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x101594e0 size=0x6d
#include "CVStatCost_t.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;

CVStatSubCost_t *CVStatSubCost_t::sub_101594e0()
{
	g_101e3124[*g_101e3128].fn = "CVStatSubCost_t::CVStatSubCost_t";
	g_101e3124[*g_101e3128].name = "";
	g_101e3124[*g_101e3128].extra = "";
	(*g_101e3128)++;
	*(int *)&m_data[0x10] = 0;
	sub_10159550();
	(*g_101e3128)--;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10159550 size=0x8b
#include "CVStatCost_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

void CVStatSubCost_t::sub_10159550()
{
	int *f = (int *)m_data;
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatSubCost_t::Null";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	f[0] = 10000;
	f[1] = 1;
	f[2] = 0;
	f[3] = 0;
	delete (char *)f[4];
	f[4] = 0;
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x101595e0 size=0x6c
struct TraceEnt { const char *a; void *b; void *c; };
extern int *g_101e3128;
extern TraceEnt *g_101e3124;
extern char g_102cb5d8[];
extern char g_102de300[];
struct CVStatSubCost_t { int v; bool sub_101595e0(); };
bool CVStatSubCost_t::sub_101595e0()
{
    g_101e3124[*g_101e3128].a = g_102cb5d8;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    if (v != 10000) {
        --*g_101e3128;
        return false;
    }
    --*g_101e3128;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10159650 size=0x17e
#include "CVStatCost_t.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_101e3128;
extern TraceEntry *g_101e3124;
extern char g_102de300[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_101e3124[*g_101e3128].a = a;
        g_101e3124[*g_101e3128].b = b;
        g_101e3124[*g_101e3128].c = c;
        ++*g_101e3128;
    }
    ~ScopeTrace() { --*g_101e3128; }
};
extern "C" char *strstr(const char *, const char *);
extern "C" char *strchr(const char *, int);
extern "C" int isdigit(int);
extern "C" int atoi(const char *);
void *__cdecl operator new(unsigned int);

struct SubCostView {
    int m_type;
    int m_value;
    int m_pad8;
    int m_nCount;
    int *m_pTable;
};

void CVStatSubCost_t::sub_10159650(const char *str)
{
    ScopeTrace trace("CVStatSubCost_t::Parse", g_102de300, g_102de300);
    SubCostView *self = (SubCostView *)this;
    if (*str) {
        char *p = strstr(str, "Current_Rating");
        if (p) {
            p += 14;
            int d = isdigit(*p);
            while (d == 0) {
                p++;
                if (*p == 0)
                    break;
                d = isdigit(*p);
            }
            self->m_type = 9999;
            self->m_value = atoi(p);
            return;
        }
        p = strstr(str, "Table:");
        if (p) {
            char *q = p + 7;
            self->m_type = 0x270e;
            self->m_nCount = 1;
            for (char *c = strchr(q, ','); c; c = strchr(c + 1, ','))
                self->m_nCount++;
            self->m_pTable = (int *)operator new(self->m_nCount << 2);
            int i = 0;
            if (self->m_nCount > 0) {
                do {
                    while (*q == ' ')
                        q++;
                    self->m_pTable[i] = atoi(q);
                    q = strchr(q, ',') + 1;
                    i++;
                } while (i < self->m_nCount);
                return;
            }
        } else {
            self->m_type = atoi(str);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101597d0 size=0xa3
#include "CVStatCost_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];

int CVStatSubCost_t::sub_101597d0(int level)
{
	g_101e3124[*g_101e3128].a = "CVStatSubCost_t::GetCostToBuy";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	int *p = (int *)m_data;
	int cost = p[0];
	switch (cost) {
	case 9998:
		cost = ((int *)p[4])[level];
		break;
	case 9999: {
		int r = p[1] * level + p[2];
		(*g_101e3128)--;
		return r;
	}
	case 10000:
		(*g_101e3128)--;
		return 10000;
	}
	(*g_101e3128)--;
	return cost;
}
// END FUNCTION

// FUNCTION: 0x10159d10 size=0xeb
#include "CVStatCost_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

#define KV_SLOTS(p) virtual void p##0(); virtual void p##1();

struct CVStatKV
{
	virtual void v0();
	virtual void v1();
	virtual CVStatKV *FindKey(const char *name);	// slot 2
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
	virtual const char *GetString(const char *name, const char *def);	// slot 13
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

bool CVStatCost_t::sub_10159d10(CVStatKV *pKV)
{
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatCost_t::Load";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	if (pKV) {
		CVStatKV *pCosts = pKV->FindKey("Costs");
		if (pCosts) {
			m_first.sub_10159650(pCosts->GetString("New", g_102de300));
			m_second.sub_10159650(pCosts->GetString("Raise", g_102de300));
			if (m_first.sub_101595e0())
				m_first = m_second;
			else if (m_second.sub_101595e0())
				m_second = m_first;
			(*g_101e3128)--;
			return true;
		}
	}
	(*g_101e3128)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10159e00 size=0x85
#include "CVStatCost_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102cb744[];
extern char g_102de300[];
int CVStatCost_t::sub_10159e00(int level, bool bFirst)
{
    g_101e3124[*g_101e3128].a = g_102cb744;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    int r;
    if (bFirst)
        r = m_first.sub_101597d0(level);
    else
        r = m_second.sub_101597d0(level);
    --*g_101e3128;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10159e90 size=0x89
#include "CVStatCost_t.h"

extern int *g_101e3128;
extern int *g_101e3124;
extern char g_102de300[];

int CVStatCost_t::sub_10159e90(int level, bool bFirst)
{
    g_101e3124[*g_101e3128 * 3] = (int)"CVStatCost_t::GetCostToSell";
    g_101e3124[*g_101e3128 * 3 + 1] = (int)g_102de300;
    g_101e3124[*g_101e3128 * 3 + 2] = (int)g_102de300;
    ++*g_101e3128;
    if (bFirst) {
        int r = m_first.sub_10159880(level, true);
        --*g_101e3128;
        return r;
    }
    int r = m_second.sub_10159880(level, false);
    --*g_101e3128;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10159f20 size=0x4c
struct S5_101fc4d0 { int v[5]; };
struct T_101fc4d0 : S5_101fc4d0 {
	char sub_10159b10(S5_101fc4d0 s);
};
struct C101fc4d0 {
	S5_101fc4d0 m_a;
	S5_101fc4d0 m_b;
	char sub_10159f20(T_101fc4d0 a, T_101fc4d0 b);
};
// TARGET: C101fc4d0::sub_10159f20
char C101fc4d0::sub_10159f20(T_101fc4d0 a, T_101fc4d0 b)
{
	return a.sub_10159b10(m_a) && b.sub_10159b10(m_b);
}
// END FUNCTION

// FUNCTION: 0x1015ab20 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_101e3128;
extern TScope *g_101e3124;
extern char g_102cb9e0[];
extern char g_102de300[];

struct TList {
	int a, b, c;
	TList *sub_1015ab20();
};

TList *TList::sub_1015ab20()
{
	g_101e3124[*g_101e3128].name = g_102cb9e0;
	g_101e3124[*g_101e3128].a = g_102de300;
	g_101e3124[*g_101e3128].b = g_102de300;
	(*g_101e3128)++;
	a = 0;
	b = 0;
	c = 0;
	(*g_101e3128)--;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1015b050 size=0xf5
#include "CVStatInfo_t.h"
#include "CVStatCost_t.h"

struct CUnknown102056d0
{
    int m_value;
    char m_pad[0x10];
    CUnknown102056d0 *sub_10161410();
};
struct TList
{
    int m_a, m_b, m_c;
    TList *sub_1015ab20();
};

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

CVStatInfo_t *CVStatInfo_t::sub_1015b050()
{
    ((CUnknown102056d0 *)((char *)this + 0x4c))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x60))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x74))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x88))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x9c))->sub_10161410();
    CVStatSubCost_t *pCost = (CVStatSubCost_t *)((char *)this + 0xb0);
    pCost->sub_101594e0();
    (pCost + 1)->sub_101594e0();
    ((TList *)((char *)this + 0x10c))->sub_1015ab20();
    m_field0120 = 1;
    m_field0124 = 0;
    m_field0130 = 0;
    m_field0134 = 0;
    m_field0138 = 0;
    g_101e3124[*g_101e3128].m_pszName = "CVStatInfo_t::CVStatInfo_t";
    g_101e3124[*g_101e3128].m_pszEnt = g_102de300;
    g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
    (*g_101e3128)++;
    m_field0000 = 0;
    m_field0004 = 0;
    m_field0008 = -1;
    m_flags = 0;
    m_bField0108 = 0;
    m_pLevels = 0;
    (*g_101e3128)--;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1015c8f0 size=0xb8
#include "CVStatInfoList_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern "C" int __cdecl sub_101e28e0(const char *, const char *);

struct StrWrap
{
	const char *p;
	const char *Get() const { return p ? p : g_102de300; }
};

int CVStatInfoList_t::sub_1015c8f0(const char *name)
{
	g_101e3124[*g_101e3128].a = "CVStatInfoList_t::Lookup( char *name )";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	for (int i = 0; i < m_nStats; i++) {
		if (sub_101e28e0(((StrWrap *)&m_pStats[i].m_pszName)->Get(), name) == 0) {
			--*g_101e3128;
			return i;
		}
	}
	--*g_101e3128;
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1015d350 size=0x87
#include "CVStatList_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

void CVStatList_t::sub_1015d350(int a, int *pSource, int c)
{
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatList_t::Bind";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	if (m_field04 != 0)
		m_field04 = 0;
	m_pad0000 = a;
	m_field0c = (int)pSource;
	m_field04 = pSource[1];
	m_field08 = c;
	sub_1015d2c0();
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x1015e490 size=0xf0
#include "CVStatListManager_t.h"

struct ScopeEntry { const char *name; const void *file; const void *line; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern int g_105f9220[];
extern int g_105f90b8[];
extern int g_105f8c60[];
extern int g_105f91c8[];

// TARGET: CVStatListManager_t::sub_1015e490
void CVStatListManager_t::sub_1015e490(int which, int c)
{
	g_101e3124[*g_101e3128].name = "CVStatListManager_t::BindStatList";
	g_101e3124[*g_101e3128].file = g_102de300;
	g_101e3124[*g_101e3128].line = g_102de300;
	(*g_101e3128)++;
	switch (which)
	{
	case 0:
		m_pLists[0]->sub_1015d350((int)this, g_105f9220, c);
		break;
	case 1:
		m_pLists[1]->sub_1015d350((int)this, g_105f90b8, c);
		break;
	case 2:
		m_pLists[2]->sub_1015d350((int)this, g_105f8c60, c);
		break;
	case 3:
		m_pLists[3]->sub_1015d350((int)this, g_105f91c8, c);
		break;
	}
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x1015e580 size=0x90
#include "CVStatListManager_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

// TARGET: CVStatListManager_t::sub_1015e580
char CVStatListManager_t::sub_1015e580(int time)
{
    char changed = 0;
    int i = 0;
    g_101e3124[*g_101e3128].a = "CVStatListManager_t::Update";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    m_nTime = time;
    if (m_nLists > 0) {
        do {
            if (m_pLists[i]->sub_1015ddc0())
                changed = 1;
            i++;
        } while (i < m_nLists);
    }
    --*g_101e3128;
    return changed;
}
// END FUNCTION

// FUNCTION: 0x1015ecd0 size=0x2b
#include "CUnknown10202ba0.h"
#include "CUnknown10202ac0.h"

extern char g_102de300[];

// TARGET: CUnknown10202ba0::sub_1015ecd0
const char *CUnknown10202ba0::sub_1015ecd0(int index)
{
    const char **ppEntry = 0;
    if (((CUnknown10202ac0 *)this)->sub_1015ed50(&index)) {
        ppEntry = (const char **)*(char **)((char *)this + 0x10) + index;
        if (*ppEntry != 0) {
            return *ppEntry;
        }
    }
    return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x1015f010 size=0x48
#include "CUnknown10202d10.h"
#include "CUnknown10202b10.h"

const char **sub_1015fc40(const char **ppDest, const char *pszSrc);

// TARGET: CUnknown10202d10::sub_1015f010
int CUnknown10202d10::sub_1015f010(int a, const char *pszName, int c, char d)
{
	CUnknown102029c0 *pRecord = sub_1015ef10();
	if (pRecord)
	{
		*(const char **)((char *)pRecord + 4) = *sub_1015fc40(&pszName, pszName);
		((CUnknown10202b10 *)pRecord)->sub_1015ed90(a, c);
		*((char *)pRecord + 0x14) = d;
		return pRecord->m_id;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1015f060 size=0x1c
namespace lifted {
extern char g_102cc654;
struct C10009d95 { int sub_1015f010(int, int, int, int); };
}
struct CUnknown10202ec0 { int sub_1015f060(int, int, int); };
int CUnknown10202ec0::sub_1015f060(int a0, int a1, int a2)
{
    return ((lifted::C10009d95 *)this)->sub_1015f010(a0, a1, (int)&lifted::g_102cc654, a2);
}
// END FUNCTION

// FUNCTION: 0x1015f120 size=0x3f
struct CSlotIter
{
	virtual int slot0(const char *pszName, int a);
	virtual int slot1();
	virtual int slot2();
	virtual int slot3();
	virtual CSlotIter *slot4();
	virtual CSlotIter *slot5();
};

extern char g_102cc654[];

struct CUnknown10202fd0
{
	void sub_1015f010(CSlotIter *pObj, int nValue);	// stub 0x10009d95, called directly
	void sub_1015f120(CSlotIter *pObj);
};

// TARGET: CUnknown10202fd0::sub_1015f120
void CUnknown10202fd0::sub_1015f120(CSlotIter *pObj)
{
	for (CSlotIter *p = pObj->slot4(); p; p = p->slot5()) {
		int nValue = p->slot0(g_102cc654, 1);
		sub_1015f010(pObj, nValue);
	}
}
// END FUNCTION

// FUNCTION: 0x1015f1c0 size=0x41
#include "CUnknown10202ba0.h"
extern char g_102de300[];
struct CTableList {
	int m_pad0;
	int m_pad4;
	int m_nCount;
	CUnknown10202ba0 **m_ppTables;
	const char *sub_1015f1c0(int key, int index);
};
const char *CTableList::sub_1015f1c0(int key, int index)
{
	for (int i = 0; i < m_nCount; i++)
		if (m_ppTables[i]->m_pad0000 == key)
			return m_ppTables[i]->sub_1015ecd0(index);
	return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x1015f720 size=0xb8
#include "string_t.h"
#include "CBCCSlotViews.h"

string_t sub_1015fc40(const char *psz);

char sub_1015f720(CFileParserSlotView *pParser, const char *pszName, int a3, const char *pszErr, string_t *pOut5, string_t **pOut6, int *pCount)
{
	void *pList = 0;
	char *pKey;
	if (pParser->vfunc15(pszName, a3, pszErr, (void **)&pKey, &pList, pCount) == 1) {
		if (*pKey)
			*pOut5 = sub_1015fc40(pKey);
		else
			*pOut5 = sub_1015fc40(pszName);
		*pOut6 = new string_t[*pCount];
		for (int i = 0; i < *pCount; i++) {
			(*pOut6)[i] = sub_1015fc40(((char **)pList)[i]);
		}
		pParser->vfunc18(pList);
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015f7e0 size=0x2c
struct IObj102038e0 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11();
    virtual void vfunc12();
    virtual int vfunc13(int a, void *b);
};

extern int g_102de300;
int sub_1015fb60(int a);
void sub_1015fc40(int a, int b);
int sub_1015fb60(int a);

// TARGET: sub_1015f7e0
int sub_1015f7e0(int a, IObj102038e0 *obj, int b)
{
    int r = obj->vfunc13(b, &g_102de300);
    r = sub_1015fb60(r);
    sub_1015fc40(a, r);
    return a;
}
// END FUNCTION

// FUNCTION: 0x1015f810 size=0x1c
void __cdecl sub_1015f830(int a, int b, const char *name);

// TARGET: sub_1015f810
int __cdecl sub_1015f810(int a, int b)
{
	sub_1015f830(a, b, "Name");
	return a;
}
// END FUNCTION

// FUNCTION: 0x1015f830 size=0x26
#include "string_t.h"

struct CObj10203950 {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual const char *vfunc13(int arg, const char *pszDefault);
};

extern char g_102de300[];
string_t sub_1015fc40(const char *psz);

// TARGET: sub_1015f830
string_t sub_1015f830(CObj10203950 *pObj, int arg)
{
	return sub_1015fc40(pObj->vfunc13(arg, g_102de300));
}
// END FUNCTION

// FUNCTION: 0x1015fa10 size=0x31
// TARGET: sub_1015fa10
void __cdecl sub_1015fa50(const char *a, const char *b);
extern const char g_102cc7ec[];
extern const char g_102cc7e4[];
extern const char g_102cc7d0[];
extern const char g_102cc7c4[];
extern const char g_102cc7b4[];

void __cdecl sub_1015fa10()
{
    sub_1015fa50(g_102cc7e4, g_102cc7ec);
    sub_1015fa50(g_102cc7d0, g_102cc7ec);
    sub_1015fa50(g_102cc7b4, g_102cc7c4);
}
// END FUNCTION

// FUNCTION: 0x1015ff70 size=0x23
struct CUnknown1006c7d0 {
	void sub_1015ff70();
};

// TARGET: CUnknown1006c7d0::sub_1015ff70
void CUnknown1006c7d0::sub_1015ff70()
{
	if (*(void **)((char *)this + 0x14) != 0) {
		delete *(void **)((char *)this + 0x14);
		*(int *)((char *)this + 0x14) = 0;
	}
	*(int *)((char *)this + 0x10) = 0;
}
// END FUNCTION

// FUNCTION: 0x10160100 size=0x53
struct CFloatTable1006c9d0 {
	char m_pad[0xc];
	unsigned char m_flags;	// 0xc: bit 0 = clamp to the ends
	char m_pad0d[3];
	int m_count;	// 0x10
	float *m_pData;	// 0x14

	int sub_10160100(int index);
};

int CFloatTable1006c9d0::sub_10160100(int index)
{
	if (m_flags & 1)
	{
		if (index < 0)
			index = 0;
		else if (index >= m_count)
			index = m_count - 1;
		return (int)m_pData[index];
	}
	if (index >= 0 && index < m_count)
		return (int)m_pData[index];
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10160160 size=0x31
#include "CUnknown10204e90.h"
#include "CUnknown10204c60.h"

struct CUnk_1006ca50
{
    char pad_0000[0x18];
    void sub_10160100(int a);
    void sub_10160160(int a);
};

void CUnk_1006ca50::sub_10160160(int a)
{
    int v;
    if (a != 0) {
        v = ((CUnknown10204e90 *)((char *)this + 0x18))->sub_10160b40((void *)a);
    } else {
        v = ((CUnknown10204c60 *)((char *)this + 0x18))->sub_10160de0();
    }
    this->sub_10160100(v);
}
// END FUNCTION

// FUNCTION: 0x10160250 size=0x30
#include "StatDefault.h"
int StatDefault::sub_10160250(int arg)
{
	int n = a[4];
	int i = 0;
	if (n > 0) {
		const float *p = (const float *)a[5];
		do {
			if (arg <= (int)*p)
				return i;
			i++;
			p++;
		} while (i < n);
	}
	return i;
}
// END FUNCTION

// FUNCTION: 0x10160280 size=0x28
struct CUnk1006cbe0
{
    char pad0000[0x10];
    int m_nCount;
    float *m_pValues;

    int sub_10160280(float x);
};

// TARGET: CUnk1006cbe0::sub_10160280
int CUnk1006cbe0::sub_10160280(float x)
{
    int i = 0;
    if (m_nCount > 0)
    {
        float *p = m_pValues;
        do
        {
            if (x <= *p)
                return i;
            i++;
            p++;
        } while (i < m_nCount);
    }
    return i;
}
// END FUNCTION

// FUNCTION: 0x101602b0 size=0x79
int sub_101d159d(char *, const char *, ...);
void sub_1015fbb0(char *);
extern char g_102de300[];
struct Dump {
    char pad[8];
    const char *m_pName;
    char pad2[0x10 - 0xc];
    int m_nCount;
    float *m_pValues;
    void sub_101602b0();
};

void Dump::sub_101602b0()
{
    char buf[128];
    sub_101d159d(buf, "\n\t%s:\n", m_pName ? m_pName : g_102de300);
    sub_1015fbb0(buf);
    for (int i = 0; i < m_nCount; i++) {
        sub_101d159d(buf, "(%d):\t\t%8.3f\n", i, m_pValues[i]);
        sub_1015fbb0(buf);
    }
}
// END FUNCTION

// FUNCTION: 0x10160350 size=0x66
struct Elem1006cd00 { void sub_1015ff60(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_10160350();
};
// TARGET: S1006cd00::sub_10160350
void S1006cd00::sub_10160350()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_1015ff60();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10160db0 size=0x29
struct CUnk10204c20
{
    char pad0000[0xc];
    int m_nScale;
    int sub_10160db0(int a);
};

// TARGET: CUnk10204c20::sub_10160db0
int CUnk10204c20::sub_10160db0(int a)
{
    int n = m_nScale;
    int r;
    if (n == 1)
        r = a;
    else if (n < 0)
        r = -(a / n);
    else
        r = n * a;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10160de0 size=0x9c
#include "CUnknown10204c60.h"
#include "CUnknown10205ba0.h"
#include "CVStatInfoList_t.h"

struct CVStatInfoViewX {
    char m_pad[0x9c];
    CUnknown10205ba0 m_value;
};

extern CVStatInfoList_t g_105f9220;
extern CVStatInfoList_t g_105f90b8;
extern CVStatInfoList_t g_105f8c60;
extern CVStatInfoList_t g_105f91c8;

static inline int EvalIn(CVStatInfoList_t &list, int idx)
{
    CVStatInfoViewX *pInfo = (CVStatInfoViewX *)list.sub_1015cfe0(idx);
    return pInfo->m_value.sub_10161510();
}

int CUnknown10204c60::sub_10160de0()
{
    if (m_index == -1)
        return 0;
    switch (m_type) {
    case 0:
        return EvalIn(g_105f9220, m_index);
    case 1:
        return EvalIn(g_105f90b8, m_index);
    case 2:
        return EvalIn(g_105f8c60, m_index);
    case 3:
        return EvalIn(g_105f91c8, m_index);
    case 4:
        return 0;
    case 5:
        return 0;
    case 6:
        return 0;
    case 7:
        return 0;
    case 8:
        return 0;
    case 9:
        return 0;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101613e0 size=0x30
#include "CVDmg_t.h"

bool CVDmgBlock16_t::sub_101613e0(const CVDmgBlock16_t *pOther)
{
	if (m_a != pOther->m_a)
		return false;
	if (m_b != pOther->m_b)
		return false;
	bool bSame = (m_d == pOther->m_d);
	return bSame;
}
// END FUNCTION

// FUNCTION: 0x101615d0 size=0x2b
#include "CParsedValue.h"

// TARGET: CParsedValue::sub_101615d0
void CParsedValue::sub_101615d0(CVStatKV *pKV, const char *pszKey)
{
	sub_10161600(sub_1015fb60(pKV->vfunc13(pszKey, "")));
}
// END FUNCTION

// FUNCTION: 0x10161800 size=0x1c
#include "CVTraitDependencyValue_t.h"

extern int vt_10248470[];

// TARGET: CVTraitDependencyValue_t::sub_10161800
CVTraitDependencyValue_t *CVTraitDependencyValue_t::sub_10161800()
{
	m_18.sub_10161410();
	m_vptr = vt_10248470;
	sub_10161840();
	return this;
}
// END FUNCTION

// FUNCTION: 0x10161820 size=0x1e
#include "CVTraitDependencyValue_t.h"

extern int vt_10248470[];

// TARGET: CVTraitDependencyValue_t::sub_10161820
CVTraitDependencyValue_t *CVTraitDependencyValue_t::sub_10161820(int a)
{
	m_18.sub_10161410();
	m_vptr = vt_10248470;
	sub_10161840();
	return this;
}
// END FUNCTION

// FUNCTION: 0x10161bb0 size=0x3a
#include "CUnknown101d7520.h"
#include "CUnknown10205e60.h"

// TARGET: CUnknown101d7520Sub::sub_10161bb0
char CUnknown101d7520Sub::sub_10161bb0(void *pArg)
{
	int i = 0;
	if (m_nCount > 0) {
		do {
			if (!m_ppItems[i]->sub_10161970(pArg))
				return 0;
			i++;
		} while (i < m_nCount);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10161db0 size=0x20
struct CUnknown10206400 { void * sub_10161db0(int); };
void * CUnknown10206400::sub_10161db0(int a0)
{
    *(int *)this = 1;
    *(int *)((char *)this + 0x18) = 0;
    *(int *)((char *)this + 0x1c) = a0;
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)((char *)this + 0x10) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10161dd0 size=0x53
struct CPtrArray10206430 {
	int m_00;
	int m_04;
	int m_08;
	int m_0c;
	int m_10;
	int m_nCount;	// 0x14
	void **m_ppItems;	// 0x18

	void sub_10161dd0();
};

void CPtrArray10206430::sub_10161dd0()
{
	if (m_ppItems) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppItems[i])
				delete m_ppItems[i];
			m_ppItems[i] = 0;
		}
		delete m_ppItems;
		m_ppItems = 0;
	}
	m_04 = 0;
	m_nCount = 0;
	m_10 = 0;
}
// END FUNCTION

// FUNCTION: 0x10162650 size=0xb1
#include "QuestJournal.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern char g_102cd04c[];
extern int (__cdecl *g_101e3190)(char *, int, const char *, ...);
extern const char *g_102ccf58[];

void QuestJournal::sub_10162650()
{
	g_101e3124[*g_101e3128].a = g_102cd04c;
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	if (!m_flag28) {
		int (__cdecl *pfnSnprintf)(char *, int, const char *, ...) = g_101e3190;
		for (int i = 0; i < 4; i++) {
			char szFile[128];
			pfnSnprintf(szFile, 128, "%s%s.txt", "vdata\\system\\", g_102ccf58[i]);
			sub_10162870(szFile, i);
		}
		m_flag28 = 1;
	}
	--*g_101e3128;
}
// END FUNCTION

// FUNCTION: 0x10162710 size=0x123
#include "QuestJournal.h"

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern void (*g_101e30fc)(void *);

struct Completion_t
{
    int m_a0;
    void *m_p4;
    int m_a8;
    int m_ac;
    void *m_p10;
    void *m_p14;
};

void QuestJournal::sub_10162710()
{
    g_101e3124[*g_101e3128].m_pszName = "QuestJournal::PurgeQuestData";
    g_101e3124[*g_101e3128].m_pszEnt = g_102de300;
    g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
    (*g_101e3128)++;
    int i = 0;
    m_flag28 = 0;
    for (i = 0; i < m_field[3]; i++) {
        operator delete(((Completion_t *)m_field[0])[i].m_p4);
        operator delete(((Completion_t *)m_field[0])[i].m_p10);
        operator delete(((Completion_t *)m_field[0])[i].m_p14);
    }
    i = 0;
    if (m_field[8] > 0) {
        int off = 0;
        do {
            operator delete(*(void **)(m_field[5] + off));
            operator delete(*(void **)(m_field[5] + off + 4));
            i++;
            off += 0x68;
        } while (i < m_field[8]);
    }
    void (*pfnFree)(void *) = g_101e30fc;
    m_field[3] = 0;
    if (m_field[2] != -1) {
        if (m_field[0]) {
            pfnFree((void *)m_field[0]);
            m_field[0] = 0;
        }
        m_field[1] = 0;
    }
    m_field[4] = m_field[0];
    {
        int *pB = &m_field[5];
        pB[3] = 0;
        if (pB[2] != -1) {
            if (pB[0]) {
                pfnFree((void *)pB[0]);
                pB[0] = 0;
            }
            pB[1] = 0;
        }
        m_field[9] = pB[0];
    }
    (*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x10162840 size=0x2f
#include "QuestJournal.h"

// TARGET: QuestJournal::sub_10162840
void QuestJournal::sub_10162840()
{
	int i = 0;
	if (m_field[8] > 0)
	{
		int offset = 0;
		do
		{
			*(int *)(m_field[5] + offset + 0x10) = -1;
			i++;
			*(int *)(offset + m_field[5] + 0xc) = 0;
			offset += 0x68;
		} while ((int)i < m_field[8]);
	}
}
// END FUNCTION

// FUNCTION: 0x10162f00 size=0x9e
#include "QuestJournal.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern void (*g_101e3140)(const char *fmt, ...);

char *QuestJournal::sub_10162f00(int index)
{
	g_101e3124[*g_101e3128].a = "QuestJournal::GetQuest";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	if (sub_10162fa0(index))
	{
		char *base = (char *)m_field[5];
		--*g_101e3128;
		return base + index * 0x68;
	}
	g_101e3140("Could not find quest!\n");
	char *base = (char *)m_field[5];
	--*g_101e3128;
	return base;
}
// END FUNCTION

// FUNCTION: 0x10162fa0 size=0x85
#include "QuestJournal.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_101e3124[*g_101e3128].name = name;
        g_101e3124[*g_101e3128].ent = g_102de300;
        g_101e3124[*g_101e3128].extra = g_102de300;
        ++*g_101e3128;
    }
    ~CScopeGuard() { --*g_101e3128; }
};

char QuestJournal::sub_10162fa0(int index)
{
    CScopeGuard guard("QuestJournal::IsQuestIndexValid");
    if (index < 0)
        return 0;
    if (index >= m_field[8])
        return 0;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10163600 size=0x95
#include "CExperienceTable.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern void (*g_101e3140)(const char *, ...);
extern CExperienceAward g_105f9a0c;

CExperienceAward *CExperienceTable::sub_10163600(int index)
{
	g_101e3124[*g_101e3128].fn = "ExperienceTable::GetAward";
	g_101e3124[*g_101e3128].name = "";
	g_101e3124[*g_101e3128].extra = "";
	(*g_101e3128)++;
	if (index >= 0 && index < m_Size) {
		CExperienceAward *base = m_pMemory;
		(*g_101e3128)--;
		return &base[index];
	}
	g_101e3140("Invalid index for experience table: %d\n", index);
	(*g_101e3128)--;
	return &g_105f9a0c;
}
// END FUNCTION

// FUNCTION: 0x10163970 size=0x6a
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S10032fb0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_10163970(int num);
};
// TARGET: S10032fb0::sub_10163970
void S10032fb0::sub_10163970(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 2;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 0x18);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 0x18);
}
// END FUNCTION

// FUNCTION: 0x101639e0 size=0x70
struct Elem { char data[0x68]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);

void __fastcall sub_101639e0(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_101e3104(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_101e3100(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10163a50 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10163a50(int num);
};

void CUtlMemory12::sub_10163a50(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x101a0e90 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_101a0e90(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x101a0f20 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_101a0f20(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x101a2290 size=0x157
#include "QAngle.h"
#include "VMatrix.h"
#include "Vector.h"

#define M_PI		3.14159265358979323846
#define M_PI_F		((float)(M_PI))
#define DEG2RAD( x  )  ( (float)(x) * (float)(M_PI_F / 180.f) )
#define PITCH 0
#define YAW 1
#define ROLL 2

void inline SinCos( float radians, float *sine, float *cosine )
{
	_asm
	{
		fld		DWORD PTR [radians]
		fsincos

		mov edx, DWORD PTR [cosine]
		mov eax, DWORD PTR [sine]

		fstp DWORD PTR [edx]
		fstp DWORD PTR [eax]
	}
}

void VMatrix::sub_101a2290( const Vector &origin, const QAngle &vAngles )
{
	float		sr, sp, sy, cr, cp, cy;

	SinCos( DEG2RAD( vAngles[YAW] ), &sy, &cy );
	SinCos( DEG2RAD( vAngles[PITCH] ), &sp, &cp );
	SinCos( DEG2RAD( vAngles[ROLL] ), &sr, &cr );

	// matrix = (YAW * PITCH) * ROLL
	m[0][0] = cp*cy;
	m[1][0] = cp*sy;
	m[2][0] = -sp;
	m[0][1] = sr*sp*cy+cr*-sy;
	m[1][1] = sr*sp*sy+cr*cy;
	m[2][1] = sr*cp;
	m[0][2] = (cr*sp*cy+-sr*-sy);
	m[1][2] = (cr*sp*sy+-sr*cy);
	m[2][2] = cr*cp;
	m[0][3] = 0.f;
	m[1][3] = 0.f;
	m[2][3] = 0.f;
	
	// Add translation
	m[0][3] = origin.x;
	m[1][3] = origin.y;
	m[2][3] = origin.z;
	m[3][0] = 0.0f;
	m[3][1] = 0.0f;
	m[3][2] = 0.0f;
	m[3][3] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101a2520 size=0xb4
struct S1024e140Matrix
{
	float m[4][4];
};

static inline void SwapFloat(float &a, float &b)
{
	float tmp = a;
	a = b;
	b = tmp;
}

void sub_101a2520(const S1024e140Matrix &src, S1024e140Matrix &dst)
{
	if (&src == &dst) {
		SwapFloat(dst.m[0][1], dst.m[1][0]);
		SwapFloat(dst.m[0][2], dst.m[2][0]);
		SwapFloat(dst.m[0][3], dst.m[3][0]);
		SwapFloat(dst.m[1][2], dst.m[2][1]);
		SwapFloat(dst.m[1][3], dst.m[3][1]);
		SwapFloat(dst.m[2][3], dst.m[3][2]);
	} else {
		dst.m[0][0] = src.m[0][0];
		dst.m[0][1] = src.m[1][0];
		dst.m[0][2] = src.m[2][0];
		dst.m[0][3] = src.m[3][0];
		dst.m[1][0] = src.m[0][1];
		dst.m[1][1] = src.m[1][1];
		dst.m[1][2] = src.m[2][1];
		dst.m[1][3] = src.m[3][1];
		dst.m[2][0] = src.m[0][2];
		dst.m[2][1] = src.m[1][2];
		dst.m[2][2] = src.m[2][2];
		dst.m[2][3] = src.m[3][2];
		dst.m[3][0] = src.m[0][3];
		dst.m[3][1] = src.m[1][3];
		dst.m[3][2] = src.m[2][3];
		dst.m[3][3] = src.m[3][3];
	}
}
// END FUNCTION

// FUNCTION: 0x101a25e0 size=0x18
#include <string.h>

void sub_101a25e0(void *src, void *dst)
{
    if (src != dst)
    {
        memcpy(dst, src, 64);
    }
}
// END FUNCTION

// FUNCTION: 0x101a2e30 size=0x59
#include "VMatrix.h"
#include <math.h>
void sub_101a2e30(VMatrix &dst, float angle)
{
	angle = angle * 0.017453292519943295;
	float sinA = sin(angle);
	float cosA = cos(angle);
	dst[0][0] = cosA;
	dst[0][1] = -sinA;
	dst[0][2] = 0;
	dst[0][3] = 0;
	dst[1][0] = sinA;
	dst[1][1] = cosA;
	dst[1][2] = 0;
	dst[1][3] = 0;
	dst[2][0] = 0;
	dst[2][1] = 0;
	dst[2][2] = 1;
	dst[2][3] = 0;
	dst[3][0] = 0;
	dst[3][1] = 0;
	dst[3][2] = 0;
	dst[3][3] = 1;
}
// END FUNCTION

// FUNCTION: 0x101a3900 size=0xe7
#include "CUnknown10258b00.h"

void sub_101a3900(CUnknown10258b00 *p)
{
	int i;
	int j;
	for (i = 0; i < 2; i++) {
		CUnknown10258b00_A *a = &p->m_A[i];
		a->m_b14 = 0;
		a->m_b118 = 0;
		a->m_b198 = 0;
		a->m_n114 = -1;
		a->m_n00 = -1;
		a->m_n08 = 0;
		a->m_n0c = 0;
		a->m_f10 = 1.0f;
	}
	for (i = 0; i < 3; i++) {
		CUnknown10258b00_B *b = &p->m_B[i];
		b->m_nIndex = i;
		b->m_b04 = 0;
		b->m_n104 = -1;
		b->m_n108 = -1;
		b->m_n25c = -1;
		b->m_n10c = -1;
		for (j = 0; j < 2; j++) {
			CUnknown10258b00_C *c = &b->m_C[j];
			c->m_n00 = 0;
			c->m_b04 = 0;
			c->m_n84 = 0;
		}
		b->m_n3c0 = 0;
	}
	p->m_n24d0 = -1;
	p->m_n25e0 = -1;
	p->m_n2664 = -1;
	p->m_n2554 = -2;
	for (i = 0; i < 5; i++)
		p->m_aTail[i] = 0;
	p->m_n4fe84 = 0;
}
// END FUNCTION

// FUNCTION: 0x101a3de0 size=0xcc
struct SKeyValues
{
    virtual const char *GetName();
    virtual void v1(); virtual void v2(); virtual void v3();
    virtual SKeyValues *GetFirstSubKey();
    virtual void v5();
    virtual SKeyValues *FindKey(const char *name);
    virtual SKeyValues *GetNextKey();
    virtual void Begin();
    virtual void End();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual const char *GetString(const char *key, const char *def);
};

extern const char *g_102d68f8[4];
extern const char g_102de300[];
int sub_101e28e0(const char *, const char *);

// TARGET: sub_101a3de0
bool sub_101a3de0(SKeyValues *kv, char *out, const char *name)
{
    if (kv) {
        kv->Begin();
        SKeyValues *sub = kv->FindKey(name);
        if (sub) {
            int *entry = (int *)out;
            int i = 0;
            do {
                if (i >= 2) {
                    kv->End();
                    return false;
                }
                SKeyValues *child = sub->GetFirstSubKey();
                if (child) {
                    for (int j = 0; j < 4; j++) {
                        if (sub_101e28e0(child->GetName(), g_102d68f8[j]) == 0) {
                            entry[0] = j;
                            break;
                        }
                    }
                    const char *s = child->GetString(0, g_102de300);
                    char *d = (char *)entry + 4;
                    char c;
                    do {
                        c = *s++;
                        *d++ = c;
                    } while (c);
                }
                sub = sub->GetNextKey();
                i++;
                entry += 0x22;
            } while (sub);
        }
        kv->End();
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x101a4770 size=0x26
extern char g_10619980[];
extern char *g_1061993c;

// TARGET: sub_101a4770
void *sub_101a4770(unsigned short index)
{
	if (index == 0xffff)
		return g_10619980;
	return g_1061993c + index * 0x5f324 + 0xc;
}
// END FUNCTION

// FUNCTION: 0x101a6780 size=0x10b
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

unsigned short CUtlRBTreeBig::sub_101a6780(const void *search)
{
    unsigned short current = m_Root;
    while (current != InvalidIndex()) {
        if (m_LessFunc(search, m_pElements[current].m_Data))
            current = Links(current).m_Left;
        else if (m_LessFunc(m_pElements[current].m_Data, search))
            current = Links(current).m_Right;
        else
            break;
    }
    return current;
}
// END FUNCTION

// FUNCTION: 0x101a6a00 size=0x10e
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

void CUtlRBTreeBig::sub_101a6a00(const void *insert, unsigned short &parent, bool &leftchild)
{
    unsigned short current = m_Root;
    parent = InvalidIndex();
    leftchild = false;
    while (current != InvalidIndex()) {
        parent = current;
        if (m_LessFunc(insert, m_pElements[current].m_Data)) {
            leftchild = true;
            current = Links(current).m_Left;
        } else {
            leftchild = false;
            current = Links(current).m_Right;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101a6b10 size=0x24
#include <string.h>
// TARGET: sub_101a6b10
void sub_101a6b10(unsigned short *dst, unsigned short *src)
{
    if (dst) {
        *dst = *src;
        memcpy((char *)dst + 4, (char *)src + 4, 0x17cc6 * 4);
    }
}
// END FUNCTION

// FUNCTION: 0x101a6ba0 size=0x559
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

// TARGET: CUtlRBTreeBig::sub_101a6ba0
void CUtlRBTreeBig::sub_101a6ba0(unsigned short elem)
{
	while (elem != m_Root && Color(Parent(elem)) == 0) {
		unsigned short parent = Parent(elem);
		unsigned short grandparent = Parent(parent);

		if (LeftChild(Parent(parent)) == parent) {
			unsigned short uncle = RightChild(grandparent);
			if (Color(uncle) == 0) {
				SetColor(parent, 1);
				SetColor(uncle, 1);
				SetColor(grandparent, 0);
				elem = grandparent;
			} else {
				if (RightChild(Parent(elem)) == elem) {
					elem = parent;
					RotLeft(elem);
					parent = Parent(elem);
					grandparent = Parent(parent);
				}
				SetColor(parent, 1);
				SetColor(grandparent, 0);
				RotRight(grandparent);
			}
		} else {
			unsigned short uncle = LeftChild(grandparent);
			if (Color(uncle) == 0) {
				SetColor(parent, 1);
				SetColor(uncle, 1);
				SetColor(grandparent, 0);
				elem = grandparent;
			} else {
				if (LeftChild(Parent(elem)) == elem) {
					elem = parent;
					RotRight(parent);
					parent = Parent(elem);
					grandparent = Parent(parent);
				}
				SetColor(parent, 1);
				SetColor(grandparent, 0);
				sub_101a7290(grandparent);
			}
		}
	}
	SetColor(m_Root, 1);
}
// END FUNCTION

// FUNCTION: 0x101a7100 size=0xbf
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

bool CUtlRBTreeBig::sub_101a7100(unsigned short i) const
{
    return Links(Links(i).m_Parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x101a71c0 size=0xc1
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

bool CUtlRBTreeBig::sub_101a71c0(unsigned short i) const
{
    return Links(Links(i).m_Parent).m_Right == i;
}
// END FUNCTION

// FUNCTION: 0x101b1e60 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_101b1e60()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101b3480 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_101b3480(int num);
};

// TARGET: UtlMem::sub_101b3480
void UtlMem::sub_101b3480(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x101be160 size=0xaa
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

int CUtlVector4::sub_101be160(int elem, const int *src)
{
	if (1 + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (1 + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 8;
			}
		}
		if (m_pMemory)
			m_pMemory = (int *)Plat_Realloc(m_pMemory, m_allocationCount * 4);
		else
			m_pMemory = (int *)Plat_Alloc(m_allocationCount * 4);
	}
	m_size += 1;
	m_pElements = m_pMemory;
	int numToMove = m_size - elem - 1;
	if (numToMove > 0)
		sub_101d0f30(m_pMemory + elem + 1, m_pMemory + elem, numToMove * 4);
	int *p = m_pMemory + elem;
	if (p)
		*p = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x101be210 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_101be210(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x101be2a0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_101be2a0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x101be2e0 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_101be2e0(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2bd0 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_101c2bd0(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2c80 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_101c2c80(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2cc0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_101c2cc0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101c2cf0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_101c2cf0(int num);
};

// TARGET: UtlMem::sub_101c2cf0
void UtlMem::sub_101c2cf0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x101d0d28 size=0x18
// TARGET: sub_101d0d28
void sub_101d0d40();
int sub_101d3581();
void sub_101d3531();
extern int g_10680710;

void sub_101d0d28()
{
    sub_101d0d40();
    g_10680710 = sub_101d3581();
    sub_101d3531();
    __asm {
        fnclex
        ret
    }
}
// END FUNCTION
