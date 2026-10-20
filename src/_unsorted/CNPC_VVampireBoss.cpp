// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c5270 size=0x1d
#include "CNPC_VVampireBoss.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d30c;
extern B g_10936c74;
int CNPC_VVampireBoss::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d30c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103c5910 size=0x8c
#include "CNPC_VVampireBoss.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VVampireBoss::vfunc127(int a)
{
	g_109f3620[*g_109f3680].a = "CNPC_VVampireBoss::Restore";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_1000527c(a);
	m_pMonsterModelName = 0;
	sub_103c6eb0();
	m_pDefaultNPCName = "npc_VVampireBoss";
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103c5fe0 size=0xe
bool CNPC_VVampireBoss::vfunc525(int unused)
{
	return m_bFlag6498 ? true : false;
}
// END FUNCTION

// FUNCTION: 0x103c6000 size=0x72
#include "CNPC_VVampireBoss.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct CGlobalVarsStub {
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsStub *g_1070b228;
extern float g_104ce8b8;

void CNPC_VVampireBoss::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VVampireBoss::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_10002a7c();
	m_flNextThink = g_104ce8b8 + g_1070b228->curtime;
	(*g_109f3680)--;
}
// END FUNCTION
