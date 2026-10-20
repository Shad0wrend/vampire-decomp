// CPropClockHand: declared by pcdecomp transplant for 0x1012d9c0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

class CPropClockHand : public CBaseEntity
{
public:
	CPropClockHand *vfunc5(unsigned int flags);
	void sub_10004c3c();
	CPropClockHand *sub_1012d950();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// "Spawn": solid 0 (scope traced SetSolid), adds flag 0x40000, base prop spawn, remembers the angles (slot 219) at +0x730 and the spawn time at +0x764
	void sub_10011793();	// CBaseProp::vfunc103 (jump stub)
};
