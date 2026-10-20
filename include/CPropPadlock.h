// CPropPadlock: declared by pcdecomp transplant for 0x10225d20 from CMomentaryRotButton (0x100cb4f0);
// only what matched code needs, as plain members.
#pragma once

class CPropPadlock : public CBaseEntity
{
public:
	CPropPadlock *vfunc5(unsigned int flags);
	CPropPadlock *sub_10225c70();	// as in CKeepUpright (transplant)
	void vfunc266(int a);	// "CPropPadlock::vfunc266": tells the object behind the handle at +0x80c about this padlock, clears the parent, then CBreakableProp::vfunc266
	void sub_1018fb90(int a);	// CBreakableProp::vfunc266, called directly
};
