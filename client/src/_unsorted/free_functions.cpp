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

// FUNCTION: 0x100797c0 size=0x1c
void sub_10079520(void *p);

// TARGET: sub_100797c0
void __cdecl sub_100797c0(char *p)
{
	if (p && *(int *)(p + 0x118) == 0)
		sub_10079520(p);
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

// FUNCTION: 0x10130f90 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_10130f90(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 8], &m_pMemory[elem * 8], numToMove * 8);
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

// FUNCTION: 0x1015f810 size=0x1c
void __cdecl sub_1015f830(int a, int b, const char *name);

// TARGET: sub_1015f810
int __cdecl sub_1015f810(int a, int b)
{
	sub_1015f830(a, b, "Name");
	return a;
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

// FUNCTION: 0x101be2a0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_101be2a0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
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
