// CUnknown101151a0: an entity class (real name not yet known) of the tracked-entity list at 0x1070a870: a flag word
// at +0x204 (bit 0 = sub_101151a0), a linked entity pointer at +0x45c (sub_10115180). Only slots 217 and 241 are
// typed; the others keep the slot numbers.
#pragma once

#define E151_10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CUnknown101151a0
{
public:
	E151_10(a0) E151_10(a1) E151_10(a2) E151_10(a3) E151_10(a4) E151_10(a5) E151_10(a6) E151_10(a7) E151_10(a8) E151_10(a9)
	E151_10(b0) E151_10(b1) E151_10(b2) E151_10(b3) E151_10(b4) E151_10(b5) E151_10(b6) E151_10(b7) E151_10(b8) E151_10(b9)
	E151_10(c0)
	virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15(); virtual void c16();
	virtual int vfunc217();	// "GetAbsOrigin" (handed on to the engine's slot 101)
	E151_10(d1) E151_10(d2)
	virtual void d30(); virtual void d31(); virtual void d32();
	virtual bool vfunc241();

	unsigned int sub_101151a0();	// bit 0 of the flag word at +0x204
	CUnknown101151a0 *sub_10115180();	// the linked entity at +0x45c (stub 0x10011c20)
};
