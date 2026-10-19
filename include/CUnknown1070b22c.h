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
	U22C_SLOTS10(b0)
	virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14();
	virtual void b15(); virtual void b16(); virtual void b17(); virtual void b18();
	virtual double vfunc119(int flag);
};
