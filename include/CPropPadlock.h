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
	void vfunc103();	// "CPropPadlock::Spawn": the base spawn, +0x19c = 0xa0, removes flag 0x40000, solid 2 (SOLID_VPHYSICS), solid flags 8, then sub_100b3b00()
	void sub_1020ab90();	// CBaseVampireSkillEntity::vfunc103, called directly (stub 0x1000a623)
};
