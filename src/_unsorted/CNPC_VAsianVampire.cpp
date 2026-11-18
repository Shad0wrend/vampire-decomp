// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103603d0 size=0x6
#include "CNPC_VAsianVampire.h"
namespace lifted {
extern char g_1093a530;
}
int CNPC_VAsianVampire::vfunc580()
{
    return (int)&lifted::g_1093a530;
}
// END FUNCTION

// FUNCTION: 0x103603f0 size=0x6
#include "CNPC_VAsianVampire.h"
namespace lifted {
extern int g_1062c5ec;
}
int CNPC_VAsianVampire::vfunc451()
{
    return lifted::g_1062c5ec;
}
// END FUNCTION

// FUNCTION: 0x10360410 size=0x2b
#include "CNPC_VAsianVampire.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_100123af();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CNPC_VAsianVampire::vfunc5
CNPC_VAsianVampire *CNPC_VAsianVampire::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x6664))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10360450 size=0x6
#include "datamap.h"
#include "CNPC_VAsianVampire.h"
namespace lifted {
extern char g_1062c498;
}
datamap_t *CNPC_VAsianVampire::vfunc82()
{
    return (datamap_t *)&lifted::g_1062c498;
}
// END FUNCTION

// FUNCTION: 0x103605b0 size=0x6
extern char g_1062c5e4;
// TARGET: sub_103605b0
char sub_103605b0() { return g_1062c5e4; }
// END FUNCTION

// FUNCTION: 0x10360610 size=0x1d
#include "CNPC_VAsianVampire.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a578;
extern B g_10936c74;
int CNPC_VAsianVampire::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a578.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10360bc0 size=0x6a
#include "CNPC_VAsianVampire.h"
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
void sub_101d0ec0(const char *name);

void CNPC_VAsianVampire::sub_10360bc0()
{
    ScopeTrace trace("CNPC_VAsianVampire::Precache", g_106b8540, g_106b8540);
    sub_10384670();
    sub_101d0ec0("item_w_avamp_blade");
}
// END FUNCTION

