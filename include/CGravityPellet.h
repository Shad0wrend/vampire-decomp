// CGravityPellet: declared by pcdecomp transplant for 0x10148720 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CGravityPellet
{
public:
	CGravityPellet *vfunc5(unsigned int flags);
	void sub_10004e1c();
	void vfunc103();	// slot 103 (Spawn): slot 104, SetModel(model name or ""), SetSolid(SOLID_NONE) scope trace, SetMoveType(0, 0), colour 255/0/0 (+0x1a0..0x1a2), sets bit 5 of the flags at +0x19c, clears the byte at +0x734
};
