// CPropLargeHullIgnore: declared by pcdecomp transplant for 0x101945c0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseProp.h"

class CPropLargeHullIgnore : public CBaseProp
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (0x101945c0)
	void sub_10004c3c();
	void vfunc103();	// slot 103: CBaseProp::vfunc103, then the 0x1b0 member's setter with 1, the entity flags set up for a large hull (no occlusion of sound, no solid mask change, flags 0x40000 and 8)
};
