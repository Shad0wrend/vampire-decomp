// CMomentaryRotButton: momentary rotating button entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "COutputEvent.h"

class CMomentaryRotButton
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CMomentaryRotButton *vfunc5(unsigned int flags);	// scalar deleting destructor

	void vfunc173(int a, int b, int c, int d);	// slot 173 "Use" (plain member, the four stack arguments are not read): the first use flips the sign of the rotation direction at +0x5d8 and fires the output at +0x574 with the entity of the handle at +0x53c; then marks the button as used (+0x5d4), starts the movement from the angles (slot 221) and sets the think function
	float sub_100ca630(float *pAngles);	// stub 0x10005b3c: the angle the button is turned to for the given angles, as a 0..1 fraction (the axis delta of the angles to the start angles at +0x5e0, signed by the movement direction at +0x190, over the range at +0x4fc)
	void sub_100cacb0(float flAngle, bool bFlag);	// stub 0x1000be60: starts the movement to the angle

	char m_pad0004[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x190 - 0x180];
	float m_vecMoveDir[3];	// 0x190: the movement direction (set by SetMovedir)
	char m_pad019c[0x204 - 0x19c];
	unsigned int m_nSpawnFlags204;	// 0x204: bits 6 / 7 pick the rotation axis
	char m_pad0208[0x4fc - 0x208];
	float m_flRange4fc;	// 0x4fc
	char m_pad0500[0x53c - 0x500];
	unsigned int m_hEntity53c;	// 0x53c: entity handle (the output's activator)
	char m_pad0540[0x574 - 0x540];
	COutputEvent m_Output574;	// 0x574
	char m_pad058c[0x5d4 - 0x58c];
	int m_nUsed5d4;	// 0x5d4
	int m_nDirection5d8;	// 0x5d8
};
