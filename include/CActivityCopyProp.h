// CActivityCopyProp: declared by pcdecomp transplant for 0x1018e210 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CActivityCopyProp : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_10004c3c();
	CActivityCopyProp *sub_1018e1c0();	// as in CKeepUpright (transplant)
	void vfunc103();	// slot 103 (plain member): the virtual slot 66 of this, then CBaseProp::vfunc103

	char m_pad03e0[0x730 - 0x3e0];
	unsigned int m_hTarget;	// 0x0730: handle of the entity this prop copies the activity of
	char m_b734;	// 0x0734
	char m_bActive;	// 0x0735
	char m_pad0736[2];	// 0x0736 .. 0x0737
	int m_n738;	// 0x0738: the current copy step (0 = none, 1..4 pick a row of the global table at 0x1058d1ac)
	int m_n73c;	// 0x073c: the last activity copied from the target (-1 = none)
	union { int m_nActivity; float m_f740; };	// 0x0740: the copy interval/duration (float) or activity id (int)
	float m_f744;	// 0x0744: the accumulated blend time
public:
	void sub_1018e330();	// 0x1018e330 "CActivityCopyProp::CopyActivity"-like think: copies the target entity's activity (+0xfec) into this prop's sequence, blends the color bytes +0x1a0..0x1a3 toward it and re-thinks in 0.1s
    virtual void vfunc104();
    virtual datamap_t * vfunc82();
};
