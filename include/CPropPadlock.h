// CPropPadlock: declared by pcdecomp transplant for 0x10225d20 from CMomentaryRotButton (0x100cb4f0);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CPropPadlock : public CBaseEntity
{
public:
	CPropPadlock *vfunc5(unsigned int flags);
	CPropPadlock *sub_10225c70();	// as in CKeepUpright (transplant)
	void vfunc103();	// "CPropPadlock::Spawn": the base spawn, +0x19c = 0xa0, removes flag 0x40000, solid 2 (SOLID_VPHYSICS), solid flags 8, then sub_100b3b00()
	void vfunc113();	// slot 113: the base worker at 0x10003e63, the attached door's name (+0x124) through CBaseVampireSkillEntity::sub_102256f0, then +0x1fc = 2 when +0x210 is set, else 1
	void vfunc266(int a);	// "CPropPadlock::vfunc266": tells the object behind the handle at +0x80c about this padlock, clears the parent, then CBreakableProp::vfunc266
	void sub_1018fb90(int a);	// CBreakableProp::vfunc266, called directly
	void sub_1020ab90();
	int sub_100056aa();	// CItemContainerLock::vfunc117 (stub 0x100056aa), called directly
	unsigned char sub_10225d00();	// CPropPadlock::vfunc117 body (CItemContainerLock::vfunc117 & 0xfd)	// CBaseVampireSkillEntity::vfunc103, called directly (stub 0x1000a623)
	void vfunc274();	// slot 274: tells the object behind the handle at +0x80c about this padlock, clears the parent, solid type 6, move type 7, +0x6f0 = 1, sub_10090950(), VPhysicsInitNormal(6, 0, 0, 0), the think function (stub 0x10011667) and the next think time curtime + a constant at +0x17c (declared as a plain member)
public:
    virtual int vfunc117();
	char m_pad03e0[0x824 - 0x3e0];
};
