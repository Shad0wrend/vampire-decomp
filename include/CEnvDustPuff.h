// CEnvDustPuff: declared by pcdecomp transplant for 0x10114680 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"

struct datamap_t;

class CEnvDustPuff : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	float m_flScale;	// 0x0450
	unsigned int m_rgbaColor;	// 0x0454
};
