// CWeaponIArmor: armor item weapon (derived from CBaseCombatWeapon at +0x0). Only what the matched functions need.
#pragma once

#include "CBaseCombatWeapon.h"

#define CWIA_V(n) virtual void vfunc##n();
#define CWIA_V10(p) CWIA_V(p##0) CWIA_V(p##1) CWIA_V(p##2) CWIA_V(p##3) CWIA_V(p##4) CWIA_V(p##5) CWIA_V(p##6) CWIA_V(p##7) CWIA_V(p##8) CWIA_V(p##9)

// The object at +0xa8 of the weapon's owner; slot 169 takes a pointer to a vector.
struct CWeaponIArmorTarget
{
	CWIA_V10(0) CWIA_V10(1) CWIA_V10(2) CWIA_V10(3) CWIA_V10(4) CWIA_V10(5) CWIA_V10(6) CWIA_V10(7) CWIA_V10(8) CWIA_V10(9)
	CWIA_V10(10) CWIA_V10(11) CWIA_V10(12) CWIA_V10(13) CWIA_V10(14) CWIA_V10(15)
	CWIA_V(160) CWIA_V(161) CWIA_V(162) CWIA_V(163) CWIA_V(164) CWIA_V(165) CWIA_V(166) CWIA_V(167) CWIA_V(168)
	virtual void vfunc169(float *vec);
};

struct CWeaponIArmorOwner
{
	char m_pad0000[0xa8];
	CWeaponIArmorTarget *m_pTarget;	// 0xa8
};

class CWeaponIArmor : public CBaseCombatWeapon
{
public:
	CWeaponIArmor *vfunc5(int flags);	// slot 5 (plain overload of the base slot; VC6 has no covariant returns): sub_10013a57 (destructor body inherited from CBaseCombatWeapon), then sub_100aa7b0(this) when flags & 1; returns this
	virtual int vfunc81();	// slot 81 override: returns 0
	virtual bool vfunc315();	// slot 315: names the weapon's model (the name at +0x754, "" when null), then CBaseCombatWeapon::sub_10253b70 with the results of slots 342, 343 (the cost chain) and 0xb4, 344
	virtual bool vfunc325();	// slot 325 override: returns false
	virtual void vfunc339();	// kicks the owner's target with a random vector

	CWeaponIArmorOwner *sub_102521f0();
public:
    virtual CWeaponActivityRecord * vfunc362();
    virtual int vfunc363();
    virtual int vfunc328();
public:
	virtual void vfunc291();
	virtual void vfunc326();
	void vfunc319();	// as in CWeaponIWritten (transplant)
	void vfunc307(int arg);	// as in CWeaponIWritten (transplant)
	bool vfunc309();	// as in CWeaponIWritten (transplant)
	void vfunc321();	// as in CWeaponIWritten (transplant)
	virtual void *vfunc80();	// slot 80: the class's datamap
	virtual void *vfunc82();	// slot 82: the class's datamap
	int sub_103f4020();
};
