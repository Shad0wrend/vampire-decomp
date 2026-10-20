// CPayphone: declared by pcdecomp transplant for 0x101ab1b0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CPayphone
{
public:
	CPayphone *vfunc5(unsigned int flags);
	void sub_100123af();
	bool vfunc295(void *pOther);	// true when pOther is set and this NPC may start the phone interaction (a target at +0x128, no ignore state, not busy)
	char sub_10014da8();	// stub of 0x100b5190
	bool sub_1000b005();	// CAI_BaseNPCTroika::sub_102c1170 (stub)
};
