// CBaseKeyframedMover: keyframed mover base (CBaseToggle based); only what decompiled code needs.
#pragma once

#include "CBaseToggle.h"

struct CKeyframeX
{
	char m_pad0000[0x454];
	int m_n454;
	int m_n458;
};

class CBaseKeyframedMover : public CBaseToggle
{
public:
	virtual void vfunc113();	// slot 113: CBaseEntity::vfunc113, then picks a keyframe by the direction at +0x560 and sets the move type (slot 93)
	void sub_10010c35();	// stub of 0x10223470
	CKeyframeX *sub_10015217();	// stub of 0x10223700
	void sub_1000b94c(int n);	// stub of 0x10223a30

	char m_pad04a4[0x560 - sizeof(CBaseToggle)];
	int m_nDirection;	// 0x560
	int m_n564;
	int m_n568;
};
