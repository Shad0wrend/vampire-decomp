// CEnvParticle: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

struct datamap_t;

struct inputdata_t;
class CBaseEntity;

class CEnvParticle
{
public:
	char pad0[0x4c];
	int m_nFlags4c;	// 0x4c
	char pad50[0x254 - 0x50];
	unsigned int m_hAttachEntity;	// 0x254
	char pad258[4];
	unsigned int m_h25c;	// 0x25c: a handle (the owner entity)
	char pad260[0x268 - 0x260];
	int m_nFlags268;	// 0x268
	char pad26c[0x450 - 0x26c];
	int m_iszParticleName;	// 0x450 (string_t)
	int m_iParticleIndex;	// 0x454
	int m_iAttachType;	// 0x458: attachment type (0..18)
	const char *m_pszAttachName;	// 0x45c: attachment name, "" when none
	int m_nAttachPoint;	// 0x0460
	float m_fRedScale;	// 0x0464
	float m_fGreenScale;	// 0x0468
	float m_fBlueScale;	// 0x046c
	float m_fMaskScale;	// 0x0470
	float m_fSizeScale;	// 0x0474
	float m_fSecondaryRed;	// 0x0478
	float m_fSecondaryGreen;	// 0x047c
	float m_fSecondaryBlue;	// 0x0480
	int m_unk484;
	float m_fl488;	// 0x488
	float m_fl48c;	// 0x48c
	int m_n490;	// 0x490
	char pad494[8];
	float m_fl49c;	// 0x49c
	char m_b4a0;	// 0x4a0
	char m_b4a1;	// 0x4a1 (sizeof 0x4a4)

	void vfunc78();	// slot 78: when CBaseEntity::sub_100b5190() holds calls slot 241, then CBaseEntity::vfunc78
	void vfunc77();	// slot 77: when CBaseEntity::sub_100b5190() does not hold calls slot 242, then CBaseEntity::vfunc77
	void vfunc242();
	CEnvParticle *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10011ac7();	// as in CPhysForce (transplant)
	void sub_100fae90(inputdata_t *pInput);	// attachment-type input: integer 0..18 stored at +0x458 when the attach entity at +0x254 resolves, then sub_100faf60(entity)
	void sub_100faf60(void *pEntity);	// slot 0x3cc call with (entity, the type at +0x458, the name at +0x45c or \"\")
	void vfunc103();	// CEnvParticle::vfunc103 (stub 0x100104f1 for 0x100fb3d0), called directly by CFuncParticle::vfunc103
	void vfunc104();	// resolves the particle system index from the name
	CEnvParticle *sub_100fad50();	// constructor body (env_particle entity creation): CBaseEntity constructor, vtable, default particle state
	void sub_1009d980(char bAddAsDefault);	// CBaseEntity constructor body (stub 0x100090fc)
	char vfunc86(int a, int b, int c, int d, int e);	// slot 86 "CEnvParticle::...": true when the move type (slot 94) is 11 and the entity behind the handle at +0x254 answers its slot 86(0, b, c, d, e) with true, or when the attachment type at +0x458 is 10..13; else CBaseEntity::vfunc86
	char sub_100ab020(int a, int b, int c, int d, int e);	// CBaseEntity::vfunc86 (stub 0x1000e002), called directly
	void vfunc243(CBaseEntity *pEnt, int nType, const char *pszName);	// slot 243 "CEnvParticle::AttachToEntity": parents the particle to pEnt, stores the attachment type (+0x458) and name (+0x45c), sets move type 11, aims at the entity of the handle at +0x254, calls slot 63(0, 0, 0) and stores the attachment index sub_100fafa0(pEnt, nType, pszName) at +0x460
	void sub_100fb1f0(CBaseEntity *pEnt, int nType, int nAttachment);	// like vfunc243 with the attachment index given: stores it at +0x460 and takes the attachment name (at +0x45c) from the studio header of the aim entity (handle at +0x37c), "" when there is none
	void sub_100fb980(float flValue);	// stub 0x10007103: sets the emitter's scale / alpha (the burning ghoul fades its fire with its distance)
public:
	int vfunc80();
	int vfunc81();
	datamap_t * vfunc82();
	void vfunc241();
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	int vfunc127(int);	// slot 127 (0x100fb600): a tail call of CBaseEntity::vfunc127 (no such slot in this view: plain)
	void vfunc129();	// slot 129 (0x100fbed0): a tail call of CBaseEntity::vfunc129 (no such slot in this view: plain)
};
