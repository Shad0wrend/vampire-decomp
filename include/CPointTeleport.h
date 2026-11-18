// CPointTeleport: declared by pcdecomp transplant for 0x1018ded0 from CLogicalEntity (0x1002b100);
// only what matched code needs.
#pragma once

#include "CBaseEntity.h"

class CPointTeleport : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_1018dc00(int);
	virtual void vfunc113();	// "CPointTeleport::Activate": saves origin / angles (+0x450 / +0x45c), warns on a parented or missing target
public:
    virtual datamap_t * vfunc82();
	char m_pad03e0[0x450 - 0x3e0];
	Vector m_vSaveOrigin;	// 0x0450
	Vector m_vSaveAngles;	// 0x045c
};
