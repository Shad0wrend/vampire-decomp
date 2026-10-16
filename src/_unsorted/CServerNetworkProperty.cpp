// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ab470 size=0x8
struct CUnknown10146790 { char a; char b; char c; void sub_10146790(); };
// TARGET: CServerNetworkProperty::vfunc11
void CServerNetworkProperty::vfunc11() { ((CUnknown10146790*)m_unk10)->sub_10146790(); }
// END FUNCTION

// FUNCTION: 0x101ab690 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7)
	virtual void d0(); virtual void d1(); virtual void d2();
	virtual void target();
};

// TARGET: CServerNetworkProperty::vfunc2
void CServerNetworkProperty::vfunc2()
{
	((CSlots *)m_pOuter)->target();
}
// END FUNCTION
