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
	char m_pad0214[0x6f0 - 0x214];
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
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	void vfunc230(int, int);
	int vfunc362();
	int vfunc363();
};
