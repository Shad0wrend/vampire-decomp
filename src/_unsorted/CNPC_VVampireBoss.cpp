// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035c190 size=0x5
#include "CNPC_VVampireBoss.h"
bool CNPC_VVampireBoss::vfunc378(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1035c1b0 size=0x6
#include "CNPC_VVampireBoss.h"
namespace lifted {
extern char g_1093d330;
}
int CNPC_VVampireBoss::vfunc580()
{
    return (int)&lifted::g_1093d330;
}
// END FUNCTION

// FUNCTION: 0x1035c1d0 size=0x6
#include "CNPC_VVampireBoss.h"
namespace lifted {
extern int g_1065e6cc;
}
int CNPC_VVampireBoss::vfunc451()
{
    return lifted::g_1065e6cc;
}
// END FUNCTION

// FUNCTION: 0x1035c1f0 size=0x2b
#include "CNPC_VVampireBoss.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_100123af();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CNPC_VVampireBoss::vfunc5
CNPC_VVampireBoss *CNPC_VVampireBoss::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x6664))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103c5060 size=0x6
#include "CNPC_VVampireBoss.h"
#include "datamap.h"
namespace lifted {
extern char g_1065e418;
}
datamap_t *CNPC_VVampireBoss::vfunc82()
{
    return (datamap_t *)&lifted::g_1065e418;
}
// END FUNCTION

// FUNCTION: 0x103c5210 size=0x6
extern char g_1065e6c4;
// TARGET: sub_103c5210
char sub_103c5210() { return g_1065e6c4; }
// END FUNCTION

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

// FUNCTION: 0x103c5840 size=0x91
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VVampireBoss.h"
#include "ScopeTrace.h"

void CNPC_VVampireBoss::vfunc420()
{
	ScopeTrace trace("CNPC_VVampireBoss::NPCInit", g_106b8540);
	sub_1000c531();
	m_pMonsterModelName = 0;
	sub_103c6eb0();
	m_pDefaultNPCName = "npc_VVampireBoss";
	m_bFlag6498 = 0;
	sub_10014c22();
	m_f64b8 = 1.0f;
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

// FUNCTION: 0x103c5f40 size=0x7b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VVampireBoss.h"
#include "ScopeTrace.h"
void CNPC_VVampireBoss::vfunc444(int *pTask)
{
	ScopeTrace trace("CNPC_VVampireBoss::RunTask", g_106b8540);
	if (*pTask != 0x14d)
		sub_10011928(pTask);
	else
		sub_10011851();
}
// END FUNCTION

// FUNCTION: 0x103c5fe0 size=0xe
#include "CNPC_VVampireBoss.h"
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
extern float g_104ce8b8;

void CNPC_VVampireBoss::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VVampireBoss::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_10002a7c();
	m_flNextThink = g_104ce8b8 + gpGlobals->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103c75f0 size=0x87
#include "inputdata_t.h"
#include "CNPC_VVampireBoss.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_1065e8dc[];

void CNPC_VVampireBoss::vfunc617(inputdata_t *pInput)
{
	g_109f3620[*g_109f3680].a = "CNPC_VVampireBoss::InputTransformModel";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	*(const char * volatile *)((char *)this + 0x6694) = g_1065e8dc;
	const char *model = *(const char * volatile *)((char *)this + 0x667c);
	if (model == 0)
		model = g_106b8540;
	if (*model != 0) {
		m_pMonsterModelName = model;
		sub_102ae750(0x159, 0);
	}
	(*g_109f3680)--;
}
// END FUNCTION
