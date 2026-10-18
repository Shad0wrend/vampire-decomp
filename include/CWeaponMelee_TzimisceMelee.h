// CWeaponMelee / CWeaponMelee_TzimisceMelee: melee weapons (bases CBaseCombatWeapon... not modelled).
// The vtable slots are *not* modelled here; the virtual only gives the classes a vptr.
#pragma once

struct CWeaponMeleeEvent
{
	int m_type;
};

class CWeaponMelee
{
public:
	CWeaponMelee();
	virtual void vfunc0();
	virtual void vfunc367(int a, int b, int c);	// forwards to sub_103ea7e0 with the constant 0x4b
	char m_pad0004[0x8b8 - 4];

	void sub_103ea5b0(CWeaponMeleeEvent *pEvent, int b);	// slot 370
	void sub_103ea7e0(int kind, int a, int b, int c);
};

class CWeaponMelee_TzimisceMelee : public CWeaponMelee
{
public:
	CWeaponMelee_TzimisceMelee();
	virtual void vfunc0();

	int m_n08b8;
	int m_n08bc;
	float m_f08c0;
	float m_f08c4;
	char m_pad08c8[0x910 - 0x8c8];
	int m_n0910;
};
