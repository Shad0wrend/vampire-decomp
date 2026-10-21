// CPayphone: declared by pcdecomp transplant for 0x101ab1b0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CPayphone : public CBaseEntity
{
public:
	CPayphone *vfunc5(unsigned int flags);
	bool vfunc45(CBaseEntity *pOther, int a, int b, int c, int d, int e, int f, int g);	// slot 45: true when pOther is within the Manhattan distance of the position (slot 193) and the collision bounds (+0x270) of both are equal
	void sub_100123af();
	bool vfunc295(void *pOther);	// true when pOther is set and this NPC may start the phone interaction (a target at +0x128, no ignore state, not busy)
	char sub_10014da8();	// stub of 0x100b5190
	bool sub_1000b005();	// CAI_BaseNPCTroika::sub_102c1170 (stub)
	virtual void vfunc103();	// slot 103 "CPayphone::Spawn": CAI_BaseNPCTroika::vfunc103, next think curtime + constant, slot 93(0, 0), SetSolid(2) (inlined scope trace), health 80000, take-damage mode 0, AddFlag(0x10000), +0x6f0 / +0x6f8 cleared around sub_10090950(), AddSolidFlags(4) (inlined scope trace), RemoveFlag2(4), AddFlag2(0x10)
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	void sub_10090950();	// CBaseAnimating member (stub 0x100117b1), called directly
	void vfunc431();	// slot 431 "think" (plain member): slot 250(0), then follows the NPC behind the handle at +0xfe8 (copies its activity / sequence state) or idles
	void sub_102c1400();	// stub 0x100125bc
	void sub_10272650(int a);	// CAI_BaseNPC member (stub 0x100097d2): sets the ideal activity
	int sub_1008dc40(int a, int b);	// CBaseAnimating::SelectWeightedSequence (stub 0x100125c1), called directly
};
