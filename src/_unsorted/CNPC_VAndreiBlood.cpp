// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035c230 size=0x6
#include "CNPC_VAndreiBlood.h"
namespace lifted {
extern char g_1093a420;
}
CAI_CondOwner * CNPC_VAndreiBlood::vfunc580()
{
    return (CAI_CondOwner *)((int)&lifted::g_1093a420);
}
// END FUNCTION

// FUNCTION: 0x1035c250 size=0x6
#include "CNPC_VAndreiBlood.h"
namespace lifted {
extern int g_1062a460;
}
const char * CNPC_VAndreiBlood::vfunc451()
{
    return (const char *)lifted::g_1062a460;
}
// END FUNCTION

// FUNCTION: 0x1035c270 size=0x1e
#include "CNPC_VAndreiBlood.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VAndreiBlood::vfunc5
CAI_BaseNPC *CNPC_VAndreiBlood::vfunc5(unsigned int flags)
{
	sub_10004110();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1035c2a0 size=0x6
extern void *g_1062a230;

void *sub_1035c2a0(void)
{
    return &g_1062a230;
}
// END FUNCTION

// FUNCTION: 0x1035c400 size=0x6
extern char g_1062a458;

char sub_1035c400(void)
{
    return g_1062a458;
}
// END FUNCTION

// FUNCTION: 0x1035c460 size=0x1d
#include "CNPC_VAndreiBlood.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a470;
extern B g_10936c74;
int CNPC_VAndreiBlood::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a470.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035cb90 size=0x6f
#include "CNPC_VAndreiBlood.h"

struct ISoundSink { virtual void PrecacheSound(const char *s, int n); };
extern ISoundSink *g_1070b248;

void CNPC_VAndreiBlood::vfunc104()
{
    CNPC_VHuman::vfunc104();
    g_1070b248->PrecacheSound("Character/Boss/Andrei/TeleportOut.wav", 0);
    g_1070b248->PrecacheSound("Character/Boss/Andrei/TeleportIn.wav", 0);
    g_1070b248->PrecacheSound("Character/Boss/Andrei/Summon.wav", 0);
    engine->vfunc17("Andrei_Teleport_Out-Emitter", 1);
    engine->vfunc17("Andrei_Teleport_In-Emitter", 1);
    engine->vfunc17("Andrei_Summon-Emitter", 1);
}
// END FUNCTION

// FUNCTION: 0x1035cc20 size=0xb0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAndreiBlood.h"
#include "ScopeTrace.h"


void CNPC_VAndreiBlood::vfunc103()
{
	ScopeTrace trace("CNPC_VAndreiBlood::Spawn", g_106b8540);
	sub_1026dc00(0x200000);
	sub_103c4ef0();
	m_n66b8 = 0;
	m_n66bc = 0;
	m_b66cc = 0;
	m_b66cd = 0;
	m_b66ce = 0;
	m_f66d0 = gpGlobals->curtime;
	m_b66d4 = 1;
	m_n66d8 = 0;
	sub_1035e950();
}
// END FUNCTION

// FUNCTION: 0x1035cec0 size=0x81
#include "CNPC_VAndreiBlood.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern int g_1070d1b0[3];

void CNPC_VAndreiBlood::vfunc420()
{
    g_109f3620[*g_109f3680].name = "CNPC_VAndreiBlood::NPCInit";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    sub_103c5840();
    int *pDest = (int *)((char *)this + 0x66c0);
    pDest[0] = g_1070d1b0[0];
    pDest[1] = g_1070d1b0[1];
    pDest[2] = g_1070d1b0[2];
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1035cf80 size=0x65
#include "CNPC_VAndreiBlood.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062b158[];
extern char g_106b8540[];

// TARGET: CNPC_VAndreiBlood::vfunc127
int CNPC_VAndreiBlood::vfunc127(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062b158;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_1000b28f(arg);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1035d010 size=0xda
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VAndreiBlood.h"

int CNPC_VAndreiBlood::vfunc438()
{
	ScopeTrace trace("CNPC_VAndreiBlood::SelectSchedule", g_106b8540);
	*(int *)((char *)this + 0x1b2c) = 4;
	if (!*((char *)this + 0x66cc))
		return 0x15b;
	if (*((char *)this + 0x66cd))
		return 0x15e;
	if (!*((char *)this + 0x66d4) && *(int *)((char *)this + 0x66d8) < *(int *)((char *)this + 0x66dc)) {
		if (sub_1035e920())
			return 0x15d;
		return 0x15c;
	}
	return 0x15a;
}
// END FUNCTION

// FUNCTION: 0x1035d130 size=0x5
#include "CNPC_VAndreiBlood.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VAndreiBlood::vfunc440
// the game's 0x1035d130: a tail call (jmp) of CNPC_VHuman::vfunc440
int CNPC_VAndreiBlood::vfunc440(int a0)
{
	return CNPC_VHuman::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x1035d150 size=0x19
#include "CNPC_VAndreiBlood.h"

// TARGET: CNPC_VAndreiBlood::vfunc461
int CNPC_VAndreiBlood::vfunc461()
{
	int n = m_b66cc != 0;
	m_n1b38 = 4;
	return n + 1;
}
// END FUNCTION

// FUNCTION: 0x1035d180 size=0x13
#include "CNPC_VAndreiBlood.h"
void CNPC_VAndreiBlood::vfunc433()
{
	sub_102b27f0();
	sub_10015839(0x79);
}
// END FUNCTION

// FUNCTION: 0x1035d8b0 size=0x1cc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAndreiBlood.h"
#include "ScopeTrace.h"

void CNPC_VAndreiBlood::vfunc444(const void *pTask)
{
	ScopeTrace trace("CNPC_VAndreiBlood::RunTask", g_106b8540);
	switch (*(const int *)pTask) {
	case 0x150:
		sub_1035e5f0();
		return;
	case 0x151:
		if (*(float *)((char *)this + 0x6f8) >= 0.5f)
			*(int *)((char *)this + 0x1fc) = 0;
		if (vfunc251()) {
			sub_10273e80(0);
			return;
		}
		break;
	case 0x152:
		if (m_b66ce) {
			vfunc67();
			m_b66ce = 0;
			*(int *)((char *)this + 0x1fc) = 2;
			m_n66d8 = 0;
			m_b66d4 = 0;
		}
		sub_1035e5f0();
		if (vfunc251()) {
			sub_10273e80(0);
			return;
		}
		break;
	case 0x154:
		if (vfunc251()) {
			m_b66d4 = 1;
			sub_10273e80(0);
			return;
		}
		break;
	case 0x156:
		if (m_b66d4 || m_n66d8 >= m_n66dc || gpGlobals->curtime - m_f66d0 >= 5.0f) {
			sub_10273e80(0);
			return;
		}
		break;
	default:
		sub_103c5f40(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1035db00 size=0x5
#include "CNPC_VAndreiBlood.h"
bool CNPC_VAndreiBlood::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1035db20 size=0x5a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VAndreiBlood.h"
#include "CNPC_VVampireBoss.h"

void CNPC_VAndreiBlood::vfunc431()
{
    g_109f3620[*g_109f3680].name = "CNPC_VAndreiBlood::NPCThink";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].line = g_106b8540;
    (*g_109f3680)++;
    ((CNPC_VVampireBoss *)this)->vfunc431();
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1035dba0 size=0x64
#include "CNPC_VAndreiBlood.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062b244[];
extern char g_106b8540[];

// TARGET: CNPC_VAndreiBlood::vfunc619
void CNPC_VAndreiBlood::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062b244;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1035e6d0 size=0x1c4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CNPC_VAndreiBlood.h"
#include "ScopeTrace.h"
#include "CVDmg_t.h"
#include "CVStatList_t.h"

struct CAndreiDamageInfo
{
	CVDmg_t *m_pDmg;
	char m_pad0004[0x30 - 4];
	float m_flDamage;
	char m_pad0034[0x4c - 0x34];
};

int CNPC_VAndreiBlood::vfunc390(void *pInfo)
{
	ScopeTrace trace("CNPC_VAndreiBlood::OnTakeDamage_Alive", g_106b8540);
	CAndreiDamageInfo info = *(CAndreiDamageInfo *)pInfo;
	float flDamage;
	if (info.m_pDmg)
		flDamage = (float)info.m_pDmg->sub_101faa70();
	else
		flDamage = info.m_flDamage;
	int nMax = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
	int nCur = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
	if (m_b66cc) {
		m_n66d8++;
		if ((float)nCur + flDamage >= (float)nMax)
			m_b66cd = 1;
		else
			goto skip;
	}
	info.m_flDamage = 0;
	if (info.m_pDmg) {
		info.m_pDmg->m_field04 = 0;
		info.m_pDmg->m_field0c = 0;
	}
skip:
	return sub_10001b45(&info);
}
// END FUNCTION

// FUNCTION: 0x1035e980 size=0xab
#include "CNPC_VAndreiBlood.h"
#include "CEHandleGet.h"

struct AndreiView
{
	char pad0[0x5b64];
	unsigned int m_flags5b64;
	char pad1[0x5cc0 - 0x5b68];
	int m_state5cc0;
	int m_state5cc4;
	char pad2[0x628c - 0x5cc8];
	unsigned int m_hTarget628c;
	char pad3[0x66cc - 0x6290];
	char m_bCombat66cc;
};

void CNPC_VAndreiBlood::vfunc432(int arg)
{
	AndreiView *v = (AndreiView *)this;
	if (!v->m_bCombat66cc) {
		v->m_state5cc0 = 1;
		v->m_state5cc4 = 1;
		CGlobalEntityList_Ent *pTarget = EHandle_Get(v->m_hTarget628c);
		if (pTarget) {
			if (vfunc404((CBaseEntity *)pTarget) != 4)
				sub_10332aa0(1, 4, 10);
		}
		v->m_flags5b64 &= 0xfffffffb;
	} else {
		v->m_state5cc0 = 2;
		v->m_state5cc4 = 2;
	}
	sub_10385a10(arg);
}
// END FUNCTION
