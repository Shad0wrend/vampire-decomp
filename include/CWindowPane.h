// CWindowPane: declared by pcdecomp transplant for 0x10113590 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CWindowPane : public CBaseEntity
{
public:
	CWindowPane *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void vfunc104();	// as in CFireSmoke (transplant)
	virtual void vfunc103();	// slot 103 "CWindowPane::Spawn": slot 104, SetSolid(2) with a scope trace, SetMoveType(6, 0), take-damage mode 2, collision group 4, model "models/gibs/brokenglass_piece.mdl" (slot 105)
public:
    virtual datamap_t * vfunc82();
	char m_pad03e0[0x730 - 0x3e0];
};
