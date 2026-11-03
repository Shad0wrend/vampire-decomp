// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102623a0 size=0xb
#include "CAI_Component.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) T(e0) T(e1) T(e2) T(e3)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
	virtual void target();
};

// TARGET: CAI_Component::vfunc1
void CAI_Component::vfunc1()
{
	((CSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x1027c7c0 size=0x20
extern int g_1049a0f8;

struct Helper
{
	void* sub_1027c7c0(unsigned char flags);
};

// TARGET: Helper::sub_1027c7c0
void* Helper::sub_1027c7c0(unsigned char flags)
{
	*(void**)this = &g_1049a0f8;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
