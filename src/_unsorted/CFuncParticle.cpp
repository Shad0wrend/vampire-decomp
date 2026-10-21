// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fca60 size=0xb6
#include "CFuncParticle.h"
#include "CEnvParticle.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CFuncParticle::vfunc103
void CFuncParticle::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	((CEnvParticle *)this)->vfunc103();
	int local;
	const char *model = *pEnt->vfunc9(&local);
	pEnt->vfunc105(model ? model : g_106b8540);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	pEnt->vfunc93(0, 0);
	pEnt->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x100fd500 size=0x1e
#include "CFuncParticle.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncParticle::vfunc5
CFuncParticle *CFuncParticle::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
