// CWeaponIGeneric: declared by pcdecomp transplant for 0x103f43d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#define WIG_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WIG_V100(p) WIG_V10(p##0) WIG_V10(p##1) WIG_V10(p##2) WIG_V10(p##3) WIG_V10(p##4) \
	WIG_V10(p##5) WIG_V10(p##6) WIG_V10(p##7) WIG_V10(p##8) WIG_V10(p##9)

class CWeaponIGeneric
{
public:
	// vtable slots 0..306 are placeholders
	WIG_V100(wa) WIG_V100(wb) WIG_V100(wc)
	virtual void wd0(); virtual void wd1(); virtual void wd2(); virtual void wd3();
	virtual void wd4(); virtual void wd5(); virtual void wd6();
	virtual void vfunc307(int a);
	virtual void vfunc308();
	virtual bool vfunc309();

	CWeaponIGeneric *vfunc5(unsigned int flags);
	void sub_10013a57();
	void sub_100138fe();
	void vfunc321();
};
