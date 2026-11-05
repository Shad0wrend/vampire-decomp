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

// FUNCTION: 0x1011c060 size=0x2a9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CServerGameClients.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "CReliableBroadcastFilter.h"

extern int g_10726048;
extern char g_1070ba2c;
CBaseEntity *sub_100ab250(void *pEdict);
void *sub_101bb220(void *pEdict);
void *sub_101bb150(void *p);
void sub_1003d8f0(CBaseEntity *p);
void sub_101cf600(CBaseEntity *p);
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

struct CUnk101b98d0 { void sub_101b98d0(); };
struct CUnitP3View { void sub_1017c580(); };
struct CFlagsUnit
{
	char m_pad[0x44];
	unsigned short m_nFlags;
	void sub_100dc580(unsigned int flags);
};
struct CGlobalList1070ba0c
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
	virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(void *pEdict);
};
extern CGlobalList1070ba0c *g_1070ba0c;

struct CPlayerView102
{
	char m_pad0[0x2078];
	const char *m_pszName;
	char m_pad1[0x2310 - 0x207c];
	int m_n2310;
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline CBaseEntity *Instance102(void *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pent)
		pent = engine->vfunc38(0);
	return sub_100ab250(pent);
}

// TARGET: CServerGameClients::vfunc3
void CServerGameClients::vfunc3(void *pEdict)
{
	ScopeTrace trace("CServerGameClients::ClientDisconnect", g_106b8540, g_106b8540);
	CBaseEntity *pPlayer = Instance102(pEdict);
	if (pPlayer) {
		if (!g_1070ba2c) {
			char msg[256];
			CPlayerView102 *pv = (CPlayerView102 *)pPlayer;
			pv->m_n2310 = 0;
			Q_snprintf(msg, 256, "- %s has left the game\n", STRINGR(pv->m_pszName));
			CReliableBroadcastFilter filter;
			engine->vfunc65(&filter, g_10726048);
			engine->vfunc67(engine->vfunc35((int)pEdict));
			engine->vfunc78(msg);
			engine->vfunc66();
			CUnk101b98d0 *pObj = (CUnk101b98d0 *)sub_101bb150(sub_101bb220(pEdict));
			if (pObj)
				pObj->sub_101b98d0();
			pPlayer->sub_100b3640(0x10000);
			pPlayer->sub_100b3580(0x400000);
			pPlayer->sub_100b3580(0x8000);
			{
				ScopeTrace trace3("CBaseEntity::AddSolidFlags", pPlayer->m_name26c ? pPlayer->m_name26c : g_106b8540);
				CFlagsUnit *pFlags = (CFlagsUnit *)((char *)pPlayer + 0x270);
				pFlags->sub_100dc580(pFlags->m_nFlags | 4);
			}
			sub_101cf600(pPlayer);
			if (g_1070ba0c)
				g_1070ba0c->v28(pEdict);
		}
		sub_1003d8f0(pPlayer);
		((CUnitP3View *)pPlayer)->sub_1017c580();
	}
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

// FUNCTION: 0x1011c4d0 size=0x34
struct CClientViewA8 {
    char pad0[0xa8];
    int m_a8;
};

struct CVirtSlot4View {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    virtual int f3();
    virtual CClientViewA8 *f4();
};

struct CServerClientsView {
    char pad0[0x40];
    CVirtSlot4View *m40;
};

void sub_100095ac(int a);

// TARGET: sub_1011c4d0
void __stdcall sub_1011c4d0(CServerClientsView *p)
{
    CClientViewA8 *pClient = 0;
    if (p && p->m40)
        pClient = p->m40->f4();
    sub_100095ac(!pClient ? 0 : pClient->m_a8);
}
// END FUNCTION

// FUNCTION: 0x1011c8c0 size=0x29a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CServerGameClients.h"
#include "CUserCmd.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "Tier1.h"

extern float g_104454c4;
CBaseEntity *sub_100ab250(void *pEdict);
void sub_1011ccc0(void *pBuf, CUserCmd *pTo, CUserCmd *pFrom);

struct CUnknown1002c920 { void sub_1002c920(int a, int b, int c); };

#define PV(n) virtual void s##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)
struct CPlayerSlots461
{
	PV100(0) PV100(1) PV100(2) PV100(3)
	PV10(40) PV10(41) PV10(42) PV10(43) PV10(44) PV10(45)
	PV(460)
	virtual void slot461(void *pCmds, int numcmds, int totalcmds, int dropped, int paused);
};

struct CUnk1013ecd0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void vfunc15(void *pPlayer);
};
CUnk1013ecd0 *sub_1013ecd0();

struct CmdReset
{
	int m_vptr;
	int i10; float f14; int i18; float f1c, f20, f24, f28, f2c, f30, f34;
	unsigned char b38; unsigned char pad39[3];
	int i3c; int i40;
	unsigned char b44; unsigned char pad45[3];
	int i48; int i4c;
	unsigned char b50, b51, b52, b53;
	int i54; int i58;
};

#define RESET ((CmdReset *)&cmdNull)

inline CBaseEntity *Instance8(void *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pent)
		pent = engine->vfunc38(0);
	return sub_100ab250(pent);
}

float CServerGameClients::vfunc8(CServerGameClients_Edict *pEdict, void *pBuf, int numcmds, int totalcmds, int dropped, char bIgnore, int paused)
{
	CUserCmd cmds[30];
	CUserCmd cmdNull;
	CBaseEntity *pPlayer = 0;
	CBaseEntity *pEnt = Instance8(pEdict);
	if (pEnt && *(int *)((char *)pEnt + 0xa8))
		pPlayer = pEnt;
	if (totalcmds >= 0 && totalcmds < 29) {
		RESET->i10 = 0; RESET->f14 = 0; RESET->i18 = 0; RESET->f1c = 0; RESET->f20 = 0; RESET->f24 = 0;
		RESET->f28 = 0; RESET->f2c = 0; RESET->f30 = 0; RESET->f34 = 0;
		RESET->b38 = 0;
		RESET->i3c = 0; RESET->i40 = 0;
		RESET->b44 = 0;
		RESET->i48 = 0; RESET->i4c = 0;
		RESET->b50 = 1; RESET->b51 = 1; RESET->b52 = 0; RESET->b53 = 0;
		RESET->i54 = 0; RESET->i58 = 0;
		((CUnknown1002c920 *)&cmdNull.m_vec50)->sub_1002c920(0, 0, 0);
		cmdNull.m_b5c = 0;
		CUserCmd *pFrom = &cmdNull;
		for (int i = totalcmds - 1; i >= 0; i--) {
			CUserCmd *pTo = &cmds[i];
			sub_1011ccc0(pBuf, pTo, pFrom);
			pFrom = pTo;
		}
		if (!bIgnore && pPlayer) {
			sub_1013ecd0()->vfunc15(pPlayer);
			((CPlayerSlots461 *)pPlayer)->slot461(cmds, numcmds, totalcmds, dropped, paused);
			return cmds[0].frametime;
		}
		return 0.0f;
	}
	const char *pName = "unknown";
	if (pPlayer) {
		const char *s = *(const char **)((char *)pPlayer + 0x2078);
		pName = s ? s : g_106b8540;
	}
	g_109f3628("CBasePlayer::ProcessUsercmds: too many cmds %i sent for player %s\n", totalcmds, pName);
	*((char *)pBuf + 0x10) = 1;
	return 0.0f;
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
