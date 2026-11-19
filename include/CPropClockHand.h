// CPropClockHand: declared by pcdecomp transplant for 0x1012d9c0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "Vector.h"
#include "datamap.h"

class CPropClockHand : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void sub_1012dbd0();	// updates the hand's angle once per engine tick: the time (since spawn, or the two floats of the source entity at +0x750), scaled by the mode, makes the angle of the axis, wrapped to 0..360, and SetAbsAngles (slot 218)
	CPropClockHand *sub_1012d950();	// as in CKeepUpright (transplant)
	CPropClockHand();	// 0x1012d950: base constructor, then the plain fields
	virtual void vfunc103();	// "Spawn": solid 0 (scope traced SetSolid), adds flag 0x40000, base prop spawn, remembers the angles (slot 219) at +0x730 and the spawn time at +0x764
	virtual int vfunc124();	// slot 124 "CPropClockHand::DrawDebugTextOverlays": base lines, then (when bit 0 of the byte at +0x224 is set) "ang: %.2f" of the angle component selected by +0x74c as one overlay line
	virtual void vfunc113();	// slot 113: the base class work, then looks the entity named by the string at +0x754 up (FindEntityByName) and remembers its handle (+0x750) when it is a CHudTimer, else -1
	virtual char vfunc86(int a, int b, int c, int d, int e);	// slot 86: CBaseEntity's ShouldTransmit (sub_100ab020), then sub_1012dbd0() when it says yes; returns its answer
	void sub_10011793();	// CBaseProp::vfunc103 (jump stub)
	int sub_10096100();	// CBaseAnimating::vfunc124 (stub 0x10007d97), called directly

	char m_pad03e0[0x730 - 0x3e0];
	Vector m_vecBaseAngle;	// 0x730: the angles at Spawn
	Vector m_flAngle;	// 0x73c: the angle components (the one in use is selected by m_iAxis)
	int m_nTick748;	// 0x748: the engine tick of the last update
	int m_iAxis;	// 0x74c
	EHANDLE m_hSource750;	// 0x750: the entity whose two time floats (+0x468, +0x480) drive the hand; none = time since spawn
	int m_n754;	// 0x754
	char m_b758;	// 0x758
	char m_pad759[0x75c - 0x759];
	int m_nMode75c;	// 0x75c: 1 = minutes, 2 = hours
	int m_nDivisor760;	// 0x760
	float m_flSpawnTime;	// 0x764
public:
    virtual datamap_t * vfunc82();
};
