// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
