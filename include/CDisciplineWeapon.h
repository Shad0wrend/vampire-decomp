// CDisciplineWeapon: discipline weapon. Declared standalone with placeholder
// virtual slots so that the virtuals below sit at their real slots (316, 326).
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
	CDW_PAD1(d10) CDW_PAD1(d11) CDW_PAD1(d12) CDW_PAD1(d13) CDW_PAD1(d14) CDW_PAD1(d15)
	virtual char vfunc316(int a);
	CDW_PAD1(d17) CDW_PAD1(d18) CDW_PAD1(d19) CDW_PAD1(d20) CDW_PAD1(d21) CDW_PAD1(d22) CDW_PAD1(d23) CDW_PAD1(d24) CDW_PAD1(d25)
	virtual void vfunc326();
	virtual void vfunc327();
	CDisciplineWeapon *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
	int sub_10252240();	// the dword at +0x9c of the entity the owner handle at +0x88c resolves to (stub 0x100011f4)
	int sub_100ac4e0(int a, int b, const char *pszContext);	// CBaseEntity::sub_100ac4e0 (ThinkSet), called directly on the weapon

	char m_pad0004[0x17c - 4];
	float m_f17c;	// 0x17c: the next think time
	char m_pad0180[0x910 - 0x180];
	int m_nStatType;	// 0x910: the stat list type the discipline drains
};
