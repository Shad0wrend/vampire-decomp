// CUnknown1070b22c: the global object at 0x1070b22c (pointer in the data segment); only slots 17, 35, 38, 82, 84, 85, 105 and 119 to 122 are known.
// Slot 119 takes a flag and returns a time value in ST0; slot 120 returns a dword in EAX.
// Slots 84 / 85 are the engine's command argument accessors (Cmd_Argv(index) / Cmd_Argc()).
// Slot 82 registers a user message by name and size and returns its id.
// Slot 35 is IndexOfEdict(edict), slot 38 is PEntityOfEntIndex(index).
#pragma once

#define U22C_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnknown1070b22c_Edict;

class CUnknown1070b22c
{
public:
	U22C_SLOTS10(a0)
	virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
	virtual void a15(); virtual void a16();
	virtual char vfunc17(int a, int b);
	virtual void a18(); virtual void a19();
	U22C_SLOTS10(a2)
	virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34();
	virtual int vfunc35(int edict);
	virtual void a36(); virtual void a37();
	virtual CUnknown1070b22c_Edict *vfunc38(int index);
	virtual void a39();
	U22C_SLOTS10(a4)
	U22C_SLOTS10(a5) U22C_SLOTS10(a6) U22C_SLOTS10(a7)
	virtual void a80(); virtual void a81();
	virtual int vfunc82(const char *pszName, int size);
	virtual void a83();
	virtual const char *vfunc84(int index);
	virtual int vfunc85();
	virtual void a86(); virtual void a87(); virtual void a88(); virtual void a89();
	U22C_SLOTS10(a9)
	virtual void b00(); virtual void b01(); virtual void b02(); virtual void b03(); virtual void b04();
	virtual int vfunc105(int a, int b);
	virtual void b06(); virtual void b07(); virtual void b08(); virtual void b09();
	virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14();
	virtual void b15(); virtual void b16(); virtual void b17(); virtual void b18();
	virtual double vfunc119(int flag);
	virtual int vfunc120();
	virtual void vfunc121(int a, int *b);
	virtual void vfunc122(int edict, int a);
};
