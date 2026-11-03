// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a12a0 size=0x8b
#include "CRestore.h"
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

inline void CRestoreVec::EnsureCapacity(int num)
{
	if (m_allocationCount < num && m_growSize != -1) {
		m_allocationCount = num;
		if (m_pMemory)
			m_pMemory = (int *)g_109f3638(m_pMemory, num * 4);
		else
			m_pMemory = (int *)g_109f3634(num * 4);
	}
	m_pElements = m_pMemory;
}

// TARGET: CRestore::CRestore
CRestore::CRestore(void *pData) : m_pData(pData), m_pData2(pData ? (char *)pData + 0x18 : 0), m_field20(0), m_bField24(true)
{
	m_vec.EnsureCapacity(32);
}
// END FUNCTION

// FUNCTION: 0x101a1360 size=0x13
#include "CBaseEntity.h"
#include "CRestore.h"
namespace lifted {
int __stdcall sub_10004f70(int, int, int);
}
int CRestore::vfunc2(CBaseEntity * a0, int a1)
{
    return lifted::sub_10004f70(*(int *)&a0, a1, a1);
}
// END FUNCTION

// FUNCTION: 0x101a1390 size=0x16
#include "CRestore.h"

int CRestore::vfunc10()
{
	int value;
	vfunc9((unsigned short *)&value);
	return value & 0xffff;
}
// END FUNCTION

// FUNCTION: 0x101a13c0 size=0x4
#include "CRestore.h"
// TARGET: sub_101a13c0
char __fastcall sub_101a13c0(CRestore *p) { return ((unsigned char *)p)[0x24]; }
// END FUNCTION

// FUNCTION: 0x101a13e0 size=0x4
#include "CRestore.h"
int CRestore::vfunc33()
{
    return *(int *)((char *)this + 0x1c);
}
// END FUNCTION

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

// FUNCTION: 0x101a1490 size=0x7
// TARGET: sub_101a1490
int __fastcall sub_101a1490(char *pThis)
{
    return *(int *)(*(int *)(pThis + 0x18) + 8);
}
// END FUNCTION

// FUNCTION: 0x101a14b0 size=0x1d
#include "CRestore.h"

// TARGET: CRestore::sub_101a14b0
void CRestore::sub_101a14b0(int pos)
{
	int *piVar1 = (int *)m_pData;
	if (pos >= 0 && pos < piVar1[3]) {
		piVar1[2] = pos;
		piVar1[1] = piVar1[0] + pos;
	}
}
// END FUNCTION

// FUNCTION: 0x101a18a0 size=0xbb
#include <string.h>
#include "CRestore.h"

struct SaveRestoreFieldInfo_t
{
	void *pField;
	void *pOwner;
	typedescription_t *pTypeDesc;
};

struct ISaveRestoreOpsLocal
{
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void Empty(SaveRestoreFieldInfo_t *pFieldInfo);
};

struct datamap_t
{
	typedescription_t *dataDesc;
	int dataNumFields;
};

struct typedescription_t
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	ISaveRestoreOpsLocal *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
	int fieldSizeInBytes;
	int unk;
};

extern int g_10592ac8[];

