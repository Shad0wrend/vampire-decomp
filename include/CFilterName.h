// CFilterName (RTTI CFilterName : CBaseFilter), vtable 0x1045bae4, size 0x488.
#pragma once

#include "CBaseFilter.h"

class CFilterName : public CBaseFilter
{
public:
	CFilterName() {}
	virtual CBaseEntity *vfunc5(unsigned int flags);
	bool vfunc241(CBaseEntity *pEnt);	// "CFilterName::PassesFilterImpl": the entity's name matches the filter name at +0x484 (case-insensitive; a trailing '*' makes it a prefix match)
public:
	datamap_t *vfunc82();

	const char *m_iFilterName;	// 0x484
};
