// CFilterMultiple (RTTI CFilterMultiple : CBaseFilter), size 0x4b0.
#pragma once

#include "CBaseFilter.h"

class CFilterMultiple : public CBaseFilter
{
public:
	CFilterMultiple() {}
	virtual CBaseEntity *vfunc5(unsigned int flags);

	void vfunc113();	// slot 113: resolves the five filter names (+0x488) to the handles of the entities of those names (+0x49c, -1 when none)
	bool sub_10107aa0(CBaseEntity *pEntity);	// slot 241 "CFilterMultiple::PassesFilterImpl": filter type 0 = all of the five filter handles must pass, else any one

	int m_nFilterType;	// 0x484
	const char *m_pszFilterName[5];	// 0x488: the names of the five filters
	unsigned int m_hFilter[5];	// 0x49c
public:
	datamap_t *vfunc82();
};
