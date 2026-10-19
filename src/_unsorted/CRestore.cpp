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

// FUNCTION: 0x101a1ed0 size=0x18
#include "CRestore.h"
char CRestore::vfunc16()
{
	char c = 0;
	sub_101a1f90(&c, 1);
	return c;
}
// END FUNCTION
