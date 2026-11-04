// CTerrainMorph: declared by pcdecomp transplant for 0x100de7a0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"

struct datamap_t;

class CTerrainMorph : public CPointEntity
{
public:
	CTerrainMorph *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	char m_pad0450[0x48c - 0x450];
};
