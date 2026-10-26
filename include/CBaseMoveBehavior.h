// CBaseMoveBehavior: path-key-frame mover (bases CPathKeyFrame/CLogicalEntity/CBaseEntity not fully modelled).
#pragma once

#include "CBaseEntity.h"

class CBaseMoveBehavior : public CBaseEntity
{
public:
	// Slot 153 of the real vtable; declared as the only virtual here so no slot numbering is implied.
	virtual bool vfunc153();

	char m_pad0004b[0x4a0 - sizeof(CBaseEntity)];
	CBaseMoveBehavior *m_p4a0;	// +0x4a0: another move behavior (the one whose +0x480 / +0x484 entries are read through sub_101402b0)
	int m_p4a4;	// +0x4a4
	char m_pad04a8[0x4b4 - 0x4a8];
	int m_unk4b4;
	int sub_101402b0(int nIndex);	// stub 0x101402b0: returns the entry at +0x480 for index 1, at +0x484 for index -1 (the second value taken from the object itself otherwise)
	CBaseMoveBehavior *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void vfunc103();	// slot 103: sets the mover fields, caches the origin / angles at +0x450 / +0x45c, then CPathKeyFrame::vfunc103
	void vfunc242();	// slot 242 (plain member): ends the move: remembers how far the clock (+0x3f4) is from the keyframe time (+0x498) in +0x4b0 (direction +0x4b4 = 1: time past +0x494, -1: time before +0x498 and +0x4a0 takes +0x4a4), clears the move fields (+0x3fc, +0x4b4, +0x494, +0x498, +0x4a4) and resets the velocity and angular velocity (sub_100b2e30 / sub_100b2f50 with the zero vectors)
	bool sub_10140710();	// called on the mover itself: true when the object at +0x4a0 answers 0 for index 1 and +0x4a4 is 0
};
