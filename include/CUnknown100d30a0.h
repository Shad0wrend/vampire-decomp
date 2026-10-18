// CUnknown100d30a0: an object held at +0xa8 of the player-like object returned by 0x101193b0; only slot 456
// of its vtable is called (by sub_100d30a0). The vtable head is generated with macros.
#pragma once

#define VSLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define VSLOTS100(p) VSLOTS10(p##0) VSLOTS10(p##1) VSLOTS10(p##2) VSLOTS10(p##3) VSLOTS10(p##4) \
	VSLOTS10(p##5) VSLOTS10(p##6) VSLOTS10(p##7) VSLOTS10(p##8) VSLOTS10(p##9)

class CUnknown100d30a0
{
public:
	VSLOTS100(q0) VSLOTS100(q1) VSLOTS100(q2) VSLOTS100(q3)	// slots 0..399
	VSLOTS10(r0) VSLOTS10(r1) VSLOTS10(r2) VSLOTS10(r3) VSLOTS10(r4)	// slots 400..449
	virtual void s450(); virtual void s451(); virtual void s452(); virtual void s453(); virtual void s454(); virtual void s455();
	virtual void slot456();
};

class CUnknown100d30a0Holder
{
public:
	char m_pad0000[0xa8];
	CUnknown100d30a0 *m_pObject;	// 0x00a8
};
