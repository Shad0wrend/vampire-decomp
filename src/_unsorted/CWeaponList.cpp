// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102501b0 size=0x7e
#include "CWeaponList.h"
extern void (*g_109f3624)(void *);
void CWeaponList::vfunc5()
{
    if (m_nCount != 0) {
        unsigned int prev = 0xffff;
        int i = m_nCount;
        while (--i >= 0) {
            int off = (i & 0xffff) * 8;
            *(unsigned short *)(off + 6 + m_pNodes) = (unsigned short)prev;
            *(unsigned short *)(m_pNodes + 4 + off) = (unsigned short)i;
            prev = i;
        }
        m_w18 = 0;
        m_w14 = 0xffff;
        m_w16 = 0xffff;
        m_w1a = 0;
    }
    if (m_nGrow != -1) {
        if (m_pNodes != 0) {
            g_109f3624(m_pNodes);
            m_pNodes = 0;
        }
        m_nAlloc = 0;
    }
    m_w18 = 0xffff;
    m_nCount = 0;
    m_pFirst = m_pNodes;
}
// END FUNCTION

// FUNCTION: 0x10250340 size=0x89
#define PCD_INITIALIZERS
#include "CWeaponList.h"

// a local object in a function nothing calls: a global one would join the game systems at load
void pcd_emit_10250340() { CWeaponList list; }

// TARGET: ??_GCWeaponList@@UAEPAXI@Z
// END FUNCTION
