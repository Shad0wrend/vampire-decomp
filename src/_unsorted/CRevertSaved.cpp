// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10178fa0 size=0x6
#include "datamap.h"
#include "CRevertSaved.h"

extern datamap_t g_105836dc;

// TARGET: CRevertSaved::vfunc82
datamap_t *CRevertSaved::vfunc82()
{
	return &g_105836dc;
}
// END FUNCTION

// FUNCTION: 0x10179030 size=0x53
#include "CRevertSaved.h"

void sub_101ce210(void *pColor, float a, float b, int flags);
void sub_10001532();

void CRevertSaved::vfunc173(CBaseEntity *a, CBaseEntity *b, int c, int d)
{
	float fadeTime = m_fade.m_flFadeTime;
	float hold = m_fade.m_flFadeHold;
	sub_101ce210(m_pad01a0, fadeTime, hold, 2);
	float t = m_flReload;
	m_flNextThink = t + gpGlobals->curtime;
	sub_100ac4e0((int)sub_10001532, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x101844b0 size=0x1e
#include "CRevertSaved.h"

void sub_100aa7b0(void *p);

// TARGET: CRevertSaved::vfunc5
CBaseEntity *CRevertSaved::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
