// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b6b60 size=0x6
#include "CNPC_VTzimisce.h"
namespace lifted {
extern char g_10653130;
}
datamap_t *CNPC_VTzimisce::vfunc82()
{
    return (datamap_t *)&lifted::g_10653130;
}
// END FUNCTION

// FUNCTION: 0x103b6d90 size=0x3
#include "CNPC_VTzimisce.h"
bool CNPC_VTzimisce::vfunc325()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103b6db0 size=0x3
#include "CNPC_VTzimisce.h"
bool CNPC_VTzimisce::vfunc324()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103b6dd0 size=0x7
#include "CNPC_VTzimisce.h"
namespace lifted {
extern float g_104cc4fc;
}
float CNPC_VTzimisce::vfunc522()
{
    return lifted::g_104cc4fc;
}
// END FUNCTION

// FUNCTION: 0x103b6df0 size=0x7
#include "CNPC_VTzimisce.h"
namespace lifted {
extern float g_104cc500;
}
float CNPC_VTzimisce::vfunc523()
{
    return lifted::g_104cc500;
}
// END FUNCTION

// FUNCTION: 0x103b6e10 size=0x3
#include "CNPC_VTzimisce.h"
int CNPC_VTzimisce::vfunc244()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103b6e30 size=0x7
#include "CNPC_VTzimisce.h"
namespace lifted {
extern float g_104563b0;
}
float CNPC_VTzimisce::vfunc550()
{
    return lifted::g_104563b0;
}
// END FUNCTION

// FUNCTION: 0x103b6e50 size=0x6
#include "CNPC_VTzimisce.h"
namespace lifted {
extern char g_1093ce70;
}
int CNPC_VTzimisce::vfunc580()
{
    return (int)&lifted::g_1093ce70;
}
// END FUNCTION

// FUNCTION: 0x103b6e70 size=0x6
#include "CNPC_VTzimisce.h"
namespace lifted {
extern int g_1065343c;
}
int CNPC_VTzimisce::vfunc451()
{
    return lifted::g_1065343c;
}
// END FUNCTION

// FUNCTION: 0x103b6e90 size=0xe1
#include "CNPC_VNewscaster.h"
#include "CNPC_VTzimisce.h"

void sub_100aa7b0(void *p);

