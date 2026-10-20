// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f88a0 size=0x81
#include "CNotifyList.h"
#include "CEntityVSlots.h"
struct S100f88a0Flags {
    unsigned int m_low : 6;
    unsigned int m_b6 : 1;
    unsigned int m_high : 25;
    char GetBit6() { return m_b6; }
};
void CNotifyList::vfunc2(CBaseEntity *pEntity, const char *pszEvent)
{
    CVariantCopy value;
    if (((S100f88a0Flags *)&pEntity->m_flags268)->GetBit6()) {
        for (int i = 0; i < m_nPairs; i++) {
            if ((int)((int *)m_pairs.m_pMemory)[i * 2 + 1] == (int)pEntity) {
                CEntityVSlots *pListener = (CEntityVSlots *)m_pairs.sub_100f97b0(i)->m_a;
                pListener->slot118(pszEvent, (CEntityVSlots *)pEntity, (CEntityVSlots *)pEntity, value, 0);
            }
        }
    }
}
// END FUNCTION
