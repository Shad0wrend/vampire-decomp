// CNodeEnt (RTTI .?AVCNodeEnt@@): derived from CBaseEntity.
// Only the members the recovered code needs are declared.
#pragma once

#include "CBaseEntity.h"

class CNodeEnt : public CBaseEntity
{
public:
	// Slot 202, called directly so far; declared as a plain member.
	void vfunc202(int a);
	CNodeEnt *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
};
