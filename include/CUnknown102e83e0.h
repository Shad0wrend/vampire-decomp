// CUnknown102e83e0: an AI component of an NPC (outer NPC at +4); real name not yet known.
#pragma once

#include "CAI_BaseNPC.h"

class CUnknown102e83e0
{
public:
	virtual void vfunc0();
	CAI_BaseNPC *m_pOuter;	// 0x04
	char pad8[0x10 - 0x08];
	char m_b10;	// 0x10: the layered shoot activity is running
	int m_n14;	// 0x14
	float m_f18;	// 0x18
	int m_n1c;	// 0x1c
	int m_n20;	// 0x20
	int m_n24;	// 0x24
	int m_n28;	// 0x28
	float m_f2c;	// 0x2c

	bool sub_102e83e0();	// scope-less helper: ensures the NPC's byte at +0x5ca4 is set (slot 481(slot 167())), then true when the NPC has any of the conditions 0x4f, 0x58, 0x60, 0x55, 0x48, 0x40
	void sub_102e84a0(char flag);	// maps the NPC's value at +0x5d34 between pairs (9 <-> 0x11, 0x13 <-> 0x15) by flag, pushes the new value and raises the time at +0x18 to curtime + 0.3
	void sub_102e8560();	// 0x102e8560 (the CAI_MoveAndShootOverlay object at CAI_BaseNPC+0x5cf4): per-frame layered shoot activity; m_b10 (+0x10), m_n14 (+0x14), m_f18 (+0x18), m_n1c..m_n28 (+0x1c..+0x28); NPC slots 167/158/478/270/557/558/560/517, navigator +0x5d34, CAI_BaseNPCTroika +0x98 (m_pNPC98) +0x629c/+0x62a0; needs CAI_BaseNPC slot 270 declared bool vfunc270(int)
	void sub_102e8270(int a, int b);	// starts the draw sequence: needs an NPC that is not in state 4, with a weapon and sequences for the activities 0x11 and 0x15; then copies the weapon's two records (+0x3a4 / +0x3a8) and the arguments into this component, looks the first records up through the global at 0x1070b244 and sets the time at +0x18 to curtime + the delay at +0x2c; otherwise resets the time (sub_102e8250); both paths call slot 1 of the global at 0x10924ab4
};
