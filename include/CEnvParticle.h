// CEnvParticle: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

struct inputdata_t;
class CBaseEntity;

class CEnvParticle
{
public:
	char pad0[0x254];
	unsigned int m_hAttachEntity;	// 0x254
	char pad258[0x450 - 0x258];
	int m_iszParticleName;	// 0x450 (string_t)
	int m_iParticleIndex;	// 0x454
	char pad458[0x484 - 0x458];
	int m_unk484;

	void vfunc242();
	CEnvParticle *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10011ac7();	// as in CPhysForce (transplant)
	void sub_100fae90(inputdata_t *pInput);	// attachment-type input: integer 0..18 stored at +0x458 when the attach entity at +0x254 resolves, then sub_100faf60(entity)
	void sub_100faf60(void *pEntity);	// slot 0x3cc call with (entity, the type at +0x458, the name at +0x45c or "")
	void vfunc104();	// resolves the particle system index from the name
	CEnvParticle *sub_100fad50();	// constructor body (env_particle entity creation): CBaseEntity constructor, vtable, default particle state
	void sub_1009d980(char bAddAsDefault);	// CBaseEntity constructor body (stub 0x100090fc)
	char vfunc86(int a, int b, int c, int d, int e);	// slot 86 "CEnvParticle::...": true when the move type (slot 94) is 11 and the entity behind the handle at +0x254 answers its slot 86(0, b, c, d, e) with true, or when the attachment type at +0x458 is 10..13; else CBaseEntity::vfunc86
	char sub_100ab020(int a, int b, int c, int d, int e);	// CBaseEntity::vfunc86 (stub 0x1000e002), called directly
	void vfunc243(const CBaseEntity *pEnt, int nType, const char *pszName);	// slot 243 "CEnvParticle::AttachToEntity": parents the particle to pEnt, stores the attachment type (+0x458) and name (+0x45c), sets move type 11, aims at the entity of the handle at +0x254, calls slot 63(0, 0, 0) and stores the attachment index sub_100fafa0(pEnt, nType, pszName) at +0x460
};
