// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100dc3c0 size=0xa
#include "CCollisionProperty.h"
// TARGET: CCollisionProperty::vfunc14
int CCollisionProperty::vfunc14() { return m_pOuter->m_field368; }
// END FUNCTION

// FUNCTION: 0x100dc610 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CEntSlots
{
	H(a) H(b) T(c0) virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual void target();
};

// TARGET: CCollisionProperty::vfunc8
void CCollisionProperty::vfunc8()
{
	((CEntSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x100dc920 size=0x8
// TARGET: CCollisionProperty::vfunc6
int CCollisionProperty::vfunc6()
{
	return m_pOuter->vfunc8();
}
// END FUNCTION

// FUNCTION: 0x100dc960 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEntSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7) T(a8)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8();
	virtual void target();
};

// TARGET: CCollisionProperty::vfunc4
void CCollisionProperty::vfunc4()
{
	((CEntSlots *)m_pOuter)->target();
}
// END FUNCTION
