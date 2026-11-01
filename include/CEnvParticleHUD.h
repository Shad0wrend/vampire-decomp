// CEnvParticleHUD: declared by pcdecomp transplant for 0x100fd4d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CEnvParticleHUD
{
public:
	CEnvParticleHUD *vfunc5(unsigned int flags);
	void sub_10011ac7();
	void vfunc103();	// slot 103 (0x100fc500): slot 242, CEnvParticle::vfunc103, then the attach type (+0x458) must be 5, 7, 0xe or 0x10, else Warning "%s has an invalid attach type!" (debug name) and removal (sub_101cd940)
	void vfunc241();	// slot 241: when the entity of this's 0x1ac8b lookup (one) and its sub 0x13d09 (zero) answer, the sub 0x1e728 gets that answer; then CEnvParticle::vfunc241
};
