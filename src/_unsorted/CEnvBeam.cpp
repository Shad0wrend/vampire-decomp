// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100feb50 size=0x6
#include "CEnvBeam.h"
namespace lifted {
extern char g_10568420;
}
datamap_t * CEnvBeam::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10568420);
}
// END FUNCTION

// FUNCTION: 0x100fec10 size=0x1e
#include "CEnvBeam.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvBeam::vfunc5
CBaseEntity *CEnvBeam::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100fec40 size=0x13a
#include "CEnvBeam.h"
#include "CEntityVSlots.h"

extern float g_104454c4;
void sub_10015b68();
void sub_10004bec();
void sub_1000752c();

void CEnvBeam::vfunc103()
{
	if (m_iszSpriteName == 0) {
		sub_100ac4e0((int)sub_10015b68, 0, 0);
		return;
	}
	CBeam::vfunc103();
	m_fEndWidth = (m_fWidth = m_nBoltWidth) * 0.1;
	if (m_flLife == g_104454c4 && !(m_flags204 & 8)) {
		sub_100ac4e0((int)sub_10004bec, 0, 0);
		m_flNextThink = gpGlobals->curtime;
		m_flStartTime = gpGlobals->curtime;
		if (m_name26c) {
			if (!(m_flags204 & 1)) {
				m_nActive = 0;
				m_flNextThink = 0;
				m_nEffectFlags |= 0x40;
			} else {
				m_nActive = 1;
			}
		}
	} else {
		m_nActive = 0;
		if (!m_name26c || (m_flags204 & 1)) {
			sub_100ac4e0((int)sub_1000752c, 0, 0);
			m_flNextThink = gpGlobals->curtime + 1.0;
		}
	}
	if (!m_bFlag5a8) {
		Vector *pOrigin = (Vector *)((CEntityVSlots *)this)->slot217();
		*(Vector *)m_vecSavedPos = *pOrigin;
	}
}
// END FUNCTION

// FUNCTION: 0x100fedd0 size=0x66
#include "CEnvBeam.h"
extern char g_106b8540[];
void __cdecl sub_10014e93(const char *src, char *dst, int len);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CEnvBeam::vfunc104()
{
	*(int *)m_pad0514 = engine->vfunc13(STRINGR(m_iszSpriteName), 0);
	if (m_iszFileName) {
		sub_10014e93(STRINGR(m_iszFileName), m_szFileName, 0x80);
		engine->vfunc17(m_szFileName, 1);
	}
	sub_10015749();
}
// END FUNCTION

// FUNCTION: 0x100fee60 size=0x2e
#include "CEnvBeam.h"
// TARGET: vfunc113
extern float g_104454c4;

void CEnvBeam::vfunc113()
{
    CBaseEntity::vfunc113();
    if (m_flLife == g_104454c4 && !(m_flags204 & 8))
    {
        sub_10100b60();
    }
}
// END FUNCTION
