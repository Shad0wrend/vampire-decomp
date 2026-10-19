// CBasePlayer: the player entity.
// Barely recovered yet: only the members decompiled code needs are named, the
// rest is padding that keeps their offsets. The vtable slots are *not* modelled
// here, so the declaration order of the virtuals below carries no meaning --
// add the padding slots before using a virtual call through this class.
#pragma once

class CBaseEntity;

class CBasePlayer
{
public:
	virtual void vfunc407();
	virtual void vfunc408();

	char m_pad0004[0x2DC];	// 0x0004 .. 0x02DF
	int m_n02E0;
	char m_pad02E4[0x1712];	// 0x02E4 .. 0x19F5
	bool m_b19F6;
	char m_pad19F7[0x2E1];	// 0x19F7 .. 0x1CD7
	unsigned int m_nCriminalLevelEnc;	// 0x1CD8, scrambled by the xor/and/add mask chain
	char m_pad1CDC[0x3CC];	// 0x1CDC .. 0x20A7
	char m_b20A8;
	char m_pad20A9[0x1FF];	// 0x20A9 .. 0x22A7
	float m_f22A8;
	float m_f22AC;
	float m_f22B0;

	void sub_10177120();
	int sub_1017ddd0();	// the decoded value at +0x1cd8, or a convar override
	CBaseEntity *sub_1015dc60();	// slot 167 override: resolves the entity handle at +0x1c60 (null when stale)
	bool sub_10168e10();	// slot 361 override: true when the entity handle at +0xfe8 does not resolve
	CBasePlayer *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100017d5();	// as in CPhysForce (transplant)
	float *vfunc367(float *out);	// as in CBaseEntity (transplant)
};
