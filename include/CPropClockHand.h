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
	virtual int vfunc124();	// slot 124 "CPropClockHand::DrawDebugTextOverlays": base lines, then (when bit 0 of the byte at +0x224 is set) "ang: %.2f" of the angle component selected by +0x74c as one overlay line
	void sub_10011793();	// CBaseProp::vfunc103 (jump stub)
	int sub_10096100();	// CBaseAnimating::vfunc124 (stub 0x10007d97), called directly

	char m_pad03e0[0x73c - 0x3e0];
	float m_flAngle[4];	// 0x73c: the angle components (the one in use is selected by m_iAxis)
	int m_iAxis;	// 0x74c
};
