// CVampireProjectile_MingXiaoSpit: declared by pcdecomp transplant for 0x103f1810 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CVampireProjectile_MingXiaoSpit : public CBaseEntity
{
public:
	CVampireProjectile_MingXiaoSpit *vfunc5(unsigned int flags);
	void sub_1000a21d();
	CVampireProjectile_MingXiaoSpit *sub_103f17d0();	// as in CKeepUpright (transplant)
	void vfunc134();	// slot 134 "CVampireProjectile_MingXiaoSpit::Think": once curtime reached the expiry time at +0x8c0 clears it (FLT_MAX), ends the slow effect (sub_103327f0(500.0f)) on the character behind the entity of the handle at +0x8bc (when it has one at +0x9c), drops the handle and removes itself; then runs the inlined CBaseEntity::Think (scope trace and the think function pointer at +0x118)

	char m_pad03e0[0x8bc - 0x3e0];
	unsigned int m_hTarget;	// +0x8bc: entity handle of the slowed target
	float m_flExpireTime;	// +0x8c0
};
