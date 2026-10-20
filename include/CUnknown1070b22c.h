// CUnknown1070b22c: the global object at 0x1070b22c (pointer in the data segment); only slots 13, 17, 18, 20, 21, 35, 38, 49, 59, 82, 84, 85, 105 and 119 to 122 are known.
// Slot 13 takes a resource name and a preload flag (precaches a sound / resource).
// Slot 17 is PrecacheModel(name, preload) and returns the model index.
// Slot 18 returns the studio header of a model index (0 when there is none), slot 21 the type of a model index (3 = studio).
// Slot 20 returns the model index of a model name.
// Slot 49 is EmitAmbientSound(entindex, pos, sample, volume, soundlevel, flags, pitch).
// Slot 119 takes a flag and returns a time value in ST0; slot 120 returns a dword in EAX.
// Slots 84 / 85 are the engine's command argument accessors (Cmd_Argv(index) / Cmd_Argc()).
// Slot 82 registers a user message by name and size and returns its id.
// Slot 35 is IndexOfEdict(edict), slot 38 is PEntityOfEntIndex(index), slot 59 is the server command executor (ServerCommand).
#pragma once

#define U22C_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnknown1070b22c_Edict;

class CUnknown1070b22c
{
public:
	U22C_SLOTS10(a0)
	virtual void a10(); virtual void a11(); virtual void a12(); virtual void vfunc13(const char *pszName, int bPreload); virtual void a14();
	virtual void a15(); virtual void a16();
	virtual int vfunc17(int a, int b);
	virtual void *vfunc18(int modelIndex); virtual void a19();
	virtual int vfunc20(const char *pszModel); virtual int vfunc21(int modelIndex); virtual void a22(); virtual void a23(); virtual void a24();
	virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29();
	virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34();
	virtual int vfunc35(int edict);
	virtual void a36(); virtual void a37();
	virtual CUnknown1070b22c_Edict *vfunc38(int index);
	virtual void a39();
	virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43(); virtual void a44();
	virtual void a45(); virtual void a46(); virtual void a47(); virtual void a48();
	virtual void vfunc49(int entindex, int pos, const char *pszSample, int volume, int soundlevel, int flags, int pitch);
	virtual void a50(); virtual void a51(); virtual void a52(); virtual void a53(); virtual void a54();
	virtual void a55(); virtual void a56(); virtual void a57(); virtual void a58();
	virtual void vfunc59(const char *pszCommand);
	U22C_SLOTS10(a6) U22C_SLOTS10(a7)
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
