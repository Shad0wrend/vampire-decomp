// CEnvParticle: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CEnvParticle
{
public:
	char pad0[0x484];
	int m_unk484;

	void vfunc242();
	CEnvParticle *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10011ac7();	// as in CPhysForce (transplant)
};
