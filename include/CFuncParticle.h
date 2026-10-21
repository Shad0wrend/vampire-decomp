// CFuncParticle: declared by pcdecomp transplant for 0x100fd500 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CFuncParticle
{
public:
	CFuncParticle *vfunc5(unsigned int flags);
	void sub_10011ac7();
	void vfunc103();	// slot 103 "CFuncParticle::Spawn": CEnvParticle::vfunc103, sets the model from slot 9's name (slot 105), SetSolid(0) (inlined scope trace), move type (0, 0), then sub_100b3b00
};
