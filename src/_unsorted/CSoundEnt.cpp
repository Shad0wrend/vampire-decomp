// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101b97e0 size=0x6
#include "CSoundEnt.h"
int CSoundEnt::vfunc117()
{
    return -2147483648;
}
// END FUNCTION

// FUNCTION: 0x101ba660 size=0x6
#include "CSoundEnt.h"
namespace lifted {
extern char g_10599e24;
}
datamap_t *CSoundEnt::vfunc82()
{
    return (datamap_t *)&lifted::g_10599e24;
}
// END FUNCTION

// FUNCTION: 0x101ba6f0 size=0xa5
#include "CSoundEnt.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"


void CSoundEnt::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)(void *)this;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)pEnt + 0x270))->sub_100dc480(0);
	}
	pEnt->sub_100b3b00();
	sub_101baf80();
	*(float *)((char *)pEnt + 0x17c) = gpGlobals->curtime + 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101ba7d0 size=0x49
#include "CSoundEnt.h"

// TARGET: CSoundEnt::vfunc126
int CSoundEnt::vfunc126(int a)
{
	for (int i = 0; i < 0x40; i++)
		m_SoundPool[i].sub_101b9840();
	int result = sub_100a9f70(a);
	for (int j = 0; j < 0x40; j++)
		m_SoundPool[j].sub_1000a493();
	return result;
}
// END FUNCTION

// FUNCTION: 0x101ba840 size=0x31
#include "CSoundEnt.h"

// TARGET: CSoundEnt::vfunc127
int CSoundEnt::vfunc127(int a)
{
    int result = sub_1000961a(a);
    CSoundEntSlot *pSlot = m_SoundPool;
    for (int i = 0x40; i != 0; i--) {
        pSlot->sub_1000a493();
        pSlot++;
    }
    return result;
}
// END FUNCTION

// FUNCTION: 0x101ba890 size=0xd2
#include "CSoundEnt.h"


extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);

void CSoundEnt::vfunc134()
{
    m_flNextThink = gpGlobals->curtime + 0.3;
    int iPrevious = -1;
    int iSound = m_iActiveSound;
    while (iSound != -1) {
        if (*(float *)&m_SoundPool[iSound].m_flExpireTime + 4.0f <= gpGlobals->curtime && m_SoundPool[iSound].m_flExpireTime != 0xbf800000) {
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

// FUNCTION: 0x101ba9b0 size=0x1
#include "CSoundEnt.h"
void CSoundEnt::vfunc104()
{
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
