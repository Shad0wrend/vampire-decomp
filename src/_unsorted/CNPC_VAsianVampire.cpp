// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x10361490 size=0x72
#include "CNPC_VAsianVampire.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct CGlobalVarsStub {
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsStub *g_1070b228;
extern float g_104a9304;

void CNPC_VAsianVampire::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VAsianVampire::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	m_flNextThink = g_104a9304 + g_1070b228->curtime;
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
