// CPhysicsCannister: declared by pcdecomp transplant for 0x10150670 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "Vector.h"

class CVDmg_t;
struct CGameTrace;

struct CCannisterDamageInfo	// the damage info handed to slot 142
{
	CVDmg_t *m_pDmg;	// 0x00
	char m_pad04[0x0c];
	unsigned int m_flags10;	// 0x10 (of the record behind m_pDmg, read through it)
};

struct CCannisterTakeInfo
{
	CVDmg_t *m_pDmg;	// 0x00
	char m_pad04[0x28];
	int m_field2c;	// 0x2c
	float m_flDamage;	// 0x30
	char m_pad34[4];
	unsigned int m_nDamageType;	// 0x38
};

class CPhysicsCannister
{
public:
	CPhysicsCannister *vfunc5(unsigned int flags);
	void sub_10001ebf();
	void sub_10150640();	// destructor body: vptr = CPhysicsCannister::vftable (0x1046d524), destroys the COutputEvent at +0x19fc (sub_100cd2d0), then tail-calls the ~CBaseCombatCharacter body 0x103274d0
	bool vfunc99(const float *pRay, int b, int c);	// slot 99: world-space bounds of the collision property at +0x270 tested against the two vectors at pRay (sub_102404e0); when they hit returns the base slot 99 (sub_100956e0) of the same arguments, else the (false) test result
	bool sub_100956e0(const float *pRay, int b, int c);	// CBaseAnimating::vfunc99 (stub 0x1000dd0a), called directly
	void vfunc103();	// slot 103 (Spawn): slot 104, the model name (slot 9) through slot 105, blood color -1, the "CBaseEntity::AddSolidFlags" scope trace around SetSolidFlags(flags | 1), take-damage mode 2, think time 0, health 0x19 when not positive, stamps the creation time (+0x174), clears +0x6f0..0x6f8 and +0x19e4, AddFlag(0x20000000), then slot 223
	void vfunc104();	// slot 104: slot 9's name handed to sub_10191ac0, releases the sound named by the string at +0x19f8 (sound system slot 0), then CBaseCombatCharacter::vfunc104
	char vfunc223();	// slot 223: sub_1000e78c(6, 0, the flag bit 0 of +0x204, 0) on this, then the sub-object at +0x1b0 (CUnknown101466e0::sub_101466e0(1)); true
	int vfunc142(CCannisterTakeInfo *pInfo);	// slot 142 (OnTakeDamage): without a take-damage mode returns 0; for a live cannister subtracts the damage from the health (+0x210), explodes at zero, else may start the leak; for an already leaking one ends it on fire / explosion damage
	void vfunc141(CCannisterTakeInfo *pInfo, const Vector *pDir, CGameTrace *pTrace);	// slot 141 (DispatchTraceAttack-like): while not leaking and the trace has a hit group, sub_10150910(the info's field at +0x2c, the unit vector pointing back along the direction lowered by 5.0f); then CBaseEntity::vfunc141
	void sub_100a7de0(CCannisterTakeInfo *pInfo, const Vector *pDir, CGameTrace *pTrace);	// CBaseEntity::vfunc141 (stub 0x1000bf4b), called directly
	void sub_10150e80();	// removes the physics object at +0x19dc (sub-object slot 3 with the object at +0x36c, then slot 40 of the global at 0x10723940), clears the fields at +0x17c / +0x19e8 / +0x19e4, calls sub_101510c0() when +0x19e0 is set, then slot 7 of the global at 0x1070b248 with the edict's (+0x2e0) index (engine slot 35) for the string at +0x19f8
	void sub_101510c0();	// called through the stub at 0x1000abeb
	void sub_10150910(int a, void *b);	// stub 0x1000c08b
	Vector sub_10150530(const Vector *pDir);	// nozzle direction: attachment column 2 * -5.0f + pDir, normalized; stores attachment column 3 at +0x19b0
	void sub_10150f50();	// stub 0x1000201d: "CPhysicsCannister::Explode": no more damage taken, removes the physics object, breaks the model into gibs (velocity of the physics object) and creates the explosion named by the string at +0x1a14 (Warning "%s could not find explosion parameters" when there is none), then removes itself

	char m_pad0000[0x1fc];
	int m_nTakeDamage;	// 0x1fc
	char m_pad0200[4];
	char m_b204;	// 0x204: bit 0 is passed to the sub_1000e78c call of vfunc223
	char m_pad0205[0x0b];
	int m_iHealth;	// 0x210
	char m_pad0214[0x36c - 0x214];
	void *m_pPhysObj36c;	// 0x36c: the physics object
	char m_pad0370[0x19b0 - 0x370];
	Vector m_vec19b0;	// 0x19b0: the nozzle attachment's translation (column 3), set by sub_10150530
	char m_pad19bc[0x19d8 - 0x19bc];
	float m_thrust;	// 0x19d8: the launch thrust (drives the steam-jet params)
	void *m_pJetSound;	// 0x19dc: the jet sound object (global 0x10723940 slot 39)
	class CBaseEntity *m_pJet;	// 0x19e0
	char m_bLeaking;	// 0x19e4
	char m_pad19e5[0x19e8 - 0x19e5];
	float m_thrustTime;	// 0x19e8
	float m_damage;	// 0x19ec
	float m_damageRadius;	// 0x19f0
	float m_flLeakStart;	// 0x19f4
	const char *m_pszSound19f8;	// 0x19f8: sound name stopped by slot 104
	char m_pad19fc[0x1a14 - 0x19fc];
	const char *m_pszExplosion1a14;	// 0x1a14: name of the explosion parameters entity
public:
	bool vfunc72(int);
	datamap_t * vfunc82();
	bool vfunc158();
	int vfunc226();
};