CNPC_VTzimisce *CNPC_VTzimisce::vfunc5(unsigned int flags)
{
	((CNewscasterList *)((char *)this + 0x6690))->Destruct();
	((CNewscasterList *)((char *)this + 0x665c))->Destruct();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b7090 size=0x6
extern unsigned char g_10653434;
// TARGET: sub_103b7090
unsigned char sub_103b7090()
{
    return g_10653434;
}
// END FUNCTION

// FUNCTION: 0x103b70f0 size=0x1d
#include "CNPC_VTzimisce.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093ccc4;
extern B g_10936c74;
int CNPC_VTzimisce::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093ccc4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b9020 size=0x3
#include "CNPC_VTzimisce.h"
bool CNPC_VTzimisce::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103b9040 size=0x10
#include "CNPC_VTzimisce.h"

void __fastcall sub_10013fbb(void *pThis);
void __fastcall sub_10292de0(void *pThis);

// TARGET: CNPC_VTzimisce::vfunc431
void CNPC_VTzimisce::vfunc431()
{
	sub_10013fbb(this);
	sub_10292de0(this);
}
// END FUNCTION

// FUNCTION: 0x103b9060 size=0x84
#include "CNPC_VTzimisce.h"

void CNPC_VTzimisce::vfunc103()
{
	sub_10298d30();
	m_f1574 = -0.5f;
	{
		Vector v = m_vec1074;
		m_vec1074.y = v.x;
		m_vec1074.x = -v.y;
		m_vec1074.z = v.z;
	}
	{
		Vector size(60.0f, 60.0f, 100.0f);
		sub_1009b060(&size);
	}
	sub_100b3900(4);
	m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x103b9120 size=0x2d
#include "CNPC_VTzimisce.h"
#include "CAI_BaseNPCTroika.h"

float CNPC_VTzimisce::vfunc418(float a)
{
	if ((int)a != -1000001)
	{
		return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc418(a);
	}
	return 150.0f;
}
// END FUNCTION

// FUNCTION: 0x103b9180 size=0x36
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc593()
{
	sub_1029a070();
	m_f655c = 0.01f;
	m_f6560 = 1.0f;
	m_f6564 = 50.0f;
	m_f6568 = 50.0f;
	m_f656c = 0.01f;
}
// END FUNCTION

// FUNCTION: 0x103b91d0 size=0x71
#include "CNPC_VTzimisce.h"
#include "CNPC_VBaseBoss.h"


struct CTzimisceState {
	char m_pad6689[0x6689];
};

void CNPC_VTzimisce::vfunc420()
{
	((CNPC_VBaseBoss *)this)->CNPC_VBaseBoss::vfunc420();
	*((char *)this + 0x6689) = 1;
	*(int *)((char *)this + 0x668c) = 0;
	sub_103b9f50(0);
	*(int *)((char *)this + 0x66b8) = 0;
	*((char *)this + 0x66bc) = 0;
	float *t1 = (float *)((char *)this + 0x66ac);
	float *t2 = (float *)((char *)this + 0x66b0);
	*t1 = gpGlobals->curtime + 3.0f;
	*t2 = gpGlobals->curtime + 3.0f;
	*(int *)((char *)this + 0x6670) = -1;
	sub_102c43b0(0);
}
// END FUNCTION

// FUNCTION: 0x103b92a0 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_101aeb60(int, const char *, float, int, int, int);

// TARGET: CNPC_VTzimisce::vfunc488
void CNPC_VTzimisce::vfunc488()
{
    int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
    int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
    float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
    sub_101aeb60(m_n02e0, "SPI_DIES", c, b, 0, a);
    v487();
}
// END FUNCTION

// FUNCTION: 0x103b9360 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc489()
{
}
// END FUNCTION

// FUNCTION: 0x103b9380 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int ent, const char *anim, float a, int b, int c, int d);
void CNPC_VTzimisce::vfunc490()
{
	if (vfunc486()) {
		int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
		int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
		float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
		sub_10002414(m_n02e0, "SPI_IDLE", c, b, 0, a);
	}
}
// END FUNCTION

// FUNCTION: 0x103b9440 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int ent, const char *anim, float a, int b, int c, int d);
void CNPC_VTzimisce::vfunc618()
{
	if (vfunc486()) {
		int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
		int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
		float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
		sub_10002414(m_n02e0, "SPI_FIDGET", c, b, 0, a);
	}
}
// END FUNCTION

// FUNCTION: 0x103b9500 size=0xab
#include "CNPC_VTzimisce.h"

extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void __cdecl sub_101aeb60(int edict, const char *pszEvent, float f, int b, int c, int a);

// TARGET: CNPC_VTzimisce::vfunc491
void CNPC_VTzimisce::vfunc491()
{
	if (vfunc486()) {
		int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
		int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
		float f = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
		sub_101aeb60(m_n02e0, "SPI_TAKE_DAMAGE", f, b, 0, a);
		v487();
	}
	sub_103b9f90(1, 1.0f);
}
// END FUNCTION

// FUNCTION: 0x103b95e0 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc492()
{
}
// END FUNCTION

// FUNCTION: 0x103b9600 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc493()
{
}
// END FUNCTION

// FUNCTION: 0x103b9620 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc494()
{
}
// END FUNCTION

// FUNCTION: 0x103b9640 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc495()
{
}
// END FUNCTION

// FUNCTION: 0x103b9660 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc496()
{
}
// END FUNCTION

// FUNCTION: 0x103b9680 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc497()
{
}
// END FUNCTION

// FUNCTION: 0x103b96a0 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTzimisce.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_106530fc[];

void CNPC_VTzimisce::vfunc619()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_106530fc[g_1070b244->vfunc2(0, 5)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b9810 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTzimisce.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10653114[];

void CNPC_VTzimisce::vfunc620()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 1, g_10653114[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b9980 size=0x92
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc621()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_ATTACK_HIT", c, b, 0, a);
	sub_103b9f90(2, 0.5f);
}
// END FUNCTION

// FUNCTION: 0x103b9a50 size=0x92
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc622()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_ATTACK_HIT_MASSIVE", c, b, 0, a);
	sub_103b9f90(2, 0.5f);
}
// END FUNCTION

// FUNCTION: 0x103b9b20 size=0x84
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc623()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_RUNNING", c, b, 0, a);
}
// END FUNCTION

// FUNCTION: 0x103b9be0 size=0x84
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc624()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_LAND_HARD", c, b, 0, a);
}
// END FUNCTION

// FUNCTION: 0x103b9ca0 size=0x84
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc625()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_JUMP_ATTACK", c, b, 0, a);
}
// END FUNCTION

