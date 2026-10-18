// CWeaponThrown_Grenade_Frag: thrown frag grenade weapon.
// Declared standalone for now: the vtable slots are *not* modelled here, so the
// position of the virtual below is not its real slot (266). Give the class its
// real base before making a virtual call through it.
#pragma once

class CWeaponThrown_Grenade_Frag
{
public:
	virtual void vfunc266();
	char pad_04[0x918 - 4];
	bool m_bFlag918;
	CWeaponThrown_Grenade_Frag *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
};
