// CFilterName: declared by pcdecomp transplant for 0x101085d0 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CBaseEntity;

class CFilterName
{
public:
	CFilterName *vfunc5(unsigned int flags);
	bool vfunc241(CBaseEntity *pEnt);	// "CFilterName::PassesFilterImpl": the entity's name matches the filter name at +0x484 (case-insensitive; a trailing '*' makes it a prefix match)
public:
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
