// CDisciplineWeapon: discipline weapon. Declared standalone with placeholder
// virtual slots so that the virtual below sits at its real slot (326).
#pragma once

#define CDW_PAD1(n) virtual void pad##n();
#define CDW_PAD10(n) CDW_PAD1(n##0) CDW_PAD1(n##1) CDW_PAD1(n##2) CDW_PAD1(n##3) CDW_PAD1(n##4) CDW_PAD1(n##5) CDW_PAD1(n##6) CDW_PAD1(n##7) CDW_PAD1(n##8) CDW_PAD1(n##9)
#define CDW_PAD100(n) CDW_PAD10(n##0) CDW_PAD10(n##1) CDW_PAD10(n##2) CDW_PAD10(n##3) CDW_PAD10(n##4) CDW_PAD10(n##5) CDW_PAD10(n##6) CDW_PAD10(n##7) CDW_PAD10(n##8) CDW_PAD10(n##9)

class CDisciplineWeapon
{
public:
	CDW_PAD100(a)
	CDW_PAD100(b)
	CDW_PAD100(c)
	CDW_PAD10(d0)
	CDW_PAD10(d1)
	CDW_PAD1(d20) CDW_PAD1(d21) CDW_PAD1(d22) CDW_PAD1(d23) CDW_PAD1(d24) CDW_PAD1(d25)
	virtual void vfunc326();
	virtual void vfunc327();
	CDisciplineWeapon *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
};
