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
