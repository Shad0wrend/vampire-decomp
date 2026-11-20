// CBaseMoveBehavior (RTTI CBaseMoveBehavior : CPathKeyFrame, vtable 0x1046b49c, 243 slots): path-key-frame mover.
#pragma once

#include "CPathKeyFrame.h"

class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	CBaseMoveBehavior() {}
	/* vfunc135: declared by the slot */	// slot 135 (CLogicalEntity's signature): the game's entry is the body below (stub 0x1000b997)
	float vfunc135(float flFrameTime);	// 0x10140c00, slot 135's body: the keyframe mover step; returns flFrameTime
	int vfunc153();	// slot 153 (CBaseEntity's int form): true while a move runs (+0x4b4)
	virtual int vfunc117();	// slot 117: the logical entity's ObjectCaps with bit 9 cleared

	int m_iPositionInterpolator;	// 0x048c
	int m_iRotationInterpolator;	// 0x0490
	float m_fl494;	// +0x494: keyframe time
	float m_flAnimEndTime;	// 0x0498
	float m_flAverageSpeedAcrossFrame;	// 0x049c
	CBaseMoveBehavior *m_p4a0;	// +0x4a0: another move behavior (the one whose +0x480 / +0x484 entries are read through sub_101402b0)
	int m_p4a4;	// +0x4a4
	class CBaseEntity *m_pPreKeyFrame;	// 0x04a8
	class CBaseEntity *m_pPostKeyFrame;	// 0x04ac
	float m_flTimeIntoFrame;	// 0x04b0
	int m_unk4b4;
	int sub_101402b0(int nIndex);	// stub 0x101402b0: returns m_pNext for index 1, m_pPrev for index -1, else this
	int sub_101402f0(int nIndex);	// the same lookup with the two entries swapped: m_pPrev for index 1, m_pNext for index -1, else this
	virtual bool vfunc241(int nDir);	// slot 241, its own
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	virtual void vfunc133();	// slot 133 override: for a \"move_keyframed\" entity slot 241(+0x4b4) and, when that fails, slot 241(-(+0x4b4)); then jumps to the member function pointer at +0x114
	void vfunc103();	// slot 103: sets the mover fields, caches the origin / angles at +0x450 / +0x45c, then CPathKeyFrame::vfunc103
	void vfunc113();	// slot 113 (plain member): CPathKeyFrame::vfunc113, the clock (+0x3f4) plus 0.5 into +0x3fc, and slot 241(1) for a "move_keyframed" entity
	virtual void vfunc242();	// slot 242, its own: ends the move: remembers how far the clock (+0x3f4) is from the keyframe time (+0x498) in +0x4b0 (direction +0x4b4 = 1: time past +0x494, -1: time before +0x498 and +0x4a0 takes +0x4a4), clears the move fields (+0x3fc, +0x4b4, +0x494, +0x498, +0x4a4) and resets the velocity and angular velocity (sub_100b2e30 / sub_100b2f50 with the zero vectors)
	bool sub_10140690();	// true without the mover at +0x4a0, or when the keyframe time (+0x494) is set and not before the clock, that mover answers 0 for index 1 and +0x4a4 is 0
	bool sub_10140710();	// called on the mover itself: true when the object at +0x4a0 answers 0 for index 1 and +0x4a4 is 0
public:
    virtual datamap_t * vfunc82();
};