// TARGET: CRestore::vfunc4
void CRestore::vfunc4(void *pBaseData, typedescription_t *pFields, int fieldCount)
{
	for (int i = 0; i < fieldCount; i++)
	{
		typedescription_t *pField = &pFields[i];
		if (!sub_101a1860(pField))
			continue;
		void *pData = (char *)pBaseData + pField->fieldOffset[0];
		if (pField->fieldType == 10)
		{
			SaveRestoreFieldInfo_t fieldInfo;
			fieldInfo.pField = pData;
			fieldInfo.pOwner = pBaseData;
			fieldInfo.pTypeDesc = pField;
			pField->pSaveRestoreOps->Empty(&fieldInfo);
		}
		else if (pField->fieldType == 9)
		{
			if (pField->flags & 0x40)
				pData = *(void **)pData;
			vfunc4(pData, pField->td->dataDesc, pField->td->dataNumFields);
		}
		else
		{
			memset(pData, 0, g_10592ac8[pField->fieldType] * (short)pField->fieldSize);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101a1990 size=0xbe
#include "CRestore.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void *(*g_109f3634)(unsigned int);	// Plat_Alloc
extern void *(*g_109f3638)(void *, unsigned int);	// Plat_Realloc

struct RestoreSlots
{
	virtual int s0();
	virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8();
	virtual void s9(unsigned short *p);
};

void CRestore::sub_101a1990(unsigned short *pValue)
{
	((RestoreSlots *)this)->s9(pValue);
	int value = ((RestoreSlots *)this)->s0() + *pValue;
	int elem = m_vec.m_size;
	if (m_vec.m_size + 1 > m_vec.m_allocationCount) {
		if (m_vec.m_growSize != -1) {
			int num = m_vec.m_size + 1 - m_vec.m_allocationCount;
			int nAllocationRequested = m_vec.m_allocationCount + num;
			while (m_vec.m_allocationCount < nAllocationRequested) {
				if (m_vec.m_allocationCount != 0) {
					if (m_vec.m_growSize != 0)
						m_vec.m_allocationCount += m_vec.m_growSize;
					else
						m_vec.m_allocationCount += m_vec.m_allocationCount;
				} else {
					m_vec.m_allocationCount = 8;
				}
			}
			if (m_vec.m_pMemory)
				m_vec.m_pMemory = (int *)g_109f3638(m_vec.m_pMemory, m_vec.m_allocationCount * 4);
			else
				m_vec.m_pMemory = (int *)g_109f3634(m_vec.m_allocationCount * 4);
		}
	}
	m_vec.m_pElements = m_vec.m_pMemory;
	m_vec.m_size++;
	int toMove = m_vec.m_size - elem - 1;
	if (toMove > 0)
		memmove(&m_vec.m_pMemory[elem + 1], &m_vec.m_pMemory[elem], toMove * 4);
	int *p = &m_vec.m_pMemory[elem];
	if (p)
		*p = value;
}
// END FUNCTION

// FUNCTION: 0x101a1e30 size=0x30
#include "CRestore.h"
void CRestore::vfunc9(unsigned short *pValue)
{
	if (pValue) {
		pValue[0] = vfunc13();
		pValue[1] = vfunc13();
		return;
	}
	sub_1000910b(4);
}
// END FUNCTION

// FUNCTION: 0x101a1e70 size=0x1c
#include "CRestore.h"

// TARGET: CRestore::vfunc13
short CRestore::vfunc13()
{
	int v = 0;
	sub_101a1f90(&v, 2);
	return v;
}
// END FUNCTION

// FUNCTION: 0x101a1ea0 size=0x1b
// TARGET: CRestore::vfunc14
#include "CRestore.h"
int CRestore::vfunc14()
{
	int v = 0;
	sub_101a1f90(&v, 4);
	return v;
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

// FUNCTION: 0x101a2040 size=0x3f
#include "CRestore.h"

struct CRestoreCalleePlaceholder {
    void sub_1000fe9d(int a, int n);
    void sub_1000910b(int n);
};

// TARGET: CRestore::vfunc12
unsigned int CRestore::vfunc12(int a, int b, int c)
{
    int n = b * 2;
    if (c != 0 && n >= c) {
        n = c;
    }
    ((CRestoreCalleePlaceholder *)this)->sub_1000fe9d(a, n);
    if (n < c) {
        ((CRestoreCalleePlaceholder *)this)->sub_1000910b(c - n);
    }
    return (unsigned int)n >> 1;
}
// END FUNCTION

// FUNCTION: 0x101a2090 size=0x44
#include "CRestore.h"

int CRestore::vfunc15(int *pValues, int count, int nBytesAvailable)
{
	int n = count * 4;
	if (nBytesAvailable != 0 && n >= nBytesAvailable)
		n = nBytesAvailable;
	sub_1000fe9d((int)pValues, n);
	if (n < nBytesAvailable)
		sub_1000910b(nBytesAvailable - n);
	return (int)((unsigned int)n >> 2);
}
// END FUNCTION

// FUNCTION: 0x101a2150 size=0x44
#include "CRestore.h"

int CRestore::vfunc18(float *pValues, int count, int nBytesAvailable)
{
	int n = count * 4;
	if (nBytesAvailable != 0 && n >= nBytesAvailable)
		n = nBytesAvailable;
	sub_1000fe9d((int)pValues, n);
	if (n < nBytesAvailable)
		sub_1000910b(nBytesAvailable - n);
	return (int)((unsigned int)n >> 2);
}
// END FUNCTION

// FUNCTION: 0x101a2210 size=0x2a
#include "CRestore.h"

extern void (*g_109f3890)(char *, const char *, int);
void __stdcall sub_1000910b(int n);

// TARGET: CRestore::vfunc21
void CRestore::vfunc21(char *pDest, int n, int a)
{
    const char *src = (const char *)sub_101a1f70();
    ::sub_1000910b(a);
    g_109f3890(pDest, src, n);
}
// END FUNCTION

// FUNCTION: 0x101a22f0 size=0x14
#include "CRestore.h"
namespace lifted {
int __stdcall sub_1000fe9d(int, int);
}
int CRestore::vfunc23(int a0)
{
    lifted::sub_1000fe9d(a0, 0xc);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101a2460 size=0x96
#include "CBaseEntity.h"
#include "CRestore.h"
#include <string.h>

// TARGET: CRestore::vfunc28
int CRestore::vfunc28(CBaseEntity **pValues, int count, int nBytesAvailable)
{
    int ids[256];
    int nRead = vfunc15(ids, count, nBytesAvailable);
    for (int i = 0; i < nRead; i++)
        pValues[i] = sub_101a2390(ids[i]);
    if (nRead < count)
        memset(&pValues[nRead], 0, (count - nRead) * sizeof(CBaseEntity *));
    return nRead;
}
// END FUNCTION

// FUNCTION: 0x101a2530 size=0xa3
#include <string.h>
#include "CBaseEntity.h"
#include "CRestore.h"

int CRestore::vfunc29(int *pValues, int count, int nBytesAvailable)
{
    int buf[256];
    int n = vfunc15(buf, count, nBytesAvailable);
    for (int i = 0; i < n; i++) {
        CBaseEntity *pEnt = sub_101a2390(buf[i]);
        pValues[i] = pEnt ? pEnt->m_pEdict2e0 : 0;
    }
    if (n < count)
        memset(&pValues[n], 0, (count - n) * 4);
    return n;
}
// END FUNCTION

// FUNCTION: 0x101a2610 size=0xaa
#include "CRestore.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);

struct HandleSrc {
	virtual void pad0();
	virtual unsigned int *GetRefEHandle();
};

int CRestore::vfunc30(unsigned int *pValues, int count, int nBytesAvailable)
{
	int buf[256];
	int n = vfunc15(buf, count, nBytesAvailable);
	for (int i = 0; i < n; i++) {
		HandleSrc *e = (HandleSrc *)sub_101a2390(buf[i]);
		if (e)
			pValues[i] = *e->GetRefEHandle();
		else
			pValues[i] = 0xffffffff;
	}
	if (n < count)
		memset(&pValues[n], 0, (count - n) * sizeof(unsigned int));
	return n;
}
// END FUNCTION

// FUNCTION: 0x101a26f0 size=0xec
#include "CRestore.h"
#include "CGlobalEntityList.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);
extern CGlobalEntityList *g_10566458;
int CRestore::vfunc31(int *pValues, int count, int nBytesAvailable)
{
    int buf[256];
    int n = vfunc15(buf, count, nBytesAvailable);
    if (0 < n) {
        int *p = pValues;
        int remaining = n;
        do {
            CRestoreSaveEnt *pRec = sub_101a2410(*(int *)((char *)buf + ((char *)p - (char *)pValues)));
            *p = -1;
            if (pRec) {
                unsigned int h = pRec->m_hEntity;
                int value;
                if (h != -1) {
                    CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
                    if (s->m_Serial == (h >> 13) && s->m_pEntity) {
                        value = *(volatile int *)&pRec->m_hEntity;
                        goto store;
                    }
                }
                value = pRec->m_nIndex;
                if (value <= 0 || value >= 0xffff)
                    goto next;
                value = -value;
store:
                *p = value;
            }
next:
            p++;
            remaining--;
        } while (remaining != 0);
    }
    if (n < count)
        memset(pValues + n, 0, (count - n) * 4);
    return n;
}
// END FUNCTION

// FUNCTION: 0x101a2a80 size=0x11
void __fastcall sub_101a2a80(int *p, int dummy, int a)
{
    typedef void (__fastcall *VFunc)(void *, void *, int, int, int);
    ((VFunc)(*(int **)p)[25])(p, (void *)a, a, 1, 0xc);
}
// END FUNCTION

// FUNCTION: 0x101a2ab0 size=0x7f
#include "CRestore.h"

extern Vector g_1070d1b0;

// TARGET: CRestore::vfunc25
int CRestore::vfunc25(Vector *pValues, int count, int nBytesAvailable)
{
	const Vector *pOffset;
	if (*(int *)(m_pData2 + 0x12c4))
		pOffset = (const Vector *)(m_pData2 + 0x12dc);
	else
		pOffset = &g_1070d1b0;
	Vector vecOffset = *pOffset;
	int nRead = vfunc22(pValues, count, nBytesAvailable);
	for (int i = nRead - 1; i >= 0; i--)
		VectorAdd(vecOffset, pValues[i], pValues[i]);
	return nRead;
}
// END FUNCTION

// FUNCTION: 0x101a2b50 size=0x41
#include "CRestore.h"
int sub_1019f7d0(void *, const char *);
void __stdcall sub_101a2020(int);
int CRestore::vfunc27(void *pBase, int *pValues, int count, int nBytesAvailable)
{
	const char *p = (const char *)sub_101a1f70();
	sub_101a2020(nBytesAvailable);
	if (*p == 0) {
		*pValues = 0;
		return 0;
	}
	*pValues = sub_1019f7d0(pBase, p);
	return 0;
}
// END FUNCTION
