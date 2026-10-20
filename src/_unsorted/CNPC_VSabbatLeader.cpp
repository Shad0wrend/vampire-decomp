// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a5e50 size=0x1d
#include "CNPC_VSabbatLeader.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c3d4;
extern B g_10936c74;
int CNPC_VSabbatLeader::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c3d4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103a6ef0 size=0x5e
#include "CNPC_VSabbatLeader.h"
struct SScope { const char *a; const char *b; const char *c; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
int CNPC_VSabbatLeader::sub_103a6ef0()
{
	g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CNPC_VSabbatLeader::Classify";
	g_ScopeTraceStack[g_ScopeTraceStackDepth].b = g_106b8540;
	g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
	g_ScopeTraceStackDepth++;
	g_ScopeTraceStackDepth--;
	return 0x10;
}
// END FUNCTION

// FUNCTION: 0x103a6f70 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_1064eba8[];
extern char g_106b8540[];

struct TLeader {
	void sub_103a6f70(int a, int b);
	void sub_10011234(int a, int b);
};

void TLeader::sub_103a6f70(int a, int b)
{
	g_109f3620[*g_109f3680].name = g_1064eba8;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	sub_10011234(a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103a7000 size=0x86
#include "CNPC_VSabbatLeader.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct SSabbatSlots
{
	SV100(a0) SV100(a1) SV100(a2) SV100(a3) SV100(a4) SV100(a5)
	SV10(a60) SV10(a61)
	virtual void slot620();
};

struct SAnimEvent { int event; };
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VSabbatLeader::vfunc259(void *pEvent)
{
	g_109f3620[*g_109f3680].a = "CNPC_VSabbatLeader::HandleAnimEvent";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int ev = ((SAnimEvent *)pEvent)->event;
	if (ev >= 0x802 && ev <= 0x803)
		((SSabbatSlots *)this)->slot620();
	else
		sub_100076bc(pEvent);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103a7390 size=0x85
#include "CNPC_VSabbatLeader.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct SHumanBase { int sub_10005e20(int schedule); };

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int CNPC_VSabbatLeader::sub_103a7390(int schedule)
{
    CScopeGuard guard("CNPC_VSabbatLeader::TranslateSchedule");
    if (schedule >= 0xe5 && schedule <= 0xe6)
        return 0x15f;
    return ((SHumanBase *)this)->sub_10005e20(schedule);
}
// END FUNCTION

// FUNCTION: 0x103a76d0 size=0x6f
#include "CNPC_VSabbatLeader.h"

struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];

// TARGET: CNPC_VSabbatLeader::vfunc366
int CNPC_VSabbatLeader::vfunc366(int a, int b, int c)
{
	g_109f3620[*g_109f3680].a = "CNPC_VSabbatLeader::HandleInteraction";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int r = sub_10001b27(a, b, c);
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103a7760 size=0x64
#include "CNPC_VSabbatLeader.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1064ed00[];
extern char g_106b8540[];

// TARGET: CNPC_VSabbatLeader::sub_103a7760
void CNPC_VSabbatLeader::sub_103a7760(int arg)
{
	g_109f3620[*g_109f3680].a = g_1064ed00;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000b8a2(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103a9340 size=0x84
#include "CNPC_VSabbatLeader.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

char CNPC_VSabbatLeader::sub_103a9340(CNPC_VSabbatLeaderHint *pHint)
{
    CScopeGuard guard("CNPC_VSabbatLeader::FValidateHintType");
    if (pHint->m_hintType >= 16000 && pHint->m_hintType <= 16005)
        return 1;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a9fd0 size=0x64
#include "CNPC_VSabbatLeader.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1064efb4[];
extern char g_106b8540[];

// TARGET: CNPC_VSabbatLeader::vfunc619
void CNPC_VSabbatLeader::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1064efb4;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103aa480 size=0x65
#include "CNPC_VSabbatLeader.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1064f044[];
extern char g_106b8540[];

// TARGET: CNPC_VSabbatLeader::sub_103aa480
int CNPC_VSabbatLeader::sub_103aa480(int arg)
{
	g_109f3620[*g_109f3680].a = g_1064f044;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_10001b45(arg);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103ab270 size=0x79
#include "CNPC_VSabbatLeader.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct CUnk10739a4c { void sub_101e3ff0(CNPC_VSabbatLeader *pNPC); };
extern CUnk10739a4c g_10739a4c;

void CNPC_VSabbatLeader::vfunc313()
{
    g_109f3620[*g_109f3680].name = "CNPC_VSabbatLeader::UpdatePresenceEffect";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    g_10739a4c.sub_101e3ff0(this);
    m_nPresence0 = 0;
    m_nPresence2 = 0;
    m_nPresence1 = 0;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103ab400 size=0x78
#include "CNPC_VSabbatLeader.h"
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
char CNPC_VSabbatLeader::vfunc590()
{
    g_109f3620[*g_109f3680].a = "CNPC_VSabbatLeader::OkToInterruptForMelee";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (m_nState != 0x1141) {
        char r = sub_1000ac22();
        --*g_109f3680;
        return r;
    }
    --*g_109f3680;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ab4a0 size=0xa9
#include "CNPC_VSabbatLeader.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct EntSlot { void *pEnt; unsigned int serial; };
struct EntListEntry { int pad; EntSlot s; };
extern EntListEntry *g_10566458;

inline void *HGet(unsigned int h)
{
    if (h != 0xffffffff) {
        EntSlot *p = &g_10566458[h & 0x1fff].s;
        if (p->serial == (h >> 13))
            return p->pEnt;
    }
    return 0;
}

void CNPC_VSabbatLeader::sub_103ab4a0(void *pVictim)
{
    g_109f3620[*g_109f3680].a = "CNPC_VSabbatLeader::OnVictimHitByMe";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (HGet(*(unsigned int *)((char *)this + 0x628c)) == pVictim) {
        int *pCount = (int *)((char *)this + 0x66e0);
        if (--*pCount < 0)
            *pCount = 0;
    }
    (*g_109f3680)--;
}
// END FUNCTION
