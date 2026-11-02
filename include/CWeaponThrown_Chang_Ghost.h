// CWeaponThrown_Chang_Ghost: declared by pcdecomp transplant for 0x103f1410 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "Vector.h"

class CWeaponThrown_Chang_Ghost
{
public:
	CWeaponThrown_Chang_Ghost *vfunc5(unsigned int flags);
	void sub_10013a57();
	void vfunc104();	// slot 104 \"Precache\": the grenade emitters and the tick sound, then the weapon base
	void sub_1001576c();	// CBaseCombatWeapon::vfunc104 (stub 0x1001576c), tail called
	void vfunc103();	// slot 103 "CWeaponThrown_Chang_Ghost::Spawn": the weapon base spawn, SetMoveType(9, 0), inlined AddSolidFlags(4) and SetSolid(0) of the collision property at +0x270, the creation / expiry times, then the "chang_ghost_bone_tree_emitter" particle entity parented to the "Bip01 Spine" bone
	void sub_100047be();	// CBaseCombatWeapon::vfunc103 (stub 0x100047be), called directly
	void vfunc372(int a, const Vector *pDir);	// slot 372 (throw): solid / health set, sequence 0x22, the throw speed (global 0x104e1614) at +0x91c, the direction normalised and scaled by it when it was long enough, set as the velocity; touch and think functions installed, next think and the expiry time (+0x920) from curtime; the three random rolls (-30..30) are not used
	void sub_103f0d10();	// the fly think (0x103f0d10, a vtable slot not found in the first 300): +0x918 set -> sub_103f0a00 (the explosion effect); else once curtime passed +0x928 steers the entity (velocity at +0x3bc after sub_100b1d10 when bit 11 of +0x268) towards the target (handle +0x914 = m_n0914 as an int: use EHandle_Get(m_n0914) or LookupEntity), aim = target origin + 40.0f up, within 100.0f of it calls sub_103f1270(target); else adds VectorNormalize(dir) * clamp((curtime - +0x924) / 2.0f, 0, 1) * 2000.0f * dt; speed clamped to 500.0f / +0x91c; result through sub_10139970(vel, angles) -> slot 218 (SetAbsAngles) -> slot 64 (SetAngles) -> sub_100b2770(vel); next think curtime + 0.1f
	void sub_103f0a00();	// the explosion effect
	void sub_103f1270(void *pTarget);	// stub 0x10015442
	void sub_100b1d10();	// CBaseEntity::CalcAbsolutePosition-like (stub 0x1000d486)
	int sub_1008dc40(int a, int b);	// CBaseAnimating::SelectWeightedSequence (stub 0x100125c1), called directly
	void sub_10090950();	// CBaseAnimating member (stub 0x100117b1), called directly
	void sub_100b2770(const float *pVelocity);	// the absolute velocity setter (stub 0x1000489a), called directly
	int sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5), called directly

	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x1ec - 0x180];
	void *m_pfnTouch;	// 0x1ec
	char m_pad01f0[0x1fc - 0x1f0];
	int m_nTakeDamage;	// 0x1fc
	char m_pad0200[0x210 - 0x200];
	int m_iHealth;	// 0x210
	char m_pad0214[0x268 - 0x214];
	unsigned int m_flags268;	// 0x268: bit 11 = abs transform dirty (CBaseEntity::sub_100b1d10 refreshes it)
	char m_pad026c[0x36c - 0x26c];
	void *m_pPhysObj36c;	// 0x36c: the physics object
	char m_pad0370[0x3bc - 0x370];
	float m_vecVelocity3bc[3];	// 0x3bc: the entity's velocity (x, y, z), read after sub_100b1d10
	char m_pad03c8[0x6f0 - 0x3c8];
	int m_nSequence;	// 0x6f0
	char m_pad06f4[4];
	int m_n06f8;	// 0x6f8
	char m_pad06fc[0x8a8 - 0x6fc];
	int m_n08a8;	// 0x8a8
	char m_pad08ac[0x910 - 0x8ac];
	float m_f0910;	// 0x910
	int m_n0914;	// 0x914
	char m_b0918;	// 0x918
	char m_pad0919[3];
	float m_flThrowSpeed;	// 0x91c
	float m_flExpireTime;	// 0x920
	float m_f0924;	// 0x924
	float m_f0928;	// 0x928
	EHANDLE m_hEmitter92c;	// 0x92c: the bone tree emitter entity
public:
	datamap_t * vfunc82();
	void vfunc230(int, int);
	int vfunc362();
	int vfunc363();
};
