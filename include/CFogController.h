// CFogController: declared by pcdecomp transplant for 0x1034ef70 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CLogicalEntity.h"

struct datamap_t;

class CFogController : public CLogicalEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	int vfunc124();	// slot 124 body (0x1034ea80): debug text overlay printing the world's fog state (CWorld+0x47c), the two colors (+0x48c / +0x490) and start / end (+0x494 / +0x498)
};
