// CVampireProjectile_MingXiaoSpit: declared by pcdecomp transplant for 0x103f1810 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CVampireProjectile.h"

class CVampireProjectile_MingXiaoSpit : public CVampireProjectile
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000a21d();
	~CVampireProjectile_MingXiaoSpit();	// 0x103f1840: ends the slow effect on the target's character and drops the handle
	CVampireProjectile_MingXiaoSpit *sub_103f17d0();	// as in CKeepUpright (transplant)
	void vfunc134();	// slot 134 "CVampireProjectile_MingXiaoSpit::Think": once curtime reached the expiry time at +0x8c0 clears it (FLT_MAX), ends the slow effect (sub_103327f0(500.0f)) on the character behind the entity of the handle at +0x8bc (when it has one at +0x9c), drops the handle and removes itself; then runs the inlined CBaseEntity::Think (scope trace and the think function pointer at +0x118)
	virtual void vfunc238(Vector *pVelocity, Vector *pOut, int a, int b);	// slot 238 (0x103f1b40): CVampireProjectile::vfunc238, a tail call
	virtual void vfunc266(CBaseEntity *pOther);	// slot 266: once per spit, slows the character of pOther (+0x9c) for a while (emitters at the player and its HUD) and plays the impact emitter; then CVampireProjectile::vfunc266

	char m_pad_to_8bc[0x8bc - sizeof(CVampireProjectile)];	// keeps m_hTarget at +0x8bc however much CVampireProjectile declares
	unsigned int m_hTarget;	// +0x8bc: entity handle of the slowed target
	float m_flExpireTime;	// +0x8c0
	unsigned char m_bImpactDone;	// +0x8c4
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc103();
public:
    virtual int vfunc81();
    virtual int vfunc80();
public:
	virtual char vfunc91(void *, int);	// slot 91: 0x103f1b20 in the game's CVampireProjectile_MingXiaoSpit vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual void vfunc104();	// slot 104: 0x103f18c0 in the game's CVampireProjectile_MingXiaoSpit vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual void vfunc113();	// slot 113: 0x103f1930 in the game's CVampireProjectile_MingXiaoSpit vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual bool vfunc265();	// slot 265: 0x103f1910 in the game's CVampireProjectile_MingXiaoSpit vtable (link audit, CVampireProjectile_MingXiaoSpit)
	virtual void vfunc272(const Vector *, const Vector *, CBaseEntity *, int, float, const char *, const char *);	// slot 272: 0x103f1c90 in the game's CVampireProjectile_MingXiaoSpit vtable (link audit, CVampireProjectile_MingXiaoSpit)
};
