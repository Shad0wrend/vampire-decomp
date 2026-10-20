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

// FUNCTION: 0x101a1ed0 size=0x18
#include "CRestore.h"
char CRestore::vfunc16()
{
	char c = 0;
	sub_101a1f90(&c, 1);
	return c;
}
// END FUNCTION

// FUNCTION: 0x101a2460 size=0x96
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
