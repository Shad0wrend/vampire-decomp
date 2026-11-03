// CWeaponLockpick: declared by pcdecomp transplant for 0x10409af0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members. The vtable is a list of placeholder slots
// (the same slot indices as CBaseCombatWeapon), the ones the code calls are typed.
#pragma once

#define WLP_V1(p) virtual void p();
#define WLP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WLP_V100(p) WLP_V10(p##0) WLP_V10(p##1) WLP_V10(p##2) WLP_V10(p##3) WLP_V10(p##4) \
	WLP_V10(p##5) WLP_V10(p##6) WLP_V10(p##7) WLP_V10(p##8) WLP_V10(p##9)

class CWeaponLockpick
{
public:
	// slots 0..291
	WLP_V100(wa) WLP_V100(wb) WLP_V10(wc0) WLP_V10(wc1) WLP_V10(wc2) WLP_V10(wc3) WLP_V10(wc4)
	WLP_V10(wc5) WLP_V10(wc6) WLP_V10(wc7) WLP_V10(wc8) WLP_V1(wd0) WLP_V1(wd1)
	virtual void vfunc292(int a);
	// slots 293..306
	WLP_V10(we) WLP_V1(wf0) WLP_V1(wf1) WLP_V1(wf2) WLP_V1(wf3)
	virtual void vfunc307(int a);
	WLP_V1(wg0) WLP_V1(wg1)
	virtual void vfunc310(float a);
	// slots 311..327
	WLP_V1(wh0) WLP_V1(wh1) WLP_V1(wh2)
	virtual char vfunc314();	// asked by vfunc319: when true nothing is equipped
	WLP_V1(wh5) WLP_V1(wh6) WLP_V1(wh7) WLP_V1(wh8)
	virtual void vfunc319();	// slot 319: CBaseCombatWeapon::vfunc319, then makes the owner's character equip its unarmed weapon (slot 456) unless slot 314 holds
	WLP_V1(wh9) WLP_V1(wi0) WLP_V1(wi1) WLP_V1(wi2) WLP_V1(wi3) WLP_V1(wi4) WLP_V1(wi5) WLP_V1(wi6)
	virtual int vfunc328();
	// slots 329..331
	WLP_V1(wj0) WLP_V1(wj1) WLP_V1(wj2)
	virtual float vfunc332();
	virtual void vfunc333(int a, int b, int c, int d, int e, int f);

	CWeaponLockpick *vfunc5(unsigned int flags);
	void sub_10013a57();
	void *sub_102521f0();	// the dword at +0x9c of the entity the owner handle at +0x88c resolves to (0 when stale)
	void sub_10253ea0();	// CBaseCombatWeapon::vfunc319 (stub 0x10009048), called directly

	char m_pad0004[0x72c];
	float m_f730;	// 0x730
	float m_f734;	// 0x734
public:
	virtual int vfunc81();
	virtual bool vfunc268();
public:
	virtual int vfunc80();
	virtual int vfunc362();
	virtual int vfunc363();
	char m_pad0738[0x914 - 0x738];
};
