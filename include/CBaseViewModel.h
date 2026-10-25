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
	virtual void vfunc265(int value);	// slot 265: if slot 8 says yes, stores value at +0x6f0, bumps the count at +0x740 (and 7), clears +0x6f8, then CBaseAnimating::sub_10090950
	virtual void vfunc266(const char *pszName);	// slot 266: the name (or 0 when empty / null) is kept at +0x744; when it changes, slot 105 gets the name (or the default string g_106b8540)
};
