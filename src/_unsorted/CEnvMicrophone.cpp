// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101025b0 size=0xc9
#include "CEnvMicrophone.h"

extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern void (__cdecl *g_109f362c)(const char *fmt, ...);

static inline CBaseEntity *LookupHandle(const unsigned int *pHandle)
{
    if (*pHandle == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
    if (pSlot->m_Serial == (int)(*pHandle >> 13))
        return (CBaseEntity *)pSlot->m_pEntity;
    return 0;
}

void CEnvMicrophone::vfunc113()
{
    CBaseEntity::vfunc113();
    const char *pszTarget = *(const char **)((char *)this + 0x20c);
    if (pszTarget) {
        CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszTarget, 0, 0);
        if (pEnt)
            m_hMeasureTarget = *pEnt->vfunc1();
        else
            m_hMeasureTarget = 0xffffffff;
        if (LookupHandle(&m_hMeasureTarget)) {
            if (*(int *)((char *)LookupHandle(&m_hMeasureTarget) + 0x2e0))
                return;
        }
        g_109f362c("EnvMicrophone - Measure target not found or measure target with no origin!\n");
    }
    m_hMeasureTarget = *vfunc1();
}
// END FUNCTION
