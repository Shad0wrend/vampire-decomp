// CFilterInventory (RTTI CFilterInventory : CBaseFilter), size 0x494.
#pragma once

#include "CBaseFilter.h"

class CFilterInventory : public CBaseFilter
{
public:
	CFilterInventory() : m_hLastEnt(0xffffffff) {}
	CFilterInventory *vfunc5(unsigned int flags);
	bool vfunc241(CBaseEntity *pEnt);	// "CFilterInventory::PassesFilterImpl" (slot 241): caches per entity and frame whether the entity's inventory (object at +0x9c) holds an item whose classname is the filter's item name (+0x484)

	const char *m_pszItemName;	// 0x0484
	bool m_bPasses;	// 0x0488
	unsigned int m_hLastEnt;	// 0x048c: handle of the last entity tested
	int m_nLastFrame;	// 0x0490: slot 120 of the global at 0x1070b22c when m_hLastEnt was cached
public:
	datamap_t *vfunc82();
};
