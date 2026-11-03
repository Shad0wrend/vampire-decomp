// CWeaponIGeneric: declared by pcdecomp transplant for 0x103f43d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members. The vtable is a list of placeholder slots
// (the same slot indices as CBaseCombatWeapon), the ones the code calls are typed.
#pragma once

#include "Vector.h"
#include "CWeaponIArmor.h"	// CWeaponIArmorOwner / CWeaponIArmorTarget: the owner and the object kicked by slot 339

#define WIG_V1(p) virtual void p();
#define WIG_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WIG_V100(p) WIG_V10(p##0) WIG_V10(p##1) WIG_V10(p##2) WIG_V10(p##3) WIG_V10(p##4) \
	WIG_V10(p##5) WIG_V10(p##6) WIG_V10(p##7) WIG_V10(p##8) WIG_V10(p##9)

class CWeaponIGeneric
{
public:
	// slots 0..104
	WIG_V100(wa) WIG_V1(wb0) WIG_V1(wb1) WIG_V1(wb2)
	virtual void vfunc103();	// "CWeaponIGeneric::Precache"-like: CBaseCombatWeapon::vfunc103, then, when the name at +0x11c is "item_g_warrens4_passkey", sub_1000ce23(this) (sub_100fbd50)
	WIG_V1(wb4)
	virtual void vfunc105(const char *pszName);
	// slots 106..271
	WIG_V100(wc) WIG_V10(wd0) WIG_V10(wd1) WIG_V10(wd2) WIG_V10(wd3) WIG_V10(wd4) WIG_V10(wd5)
	WIG_V1(we0) WIG_V1(we1) WIG_V1(we2) WIG_V1(we3) WIG_V1(we4) WIG_V1(we5)
	virtual char *vfunc272();
	virtual char *vfunc273();
	// slots 274..306
	WIG_V10(wf0) WIG_V10(wf1) WIG_V10(wf2) WIG_V1(wg0) WIG_V1(wg1) WIG_V1(wg2)
	virtual void vfunc307(int a);
	virtual void vfunc308();
	virtual bool vfunc309();
	WIG_V1(wh0) WIG_V1(wh1) WIG_V1(wh2) WIG_V1(wh3) WIG_V1(wh4)
	virtual bool vfunc315();	// slots 310..314 are placeholders
	WIG_V1(wi0) WIG_V1(wi1) WIG_V1(wi2) WIG_V1(wi3) WIG_V1(wi4)
	// slots 316..320
	virtual void vfunc321Slot();
	// slots 322..341
	WIG_V1(wj0) WIG_V1(wj1) WIG_V1(wj2) WIG_V1(wj3) WIG_V1(wj4) WIG_V1(wj5) WIG_V1(wj6) WIG_V1(wj7) WIG_V1(wj8) virtual const Vector &vfunc331(); WIG_V1(wj10) WIG_V1(wj11) WIG_V1(wj12) WIG_V1(wj13) WIG_V1(wj14) WIG_V1(wj15) WIG_V1(wj16)	// slots 322..338
	virtual void vfunc339();	// kicks the owner's target with a random vector
	WIG_V1(wj17) WIG_V1(wj18)	// slots 340, 341
	virtual int vfunc342(int a);
	virtual int vfunc343();
	virtual int vfunc344();

	CWeaponIGeneric *vfunc5(unsigned int flags);
	void vfunc326();	// slot 326: stamps the times at +0x730 / +0x910 with curtime + 1.5f
	char m_pad0000[0x72c];
	float m_f730;	// 0x730
	char m_pad0734[0x1dc];
	float m_f910;	// 0x910
	int vfunc328();	// slot 328: the constant 0xbc, after a strcmpi of the name at +0x11c (or the empty string) with "item_g_lockpick" (result ignored)
	void sub_10013a57();
	void sub_100138fe();
	void vfunc321();
	int sub_10252240();	// provisional, like CAI_BaseNPCTroika::sub_10252240
	char sub_10253b70(int a, int b, int c, int d);
	CWeaponIArmorOwner *sub_102521f0();	// the weapon's owner (stub 0x10014fab)
public:
	virtual void vfunc291();
public:
	virtual bool vfunc325();
public:
	virtual int vfunc329();
	virtual int vfunc360();
	void vfunc370(int *pEvent, CBaseCombatWeapon *pWeapon);	// slot 370: skips the events 0xbc6 / 0xc80, else CBaseCombatWeapon::vfunc370 (the "Unhandled animation event" warning)
};
