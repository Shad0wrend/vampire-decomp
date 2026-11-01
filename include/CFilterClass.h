// CFilterClass (RTTI CFilterClass : CBaseFilter), vtable 0x1045bf74, size 0x488.
#pragma once

#include "CBaseFilter.h"

class CFilterClass : public CBaseFilter
{
public:
	CFilterClass() {}
	CFilterClass *vfunc5(unsigned int flags);
	typedef CBaseEntity *Arg241;	// staged: becomes CBaseEntity *
	bool vfunc241(Arg241 pEntity);
public:
	datamap_t *vfunc82();

	const char *m_iFilterClass;	// 0x484: the class name filtered for
};
