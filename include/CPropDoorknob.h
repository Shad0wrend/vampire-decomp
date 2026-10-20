// CPropDoorknob: declared by pcdecomp transplant for 0x10225950 from CMomentaryRotButton (0x100cb4f0);
// only what matched code needs, as plain members.
#pragma once

class CPropDoorknob : public CBaseEntity
{
public:
	CPropDoorknob *vfunc5(unsigned int flags);
	CPropDoorknob *sub_102258a0();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// slot 103 "CPropDoorknob::Spawn": CBaseVampireSkillEntity::vfunc103, +0x19c = 0xa0, inlined SetSolid(0) with scope trace, then CBaseAnimating::sub_10093b10 and the state at +0x780 (1 with the object at +0x77c, else 3)
};
