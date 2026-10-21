// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fec10 size=0x1e
#include "CEnvBeam.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvBeam::vfunc5
CEnvBeam *CEnvBeam::vfunc5(unsigned int flags)
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

struct CGlobalVarsEB
{
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsEB *g_1070b228;
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
		m_flNextThink = g_1070b228->curtime;
		m_flStartTime = g_1070b228->curtime;
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
			m_flNextThink = g_1070b228->curtime + 1.0;
		}
	}
	if (!m_bFlag5a8) {
		Vector *pOrigin = (Vector *)((CEntityVSlots *)this)->slot217();
		*(Vector *)m_vecSavedPos = *pOrigin;
	}
}
// END FUNCTION
