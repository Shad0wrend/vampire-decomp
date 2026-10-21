// CPhysicsAnimlink: declared by pcdecomp transplant for 0x1014ef80 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBaseAnimating;

class CPhysicsAnimlink : public CBaseEntity
{
public:
	CPhysicsAnimlink *vfunc5(unsigned int flags);
	void sub_1000144c();
	CPhysicsAnimlink *sub_1014eef0();	// as in CKeepUpright (transplant)
	void sub_1014f210(CBaseAnimating *pAnimating, int nBone, void *pPhysObject, int a, int b);	// "CPhysicsAnimlink::Attach": the animating entity ignores collisions with the physics object's game entity, the link remembers the animating handle (+0x478), the bone (+0x47c), the physics object (+0x4c4), a shadow controller (+0x4c0, max speeds 1e8) and the 4x4 matrix (+0x480) made from (b, a); thinks right away
};
