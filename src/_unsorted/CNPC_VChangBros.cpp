// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036a190 size=0x6
int sub_1036a190(void)
{
    return 0x10;
}
// END FUNCTION

// FUNCTION: 0x1036a1b0 size=0x6
#include "CNPC_VChangBros.h"
namespace lifted {
extern char g_1093a888;
}
CAI_CondOwner * CNPC_VChangBros::vfunc580()
{
    return (CAI_CondOwner *)((int)&lifted::g_1093a888);
}
// END FUNCTION

// FUNCTION: 0x1036a1d0 size=0x6
#include "CNPC_VChangBros.h"
namespace lifted {
extern int g_1062fe1c;
}
const char * CNPC_VChangBros::vfunc451()
{
    return (const char *)lifted::g_1062fe1c;
}
// END FUNCTION

// FUNCTION: 0x1036a3f0 size=0x1d
#include "CNPC_VChangBros.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093aa70;
extern B g_10936c74;
int CNPC_VChangBros::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093aa70.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1036ae60 size=0x106
#include "CNPC_VChangBros.h"
#include "ScopeTrace.h"
void sub_101d0ec0(const char *name);

// TARGET: CNPC_VChangBros::vfunc104
void CNPC_VChangBros::vfunc104()
{
	ScopeTrace trace("CNPC_VChangBros::Precache", g_106b8540);
	CNPC_VHuman::vfunc104();
	engine->vfunc17((const char *)"chang_teleport_in_emitter", 1);
	engine->vfunc17((const char *)"chang_teleport_out_emitter", 1);
	engine->vfunc17((const char *)"chang_powerup_emitter", 1);
	engine->vfunc17((const char *)"chang_spine_emitter", 1);
	engine->vfunc17((const char *)"chang_center_emitter", 1);
	engine->vfunc17((const char *)"chang_blast_emitter", 1);
	engine->vfunc17((const char *)"chang_ball_charge_emitter", 1);
	sub_101d0ec0("item_w_chang_claw");
	sub_101d0ec0("item_w_chang_blade");
	sub_101d0ec0("item_w_chang_energy_ball");
	sub_101d0ec0("item_w_chang_ghost");
}
// END FUNCTION

