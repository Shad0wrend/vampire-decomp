// CBreakableProp: declared by pcdecomp transplant for 0x1018f230 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CBreakableProp
{
public:
	CBreakableProp *vfunc5(unsigned int flags);
	void vfunc103();	// "CBreakableProp::Spawn"-like: base spawn, slot 265, take-damage mode from the health, default 0.1 at +0xdc, AddFlag(0x20000000)
	void sub_10011793();	// CBaseProp::vfunc103 (jump stub)
};
