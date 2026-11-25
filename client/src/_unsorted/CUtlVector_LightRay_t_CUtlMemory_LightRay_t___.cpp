// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a180 size=0xbc
#include "CLightRays.h"
// TARGET: ?InsertMultipleBefore@?$CUtlVector@ULightRay_t@@V?$CUtlMemory@ULightRay_t@@@@@@QAEHHHPBULightRay_t@@@Z
int CUtlVector<LightRay_t,CUtlMemory<LightRay_t> >::InsertMultipleBefore(int elem, int num, const LightRay_t *pToInsert)
{
    if (num == 0)
        return elem;
    if (m_Size + num > m_Memory.NumAllocated())
        m_Memory.sub_1004a350(m_Size + num - m_Memory.NumAllocated());
    m_Size += num;
    ResetDbgInfo();
    ShiftElementsRight(elem, num);
    if (pToInsert) {
        for (int i = 0; i < num; i++)
            Element(elem + i) = pToInsert[i];
    }
    return elem;
}
// END FUNCTION