// FUNCTION: 0x1036afc0 size=0x6d
#include "CNPC_VChangBros.h"
struct ScopeTraceEntry { const char *m_pFunction; const char *m_pEntity; const char *m_pExtra; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void CNPC_VChangBros::vfunc103()
{
	g_109f3620[*g_109f3680].m_pFunction = "CNPC_VChangBros::Spawn";
	g_109f3620[*g_109f3680].m_pEntity = "";
	g_109f3620[*g_109f3680].m_pExtra = "";
	++*g_109f3680;
	sub_10012855(0x209000);
	sub_10014876();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1036b170 size=0xa7
#include "CNPC_VChangBros.h"
#include "CNPC_VVampireBoss.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern const float g_104ada44;

int CNPC_VChangBros::vfunc127(int a)
{
    g_109f3620[*g_109f3680].a = "CNPC_VChangBros::Restore";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = ((CNPC_VVampireBoss *)this)->vfunc127(a);
    float v = g_104ada44;
    *(float *)((char *)this + 0x64b8) = v;
    ((CNPC_VVampireBoss *)this)->sub_103c6df0(0, "chang_powerup_emitter");
    ((CNPC_VVampireBoss *)this)->sub_103c6df0(1, "chang_powerup_emitter");
    ((CNPC_VVampireBoss *)this)->sub_103c6df0(2, "chang_spine_emitter");
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1036b250 size=0x193
#include "CNPC_VChangBros.h"
#include "CEHandleGet.h"
#include "CUnknown100290c0.h"
#include "ScopeTrace.h"

struct CChangBrosConVar {
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CChangBrosView {
	char m_pad0000[0x1b2c];
	int m_nState1b2c;
	char m_pad1b30[0x628c - 0x1b30];
	unsigned int m_h628c;
};

extern CChangBrosConVar *g_1093aa2c;
extern CChangBrosConVar *g_1093a984;
extern CChangBrosConVar *g_1093a9cc;

int CNPC_VChangBros::vfunc438()
{
	ScopeTrace trace("CNPC_VChangBros::SelectSchedule", g_106b8540);
	CChangBrosView *v = (CChangBrosView *)this;
	v->m_nState1b2c = 10;
	CBaseEntity *pEnemy = (CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&v->m_h628c);
	if (!pEnemy || vfunc404(pEnemy) == 1) {
		if (!g_1093aa2c->vfunc1() && g_1093aa2c->m_n2c)
			return 0x15e;
		if (!g_1093a984->vfunc1() && g_1093a984->m_n2c)
			return 0x15a;
		if (!g_1093a9cc->vfunc1() && g_1093a9cc->m_n2c)
			return 0x15c;
		if (sub_10014df8(0x7c))
			return 0x15e;
		if (sub_10014df8(0x79))
			return 0x15c;
		if (sub_10014df8(0x7a))
			return 0x15a;
		if (sub_10014df8(0x59))
			return 0x15d;
	}
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x1036b460 size=0x7c
#include "CNPC_VChangBros.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10630f54[];
extern char g_106b8540[];
int CNPC_VChangBros::vfunc440(int schedule)
{
    g_109f3620[*g_109f3680].a = g_10630f54;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (schedule != 0x17) {
        int r = CNPC_VHuman::vfunc440(schedule);
        --*g_109f3680;
        return r;
    }
    --*g_109f3680;
    return 0x15d;
}
// END FUNCTION

// FUNCTION: 0x1036b500 size=0x68
#include "CNPC_VChangBros.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VChangBros::vfunc461()
{
	g_109f3620[*g_109f3680].a = "CNPC_VChangBros::SelectIdealState";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	*(int *)((char *)this + 0x1b38) = 10;
	int result = sub_10011225();
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x1036b590 size=0xd7
#include "CNPC_VChangBros.h"
#include "ScopeTrace.h"
struct CUnk10924a6c { virtual void vf0(); virtual int vf1(); };
extern CUnk10924a6c *g_10924a6c;
struct CChangBrosUnit : CNPC_VChangBros { bool sub_1036cab0(); void sub_102b27f0(); };
// TARGET: CNPC_VChangBros::vfunc433
void CNPC_VChangBros::vfunc433()
{
	ScopeTrace trace("CNPC_VChangBros::GatherConditions", g_106b8540);
	((CChangBrosUnit *)this)->sub_102b27f0();
	sub_1036d600();
	sub_10269b50(0x79);
	sub_10269b50(0x7c);
	if (sub_1036c8d0()) {
		g_10924a6c->vf1();
		sub_10269a20(0x79);
	}
	if (((CChangBrosUnit *)this)->sub_1036cab0()) {
		g_10924a6c->vf1();
		sub_10269a20(0x7a);
	}
	if (sub_1036cbd0()) {
		g_10924a6c->vf1();
		sub_10269a20(0x7c);
	}
}
// END FUNCTION

// FUNCTION: 0x1036c6a0 size=0x5
#include "CNPC_VChangBros.h"
bool CNPC_VChangBros::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1036c6c0 size=0x72
#include "CNPC_VChangBros.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern float g_104ad9f0;

void CNPC_VChangBros::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VChangBros::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	*(float *)((char *)this + 0x17c) = g_104ad9f0 + gpGlobals->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1036c760 size=0x64
#include "CNPC_VChangBros.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10631094[];
extern char g_106b8540[];

// TARGET: CNPC_VChangBros::vfunc619
void CNPC_VChangBros::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_10631094;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1036d1d0 size=0x78
#include "CNPC_VChangBros.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VChangBros::vfunc448(int code)
{
    g_109f3620[*g_109f3680].name = "CNPC_VChangBros::TaskFail";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    if (code >= 12 && code <= 15)
        *(int *)((char *)this + 0x5c54) = 0x15d;
    sub_100054bb(code);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1036e6f0 size=0xea
#include "ScopeTrace.h"
#include "CNPC_VChangBros.h"
#include "CBasePlayer.h"
extern char g_106313e8[];
extern char g_10538764[];
extern char g_1055e9bc[];
bool CNPC_VChangBros::vfunc530(CBaseEntity *pOther)
{
	ScopeTrace trace(g_106313e8, g_106b8540);
	CNPC_VChangBros *pPlayer = (CNPC_VChangBros *)__RTDynamicCast(pOther, 0, g_10538764, g_1055e9bc, 0);
	if (pPlayer) {
		int a = sub_1036e580((int)vfunc217());
		int b = sub_1036e580((int)pPlayer->vfunc217());
		if ((b == 3 && sub_1000e93f(a)) || (sub_1000e93f(b) && a == 3))
			return true;
	}
	return sub_102741e0(pOther);
}
// END FUNCTION
