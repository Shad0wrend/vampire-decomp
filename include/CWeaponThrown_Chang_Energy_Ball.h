// CWeaponThrown_Chang_Energy_Ball: declared by pcdecomp transplant for 0x103f13e0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBaseEntity;

class CWeaponThrown_Chang_Energy_Ball
{
public:
	CWeaponThrown_Chang_Energy_Ball *vfunc5(unsigned int flags);
	void sub_10013a57();
	void vfunc104();	// "...::Precache": precaches the grenade particle systems, the tic sound and the relief models, then CBaseCombatWeapon::Precache
	void sub_103f00c0();	// first call only (byte at +0x91c): tells the physics object, then swaps the nearest solid entity's model for a damaged relief (picked at random) and calls sub_103f0590
	CBaseEntity *sub_103f0200();	// stub 0x10012409: finds the nearest solid entity that sub_103f01b0 accepts
	void sub_103f0590();	// stub 0x1000eac5: with the entity behind the handle at +0x924, calls its slot 242 and SetNextThink(0.1f)
	char m_pad0004[0x91c - 4];
	char m_b91c;	// 0x91c: done flag
};
