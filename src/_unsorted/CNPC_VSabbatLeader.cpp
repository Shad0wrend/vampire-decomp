// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a5b50 size=0x6
#include "CNPC_VSabbatLeader.h"
namespace lifted {
extern char g_1064c4a8;
}
datamap_t *CNPC_VSabbatLeader::vfunc82()
{
    return (datamap_t *)&lifted::g_1064c4a8;
}
// END FUNCTION

// FUNCTION: 0x103a5c80 size=0x3
#include "CNPC_VSabbatLeader.h"
bool CNPC_VSabbatLeader::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103a5ca0 size=0x6
#include "CNPC_VSabbatLeader.h"
namespace lifted {
extern char g_1093c3f0;
}
int CNPC_VSabbatLeader::vfunc580()
{
    return (int)&lifted::g_1093c3f0;
}
// END FUNCTION

// FUNCTION: 0x103a5cc0 size=0x6
#include "CNPC_VSabbatLeader.h"
namespace lifted {
extern int g_1064c7b4;
}
int CNPC_VSabbatLeader::vfunc451()
{
    return lifted::g_1064c7b4;
}
// END FUNCTION

// FUNCTION: 0x103a5df0 size=0x6
extern char g_1064c7ac;
// TARGET: sub_103a5df0
char sub_103a5df0() { return g_1064c7ac; }
// END FUNCTION

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

// FUNCTION: 0x103a6c80 size=0x81
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"

void CNPC_VSabbatLeader::vfunc103()
{
	ScopeTrace trace("CNPC_VSabbatLeader::Spawn", g_106b8540);
	sub_10012855(0x209000);
	m_pszName10e4 = "VampireSabbatLeader"[0] ? "VampireSabbatLeader" : 0;
	sub_10014876();
}
// END FUNCTION

// FUNCTION: 0x103a6d40 size=0xf2
#include "ScopeTrace.h"
#include "CNPC_VSabbatLeader.h"

struct CGlobalVarsX { char pad[0xc]; int curtimeBits; };
extern CGlobalVarsX *g_1070b228;
extern char g_1064ccb4[];

void CNPC_VSabbatLeader::vfunc420()
{
	ScopeTrace trace("CNPC_VSabbatLeader::NPCInit", g_106b8540);
	sub_10013e85();
	*(int *)((char *)this + 0x66bc) = 0;
	*(int *)((char *)this + 0x66c0) = 0;
	*(char *)((char *)this + 0x66b8) = 0;
	long now = g_1070b228->curtimeBits;
	*(int *)((char *)this + 0x5d9c) = now;
	*(const char **)(0x6680 + (char *)this) = "models/character/monster/Andrei/andrei.mdl";
	*(char **)((char *)this + 0x6694) = g_1064ccb4;
	sub_10010fd7(0, "Andrei_powerup_emitter");
	sub_10010fd7(1, "Andrei_powerup_emitter");
	*(int *)((char *)this + 0x66c4) = 0;
	*(int *)((char *)this + 0x66c8) = 0;
	sub_103aaa80();
	*(char *)((char *)this + 0x66d4) = 0;
	*(char *)((char *)this + 0x66d5) = 0;
	*(char *)((char *)this + 0x66d6) = 0;
	*(char *)((char *)this + 0x66e4) = 0;
	*(int *)((char *)this + 0x66d8) = 0;
	*(int *)((char *)this + 0x66e0) = 3;
	*(char *)((char *)this + 0x66e5) = 0;
}
// END FUNCTION

