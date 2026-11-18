// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b3b20 size=0x6
#include "CNPC_VTest.h"

extern int g_1093c830;

// TARGET: CNPC_VTest::vfunc580
void *CNPC_VTest::vfunc580()
{
	return &g_1093c830;
}
// END FUNCTION

// FUNCTION: 0x103b3b40 size=0x6
#include "CNPC_VTest.h"

extern const char *g_106521c0;

// TARGET: CNPC_VTest::vfunc451
const char *CNPC_VTest::vfunc451()
{
	return g_106521c0;
}
// END FUNCTION

// FUNCTION: 0x103b3b60 size=0x1e
#include "CNPC_VTest.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VTest::vfunc5
CNPC_VTest *CNPC_VTest::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b3c60 size=0x6
#include "CNPC_VTest.h"

extern char g_106521b8;

// TARGET: CNPC_VTest::vfunc452
char CNPC_VTest::vfunc452()
{
	return g_106521b8;
}
// END FUNCTION

// FUNCTION: 0x103b3cc0 size=0x1d
#include "CNPC_VTest.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c8bc;
extern B g_10936c74;
int CNPC_VTest::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c8bc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b41e0 size=0xc2
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

struct SoundSystemLike
{
	virtual void PrecacheSound(const char *name, int flag);
};
extern SoundSystemLike *g_1070b248;
extern const char *g_10652188;
extern const char *g_1065218c;
extern const char *g_10652190;
extern const char *g_10652194[4];
extern const char *g_106521a4;
extern const char *g_106521a8;
extern const char *g_106521ac;
extern const char *g_106521b0;
extern const char *g_106521b4;

