// CBaseKeyframedMover: keyframed mover base (CBaseToggle based); only what decompiled code needs.
#pragma once

#include "CBaseToggle.h"

struct CKeyframeX
{
	char m_pad0000[0x454];
	int m_n454;
	int m_n458;

	void sub_10223130(void *pActivator, void *pCaller);	// tells the keyframe that the mover reached it (stub 0x100057ae)
};

class CBaseKeyframedMover : public CBaseToggle
{
public:
	virtual void vfunc113();	// slot 113: CBaseEntity::vfunc113, then picks a keyframe by the direction at +0x560 and sets the move type (slot 93)
	void sub_10010c35();	// stub of 0x10223470
	CKeyframeX *sub_10015217();	// stub of 0x10223700
	CKeyframeX *sub_10223690();	// the keyframe the mover currently works with (stub 0x100079d7)
	void sub_1000b94c(int n);	// stub of 0x10223a30
	const char *sub_100ab4f0();	// the entity's name text for messages (stub 0x1000b5cd)
	void sub_10223940(int dir);	// "SetDirection": a change of the direction (+0x560) moves to the end keyframe's field (+0x454 for 1, +0x458 for -1) through sub_1000b94c; with no last keyframe warns "NULL last keyframe for %s", and for any other direction stops (sub_100b2e30 with the zero vector, +0x568 = -1)
	void sub_10223a80();	// the mover reached its keyframe: fires the output at +0x5a0 for the activator (handle +0x10c), tells the keyframe (sub_10223130), copies +0x568 to +0x56c and moves on to the next keyframe of the direction (+0x454 / +0x458) through sub_1000b94c, or else runs CUnknown10223b90::sub_10223b90

	char m_pad04a4[0x55c - sizeof(CBaseToggle)];
	const char *m_pszStartKeyframe;	// 0x55c: name of the starting keyframe
	int m_nDirection;	// 0x560
	union {
		int m_n564;
		char m_bStarted;	// 0x564
	};
	int m_n568;
	union {
		int m_n56c;
		unsigned int m_hKeyframe;	// 0x56c: handle of the starting keyframe
	};
};
