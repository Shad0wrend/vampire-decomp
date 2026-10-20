// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012f3d0 size=0xbd
#include "CInfoIntermission.h"
#include "CCollisionProperty.h"
#include "CBaseEntitySlots.h"
#include "ScopeTrace.h"

struct CGlobalVarsLocal { char pad[0xc]; float curtime; };
extern CGlobalVarsLocal *g_1070b228;
extern float g_1070d9d0[3];

// TARGET: CInfoIntermission::vfunc103
void CInfoIntermission::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*(unsigned int *)((char *)this + 0x19c) |= 0x40;
	((CBaseEntitySlots *)this)->slot64(g_1070d9d0);
	sub_100b3b00();
	*(float *)((char *)this + 0x17c) = g_1070b228->curtime + 2.0f;
}
// END FUNCTION

// FUNCTION: 0x1012f610 size=0x1e
#include "CInfoIntermission.h"

void sub_100aa7b0(void *p);

// TARGET: CInfoIntermission::vfunc5
CInfoIntermission *CInfoIntermission::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
