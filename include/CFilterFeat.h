// CFilterFeat (RTTI CFilterFeat : CBaseFilter), vtable 0x1045cd24, size 0x48c.
#pragma once

#include "CBaseFilter.h"

class CFilterFeat : public CBaseFilter
{
public:
	CFilterFeat() {}
	CFilterFeat *vfunc5(unsigned int flags);
	bool vfunc241(CBaseEntity *pEntity);	// slot 241 "PassesFilter": false without an entity or its character object (+0x9c); else true when the character's cost for the feat named at +0x484 is at least the value at +0x488

	const char *m_pszFeat;	// 0x484
	int m_nMinCost;	// 0x488
public:
	datamap_t *vfunc82();
};
