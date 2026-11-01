// CTerrainMorph: declared by pcdecomp transplant for 0x100de7a0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CTerrainMorph
{
public:
	CTerrainMorph *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
