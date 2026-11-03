// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011bf80 size=0x20
#include "vampire.h"
extern char g_104627e0;
void sub_10430964(void *p);
struct CUnk1011bf80
{
    void *sub_1011bf80(unsigned char bFree);
};
// TARGET: CUnk1011bf80::sub_1011bf80
void *CUnk1011bf80::sub_1011bf80(unsigned char bFree)
{
    *(void **)this = &g_104627e0;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x1011c020 size=0xb
#include "CServerGameClients.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual void target();
};
extern CSlots *g_1070ba0c;

// TARGET: CServerGameClients::vfunc1
void CServerGameClients::vfunc1()
{
	g_1070ba0c->target();
}
// END FUNCTION

// FUNCTION: 0x1011c040 size=0x3
#include "CServerGameClients.h"
void CServerGameClients::vfunc2(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1011c4a0 size=0x15
#include "CServerGameClients.h"

int sub_10352d70(int a, int b);

// TARGET: CServerGameClients::vfunc4
int CServerGameClients::vfunc4(int a, int b)
{
	return sub_10352d70(a, b);
}
// END FUNCTION

// FUNCTION: 0x1011d3e0 size=0x42
#include "CServerGameClients.h"
#include "CGlobalEntityList.h"
struct CSGC_EntView { char m_pad[0xa8]; int m_n0a8; };
void sub_100d1f70(int a, int b);
void CServerGameClients::vfunc9(CServerGameClients_Edict *pEdict, int a)
{
	CSGC_EntView *pEnt = 0;
	if (pEdict && pEdict->m_pUnk)
		pEnt = (CSGC_EntView *)pEdict->m_pUnk->vfunc4();
	sub_100d1f70(!pEnt ? 0 : pEnt->m_n0a8, a);
}
// END FUNCTION

// FUNCTION: 0x1011d450 size=0x30
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CServerGameClients.h"
extern CGlobalEntityList g_106eb5d8;
struct CEntV114 { virtual void v0(); };
void CServerGameClients::vfunc10()
{
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0);
	while (pEnt) {
		(*(void (__fastcall ***)(CBaseEntity *))pEnt)[114](pEnt);
		pEnt = g_106eb5d8.sub_100f7060(pEnt);
	}
}
// END FUNCTION

// FUNCTION: 0x1011d490 size=0xc
extern int g_1070b25c;
void __fastcall sub_1011d490(void *, int, int value)
{
	g_1070b25c = value;
}
// END FUNCTION

// FUNCTION: 0x1011d4b0 size=0xe0
#include "CBaseEntity.h"
#include "CServerGameClients.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
struct SUnknown { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *GetBaseEntity(); };
struct SEdict { char pad[0x40]; SUnknown *pUnk; };
extern float g_1070d1b0[3];

struct IEngineEntFull {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
    virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
    virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
    virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37();
    virtual SEdict *PEntityOfEntIndex(int index);
};
extern IEngineEntFull *g_1070b22c;
typedef float *(__fastcall *Slot196Fn)(CBaseEntity *, void **, int);

// TARGET: CServerGameClients::vfunc13
void CServerGameClients::vfunc13(void *pEdict, float *pOut)
{
    CBaseEntity *pEnt;
    SEdict *e = (SEdict *)pEdict;
    {
        ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
        if (!e)
            e = g_1070b22c->PEntityOfEntIndex(0);
        if (e && e->pUnk)
            pEnt = e->pUnk->GetBaseEntity();
        else
            pEnt = 0;
    }
    if (pEnt) {
        float tmp[3];
        void **vt = *(void ***)pEnt;
        float *p = ((Slot196Fn)vt[196])(pEnt, vt, (int)tmp);
        pOut[0] = p[0];
        pOut[1] = p[1];
        pOut[2] = p[2];
        return;
    }
    pOut[0] = g_1070d1b0[0];
    pOut[1] = g_1070d1b0[1];
    pOut[2] = g_1070d1b0[2];
}
// END FUNCTION

// FUNCTION: 0x1011d5d0 size=0x96
#include "CServerGameClients.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct IUnk { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual char *v4(); };
struct Edict { char pad[0x40]; IUnk *m_pUnk; char m_flag; };

void *CServerGameClients::vfunc12(void *pEdict)
{
	Edict *e = (Edict *)pEdict;
	if (e && e->m_flag && e->m_pUnk) {
		g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
		g_109f3620[*g_109f3680].b = g_106b8540;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
		char *ent = e->m_pUnk ? e->m_pUnk->v4() : 0;
		(*g_109f3680)--;
		if (ent)
			return ent + 0x2068;
	}
	return 0;
}
// END FUNCTION
