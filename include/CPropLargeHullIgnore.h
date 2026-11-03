// CPropLargeHullIgnore: declared by pcdecomp transplant for 0x101945c0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

class CPropLargeHullIgnore
{
public:
	CPropLargeHullIgnore *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void vfunc103();	// slot 103: CBaseProp::vfunc103, then the 0x1b0 member's setter with 1, the entity flags set up for a large hull (no occlusion of sound, no solid mask change, flags 0x40000 and 8)
	char m_pad0000[0x730 - 0x0];
};
