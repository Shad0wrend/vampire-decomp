// CWeaponThrown_Chang_Energy_Ball: declared by pcdecomp transplant for 0x103f13e0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CBaseEntity;

class CWeaponThrown_Chang_Energy_Ball
{
public:
	CWeaponThrown_Chang_Energy_Ball *vfunc5(unsigned int flags);
	void sub_10013a57();
	void sub_103efdd0(CBaseEntity *pEnt);
	void vfunc103();	// slot 103 "...::Restore-like": CBaseCombatWeapon::vfunc103 (stub 0x100047be), then the energy ball's timers and sound fields at +0x910 / +0x91c / +0x928 / +0x938 / +0x93c from the global at 0x1070b228
	void sub_100047be();	// CBaseCombatWeapon::vfunc103 (stub 0x100047be), called directly
	void vfunc104();	// "...::Precache": precaches the grenade particle systems, the tic sound and the relief models, then CBaseCombatWeapon::Precache
	void sub_103f00c0(int unused);	// first call only (byte at +0x91c): tells the physics object, then swaps the nearest solid entity's model for a damaged relief (picked at random) and calls sub_103f0590
	CBaseEntity *sub_103f0200();	// stub 0x10012409: finds the nearest solid entity that sub_103f01b0 accepts, within the radius of the global at 0x104e15f8 around this weapon's origin
	char sub_103f01b0(CBaseEntity *pEnt);	// stub 0x10014abf: whether the entity's name starts with "changcoffin"
	void sub_103f0510();	// spawns the "chang_projectile_emitter" particle entity, attaches it to this weapon and remembers its handle at +0x924 (-1 when none)
	void sub_103f0590();	// stub 0x1000eac5: with the entity behind the handle at +0x924, calls its slot 242 and SetNextThink(0.1f)
	char m_pad0000[0x914];
	EHANDLE m_h914;
	char m_pad0918[4];
	char m_b91c;	// 0x91c: done flag
	char m_pad091d[0x924 - 0x91d];
	EHANDLE m_h924;	// 0x924: the entity whose think is set
public:
	datamap_t * vfunc82();
	int vfunc142(int);
	int vfunc362();
	int vfunc363();
};
