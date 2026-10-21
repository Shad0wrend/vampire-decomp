// CBaseMoveBehavior: path-key-frame mover (bases CPathKeyFrame/CLogicalEntity/CBaseEntity not fully modelled).
#pragma once

#include "CBaseEntity.h"

class CBaseMoveBehavior : public CBaseEntity
{
public:
	// Slot 153 of the real vtable; declared as the only virtual here so no slot numbering is implied.
	virtual bool vfunc153();

	char m_pad0004b[0x4b4 - sizeof(CBaseEntity)];
	int m_unk4b4;
	CBaseMoveBehavior *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void vfunc103();	// slot 103: sets the mover fields, caches the origin / angles at +0x450 / +0x45c, then CPathKeyFrame::vfunc103
	void vfunc242();	// slot 242 (plain member): ends the move: remembers how far the clock (+0x3f4) is from the keyframe time (+0x498) in +0x4b0 (direction +0x4b4 = 1: time past +0x494, -1: time before +0x498 and +0x4a0 takes +0x4a4), clears the move fields (+0x3fc, +0x4b4, +0x494, +0x498, +0x4a4) and resets the velocity and angular velocity (sub_100b2e30 / sub_100b2f50 with the zero vectors)
};
