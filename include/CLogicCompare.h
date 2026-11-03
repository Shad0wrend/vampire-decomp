// CLogicCompare: declared by pcdecomp transplant for 0x101360b0 from CTriggerElectricBugaloo (0x102312e0);
// only what matched code needs, as plain members.
#pragma once

#include "CLogicalEntity.h"

class CLogicCompareInteger : public CLogicalEntity
{
public:
	CLogicalEntity *vfunc5(unsigned int flags);	// slot 5: scalar deleting destructor (destroys the three outputs at +0x488 / +0x468 / +0x450, then the base)
	virtual datamap_t *vfunc82();	// slot 82: the class's datamap
};

class CLogicCompare
{
public:
	void *vfunc5(unsigned int flags);
public:
	int vfunc82();
};
