// CActivityCopyProp: declared by pcdecomp transplant for 0x1018e210 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CActivityCopyProp : public CBaseEntity
{
public:
	CActivityCopyProp *vfunc5(unsigned int flags);
	void sub_10004c3c();
	CActivityCopyProp *sub_1018e1c0();	// as in CKeepUpright (transplant)
	void vfunc103();	// slot 103 (plain member): the virtual slot 66 of this, then CBaseProp::vfunc103

	char m_pad03e0[0x730 - 0x3e0];
	unsigned int m_hTarget;	// 0x0730: handle of the entity this prop copies the activity of
	char m_pad0734;
	char m_bActive;	// 0x0735
	char m_pad0736[0x740 - 0x736];
	int m_nActivity;	// 0x0740
public:
    virtual void vfunc104();
    virtual datamap_t * vfunc82();
};
