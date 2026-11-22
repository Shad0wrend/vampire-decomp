// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 11 blocks
#include "vampire.h"

// FUNCTION: 0x10100e90 size=0x6
#include "datamap.h"
#include "CEnvFade.h"
namespace lifted {
extern char g_10568c10;
}
datamap_t * CEnvFade::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10568c10);
}
// END FUNCTION

// FUNCTION: 0x10100eb0 size=0x5
int * sub_10100ef0(void);
int * g_107090c8 = ((int * (*)(int))sub_10100ef0)(0);
// END FUNCTION

// FUNCTION: 0x10100ef0 size=0x52
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_10568c10[2];
void sub_100073c9();

int *sub_10100ef0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_Duration", {0x450, 0}, 1, 0x6, "duration" },
        { 1, "m_HoldTime", {0x454, 0}, 1, 0x6, "holdtime" },
        { 0, "InputFade", {0x0, 0}, 1, 0x8, "Fade", 0, (void *)sub_100073c9 },
        { 10, "m_OnBeginFade", {0x458, 0}, 1, 0x16, "OnBeginFade", g_1055dc70 },
    };
    g_10568c10[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10568c10[0] = (int)&dataDesc[1];
    return g_10568c10;
}
// END FUNCTION

// FUNCTION: 0x10100f70 size=0x1
// TARGET: sub_10100f70
void __fastcall sub_10100f70(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x10100f90 size=0xa4
#include "CEnvShake.h"
#include "CEntityVSlots.h"
#include "inputdata_t.h"

void sub_101ce210(const float *pCenter, float flAmplitude, float flFrequency, int command);
void sub_101ce290(CEntityVSlots *pEntity, const float *pCenter, float flAmplitude, float flFrequency, int command);

// TARGET: CEnvShake::sub_10100f90
void CEnvShake::sub_10100f90(inputdata_t &inputdata)
{
	int command = 0;
	if (!(m_flags204 & 1)) {
		command = 2;
		if (m_flags204 & 8)
			command = 0x22;
	}
	if (m_flags204 & 2)
		command |= 4;
	if (m_flags204 & 4) {
		if (((CEntityVSlots *)inputdata.pActivator)->slot162())
			sub_101ce290((CEntityVSlots *)inputdata.pActivator, (const float *)((char *)this + 0x1a0), Amplitude(), Frequency(), command);
	} else {
		sub_101ce210((const float *)((char *)this + 0x1a0), Amplitude(), Frequency(), command);
	}
	m_Output458.sub_100cd660(inputdata.pActivator, this, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10101070 size=0xa
#include "ConCommand.h"
void sub_101010c0(void);
ConCommand g_107090a0("fadeout", sub_101010c0, "fadeout {time r g b}: Fades the screen to black or to the specified color over the given number of seconds.", 0, 0);
// END FUNCTION

// FUNCTION: 0x101010c0 size=0x2f
// TARGET: sub_101010c0
void sub_10101100(int *a, int *b);
int sub_10008d8c();
void sub_10009020(int a, int *b, int c, int d, int e);

void sub_101010c0()
{
    int a;
    int b;
    sub_10101100(&a, &b);
    int r = sub_10008d8c();
    sub_10009020(r, &b, a, 0, 0x1a);
}
// END FUNCTION

// FUNCTION: 0x10101100 size=0xe5
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SEngine
{
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
    virtual const char *Cmd_Argv(int i);	// slot 84
    virtual int Cmd_Argc();	// slot 85
};

extern SEngine *g_1070b22c;
extern "C" double atof(const char *);
extern "C" int atoi(const char *);

// TARGET: sub_10101100
void sub_10101100(float *pDuration, unsigned char *pColor)
{
    *pDuration = 2.0f;
    if (g_1070b22c->Cmd_Argc() > 1)
        *pDuration = (float)atof(g_1070b22c->Cmd_Argv(1));
    pColor[0] = 0;
    pColor[1] = 0;
    pColor[2] = 0;
    pColor[3] = 0xff;
    if (g_1070b22c->Cmd_Argc() > 4) {
        pColor[0] = atoi(g_1070b22c->Cmd_Argv(2));
        pColor[1] = atoi(g_1070b22c->Cmd_Argv(3));
        pColor[2] = atoi(g_1070b22c->Cmd_Argv(4));
        if (g_1070b22c->Cmd_Argc() == 5)
            pColor[3] = atoi(g_1070b22c->Cmd_Argv(5));
    }
}
// END FUNCTION

// FUNCTION: 0x10101270 size=0xa
#include "ConCommand.h"
void sub_101012c0(void);
ConCommand g_107090cc("fadein", sub_101012c0, "fadein {time r g b}: Fades the screen in from black or from the specified color over the given number of seconds.", 0, 0);
// END FUNCTION

// FUNCTION: 0x101012c0 size=0x2f
// TARGET: sub_101012c0
void sub_10101100(int *a, int *b);
int sub_10008d8c();
void sub_10009020(int a, int *b, int c, int d, int e);

void sub_101012c0()
{
    int a;
    int b;
    sub_10101100(&a, &b);
    int r = sub_10008d8c();
    sub_10009020(r, &b, a, 0, 0x11);
}
// END FUNCTION

// FUNCTION: 0x10101340 size=0x2b
#include "CEnvFade.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CEnvFade::vfunc5
CBaseEntity *CEnvFade::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x458))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
