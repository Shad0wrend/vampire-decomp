// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10102490 size=0xd1
#include "CEnvMicrophone.h"

extern char g_10569a70[];

struct SMicGlobals
{
	char pad[0xc];
	float curtime;
};
extern SMicGlobals *g_1070b228;

void CEnvMicrophone::vfunc103()
{
	for (unsigned int off = 0; off < 0x20; off += 8) {
		if (*(unsigned int *)(g_10569a70 + off) & m_flags204)
			m_nSpeakerFlags |= *(unsigned int *)(g_10569a70 + off + 4);
	}
	if (m_flSensitivity == 0.0f)
		m_flSensitivity = 1.0f;
	else if (m_flSensitivity > 10.0f)
		m_flSensitivity = 10.0f;
	m_flSmoothFactor = (m_flSmoothFactor > 0.9) ? 0.9 : ((m_flSmoothFactor < 0.0f) ? 0.0f : m_flSmoothFactor);
	if (!m_bDisabled)
		*(float *)((char *)this + 0x17c) = g_1070b228->curtime + 0.1;
}
// END FUNCTION

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
