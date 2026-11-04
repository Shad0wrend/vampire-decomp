// CBatSwarm_Teleport: declared by pcdecomp transplant for 0x103b1b00 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once
#include "CBatSwarm.h"
#include "CBaseEntity.h"
#include "datamap.h"

class CBatSwarm_Teleport : public CBatSwarm
{
public:
	CBatSwarm_Teleport *vfunc5(unsigned int flags);
	void sub_10004c3c();
	CBatSwarm_Teleport *sub_103b1ad0();	// as in CKeepUpright (transplant)
public:
    virtual datamap_t * vfunc82();
};