void CNPC_VTest::vfunc104()
{
	g_1070b248->PrecacheSound(g_10652188, 0);
	g_1070b248->PrecacheSound(g_1065218c, 0);
	g_1070b248->PrecacheSound(g_10652190, 0);
	for (unsigned int i = 0; i < 4; i++)
		g_1070b248->PrecacheSound(g_10652194[i], 0);
	g_1070b248->PrecacheSound(g_106521a4, 0);
	g_1070b248->PrecacheSound(g_106521a8, 0);
	g_1070b248->PrecacheSound(g_106521ac, 0);
	g_1070b248->PrecacheSound(g_106521b0, 0);
	g_1070b248->PrecacheSound(g_106521b4, 0);
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103b42f0 size=0x15
#include "CNPC_VTest.h"

struct CUnk1026dc00
{
	char pad[0x5cec];
	unsigned int m_5cec;
	unsigned int sub_1026dc00(unsigned int flags);
};

struct CVampireCallView
{
	void sub_103c4ef0();
};

void CNPC_VTest::vfunc103()
{
	((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
	((CVampireCallView *)this)->sub_103c4ef0();
}
// END FUNCTION

// FUNCTION: 0x103b4320 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTest.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10652188[];

void CNPC_VTest::vfunc488()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_10652188[g_1070b244->vfunc2(0, 0)], 0.5f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b4490 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTest.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1065218c[];

void CNPC_VTest::vfunc489()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_1065218c[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b4600 size=0x12f
#include "CNPC_VTest.h"
#include "CPASAttenuationFilter.h"
#include "CRecipientFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##a) V10(p##b) V10(p##c) V10(p##d) V10(p##e) V10(p##f) V10(p##g) V10(p##h) V10(p##i) V10(p##j)
struct S_Eng {
    V10(a0) V10(a1) V10(a2)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual int s35(void *pEdict);
};
struct S_Obj {
    V100(a) V100(b)
    V10(c0) V10(c1)
    virtual void d0(); virtual void d1();
    virtual Vector *s222(Vector *pOut);
    V100(e) V100(f)
    V10(g0) V10(g1) V10(g2) V10(g3) V10(g4) V10(g5)
    virtual void h0(); virtual void h1(); virtual void h2();
    virtual char s486();
    char pad0[0x2e0 - 4];
    void *m_pEdict2e0;
};
struct S_Filter {
    void *m_vptr;
    int pad04;
    CRecipientVec m_Vec;
    int m_n1c;
    char pad20[8];
    char m_b28;
};
extern S_Eng *g_1070b22c;
extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern char g_104470dc[];
extern char g_104470b0[];
extern const char *g_10652190[];

void CNPC_VTest::vfunc490()
{
    S_Obj *pObj = (S_Obj *)this;
    if (pObj->s486()) {
        Vector origin;
        const Vector *pOrigin = pObj->s222(&origin);
        S_Filter f;
        ((CRecipientFilter *)&f)->sub_1019ce00();
        f.m_vptr = g_104470dc;
        ((CRecipientFilter *)&f)->sub_1019d280((const float *)pOrigin);
        f.m_vptr = g_104470b0;
        ((CRecipientFilter *)&f)->sub_1019d4b0(*pObj->s222(&origin), 0.8f);
        ((CRecipientFilter *)&f)->sub_1019cf50();
        void *pEdict = pObj->m_pEdict2e0;
        int nEntity = g_1070b22c->s35(pEdict);
        g_1070b248->vfunc3((const CRecipientFilter *)&f, nEntity, 2, g_10652190[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x103b4780 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTest.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10652194[];

void CNPC_VTest::vfunc491()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_10652194[g_1070b244->vfunc2(0, 3)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b48f0 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTest.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_106521a4[];

void CNPC_VTest::vfunc492()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_106521a4[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b4a60 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTest.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_106521a8[];

void CNPC_VTest::vfunc493()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_106521a8[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b4bd0 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTest.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_106521ac[];

void CNPC_VTest::vfunc494()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_106521ac[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b4d40 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTest.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_106521b0[];

void CNPC_VTest::vfunc495()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_106521b0[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103b4eb0 size=0x6
#include "CNPC_VTest.h"

// TARGET: CNPC_VTest::vfunc473
int CNPC_VTest::vfunc473()
{
	return 0x17;
}
// END FUNCTION

// FUNCTION: 0x103b4ed0 size=0x6
#include "CNPC_VTest.h"
int CNPC_VTest::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x103b4ef0 size=0x5
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VTest::vfunc463
// the game's 0x103b4ef0: a tail call (jmp) of CNPC_VHuman::vfunc463
void CNPC_VTest::vfunc463(int a0, int a1)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x103b4f10 size=0x5
#include "animevent_t.h"
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VTest::vfunc259
// the game's 0x103b4f10: a tail call (jmp) of CNPC_VHuman::vfunc259
void CNPC_VTest::vfunc259(animevent_t *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x103b4f30 size=0x77
#include "CNPC_VTest.h"
struct CNPC_VTestUnit : CNPC_VTest {
    bool sub_10014df8(int condition);
    int sub_10015ad2();
    int sub_103b4f30();
};

int CNPC_VTestUnit::sub_103b4f30()
{
    char *p = (char *)this;
    *(int *)(p + 0x1b2c) = 0x23;
    switch (*(int *)(p + 0x5cc0)) {
    case 2:
        return 0x158;
    case 0xb:
        if (sub_10014df8(0x6a) || sub_10014df8(0x6d) || sub_10014df8(0x6e) || sub_10014df8(0x70) || sub_10014df8(0x6f))
            return 0x80;
        return 0x15a;
    }
    return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x103b4fd0 size=0x5
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VTest::vfunc440
// the game's 0x103b4fd0: a tail call (jmp) of CNPC_VHuman::vfunc440
int CNPC_VTest::vfunc440(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x103b51a0 size=0xd
void sub_10385a10(float a);

void sub_103b51a0(float a)
{
	sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x103b51c0 size=0x5
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VTest::vfunc434
// the game's 0x103b51c0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VTest::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x103b51e0 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VTest::vfunc390
// the game's 0x103b51e0: a tail call (jmp) of CNPC_VHuman::vfunc390
int CNPC_VTest::vfunc390(CTakeDamageInfo *a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x103b5200 size=0x5
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VTest::vfunc366
// the game's 0x103b5200: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VTest::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION
