// CBaseViewModel: declared by pcdecomp transplant for 0x1042b830 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBaseViewModel : public CBaseEntity
{
public:
	CBaseViewModel *vfunc5(unsigned int flags);
	void sub_10007126();
	CBaseEntity *vfunc267();	// as in CBasePlayer (transplant)
	CBaseViewModel *sub_1042b760();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// slot 103 (Spawn): slot 104, SetSize(-8,-4,-2 / 8,4,2), SetSolid(SOLID_NONE) scope trace, clears bit 18 of the flags at +0x268
};
