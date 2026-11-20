// CBaseDMStart: declared by pcdecomp transplant for 0x101c2060 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"

struct datamap_t;

class CBaseDMStart : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	bool vfunc147(CBaseEntity *p0);
	int m_field450;	// 0x450
};
