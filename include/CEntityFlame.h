// CEntityFlame: declared by pcdecomp transplant for 0x100f5490 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CEntityFlame : public CBaseEntity
{
public:
	CEntityFlame *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CEntityFlame *sub_100f5450();	// as in CKeepUpright (transplant)
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
	char m_pad03e0[0x450 - 0x3e0];
	float m_flSize;	// 0x0450
	char m_pad0454[0x458 - 0x454];
};
