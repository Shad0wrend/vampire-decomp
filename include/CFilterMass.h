// CFilterMass: declared by pcdecomp transplant for 0x10108670 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CFilterMass
{
public:
	CFilterMass *vfunc5(unsigned int flags);
	bool vfunc241(void *pEntity);	// passes when the physics object (+0x36c) of pEntity is heavier than m_flMass; warns when it has none

	char m_pad0000[0x484];
	float m_flMass;	// 0x484
public:
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