// FUNCTION: 0x10360c50 size=0x6d
#include "CNPC_VAsianVampire.h"
struct ScopeTraceEntry { const char *m_pFunction; const char *m_pEntity; const char *m_pExtra; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void CNPC_VAsianVampire::vfunc103()
{
	g_109f3620[*g_109f3680].m_pFunction = "CNPC_VAsianVampire::Spawn";
	g_109f3620[*g_109f3680].m_pEntity = "";
	g_109f3620[*g_109f3680].m_pExtra = "";
	++*g_109f3680;
	sub_10012855(0x201000);
	sub_10014876();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10360ce0 size=0xea
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "ScopeTrace.h"
#define AV(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define AV100(p) AV(p##0) AV(p##1) AV(p##2) AV(p##3) AV(p##4) AV(p##5) AV(p##6) AV(p##7) AV(p##8) AV(p##9)
struct OriginSlots
{
    AV100(a0) AV100(a1) AV(a20)
    virtual void b210(); virtual void b211(); virtual void b212(); virtual void b213(); virtual void b214(); virtual void b215(); virtual void b216();
    virtual StoredHintPos_t *vfunc217();
};
extern char g_1062cc6c[];
extern float g_104a9300;
void CNPC_VAsianVampire::vfunc420()
{
    ScopeTrace t(g_1062cc6c, g_106b8540);
    sub_10013e85();
    for (int i = 0; i < 2; i++)
        m_storedHints[i] = *((OriginSlots *)this)->vfunc217();
    m_nNextStoredHint = 0;
    *(int *)((char *)this + 0x5ddc) = 0;
    m_bTaskFailedJump = 0;
    m_flStationaryTime = gpGlobals->curtime;
    *(StoredHintPos_t *)((char *)this + 0x66dc) = *((OriginSlots *)this)->vfunc217();
    *((char *)this + 0x66e8) = 1;
    float flTime = g_104a9300;
    m_flRestoredTime = flTime;
}
// END FUNCTION

// FUNCTION: 0x10360e10 size=0x75
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "ScopeTrace.h"
extern float g_104a9300;
int CNPC_VAsianVampire::vfunc127(void *pRestore)
{
    ScopeTrace scope("CNPC_VAsianVampire::restore", g_106b8540);
    int status = sub_1000b28f(pRestore);
    float f = g_104a9300;
    m_flRestoredTime = f * 1.0f;
    return status;
}
// END FUNCTION

// FUNCTION: 0x10360eb0 size=0x146
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

struct CGameSys1093a594
{
	virtual void v0();
	virtual char v1();
	char pad[0x2c - 4];
	int m2c;
};
extern CGameSys1093a594 *g_1093a594;

int CNPC_VAsianVampire::vfunc438()
{
	ScopeTrace trace("CNPC_VAsianVampire::SelectSchedule", g_106b8540);
	m_n1b2c = 6;
	CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hJumpTarget);
	if (pEnt != 0 && ((CEntityVSlots *)this)->slot404(pEnt) != 1)
		return sub_10015ad2();
	if (!g_1093a594->v1() && g_1093a594->m2c != 0)
		return 0x15a;
	if (m_bTaskFailedJump) {
		if (m_b6078 != 0) {
			CEntityVSlots *p = (CEntityVSlots *)this;
			p->slot601(p->slot167());
			return 0x15c;
		}
		return sub_10362430();
	}
	if (sub_10362670() || sub_1000fe3e())
		return sub_10362430();
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x103610f0 size=0x5
#include "CNPC_VAsianVampire.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VAsianVampire::vfunc433
// the game's 0x103610f0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc433
void CNPC_VAsianVampire::vfunc433()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc433();
}
// END FUNCTION

// FUNCTION: 0x10361110 size=0x6f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VAsianVampire.h"

void CNPC_VAsianVampire::vfunc432(int arg)
{
	ScopeTrace trace("CNPC_VAsianVampire::RunAI", g_106b8540);
	sub_10005673();
	sub_1000698d(arg);
}
// END FUNCTION

// FUNCTION: 0x103612e0 size=0x139
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

// TARGET: CNPC_VAsianVampire::vfunc444
void CNPC_VAsianVampire::vfunc444(const CVAsianVampireTask_t *pTask)
{
    ScopeTrace trace("CNPC_VAsianVampire::RunTask", g_106b8540);
    switch (pTask->iTask) {
    case 0x150:
        sub_10005d17(m_pHint5ddc);
        m_bTaskFailedJump = 0;
        sub_1000ac68(0);
        return;
    case 0x13a: {
        sub_10004edf(pTask);
        if (m_nIdealActivity != 0x2d) {
            Vector vec = *((CEntityVSlots *)this)->slot198();
            if (vec.z <= 250.0f) {
                sub_10014524(0x2d);
                return;
            }
        }
        break;
    }
    default:
        sub_10004edf(pTask);
        break;
    case 0x151:
    case 0x152:
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x10361470 size=0x5
#include "CNPC_VAsianVampire.h"
bool CNPC_VAsianVampire::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10361490 size=0x72
#include "CNPC_VAsianVampire.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern float g_104a9304;

void CNPC_VAsianVampire::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	m_flNextThink = g_104a9304 + gpGlobals->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10361530 size=0x64
#include "CNPC_VAsianVampire.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062cdd8[];
extern char g_106b8540[];

// TARGET: CNPC_VAsianVampire::vfunc619
void CNPC_VAsianVampire::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062cdd8;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10362390 size=0x75
#include "CNPC_VAsianVampire.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VAsianVampire::vfunc448(int code)
{
    g_109f3620[*g_109f3680].name = "CNPC_VAsianVampire::TaskFail";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    if (code >= 12 && code <= 15)
        m_bTaskFailedJump = 1;
    sub_100054bb(code);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10362910 size=0x83
#include "CNPC_VAsianVampire.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CNPC_VAsianVampire::vfunc440(int schedule)
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::TranslateSchedule";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (schedule >= 0xe5 && schedule <= 0xe6) {
		int r = sub_10362430();
		(*g_109f3680)--;
		return r;
	}
	int r = sub_10005e20(schedule);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION
