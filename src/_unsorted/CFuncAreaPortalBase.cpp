// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010c3d0 size=0x8
#include "CBaseEntity.h"
#include "CFuncAreaPortalBase.h"
// TARGET: CFuncAreaPortalBase::vfunc117
int CFuncAreaPortalBase::vfunc117() { return (int)(((CBaseEntity *)this)->CBaseEntity::vfunc117() & ~2); }
// END FUNCTION

// FUNCTION: 0x1010c900 size=0x1e
#include "CFuncAreaPortalBase.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncAreaPortalBase::vfunc5
CFuncAreaPortalBase *CFuncAreaPortalBase::vfunc5(unsigned int flags)
{
	sub_100156b8();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010ca20 size=0xac
#include "CFuncAreaPortalBase.h"


bool CFuncAreaPortalBase::vfunc241(const float *pViewOrigin)
{
	if (m_nPortalKey == -1)
		return false;
	float plane[4];
	if (!engine->vfunc113(pViewOrigin, m_nPortalKey, plane))
		return true;
	bool bOpen = false;
	if (plane[2] * pViewOrigin[2] + plane[1] * pViewOrigin[1] + plane[0] * pViewOrigin[0] - plane[3] + 80.0f > 0.0f)
		bOpen = true;
	engine->vfunc102(m_nPortalKey, bOpen);
	return bOpen;
}
// END FUNCTION