// FUNCTION: 0x103b9d60 size=0x92
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc626()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_AGGRO", c, b, 0, a);
	sub_103b9f90(2, 2.0f);
}
// END FUNCTION

// FUNCTION: 0x103b9e30 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int ent, const char *anim, float a, int b, int c, int d);
void CNPC_VTzimisce::vfunc627()
{
	if (vfunc486()) {
		int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
		int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
		float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
		sub_10002414(m_n02e0, "SPI_FIDGET", c, b, 0, a);
	}
}
// END FUNCTION

// FUNCTION: 0x103b9ef0 size=0x3
#include "CNPC_VTzimisce.h"
bool CNPC_VTzimisce::vfunc509()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103b9f10 size=0x29
#include "CNPC_VTzimisce.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_VTzimisce::vfunc487
void CNPC_VTzimisce::vfunc487()
{
    *(float *)((char *)this + 0x5ce8) = g_1070b244->vfunc1(0.5f, 0.75f) + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x103ba000 size=0x6
#include "CNPC_VTzimisce.h"
int CNPC_VTzimisce::vfunc473()
{
    return 0x17;
}
// END FUNCTION

// FUNCTION: 0x103ba020 size=0x199
#include <math.h>
#include "CNPC_VTzimisce.h"

#define S103BA_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S103BA_V100(p) S103BA_V10(p##0) S103BA_V10(p##1) S103BA_V10(p##2) S103BA_V10(p##3) S103BA_V10(p##4) \
	S103BA_V10(p##5) S103BA_V10(p##6) S103BA_V10(p##7) S103BA_V10(p##8) S103BA_V10(p##9)

struct S103ba020Slots
{
	S103BA_V100(a0) S103BA_V100(a1)
	S103BA_V10(b0) S103BA_V10(b1) S103BA_V10(b2) S103BA_V10(b3)
	virtual void c0(); virtual void c1();
	virtual float GetSpeed();	// slot 242
};

struct S103ba020View
{
	char m_pad0000[0xfec];
	int m_nActivity;	// 0xfec
	char m_pad0ff0[0x5d8c - 0xff0];
	unsigned int m_nFlags;	// 0x5d8c
};

extern CNPC_VTzimisceConVar *g_1093c9fc;
extern float g_104454c0;

float CNPC_VTzimisce::vfunc516()
{
	S103ba020View *pView = (S103ba020View *)this;
	if (pView->m_nFlags & 0x2000) {
		float flSpeed = ((S103ba020Slots *)this)->GetSpeed();
		float flScale = g_1093c9fc->vfunc1() ? 0.0f : g_1093c9fc->m_f28;
		float flResult = fabs(flSpeed) * flScale;
		if (flResult > g_104454c0)
			return flResult;
		return g_104454c0;
	}
	switch (pView->m_nActivity) {
	case 1:
	case 0xfc:
	case 0xfd:
		return 5.0f;
	case 0x13:
		return 30.0f;
	default:
		return 11.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x103ba230 size=0x6
#include "CNPC_VTzimisce.h"
int CNPC_VTzimisce::vfunc138()
{
    return 0x1a;
}
// END FUNCTION

// FUNCTION: 0x103ba2c0 size=0x63
#include "CNPC_VTzimisce.h"
// TARGET: CNPC_VTzimisce::vfunc463
void CNPC_VTzimisce::vfunc463(int a, int b)
{
    if (a != b) {
        switch (b) {
        case 1:
            sub_103b9f50(0);
            break;
        case 2:
        case 3:
        case 11:
            sub_103b9f50(1);
            break;
        case 7:
            sub_103b9f50(3);
            break;
        }
    }
    sub_102ae140(a, b);
}
// END FUNCTION

// FUNCTION: 0x103ba410 size=0x1c0
#include "CNPC_VTzimisce.h"
#include "CUnknown10381be0.h"
#include "CEHandleGet.h"
extern const char *g_106530e8[];
void sub_101cdba0(void *, float, float, float, float, int, int);

// TARGET: CNPC_VTzimisce::vfunc259
void CNPC_VTzimisce::vfunc259(int *pEvent)
{
	switch (*pEvent) {
	case 2:
		if (m_nState5cc0 == 1)
			vfunc490();
		break;
	case 3:
		if (m_nState5cc0 == 1)
			vfunc618();
		break;
	case 4:
		vfunc623();
		break;
	case 5:
		vfunc624();
		break;
	case 6:
		vfunc621();
		break;
	case 7:
		vfunc622();
		break;
	case 8:
		vfunc625();
		break;
	case 9:
		vfunc626();
		break;
	case 0x7f8:
		if (!((CUnknown10381be0 *)this)->sub_103be130())
			sub_103bef20((CBaseEntity *)EHandle_Get(m_hTarget), g_106530e8[m_n6680]);
		break;
	case 0x802:
	case 0x803:
		sub_101cdba0(vfunc220(), 2.0f, 0.2f, 0.2f, 1024.0f, 0, 0);
		vfunc619();
		break;
	case 0xbbb:
		vfunc620();
		break;
	case 0xbbd:
		if (((CUnknown10381be0 *)this)->sub_103be130())
			sub_103bea90(vfunc167());
		break;
	default:
		sub_1029b290(pEvent);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103ba640 size=0xf9
#include "CNPC_VTzimisce.h"
#include "CUnknown1027d990.h"
#include "CEntityVSlots.h"

struct ZimisceView_t {
	char pad0[0x654];
	int n654;
	char pad658[0x6320 - 0x658];
	int n6320;
};

void CNPC_VTzimisce::sub_103ba640(void *pEnt, Vector *pVec, int *pFlag, int *pOut)
{
	Vector vecResult;
	if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
		CEntityVSlots *pSlots = (CEntityVSlots *)pEnt;
		Vector *pA = pSlots->slot217();
		Vector *pB = pSlots->slot193(&vecResult);
		*pVec += *pB - *pA;
		return;
	}
	ZimisceView_t *pView = (ZimisceView_t *)this;
	*pOut = pView->n6320;
	sub_102c3b50(pEnt, *pVec, pVec, pOut);
	*pFlag = *pOut;
	Vector *pOrigin = ((CEntityVSlots *)this)->slot220();
	sub_102c36d0(*pOrigin, pEnt, pView->n654, pVec, &vecResult);
	*pVec = vecResult;
}
// END FUNCTION

// FUNCTION: 0x103bdd10 size=0xe8
#include "CNPC_VTzimisce.h"

extern "C" char *strcpy(char *, const char *);
#pragma intrinsic(strcpy)

void CNPC_VTzimisce::vfunc241(char *pszOut, int *pEvent)
{
	switch (*pEvent) {
	case 2:
		strcpy(pszOut, "START_IDLE");
		break;
	case 3:
		strcpy(pszOut, "START_FIDGET");
		break;
	case 4:
		strcpy(pszOut, "START_RUN");
		break;
	case 5:
		strcpy(pszOut, "START_LANDHARD");
		break;
	case 6:
		strcpy(pszOut, "START_ATTACK");
		break;
	case 7:
		strcpy(pszOut, "START_ATTACKBIG");
		break;
	case 8:
		strcpy(pszOut, "START_POUNCE");
		break;
	default:
		sub_1008c170(pszOut, pEvent);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103bde40 size=0x66
#include "CNPC_VTzimisce.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown10381be0.h"

int CNPC_VTzimisce::sub_103bde40(int activity)
{
    if (((CUnknown10381be0 *)this)->sub_103be130()) {
        if (*(char *)((char *)this + 0x6688)) {
            switch (activity) {
            case 1:
                return 0xfc;
            case 9:
            case 0x13:
                return 0xfe;
            }
        } else {
            switch (activity) {
            case 1:
                return 0xfd;
            case 9:
            case 0x13:
                return 0xff;
            }
        }
    }
    return ((CAI_BaseNPCTroika *)this)->sub_10295590(activity);
}
// END FUNCTION

// FUNCTION: 0x103bdf60 size=0x1
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x103bf580 size=0x70
#include "CNPC_VTzimisce.h"

struct SEnt { int pad; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

void *CNPC_VTzimisce::sub_103bf580(void *pDefault)
{
    switch (m_state) {
    case 1:
        if (vfunc167())
            return vfunc167()->vfunc220();
        break;
    case 2:
        break;
    default:
        return pDefault;
    }
    unsigned h = m_hTarget;
    if (h != 0xffffffff) {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        if (he->serial == (h >> 13) && he->p != 0)
            return m_posBuf;
    }
    return pDefault;
}
// END FUNCTION

// FUNCTION: 0x103bfa00 size=0x18
#include "CNPC_VTzimisce.h"

char CNPC_VTzimisce::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x103bfa30 size=0x3
#include "CNPC_VTzimisce.h"
void CNPC_VTzimisce::vfunc228(int a0, int a1)
{
}
// END FUNCTION
