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

	char m_pad03e0[0x730 - 0x3e0];
	Vector m_vecBaseAngle;	// 0x730: the angles at Spawn
	Vector m_flAngle;	// 0x73c: the angle components (the one in use is selected by m_iAxis)
	int m_nTick748;	// 0x748: the engine tick of the last update
	int m_iAxis;	// 0x74c
	char m_pad750[0x750 - 0x750 + 4];
	EHANDLE m_hSource750;	// 0x750: the entity whose two time floats (+0x468, +0x480) drive the hand; none = time since spawn
	char m_pad754[0x75c - 0x754];
	int m_nMode75c;	// 0x75c: 1 = minutes, 2 = hours
	int m_nDivisor760;	// 0x760
	float m_flSpawnTime;	// 0x764
public:
    virtual datamap_t * vfunc82();
};
