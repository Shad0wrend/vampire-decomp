// CActivityCopyProp: declared by pcdecomp transplant for 0x1018e210 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

class CActivityCopyProp : public CBaseEntity
{
public:
	CActivityCopyProp *vfunc5(unsigned int flags);
	void sub_10004c3c();
	CActivityCopyProp *sub_1018e1c0();	// as in CKeepUpright (transplant)

	char m_pad03e0[0x730 - 0x3e0];
	unsigned int m_hTarget;	// 0x0730: handle of the entity this prop copies the activity of
};
