// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ccbf0 size=0x67
#include "CBaseEntity.h"
#include "CEdtEntitiesEnum.h"
#include "CGlobalEntityList.h"

struct HandleEntL {
    virtual void a0();
    virtual unsigned int *v1();
};
extern CGlobalEntityList g_106eb5d8;

int CEdtEntitiesEnum::vfunc0(CBaseEntity *pHandleEntity)
{
    unsigned int h = *((HandleEntL *)pHandleEntity)->v1();
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_106eb5d8.m_Slots[h & 0x1fff];
        if (s->m_Serial == (int)(h >> 13) && s->m_pEntity) {
            CBaseEntity *pEnt = s->m_pEntity->vfunc4();
            if (pEnt && (m_nMask & *(unsigned int *)((char *)pEnt + 0x4c))) {
                if (!sub_101ccbb0(pEnt))
                    return 1;
            }
        }
    }
    return 0;
}
// END FUNCTION
