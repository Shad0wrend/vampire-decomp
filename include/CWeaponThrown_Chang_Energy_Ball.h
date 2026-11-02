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
	void sub_103efa30();	// the fly think (no virtual slot found in the first 300): done flag set -> sub_103ef780 (explosion); else once curtime has passed m_flLastThink938 steers the physics object (+0x36c, slot 40 GetVelocity(&vel, &angvel) / slot 39 SetVelocity(&vel, &angvel)) towards the target entity (handle +0x918, aim point = its origin + 40.0f up, VectorNormalize * 5000 * dt added for 0.65s after m_flStart93c), speed clamped to 1400.0f / m_flMaxSpeed920, next think curtime + 0.1f
	void sub_103ef780();	// the explosion (grenade_frag_emitter effect), called by sub_103efa30 when m_b91c is set

	char m_pad0000[0x914];
	EHANDLE m_h914;
	EHANDLE m_h918;	// 0x918: the target entity of the fly think (LookupEntity(&m_h918))
	char m_b91c;	// 0x91c: done flag
	char m_pad091d[0x920 - 0x91d];
	float m_flMaxSpeed920;	// 0x920: speed limit used when the velocity is between 1e-6 and 1400.0f
	EHANDLE m_h924;	// 0x924: the entity whose think is set
	char m_b928;	// 0x928: when set, the think loads the velocity override m_vecVel92c into its local velocity and clears this byte
	char m_pad0929[0x92c - 0x929];
	float m_vecVel92c[3];	// 0x92c: velocity override (x +0x92c, y +0x930, z +0x934)
	float m_flStart938;	// 0x938: curtime of the throw (set by vfunc103; steering only for 0.65s after)
	float m_flLastThink93c;	// 0x93c: curtime at the last steering step (frame time = curtime - this; the think does nothing when it is not positive)
public:
	datamap_t * vfunc82();
	int vfunc142(int);
	int vfunc362();
	int vfunc363();
};
