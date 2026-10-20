// CEnvParticle: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

struct inputdata_t;

class CEnvParticle
{
public:
	char pad0[0x254];
	unsigned int m_hAttachEntity;	// 0x254
	char pad258[0x450 - 0x258];
	const char *m_iszParticleName;	// 0x450
	int m_iParticleIndex;	// 0x454
	char pad458[0x484 - 0x458];
	int m_unk484;

	void vfunc242();
	CEnvParticle *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10011ac7();	// as in CPhysForce (transplant)
	void sub_100fae90(inputdata_t *pInput);	// attachment-type input: integer 0..18 stored at +0x458 when the attach entity at +0x254 resolves, then sub_100faf60(entity)
	void sub_100faf60(void *pEntity);	// slot 0x3cc call with (entity, the type at +0x458, the name at +0x45c or "")
	void vfunc104();	// resolves the particle system index from the name
};
