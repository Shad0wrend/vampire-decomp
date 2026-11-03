// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cc9e0 size=0x75
#include "CBaseEntity.h"
#include "CFlaggedEntitiesEnum.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
int CFlaggedEntitiesEnum::vfunc0(CBaseEntity *pHandleEntity)
{
    unsigned int h = *pHandleEntity->vfunc1();
    CGlobalEntityList_Ent *pObj = 0;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_106eb5d8.m_Slots[h & 0x1fff];
        if (s->m_Serial == (int)(h >> 13))
            pObj = s->m_pEntity;
    }
    if (pObj) {
        CBaseEntity *pEnt = pObj->vfunc4();
        if (pEnt) {
            if (m_nFlagMask && !(m_nFlagMask & pEnt->sub_100b3700()))
                return 0;
            if (!sub_101cc9a0(pEnt))
                return 1;
        }
    }
    return 0;
}
// END FUNCTION
