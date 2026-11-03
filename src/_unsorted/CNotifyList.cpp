// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f8780 size=0x78
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "CNotifyList.h"
#include "utlvector.h"

struct CNotifyList_Elem
{
	CBaseEntity *m_pNotify;
	CBaseEntity *m_pWatched;
};
struct CNotifyList_Ent { char pad[0x268]; unsigned int m_iEFlags; };

void *CNotifyList::vfunc0(CBaseEntity *pNotify, CBaseEntity *pWatched)
{
	((CNotifyList_Ent *)pWatched)->m_iEFlags |= 0x40;
	int index = ((CUtlVector<CNotifyList_Elem> *)((char *)this + 8))->AddToTail();
	CNotifyList_Elem &n = ((CUtlVector<CNotifyList_Elem> *)((char *)this + 8))->Element(index);
	n.m_pWatched = pWatched;
	n.m_pNotify = pNotify;
	return &n;
}
// END FUNCTION

// FUNCTION: 0x100f88a0 size=0x81
#include "CBaseEntity.h"
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

// FUNCTION: 0x100f8af0 size=0x52
#include "CNotifyList.h"
#include "CBaseEntity.h"

#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CListener183View {
    V100(0) V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17)
    V(180) V(181) V(182)
    virtual void vfunc183(CBaseEntity *pEntity, int a, int b);
};

static inline bool IsWatched(unsigned int flags) { return ((flags >> 6) & 1) != 0; }

void CNotifyList::vfunc3(CBaseEntity *pEntity, int a, int b)
{
    if (IsWatched(pEntity->m_flags268)) {
        for (int i = 0; i < m_nPairs; i++) {
            CUnknown100f97b0_Elem *p = &m_pairs.m_pMemory[i];
            if (p->m_b == (int)pEntity)
                ((CListener183View *)p->m_a)->vfunc183(pEntity, a, b);
        }
    }
}
// END FUNCTION
