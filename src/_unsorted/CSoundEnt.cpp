// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ba6f0 size=0xa5
#include "CSoundEnt.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CGlobalVarsRaw
{
	char m_pad0000[0x0c];
	float m_curtime;
};
extern CGlobalVarsRaw *g_1070b228;

void CSoundEnt::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)(void *)this;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)pEnt + 0x270))->sub_100dc480(0);
	}
	pEnt->sub_100b3b00();
	sub_101baf80();
	*(float *)((char *)pEnt + 0x17c) = g_1070b228->m_curtime + 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101ba890 size=0xd2
#include "CSoundEnt.h"

struct CGlobalVarsSE
{
    char pad[0xc];
    float curtime;
};

extern CGlobalVarsSE *g_1070b228;
extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);

void CSoundEnt::vfunc134()
{
    m_flNextThink = g_1070b228->curtime + 0.3;
    int iPrevious = -1;
    int iSound = m_iActiveSound;
    while (iSound != -1) {
        if (*(float *)&m_SoundPool[iSound].m_flExpireTime + 4.0f <= g_1070b228->curtime && m_SoundPool[iSound].m_flExpireTime != 0xbf800000) {
            int iNext = m_SoundPool[iSound].m_iNext;
            sub_101ba9d0(iSound, iPrevious);
            iSound = iNext;
        } else {
            iPrevious = iSound;
            iSound = m_SoundPool[iSound].m_iNext;
        }
    }
    if (m_bShowReport) {
        int n = sub_101bb070(2) - m_cLastActiveSounds;
        DevMsg(2, "Soundlist: %d / %d  (%d)\n", sub_101bb070(2), sub_101bb070(1), n);
        m_cLastActiveSounds = sub_101bb070(2);
    }
    sub_101bb350();
}
// END FUNCTION

// FUNCTION: 0x101bb580 size=0x1e
#include "CSoundEnt.h"

void sub_100aa7b0(void *p);

// TARGET: CSoundEnt::vfunc5
CSoundEnt *CSoundEnt::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
