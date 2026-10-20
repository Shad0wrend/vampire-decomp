// class CWeaponRanged (RTTI .?AVCWeaponRanged@@).
// Its bases (CBaseCombatWeapon and below, all at offset +0x0) are not modelled yet, so
// every slot of the primary vtable up to the ones we need is declared here as a
// placeholder to keep the slot numbers right. CWeaponRangedBase stands for the whole
// base chain: its constructor (CBaseCombatWeapon's, 0x10250ac0) is called out of line.
#pragma once

#define CWR_V(n) virtual void vfunc##n();
#define CWR_V10(p) CWR_V(p##0) CWR_V(p##1) CWR_V(p##2) CWR_V(p##3) CWR_V(p##4) CWR_V(p##5) CWR_V(p##6) CWR_V(p##7) CWR_V(p##8) CWR_V(p##9)

class CWeaponRangedBase
{
public:
	CWeaponRangedBase();
	virtual void vfunc0();
};

class CWeaponRanged : public CWeaponRangedBase
{
public:
	CWeaponRanged();
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CWeaponRanged *vfunc5(unsigned int flags);
	CWR_V(6) CWR_V(7) CWR_V(8) CWR_V(9)
	CWR_V10(1) CWR_V10(2) CWR_V10(3) CWR_V10(4) CWR_V10(5) CWR_V10(6) CWR_V10(7) CWR_V10(8) CWR_V10(9)
	CWR_V10(10) CWR_V10(11) CWR_V10(12) CWR_V10(13) CWR_V10(14) CWR_V10(15) CWR_V10(16) CWR_V10(17) CWR_V10(18) CWR_V10(19)
	CWR_V10(20) CWR_V10(21) CWR_V10(22) CWR_V10(23) CWR_V10(24) CWR_V10(25) CWR_V10(26) CWR_V10(27) CWR_V10(28) CWR_V10(29)
	CWR_V10(30) CWR_V10(31) CWR_V10(32)
	void sub_10013a57();	// as in CPhysForce (transplant)
};
