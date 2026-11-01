// CFilterMass (RTTI CFilterMass : CBaseFilter), vtable 0x1045c404, size 0x488.
#pragma once

#include "CBaseFilter.h"

class CFilterMass : public CBaseFilter
{
public:
	CFilterMass() {}
	CFilterMass *vfunc5(unsigned int flags);
	typedef CBaseEntity *Arg241;	// staged: becomes CBaseEntity *
	bool vfunc241(Arg241 pEntity);	// passes when the physics object (+0x36c) of pEntity is heavier than m_flMass; warns when it has none

	float m_flMass;	// 0x484
public:
	datamap_t *vfunc82();
};
