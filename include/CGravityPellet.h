// CGravityPellet: declared by pcdecomp transplant for 0x10148720 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CGravityPellet
{
public:
	char m_pad0000[0x730];
	void *m_pSpring;	// +0x730: the spring object destroyed with the pellet (IPhysicsEnvironment slot 23)
public:
	void sub_101486e0();	// destructor body (0x101486e0)
	CGravityPellet *vfunc5(unsigned int flags);
	void sub_10004e1c();
	void vfunc103();	// slot 103 (Spawn): slot 104, SetModel(model name or ""), SetSolid(SOLID_NONE) scope trace, SetMoveType(0, 0), colour 255/0/0 (+0x1a0..0x1a2), sets bit 5 of the flags at +0x19c, clears the byte at +0x734
public:
	int vfunc82();
	void vfunc104();
};
