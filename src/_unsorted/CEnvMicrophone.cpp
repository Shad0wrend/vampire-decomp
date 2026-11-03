// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101023b0 size=0x6
#include "datamap.h"
#include "CEnvMicrophone.h"
namespace lifted {
extern char g_105698f8;
}
datamap_t * CEnvMicrophone::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105698f8);
}
// END FUNCTION

// FUNCTION: 0x10102490 size=0xd1
#include "CEnvMicrophone.h"

extern char g_10569a70[];


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
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101025b0 size=0xc9
#include "CGlobalEntityList.h"
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

// FUNCTION: 0x10102890 size=0x10a
#include "CSound.h"
#include "CEnvMicrophone.h"
#include "CSoundEnt.h"
#include <math.h>

struct CMicSound	// the fields of a sound record used here (see CSoundEntSlot)
{
	char m_pad0000[4];
	unsigned int m_iType;	// 0x04
	char m_pad0008[0x18 - 8];
	int m_iNext;	// 0x18
};


extern float g_10459634;	// 0.005f
int sub_101bb0f0();	// CSoundEnt::ActiveList (stub 0x10012120)

void CEnvMicrophone::vfunc134()
{
	int iSound = sub_101bb0f0();
	float flMax; flMax = 0.0f;
	CMicSound *pSound;
	for (; iSound != -1; iSound = pSound->m_iNext)
	{
		pSound = (CMicSound *)CSoundEnt::sub_101bb150(iSound);
		if (pSound && (m_nSpeakerFlags & pSound->m_iType))
		{
			float flLevel; flLevel = 0.0f;
			if (sub_10102730((CSound *)pSound, &flLevel) && flLevel > flMax)
				flMax = flLevel;
		}
	}
	if (flMax != m_SoundLevel.Get())
	{
		if (fabs(flMax - m_SoundLevel.Get()) < g_10459634)
			m_SoundLevel.Set(flMax, this, this);
		else
			m_SoundLevel.Set((1.0f - m_flSmoothFactor) * flMax + m_SoundLevel.Get() * m_flSmoothFactor, this, this);
	}
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101029f0 size=0x2b
#include "CEnvMicrophone.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CEnvMicrophone::vfunc5
CEnvMicrophone *CEnvMicrophone::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x464))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
