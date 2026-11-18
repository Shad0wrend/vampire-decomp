// CLogicCompare: declared by pcdecomp transplant for 0x101360b0 from CTriggerElectricBugaloo (0x102312e0);
// only what matched code needs, as plain members.
#pragma once

#include "CLogicalEntity.h"

class CLogicCompareInteger : public CLogicalEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);	// slot 5: scalar deleting destructor (destroys the three outputs at +0x488 / +0x468 / +0x450, then the base)
	virtual datamap_t *vfunc82();	// slot 82: the class's datamap
	char m_pad0450[0x480 - 0x450];
	int m_iIntegerValue;	// 0x0480
	int m_iShouldCompareToValue;	// 0x0484
	char m_pad0488[0x490 - 0x488];
};

class CLogicCompare : public CLogicalEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
public:
	datamap_t *vfunc82();
	float m_flInValue;	// 0x0450
	float m_flCompareValue;	// 0x0454
	char m_pad0458[0x4b8 - 0x458];
};
