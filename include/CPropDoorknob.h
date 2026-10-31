// CPropDoorknob: declared by pcdecomp transplant for 0x10225950 from CMomentaryRotButton (0x100cb4f0);
// only what matched code needs, as plain members.
#pragma once

class CPropDoorknob : public CBaseEntity
{
public:
	CPropDoorknob *vfunc5(unsigned int flags);
	void vfunc273();	// slot 273 (declared as a plain member): plays the handle_locked / handle_unlocked sequence by sub_10224100, restarting the animation when the sequence (+0x6f0) changes, clearing it when there is none
	char sub_10224100();
	int sub_100056aa();	// CItemContainerLock::vfunc117 (stub 0x100056aa), called directly
	unsigned char sub_10225930();	// CPropDoorknob::vfunc117 body (CItemContainerLock::vfunc117 & 0xfd)	// stub 0x10001d2f: whether the doorknob is locked
	CPropDoorknob();	// 0x102258a0 (stub 0x1000e91c): the constructor
	CPropDoorknob *sub_102258a0();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// slot 103 "CPropDoorknob::Spawn": CBaseVampireSkillEntity::vfunc103, +0x19c = 0xa0, inlined SetSolid(0) with scope trace, then CBaseAnimating::sub_10093b10 and the state at +0x780 (1 with the object at +0x77c, else 3)
public:
    virtual int vfunc117();
    virtual void vfunc134();	// slot 134 (the first slot past CBaseEntity's declared ones): makes sure the model is set up (slot 250(0) while the byte at +0x65c is clear), then thinks again in 0.1 seconds
};