// FUNCTION: 0x103a6e80 size=0x47
#include "CNPC_VSabbatLeader.h"
int CNPC_VSabbatLeader::vfunc127(int a)
{
    int result = sub_1000b28f(a);
    m_pMonsterModelName = "models/character/monster/Andrei/andrei.mdl";
    m_pDefaultNPCName = "npc_VSabbatLeader";
    sub_10010fd7(0, "Andrei_powerup_emitter");
    sub_10010fd7(1, "Andrei_powerup_emitter");
    return result;
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

// FUNCTION: 0x103a70c0 size=0x234
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"
#include "ConVar.h"
#include "CEntityVSlots.h"
#include "CUnknown100290c0.h"
#include "CEHandleGet.h"

extern ConVar g_1093c2b0;
extern ConVar g_1093c390;
extern ConVar g_1093c2f8;

// TARGET: CNPC_VSabbatLeader::vfunc438
int CNPC_VSabbatLeader::vfunc438()
{
	ScopeTrace trace("CNPC_VSabbatLeader::SelectSchedule", g_106b8540);
	m_n1b2c = 0x1f;
	if (m_nState5cc0 == 5)
		return 0x158;
	if (g_1093c2b0.GetBool()) {
		g_1093c2b0.sub_10246160(0);
		CEntityVSlots *pPlayer = (CEntityVSlots *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_hPlayer);
		if (pPlayer) {
			Vector vecPos = *pPlayer->slot217();
			vecPos.x += 20.0f;
			((CEntityVSlots *)this)->slot216(&vecPos);
		}
	}
	sub_103ab580();
	if (m_n66e0 <= 0) {
		m_n66e0 = 3;
		return 0x165;
	}
	if (m_b66b8) {
		if (g_1093c390.GetBool())
			return 0x15b;
		if (m_b66b8) {
			if (g_1093c2f8.GetBool())
				return 0x166;
			if (m_b66b8) {
				if (sub_10269aa0(0x79)) {
					if (m_b66e5) {
						if (enginerandom->vfunc2(0, 1) != 0)
							return 0x15b;
						return 0x164;
					}
					switch (enginerandom->vfunc2(0, 2)) {
					case 0:
						return 0x164;
					case 1:
						return 0x15b;
					default:
						return 0x166;
					}
				}
			}
		}
	}
	return sub_10015ad2();
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

// FUNCTION: 0x103a7450 size=0x113
#include "CNPC_VSabbatLeader.h"
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;
extern char g_1064ec58[];

int CNPC_VSabbatLeader::vfunc461()
{
    ScopeTrace trace(g_1064ec58, g_106b8540);
    CAI_BaseNPC *pNPC = (CAI_BaseNPC *)this;
    CGlobalEntityList_Slot *pSlot;
    unsigned int h;
    m_n1b38 = 0x1f;
    if (m_b66b8) {
        if (m_nState5cc0 != 2) {
            if (pNPC->vfunc167() != 0)
                goto set2;
            h = m_hPlayer;
            if (h != 0xffffffff) {
                pSlot = &g_10566458->m_Slots[h & 0x1fff];
                if (pSlot->m_Serial == (h >> 13) && pSlot->m_pEntity != 0) {
                    pNPC->sub_10279a50((int)pSlot->m_pEntity);
set2:
                    m_nState5cc4 = 2;
                    goto done;
                }
            }
        } else {
            h = m_hPlayer;
            if (h != 0xffffffff) {
                pSlot = &g_10566458->m_Slots[h & 0x1fff];
                if (pSlot->m_Serial == (h >> 13) && pSlot->m_pEntity != 0)
                    goto done;
            }
        }
    }
    m_nState5cc4 = 1;
done:
    return m_nState5cc4;
}
// END FUNCTION

// FUNCTION: 0x103a75c0 size=0x6f
#include "CNPC_VSabbatLeader.h"
extern int *g_109f3680;
struct TraceEntryX { const char *a; const char *b; const char *c; };
extern TraceEntryX *g_109f3620;
extern char g_106b8540[];
extern const char g_1064ec84[];

// TARGET: CNPC_VSabbatLeader::vfunc432
void CNPC_VSabbatLeader::vfunc432(int arg)
{
    g_109f3620[*g_109f3680].a = g_1064ec84;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    sub_1000698d(arg);
    sub_103aa960();
    (*g_109f3680)--;
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

// FUNCTION: 0x103a77f0 size=0x98
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"

struct SabbatJumpHook {
	virtual void vfunc0();
	virtual void vfunc1();
};
extern SabbatJumpHook *g_10924a6c;

void CNPC_VSabbatLeader::vfunc433()
{
	ScopeTrace trace("CNPC_VSabbatLeader::GatherConditions", g_106b8540);
	sub_102b27f0();
	if (sub_103a9d90()) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x79);
	}
	sub_10269b50(0xf);
	sub_10269b50(0xc);
	sub_10269b50(0xe);
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

// FUNCTION: 0x103aa510 size=0x96
#include "CNPC_VSabbatLeader.h"
#include "CEntityVSlots.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = name;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

int CNPC_VSabbatLeader::sub_103aa510()
{
	CScopeTrace trace("CNPC_VSabbatLeader::PreSelectSchedule", g_106b8540);
	m_n1b2c = 0x1f;
	if (m_nState5cc0 == 2) {
		if (!((CEntityVSlots *)this)->slot167()) {
			m_nState5cc0 = 1;
			m_nState5cc4 = 1;
		}
	}
	return sub_102ae920();
}
// END FUNCTION

// FUNCTION: 0x103aa5e0 size=0x15c
#include "CNPC_VSabbatLeader.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "ScopeTrace.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1064c480[];

// TARGET: CNPC_VSabbatLeader::vfunc620
void CNPC_VSabbatLeader::vfunc620()
{
	ScopeTrace trace("CNPC_VSabbatLeader::FootstepSound", g_106b8540);
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = m_nEdict2e0;
	int index = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, index, 4, g_1064c480[g_1070b244->vfunc2(0, 6)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103aa7a0 size=0x15c
#include "CNPC_VSabbatLeader.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "ScopeTrace.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1064c49c[];

// TARGET: CNPC_VSabbatLeader::vfunc621
void CNPC_VSabbatLeader::vfunc621()
{
	ScopeTrace trace("CNPC_VSabbatLeader::AttackSound", g_106b8540);
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = m_nEdict2e0;
	int index = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, index, 4, g_1064c49c[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
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

// FUNCTION: 0x103ab310 size=0xb7
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"

void sub_101cf600(CBaseEntity *pEnt);

void CNPC_VSabbatLeader::vfunc618()
{
	ScopeTrace trace("CNPC_VSabbatLeader::TransformationStart", g_106b8540);
	((CBaseEntity *)this)->vfunc105("models/character/npc/unique/hollywood/andrei/andrei_no_mouth.mdl");
	sub_10272650(0x113e);
	m_nEffectFlags |= 0x10;
	m_n168 = 0;
	m_n16c = 0;
	m_n1568 = 0;
	m_n156c = 0;
	sub_10273070(1);
	sub_101cf600((CBaseEntity *)this);
	sub_103c60a0();
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
