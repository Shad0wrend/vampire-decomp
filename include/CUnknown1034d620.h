// CUnknown1034d620: NPC-like class (RTTI not identified yet) with an entity handle at +0x5ce4.
#pragma once

#include "CGlobalEntityList.h"

// 10 / 100 placeholder virtual slots
#define CU1034_T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CU1034_H(p) CU1034_T(p##0) CU1034_T(p##1) CU1034_T(p##2) CU1034_T(p##3) CU1034_T(p##4) \
	CU1034_T(p##5) CU1034_T(p##6) CU1034_T(p##7) CU1034_T(p##8) CU1034_T(p##9)

// The object behind the pointer at +0x94 of the handle's entity; only slot 366 is known.
class CUnknown1034d620_Target
{
public:
	CU1034_H(a) CU1034_H(b) CU1034_H(c)
	CU1034_T(d1) CU1034_T(d2) CU1034_T(d3) CU1034_T(d4) CU1034_T(d5) CU1034_T(d6)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5();
	virtual void vfunc366(int a, int b, int c);
};

class CUnknown1034d620_Ent
{
public:
	char pad0[0x94];
	CUnknown1034d620_Target *m_pTarget;	// 0x94
};

class CUnknown1034d620
{
public:
	char pad0[0x5ce4];
	unsigned int m_hEntity;	// 0x5ce4
	char pad5ce8[0x5f50 - 0x5ce8];
	int m_field5f50;	// 0x5f50

	void sub_10007fe5(int a, int b, int c);
	void sub_1034d620();	// scope-less: calls sub_10007fe5(0, 0, 0), sets +0x5f50 to 1, then calls slot 366 (global value, 0, 0) of the object at +0x94 of the entity behind the handle at +0x5ce4 (when it resolves)
};
