// CNullEntity: declared by pcdecomp transplant for 0x101c2030 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNullEntity : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	void vfunc103();
	char m_pad03e0[0x450 - 0x3e0];
};
