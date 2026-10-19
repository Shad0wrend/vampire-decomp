// CUnknown1070b22c: the global object at 0x1070b22c (pointer in the data segment); only its slot 119 is known.
// The slot takes a flag and returns a time value in ST0.
#pragma once

#define U22C_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CUnknown1070b22c
{
public:
	U22C_SLOTS10(a0) U22C_SLOTS10(a1) U22C_SLOTS10(a2) U22C_SLOTS10(a3) U22C_SLOTS10(a4)
	U22C_SLOTS10(a5) U22C_SLOTS10(a6) U22C_SLOTS10(a7) U22C_SLOTS10(a8) U22C_SLOTS10(a9)
	U22C_SLOTS10(b0) U22C_SLOTS10(b1)
	virtual void b20(); virtual void b21(); virtual void b22(); virtual void b23(); virtual void b24();
	virtual void b25(); virtual void b26(); virtual void b27(); virtual void b28(); virtual void b29();
	virtual void b30(); virtual void b31(); virtual void b32(); virtual void b33(); virtual void b34();
	virtual void b35(); virtual void b36(); virtual void b37(); virtual void b38();
	virtual double vfunc119(int flag);
};
