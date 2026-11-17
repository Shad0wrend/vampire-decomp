// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c87d0 size=0x6
#include "CNPC_VWerewolf.h"
#include "datamap.h"
namespace lifted {
extern char g_1065f4e0;
}
datamap_t *CNPC_VWerewolf::vfunc82()
{
    return (datamap_t *)&lifted::g_1065f4e0;
}
// END FUNCTION

// FUNCTION: 0x103c8e70 size=0x6
extern unsigned char g_1065f78c;
// TARGET: sub_103c8e70
unsigned char sub_103c8e70()
{
    return g_1065f78c;
}
// END FUNCTION

// FUNCTION: 0x103c8ed0 size=0x1d
#include "CNPC_VWerewolf.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d6d4;
extern B g_10936c74;
int CNPC_VWerewolf::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d6d4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103ca690 size=0x5
#include "CNPC_VWerewolf.h"
bool CNPC_VWerewolf::vfunc618(int a0, int a1, int a2, int a3)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ca6b0 size=0x3
#include "CNPC_VWerewolf.h"
bool CNPC_VWerewolf::vfunc615()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ca6d0 size=0x3
#include "CNPC_VWerewolf.h"
void CNPC_VWerewolf::vfunc316(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x103ca6f0 size=0x5
#include "CNPC_VWerewolf.h"
bool CNPC_VWerewolf::vfunc318(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ca710 size=0x5
#include "CNPC_VWerewolf.h"
bool CNPC_VWerewolf::vfunc319(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ca730 size=0x3
#include "CNPC_VWerewolf.h"
bool CNPC_VWerewolf::vfunc328()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ca750 size=0x6
#include "CNPC_VWerewolf.h"
namespace lifted {
extern char g_1093f9e8;
}
int CNPC_VWerewolf::vfunc580()
{
    return (int)&lifted::g_1093f9e8;
}
// END FUNCTION

// FUNCTION: 0x103ca770 size=0x6
#include "CNPC_VWerewolf.h"
namespace lifted {
extern int g_1065f794;
}
int CNPC_VWerewolf::vfunc451()
{
    return lifted::g_1065f794;
}
// END FUNCTION

// FUNCTION: 0x103ca790 size=0x1e
#include "CNPC_VWerewolf.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VWerewolf::vfunc5
CNPC_VWerewolf *CNPC_VWerewolf::vfunc5(unsigned int flags)
{
	sub_10003648();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103caa30 size=0xd9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VWerewolf.h"

extern char g_106618d8[];

struct CWerewolfCollision { void sub_100ddd90(); };

void CNPC_VWerewolf::vfunc103()
{
	ScopeTrace trace("CNPC_VWerewolf::Spawn", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	*(const char **)((char *)this + 0x10e4) = g_106618d8[0] ? g_106618d8 : 0;
	sub_10298d30();
	sub_100b3580(0x2000);
	*((char *)this + 0x1480) = 1;
	*((char *)this + 0x66a9) = 0;
	*(int *)((char *)this + 0x66ac) = 0;
	*(int *)((char *)this + 0x6680) = 0;
	((CWerewolfCollision *)((char *)this + 0x270))->sub_100ddd90();
	sub_100b3900(4);
	sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x103cab50 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_103cab50(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::GetUsedHullBits";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x1000;
}
// END FUNCTION

// FUNCTION: 0x103cabf0 size=0x18
// TARGET: CNPC_VWerewolf::vfunc130
#include "CNPC_VWerewolf.h"
void CNPC_VWerewolf::vfunc130(int a)
{
    sub_102998c0(a);
    sub_103cac20();
}
// END FUNCTION

// FUNCTION: 0x103caef0 size=0x1f2
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include <math.h>
extern char g_106b8540[];
extern char g_106618d8[];
unsigned int sub_102c6330(int a);

#define F(T, off) (*(T *)((char *)this + off))

struct CObfVal
{
	bool m_a;
	bool m_b;
	unsigned int m_enc;
	CObfVal &operator=(const CObfVal &o) { m_b = o.m_b; m_enc = o.m_enc; m_a = o.m_a; return *this; }
};

// TARGET: CNPC_VWerewolf::vfunc420
void CNPC_VWerewolf::vfunc420()
{
	ScopeTrace trace("CNPC_VWerewolf::NPCInit", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	F(const char *, 0x10e4) = g_106618d8[0] ? g_106618d8 : 0;
	sub_10366270();
	F(const char *, 0x10e4) = g_106618d8[0] ? g_106618d8 : 0;
	sub_10334b10();
	vfunc304();
	sub_10332aa0(1, 1, 10);
	F(int, 0x1fc) = 1;
	F(int, 0x641c) = 0;
	F(int, 0x6348) = 999999;
	F(int, 0x634c) = 999999;
	F(int, 0x6350) = 999999;
	F(int, 0x6354) = 999999;
	F(int, 0x6358) = 999999;
	CObfVal t;
	unsigned int r = sub_102c6330(0);
	t.m_enc = (((r & 0x68d8635) ^ 0xae8746f) + 0xffa91d8 & 0x197279ca) ^ r ^ 0xa641cacd;
	F(CObfVal, 0x6360) = t;
	F(int, 0x6368) = 0;
	F(float, 0x63b4) = 4096.0f;
	F(float, 0x63bc) = 3.0f;
	F(int, 0x5de4) = 0x4e6e6b28;
	F(float, 0x1574) = (float)cos(2.0943951023931953);
	sub_1026a2a0(6000.0f);
	sub_1028fb70();
	F(int, 0x6338) = 3;
	F(int, 0x633c) = 3;
	sub_1026dc00(1);
	sub_1026dc00(0x200000);
	sub_1026dc00(0x8000);
	sub_1026dc00(0x10000);
	F(int, 0x5ddc) = 0;
	F(int, 0x66b0) = 0;
	F(int, 0x66b4) = 0;
	F(int, 0x66bc) = 0;
	F(int, 0x66c0) = 0;
	F(int, 0x66c4) = 0;
	sub_103cac20();
}
// END FUNCTION

// FUNCTION: 0x103cb170 size=0x6f
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc421()
{
    const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::PostNPCInit";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103cb200 size=0x74
#include "CNPC_VWerewolf.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
void __fastcall sub_1028e310(CNPC_VWerewolf *);

void CNPC_VWerewolf::vfunc113()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::Activate";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1028e310(this);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103cb2a0 size=0x12a
#include "CBaseEntity.h"
#include "CNPC_VWerewolf.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern CUnknown1073dc28 g_1073dc28;
extern char g_106618d8[];
extern const char *g_1065f4d0[4];
void sub_101d0f10(const char *pszPath, const char *pszExtension, int a, int b);
void sub_101d0ec0(const char *pszName);

static inline const char *AllocPooledString(const char *pszValue)
{
	return (pszValue && *pszValue) ? pszValue : 0;
}

static inline const char *STRING(const char *pszOffset)
{
	return STRINGR_F(pszOffset);
}

static inline void SetModelName(CNPC_VWerewolf *pNPC, const char *pszName)
{
	*(int *)((char *)pNPC + 0xbc) = 2;
	*(const char **)((char *)pNPC + 0xc0) = pszName;
}

struct ISoundPrecache { virtual int Precache(const char *pszSound, int bPreload); };
extern ISoundPrecache *g_1070b248;

void CNPC_VWerewolf::vfunc104()
{
	ScopeTrace trace("CNPC_VWerewolf::Precache", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	sub_10298ad0();
	sub_101d0f10("sound/Character/Monster/Werewolf", ".wav", 0, 1);
	sub_101d0f10("sound/Area/Special/Observatory", ".wav", 0, 1);
	*(const char **)((char *)this + 0xc0) = *g_106618d8 ? g_106618d8 : 0; *(int *)((char *)this + 0xbc) = 2;
	*(int *)((char *)this + 0xb4) = g_1073dc28.sub_101f55a0((CBaseEntity *)this, STRINGR_F(*(const char **)((char *)this + 0xc0)), 0);
	for (unsigned int i = 0; i < 4; i++)
		g_1070b248->Precache(g_1065f4d0[i], 0);
	sub_101d0ec0("item_w_werewolf_attacks");
	g_1070b248->Precache("dev/ww_tele_out.wav", 0);
	g_1070b248->Precache("dev/ww_tele_in.wav", 0);
}
// END FUNCTION

// FUNCTION: 0x103cb590 size=0x1d8
#include "CNPC_VWerewolf.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "ConVar.h"

extern ConVar *g_1093f73c;
extern ConVar *g_1093f95c;
extern unsigned char g_1092053c;
void sub_103dbad0(CNPC_VWerewolf *p);

inline int WWDevValue(ConVar *const &cv)
{
	if (cv->vfunc1())
		return 0;
	return cv->m_nValue;
}

void CNPC_VWerewolf::vfunc431()
{
	ScopeTrace trace("CNPC_VWerewolf::NPCThink", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (WWDevValue(g_1093f73c)) {
		if ((char)(int)g_1093f73c == -1) { sub_103dbad0(this); } else { sub_103dbad0(this); }
	}
	if (WWDevValue(g_1093f95c)) {
		if ((char)(int)g_1093f95c == -1) { sub_103cb4b0(); } else { sub_103cb4b0(); }
		vfunc614();
		return;
	}
	if (!m_b66a0 || !m_n6720) {
		sub_103d7710();
		sub_103cade0();
		m_b66a0 = 1;
	}
	if (!(g_1092053c & 1)) {
		int f = m_nFlags66e8 & 0x20;
		if ((char)f == 0x20) {
			sub_103d4a60();
		}
		if (vfunc167()) {
			switch (engine->vfunc120() % 5) {
			case 0: sub_103cc0d0(); break;
			case 1: sub_103cc320(); break;
			case 2: sub_103cc890(); break;
			case 3: sub_103cc5c0(); break;
			case 4: sub_103cb920(1); break;
			default: __assume(0);
			}
		}
		if (vfunc167()) {
			vfunc600((int)vfunc167());
		}
		sub_10292de0();
		if (m_b5f2d && vfunc163()) {
			sub_103d93b0();
		}
	}
	vfunc614();
}
// END FUNCTION

// FUNCTION: 0x103cb7f0 size=0xb
#include "CNPC_VWerewolf.h"
struct W {
	char pad[0x6078];
	bool m;
};
bool CNPC_VWerewolf::vfunc600(int unused)
{
	return ((W *)this)->m = true;
}
// END FUNCTION

// FUNCTION: 0x103cb810 size=0xb9
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern unsigned char g_10924fba;
extern unsigned char g_10924fb9;

// TARGET: CNPC_VWerewolf::vfunc201
bool CNPC_VWerewolf::vfunc201(void *pEnt, int traceMask, int *ppBlocker, int d)
{
	ScopeTrace trace("CNPC_VWerewolf::FVisible", this ? (STRINGR_F(m_name26c)) : g_105387dc);

	if (pEnt)
	{
		switch (g_10924fba || (g_10924fb9 && *(int *)((char *)pEnt + 0xa8)))
		{
		case 0:
			return true;
		default:
			if (ppBlocker)
				*ppBlocker = 0;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103cb900 size=0x5
#include "CNPC_VWerewolf.h"
int CNPC_VWerewolf::vfunc619(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103cc9b0 size=0x9b
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_1021fe50(CNPC_VWerewolf *pChar, const char *pszClassname, int flag);

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void CNPC_VWerewolf::sub_103cc9b0()
{
	CScopeTrace trace("CNPC_VWerewolf::GiveBaseFightingItems", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (!sub_10335950("item_w_werewolf_attacks")) {
		sub_1021fe50(this, "item_w_werewolf_attacks", 0);
		sub_1033c6b0(0x10);
	}
}
// END FUNCTION

// FUNCTION: 0x103cca80 size=0x92
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_1021fee0(CNPC_VWerewolf *pChar, const char *pszClassname);

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void CNPC_VWerewolf::sub_103cca80()
{
	CScopeTrace trace("CNPC_VWerewolf::RemoveBaseFightingItems", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (sub_1033c9c0() & 0x10) {
		sub_1021fee0(this, "item_w_werewolf_attacks");
		sub_1033c770(0x10);
	}
}
// END FUNCTION

// FUNCTION: 0x103ccb50 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_103ccb50(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::IsMonster";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x103ccbf0 size=0x96
#include "CNPC_VWerewolf.h"
#include "CUnknown101c2a50.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc141(CUnknown101c2a50 *pInfo, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::TraceAttack";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	pInfo->sub_101c2a50(0);
	sub_10015b13(pInfo, b, c);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103cccc0 size=0xaf
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "CUnknown101c2a50.h"
#include "ScopeTrace.h"

struct CTakeDamageInfoX
{
	int m_data[19];
};

void *__fastcall sub_101c2690(void *pInfo);

// TARGET: CNPC_VWerewolf::vfunc142
int CNPC_VWerewolf::vfunc142(CUnknown101c2a50 *pInfo)
{
	ScopeTrace trace("CNPC_VWerewolf::OnTakeDamage", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CTakeDamageInfoX info;
	sub_101c2690(&info);
	info = *(CTakeDamageInfoX *)pInfo;
	((CUnknown101c2a50 *)&info)->sub_101c2a50(0);
	return sub_102bed30(pInfo);
}
// END FUNCTION

// FUNCTION: 0x103ccda0 size=0xe68
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CLogicAuto.h"
#define vfunc442() vfunc442(CNPC_VWerewolfTask *pTask)
#include "CNPC_VWerewolf.h"
#undef vfunc442
#include "ScopeTrace.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include "globalvars.h"
#include "CCineNPCSlots.h"
#define WWMAX(a,b) (((a) > (b)) ? (a) : (b))
#include <math.h>
extern char g_106b8540[];
extern char g_105387dc[];
extern float g_104454c4;
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

__declspec(dllimport) void DevWarning(const char *fmt, ...);
extern "C" __declspec(dllimport) int RandomInt(int, int);
class CAI_BaseNPCTroika;
float __fastcall sub_10293a80(CAI_BaseNPCTroika *pThis);
void __fastcall sub_102e0b40(float *pInner);

struct CWWDevView2
{
	virtual void v0();
	virtual bool v1();
	char pad[0x24];
	float m_28;
};
extern CWWDevView2 *g_1093d6f4;

struct CWWNamedList
{
	int sub_101d5bd0(const char *pszName);
};
extern CWWNamedList g_10738d10;

struct CWWPlayerView
{
	int sub_10337860();
};

struct CWWEntList
{
	CBaseEntity *sub_100f7770(CBaseEntity *pStart, const char *szName, CBaseEntity *pSearching, CBaseEntity *pActivator);
};
extern CWWEntList g_106eb5d8;
extern char g_10538764[];
extern char g_1060a514[];
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);

struct CWWHelperView
{
	bool sub_102ee2e0();
	void sub_102ee2c0();
	int sub_102ee620();
	bool sub_102ee6a0();
	bool sub_102f2ea0();
	void sub_102ee270();
	void sub_102ee1c0(float f);
	void sub_102f2fe0(int f);
};

struct CWWOutputView
{
	void sub_100cd660(void *pActivator, void *pCaller, int c);
};

struct CWWCollView
{
	char pad[0x44];
	unsigned short m_usSolidFlags;
	void sub_100dc580(int flags);
	void AddSolidFlags(int flags) { sub_100dc580(m_usSolidFlags | flags); }
};

struct CWWEntView
{
	char pad[0x26c];
	const char *m_name26c;
	void AddSolidFlags(int flags)
	{
		ScopeTrace t2("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		((CWWCollView *)((char *)this + 0x270))->AddSolidFlags(flags);
	}
};

struct CWWHintView
{
	float sub_102d40e0();
};

struct CWWHandle
{
	int m_v;
	CWWHandle(void *pObj);
	CWWHandle(const CWWHandle &o);
};

struct CWWMotorView : CAI_Motor
{
	void SetIdealYaw(float flIdealYaw)
	{
		if (m_28)
		{
			if (flIdealYaw >= 180.0f)
				flIdealYaw -= 180.0f;
			else
				flIdealYaw += 180.0f;
		}
		if (*(float *)&m_1c == 180.0f)
			m_34 = flIdealYaw;
		else
			m_34 = sub_102e0a80(flIdealYaw);
	}
};

struct CWWSlots
{
	CCS_V100(a) CCS_V100(b) CCS_V100(c)
	CCS_V10(d0) CCS_V10(d1) CCS_V10(d2) CCS_V10(d3) CCS_V10(d4) CCS_V10(d5)
	CCS_V(e360) CCS_V(e361) CCS_V(e362)
	virtual char slot363(CBaseEntity *pEnt);
	CCS_V(e364) CCS_V(e365) CCS_V(e366) CCS_V(e367) CCS_V(e368) CCS_V(e369)
	CCS_V10(f37) CCS_V10(f38) CCS_V10(f39) CCS_V10(f40)
	CCS_V(g410) CCS_V(g411) CCS_V(g412) CCS_V(g413) CCS_V(g414) CCS_V(g415) CCS_V(g416) CCS_V(g417)
	virtual float slot418(float f);
};

template <int O, class T> struct At { char pad[O]; T v; };
#define FLD(T, o) (((At<o, T > *)this)->v)

struct CWWStartView : CNPC_VWerewolf
{
	void sub_10273e80(int a);
	int sub_1027a6c0();
	void sub_10272650(int a);
	void sub_10332ca0(CBaseEntity *pEnt, int a, int b);
	void sub_10279cc0(CBaseEntity *pEnt);
	const char *sub_100ab4f0();
	void sub_102a1910(CNPC_VWerewolfTask *pTask);
	void sub_103662d0(CWWHandle h, float delay);
	void sub_103d6650(Vector *pOut, void *pHint);
	Vector *sub_103d6770(Vector *pOut, void *pHint);
};

struct CWWTC2
{
	void sub_10273e80(int a);
};

static inline bool IsCurSched(CNPC_VWerewolf *p, int type)
{
	return p->m_pSchedule5c38 && p->m_pSchedule5c38 == p->sub_102cc1f0(type);
}

#define TRACE_PUSH(fn, nm) { const char *n_ = nm; g_109f3620[*g_109f3680].name = fn; g_109f3620[*g_109f3680].file = n_; g_109f3620[*g_109f3680].line = g_106b8540; (*g_109f3680)++; }
#define HOLD(p, t) self->sub_103662d0(CWWHandle(p), t)

void CNPC_VWerewolf::vfunc442(CNPC_VWerewolfTask *pTask)
{
	CWWStartView *self = (CWWStartView *)this;
	Vector a, b, tmp1, tmp2;
	TRACE_PUSH("CNPC_VWerewolf::StartTask", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	vfunc449(pTask->m_id);
	switch (pTask->m_id) {
	case 0x100:
		self->sub_102a1910(pTask);
		FLD(unsigned int, 0x14b8) &= ~0x10000;
		break;
	case 0x4e: {
		float f = ((CWWSlots *)this)->slot418(pTask->m_flTime) + m_f66d0 + m_f66cc + 5.0;
		FLD(float, 0x6320) = f;
		((CWWHelperView *)m_pHelper5d34)->sub_102ee1c0(f);
		((CWWHelperView *)m_pHelper5d34)->sub_102f2fe0(FLD(int, 0x6320));
		self->sub_10273e80(0);
		break;
	}
	case 2:
		if (IsCurSched(this, 0x158)) {
			FLD(float, 0x5db4) = (g_1093d6f4->v1() ? g_104454c4 : g_1093d6f4->m_28) + gpGlobals->curtime;
			break;
		}
		self->sub_102a1910(pTask);
		break;
	case 0x14a:
		if (!vfunc167() || !m_n6720) {
			sub_10293a80((CAI_BaseNPCTroika *)this);
			if (m_h628c.Get()) {
				CWWPlayerView *pPlayer = (CWWPlayerView *)m_h628c.Get();
				FLD(char, 0x6710) = (pPlayer->sub_10337860() == g_10738d10.sub_101d5bd0("Player_Malkavian"));
				self->sub_10332ca0(m_h628c.Get(), 1, 10);
				sub_10279a50((int)m_h628c.Get());
				self->sub_10279cc0(m_h628c.Get());
				vfunc600((int)m_h628c.Get());
			}
		}
		if (!vfunc167())
			DevWarning("%s could not find an enemy... oh well!\n", self->sub_100ab4f0());
		self->sub_10273e80(0);
		break;
	case 0x14c:
		if (sub_10269aa0(0x77)) {
			((CWWTC2 *)this)->sub_10273e80(0);
			break;
		}
		if (((CWWHelperView *)m_pHelper5d34)->sub_102ee2e0())
			((CWWHelperView *)m_pHelper5d34)->sub_102ee2c0();
		if (!((CWWHelperView *)m_pHelper5d34)->sub_102ee620()) {
			m_b1a40 = 0;
			vfunc448_slot((int)"Did not path out of player's sight");
			((CWWHelperView *)m_pHelper5d34)->sub_102ee270();
			break;
		}
		if (!((CWWHelperView *)m_pHelper5d34)->sub_102ee6a0()) {
			m_b1a40 = 0;
			self->sub_10272650(self->sub_1027a6c0());
			break;
		}
		if (((CWWHelperView *)m_pHelper5d34)->sub_102f2ea0()) {
			m_b1a40 = 0;
			vfunc448_slot((int)"Did not path out of player's sight");
			break;
		}
		m_b1a40 = 1;
		vfunc528();
		break;
	case 0x14b: {
		int act = 0x100;
		if ((m_nFlags66e8 & 1) == 1 || !((CWWSlots *)this)->slot363(vfunc167()))
			act = RandomInt(0, 1) ? 0x124 : 0x125;
		sub_10289ee0(act);
		sub_102e0b40((float *)m_pMotor5d44);
		CEntityVSlots *pEnemy = (CEntityVSlots *)vfunc167();
		CAI_Motor *pMotor = m_pMotor5d44;
		pMotor->sub_102e2020((const float *)pEnemy->slot217(), 0);
		break;
	}
	case 0x14d:
		break;
	case 0x14f:
		if (WWMAX(g_104454c4, gpGlobals->curtime - m_flTeleport66ec) < 1.0) {
			vfunc448_slot(0x1a);
			break;
		}
		sub_103d4a60();
		self->sub_10273e80(0);
		break;
	case 0x14e:
		sub_103d4d60();
		self->sub_10273e80(0);
		break;
	case 0x150:
		if (!m_pHint66b0) {
			vfunc448_slot(4);
			break;
		}
		if (m_pHint66b0->m_nType == 0x3aa9) {
			((CWWTC2 *)this)->sub_10273e80(0);
			break;
		}
		if (!sub_103d6000(m_pHint66b0)) {
			vfunc448_slot(0x15);
			break;
		}
		break;
	case 0x151:
		if (m_pHint66b0) {
			HOLD(m_pHint66b0, 5.0f);
			m_pLastUsedTeleportHint = (CBaseEntity *)m_pHint66b0;
			m_pHint66b0->sub_102d1420(0);
			sub_103d4760();
			CNPC_VWerewolfHint66b0 *pHint = (CNPC_VWerewolfHint66b0 *)__RTDynamicCast(g_106eb5d8.sub_100f7770(0, STRINGR_F(*(const char **)((char *)m_pLastUsedTeleportHint + 0x468)), 0, 0), 0, g_10538764, g_1060a514, 0);
			if (pHint)
				sub_103d45c0(pHint);
			if (m_pHint66b0) {
				sub_103d9f90();
				if (sub_103d6000(m_pHint66b0))
					break;
			}
		}
		self->sub_10273e80(0);
		break;
	case 0x152:
		m_nFlags66e8 = 0;
		if (!sub_10366400((int)m_pHint66b0))
			HOLD(m_pHint66b0, 5.0f);
		sub_103d4760();
		sub_10273180(1);
		m_flTeleport66ec = gpGlobals->curtime;
		self->sub_10273e80(0);
		break;
	case 0x153: {
		if (!m_pHint66bc) {
			vfunc448_slot(4);
			break;
		}
		sub_103ceb60(m_pHint66bc);
		FLD(Vector, 0x5dd0) = *self->sub_103d6770(&tmp1, m_pHint66bc);
		self->sub_10273e80(0);
		break;
	}
	case 0x154: {
		if (!m_pHint66bc) {
			vfunc448_slot(4);
			break;
		}
		sub_102e0b40((float *)m_pMotor5d44);
		float yaw = ((CEntityVSlots *)m_pHint66bc)->slot219()->y;
		((CWWMotorView *)m_pMotor5d44)->SetIdealYaw(yaw);
		m_pMotor5d44->sub_102e1e20(-1);
		break;
	}
	case 0x155:
		if (!sub_103d6000(m_pHint66bc))
			vfunc448_slot(0x15);
		else if (m_pHint66bc->m_nType == 0x3aa0 && !sub_10366490((int)m_pHint66bc))
			HOLD(m_pHint66bc, 15.0f);
		break;
	case 0x156:
		if (m_pHint66bc) {
			m_pHint66bc->sub_102d1420(0);
			m_pLastUsedMoveHint = (CBaseEntity *)m_pHint66bc;
			if (!sub_10366490((int)m_pHint66bc))
				HOLD(m_pHint66bc, 3.0f);
			sub_103d4690();
			CNPC_VWerewolfHint66b0 *pHint = (CNPC_VWerewolfHint66b0 *)__RTDynamicCast(g_106eb5d8.sub_100f7770(0, STRINGR_F(*(const char **)((char *)m_pLastUsedMoveHint + 0x468)), 0, 0), 0, g_10538764, g_1060a514, 0);
			if (pHint)
				sub_103d44e0(pHint, m_b66c8);
			if (m_pHint66bc) {
				if (sub_103d6000(m_pHint66bc))
					break;
				vfunc448_slot(0x15);
			}
		}
		self->sub_10273e80(0);
		break;
	case 0x157:
		if (!sub_10366400((int)m_pHint66bc))
			HOLD(m_pHint66bc, 3.0f);
		m_nFlags66e8 = 0;
		sub_103d4690();
		sub_10273180(1);
		self->sub_10273e80(0);
		break;
	case 0x158: {
		if (sub_103d0ec0()) {
			FLD(Vector, 0x5dd0) = *self->sub_103d6770(&tmp2, m_pHint66c4);
			self->sub_10273e80(0);
			break;
		}
		vfunc448_slot(4);
		break;
	}
	case 0x159:
		if (m_pHint66c4 && sub_103d6000(m_pHint66c4))
			break;
		vfunc448_slot(0x15);
		break;
	case 0x15a: {
		if (!m_pHint66bc) {
			vfunc448_slot(4);
			break;
		}
		a = *(Vector *)vfunc217();
		self->sub_103d6650(&b, m_pHint66bc);
		float dz = b.z - a.z;
		FLD(Vector, 0x649c) = a;
		FLD(Vector, 0x64a8) = b;
		float t;
		if (dz > 0.0f)
			t = dz + 100.0f;
		else
			t = ((float)fabs(a.x - b.x) + (float)fabs(a.y - b.y)) * 0.25f;
		FLD(float, 0x64b4) = ((CWWHintView *)m_pHint66bc)->sub_102d40e0() + t;
		FLD(float, 0x64b8) = 2.0f;
		self->sub_10273e80(0);
		break;
	}
	case 0x15b:
		sub_103cb920(0);
		m_nFlags66e8 = 0;
		FLD(float, 0x64b8) = 1.0f;
		HOLD(m_pHint66bc, 15.0f);
		sub_103d4690();
		m_b66a8 = 0;
		self->sub_10273e80(0);
		break;
	case 0x15c:
		sub_103d6280(m_pHint66bc);
		sub_10289ee0(0x11c);
		if (FLD(int, 0xff0) == 0x11c)
			break;
		vfunc448_slot(0x15);
		break;
	case 0x15d:
		sub_10289ee0(0x11d);
		if (FLD(int, 0xff0) == 0x11d)
			break;
		vfunc448_slot(0x15);
		break;
	case 0x15e:
		sub_10289ee0(0x11f);
		if (FLD(int, 0xff0) == 0x11f)
			break;
		vfunc448_slot(0x15);
		break;
	case 0x15f:
		sub_10289ee0(0x11e);
		if (FLD(int, 0xff0) != 0x11e) {
			vfunc448_slot(0x15);
			break;
		}
		((CWWEntView *)this)->AddSolidFlags(4);
		((CWWOutputView *)m_Out6740)->sub_100cd660(vfunc167(), this, 0);
		break;
	case 0x160:
		sub_10289ee0(0x120);
		if (FLD(int, 0xff0) == 0x120)
			break;
		vfunc448_slot(0x15);
		break;
	case 0x161:
		sub_10289ee0(0x121);
		if (FLD(int, 0xff0) == 0x121)
			break;
		vfunc448_slot(0x15);
		break;
	default:
		self->sub_102a1910(pTask);
		break;
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103cdfb0 size=0x610
#include "CLogicAuto.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include <math.h>
extern char g_106b8540[];
extern char g_105387dc[];
extern float g_104454c4;
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct CWWDevView
{
	virtual void v0();
	virtual bool v1();
	char pad[0x28];
	int m_2c;
};
extern CWWDevView *g_1093f9a4;

struct CWWOutputView
{
	void sub_100cd660(void *pEnt, void *pCaller, int c);
};

// the navigator-like helper at +0x5d34
struct CWWHelperView
{
	int sub_102ee620();
	bool sub_102ee6a0();
	bool sub_102f2ea0();
	void sub_102ee270();
};

// the callees of RunTask that the class header does not declare yet
struct CWWRunTaskView : CNPC_VWerewolf
{
	bool sub_103d2a10();
	void sub_102aacf0(CNPC_VWerewolfTask *pTask);
	bool sub_103d3c20();
	int sub_1027a6c0();
	void sub_10272650(int a);
	void sub_10273e80(int a);
	void sub_10280a50();
	void sub_102ae750(int a, int b);
	char Slot251() { return ((CEntityVSlots *)(void *)this)->slot251(); }
};

void CNPC_VWerewolf::vfunc444(CNPC_VWerewolfTask *pTask)
{
	CWWRunTaskView *self = (CWWRunTaskView *)this;
	CWWHelperView *helper = (CWWHelperView *)m_pHelper5d34;
	ScopeTrace trace("CNPC_VWerewolf::RunTask", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	vfunc449(pTask->m_id);
	switch (pTask->m_id) {
	case 0x14b:
		if (self->Slot251()) {
			if (sub_103cfc50())
				self->sub_10273e80(0);
			else
				vfunc448_slot(4);
		} else {
			m_pMotor5d44->sub_102e1e20(-1);
		}
		break;
	case 0x14c:
		if (sub_103cf5f0() && self->sub_103d2a10()) {
			self->sub_10273e80(0);
			break;
		}
		if (!sub_103cf5f0() && sub_103d14f0()) {
			self->sub_10273e80(0);
			break;
		}
		if (sub_10269aa0(0x77)) {
			self->sub_10273e80(0);
			break;
		}
		if (sub_10269aa0(0x78)) {
			self->sub_10273e80(0);
			break;
		}
		if ((pTask->m_flTime == g_104454c4 || !(pTask->m_flTime < gpGlobals->curtime - GetTaskStart5c4c())) && ((CWWHelperView *)m_pHelper5d34)->sub_102ee620()) {
			if (!((CWWHelperView *)m_pHelper5d34)->sub_102ee6a0()) {
				m_b1a40 = 0;
				self->sub_10272650(self->sub_1027a6c0());
			} else if (((CWWHelperView *)m_pHelper5d34)->sub_102f2ea0()) {
				m_b1a40 = 0;
				if (!g_1093f9a4->v1() && g_1093f9a4->m_2c) {
					self->sub_10273e80(0);
					break;
				}
				if (sub_103d1200()) {
					self->sub_10273e80(0);
					break;
				}
				vfunc448_slot((int)"Did not path out of player's sight");
			} else {
				vfunc528();
			}
		} else {
			m_b1a40 = 0;
			if (!g_1093f9a4->v1() && g_1093f9a4->m_2c) {
				self->sub_10273e80(0);
				break;
			}
			if (sub_103d1200()) {
				self->sub_10273e80(0);
				break;
			}
			vfunc448_slot((int)"Did not path out of player's sight");
			((CWWHelperView *)m_pHelper5d34)->sub_102ee270();
		}
		break;
	case 0x14d:
		if (self->sub_103d3c20())
			self->sub_10273e80(0);
		break;
	case 0x150:
		if (self->Slot251()) {
			sub_103d9f90();
			self->sub_10273e80(0);
		} else {
			sub_103d93b0();
			self->sub_10280a50();
		}
		break;
	case 0x151:
		if (self->Slot251()) {
			sub_103d9f90();
			self->sub_10273e80(0);
		} else {
			sub_103d93b0();
			self->sub_10280a50();
		}
		break;
	case 0x154:
		m_pMotor5d44->sub_102e1e20(-1);
		if ((float)fabs(m_pMotor5d44->sub_102e1f90()) < 5.0f)
			self->sub_10273e80(0);
		break;
	case 0x155:
		if (self->Slot251()) {
			sub_103d9f90();
			self->sub_10273e80(0);
			if (m_nState0fec == 0x10b) {
				sub_103d4a60();
				self->sub_102ae750(0x158, 0);
			}
		} else {
			sub_103d93b0();
			self->sub_10280a50();
		}
		break;
	case 0x156:
		if (self->Slot251()) {
			sub_103d9f90();
			self->sub_10273e80(0);
		} else {
			sub_103d93b0();
			self->sub_10280a50();
		}
		break;
	case 0x159:
		if (self->Slot251()) {
			self->sub_10273e80(0);
			m_pHint66c4 = 0;
			m_nFlags66e8 &= ~2;
		}
		break;
	case 0x15c:
		if (self->Slot251())
			self->sub_10273e80(0);
		else
			sub_103d93b0();
		break;
	case 0x15d:
		if (self->Slot251()) {
			self->sub_10273e80(0);
		} else {
			sub_103d93b0();
			vfunc315();
		}
		break;
	case 0x15e:
		if (self->Slot251()) {
			sub_103d9f90();
			sub_103d4690();
			self->sub_10273e80(0);
		} else {
			sub_103d93b0();
			vfunc315();
		}
		break;
	case 0x15f:
		if (self->Slot251()) {
			m_n200 = 2;
			self->sub_10273e80(0);
			((CWWOutputView *)m_Out6758)->sub_100cd660(vfunc167(), this, 0);
		} else {
			sub_103d93b0();
		}
		break;
	case 0x160:
		if (self->Slot251())
			sub_10289ee0(0x120);
		break;
	case 0x161:
		if (self->Slot251()) {
			sub_103d9f90();
			sub_103d4690();
			self->sub_10273e80(0);
		} else {
			sub_103d93b0();
			vfunc315();
		}
		break;
	case 0x14a:
	case 0x157:
		self->sub_10273e80(0);
		break;
	default:
		self->sub_102aacf0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103ce750 size=0x1df
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "CCineNPCSlots.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern const char g_105ccb38[];
__declspec(dllimport) void DevWarning(const char *fmt, ...);
int sub_10316fa0(int);

struct CWerewolfSlots449
{
	CCS_V100(a) CCS_V100(b) CCS_V100(c) CCS_V100(d)
	CCS_V10(e0) CCS_V10(e1) CCS_V10(e2) CCS_V10(e3)
	CCS_V(g440) CCS_V(g441) CCS_V(g442) CCS_V(g443) CCS_V(g444) CCS_V(g445) CCS_V(g446) CCS_V(g447) CCS_V(g448)
	virtual const char *slot449(int task);
};

static inline bool IsCurSched(CNPC_VWerewolf *p, int type)
{
	return p->m_pSchedule5c38 && p->m_pSchedule5c38 == p->sub_102cc1f0(type);
}

void CNPC_VWerewolf::vfunc448(int failcode)
{
	ScopeTrace trace("CNPC_VWerewolf::TaskFail", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	if (IsCurSched(this, 0x160) || IsCurSched(this, 0x161) || IsCurSched(this, 0x162)) {
		int code = sub_10316fa0(failcode);
		const char *name;
		if (!sub_1028a150()) {
			name = g_105ccb38;
		} else {
			name = ((CWerewolfSlots449 *)this)->slot449(*sub_1028a150());
		}
		DevWarning("Werewolf failed task: %-32s schedule: %-32s reason: %s\n", name, m_pSchedule5c38->m_id40, code);
		if (m_pHint66bc) {
			DevWarning("Current MOVE  Hint: %s\n", sub_103ceb60(m_pHint66bc));
		}
		if (m_pHint66b0) {
			DevWarning("Current TELEPORT  Hint: %s\n", sub_103ceb60(m_pHint66b0));
		}
		if (m_pHint66c4) {
			DevWarning("Current BREAK  Hint: %s\n", sub_103ceb60(m_pHint66b0));
		}
	}
	sub_10273180(1);
	sub_103d4690();
	sub_103d4760();
	m_pHint66c4 = 0;
	m_n66a4 = 0;
	m_b66a1 = 1;
	sub_1029adb0(failcode);
	sub_103cb920(0);
	m_nFlags66e8 = 0;
	m_n6708 = -1;
	m_n670c = -1;
}
// END FUNCTION

// FUNCTION: 0x103ced10 size=0x10c
#include "CNPC_VWerewolf.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "ScopeTrace.h"
#include "utlvector.h"
struct WWBase { void sub_102a0940(int a); };
struct WWEntry { int v; };

void CNPC_VWerewolf::vfunc435(int arg)
{
    ScopeTrace trace("CNPC_VWerewolf::OnScheduleChange", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    ((WWBase *)this)->sub_102a0940(arg);
    if (((CUtlVector<WWEntry> *)&m_History)->Count() > 50)
        ((CUtlVector<WWEntry> *)&m_History)->Remove(0);
    WWEntry e;
    e.v = arg;
    ((CUtlVector<WWEntry> *)&m_History)->AddToTail(e);
}
// END FUNCTION

// FUNCTION: 0x103d02b0 size=0x108
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"

extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)
extern float g_10462950;	// 40.0f

void CNPC_VWerewolf::vfunc561(int a, int b)
{
	ScopeTrace trace("CNPC_VWerewolf::GatherAttackConditions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntityVSlots *pEnemy = (CEntityVSlots *)((CEntityVSlots *)this)->slot167();
	if (((m_nFlags66e8 & 4) == 4 || (m_nFlags66e8 & 0x100) == 0x100) && pEnemy) {
		float z = ((CEntityVSlots *)this)->slot217()->z;
		if ((float)fabs(z - pEnemy->slot217()->z) > g_10462950) {
			sub_10015839(0x51);
			sub_10015839(0x52);
			return;
		}
	}
	sub_1026dd10(a, b);
}
// END FUNCTION

// FUNCTION: 0x103d0410 size=0x1c0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CDevFlagObj.h"

struct CWerewolfSignal
{
	virtual void v0();
	virtual void v1();
};
extern CWerewolfSignal *g_10924a6c;
extern CDevFlagObj *g_1093f9a4;
extern Vector g_1070d1b0;

class CWWView
{
public:
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7)
	EVS10(8) EVS10(9) EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166)
	virtual CWWView *slot167();
	EVS(168) EVS(169)
	EVS10(17) EVS10(18) EVS10(19) EVS10(20) EVS10(21)
	virtual Vector *slot220(Vector *pOut);
	EVS(221) EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29) EVS10(30)
	EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38)
	EVS10(39) EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44) EVS10(45) EVS10(46)
	EVS10(47) EVS10(48) EVS10(49) EVS10(50) EVS10(51) EVS10(52) EVS10(53)
	EVS(540) EVS(541) EVS(542) EVS(543)
	virtual void slot544(CWWView *pTarget, Vector *pPos);
};

// TARGET: CNPC_VWerewolf::vfunc433
void CNPC_VWerewolf::vfunc433()
{
	ScopeTrace trace("CNPC_VWerewolf::GatherConditions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CWWView *pTarget = ((CWWView *)this)->slot167();
	float flLimit = m_f66d0 + m_f66cc + 1.0;
	if (pTarget) {
		g_10924a6c->v1();
		sub_10269a20(0x46);
		((CWWView *)this)->slot544(pTarget, pTarget->slot220(&g_1070d1b0));
		if (m_f6264 < flLimit) {
			g_10924a6c->v1();
			sub_10269a20(0x5f);
		}
	}
	sub_102b27f0();
	if (pTarget) {
		sub_103cc0d0();
		sub_103cc320();
		sub_103cc890();
		sub_103cc5c0();
		sub_103cc450();
	}
	if (sub_10269aa0(9)) {
		g_10924a6c->v1();
		sub_10269a20(0x60);
	}
	if (sub_10269aa0(0x60)) {
		g_10924a6c->v1();
		sub_10269a20(9);
	}
	if (m_pHint66bc) {
		g_10924a6c->v1();
		sub_10269a20(0x78);
	}
	if (!g_1093f9a4->vfunc1() && g_1093f9a4->m_n2c) {
		sub_10015839(0x51);
		sub_10015839(0x52);
		sub_10015839(0x78);
		sub_10015839(0x79);
	}
}
// END FUNCTION

// FUNCTION: 0x103d0640 size=0xfc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

const char *CNPC_VWerewolf::vfunc408(int condition)
{
	ScopeTrace t("CNPC_VWerewolf::GetShortConditionName", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	switch (condition) {
	case 0x77:
		return "ww0";
	case 0x78:
		return "ww1";
	case 0x79:
		return "ww2";
	case 0x7a:
		return "ww3";
	case 0x7b:
		return "ww4";
	default:
		return sub_1027ede0(condition);
	}
}
// END FUNCTION

// FUNCTION: 0x103d0780 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_103d0780(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::GetLastSharedCondition";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x7c;
}
// END FUNCTION

// FUNCTION: 0x103d0a30 size=0x74
#include "CNPC_VWerewolf.h"
#include "CAI_BaseNPCTroika.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc516()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::MaxYawSpeed";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CAI_BaseNPCTroika *)this)->sub_10011dc4();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103d4a20 size=0x2c
struct CWerewolfUnit103d4a20 {
    char pad66ec[0x66ec];
    int m_i66ec;
    void sub_10009ecb();
    void sub_103d4a20();
};

// TARGET: sub_103d4a20
void CWerewolfUnit103d4a20::sub_103d4a20()
{
    sub_10009ecb();
    m_i66ec = *(int *)&gpGlobals->curtime;
    *(int *)((char *)this + 0x66d8) = 0;
    *(int *)((char *)this + 0x66d4) = 0;
    *(int *)((char *)this + 0x66a4) = 0;
}
// END FUNCTION

// FUNCTION: 0x103d5050 size=0xa4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
void sub_10008f44(CNPC_VWerewolf *pEnt, int a, int b, int c, int d, int e);

void CNPC_VWerewolf::vfunc620()
{
	ScopeTrace trace("CNPC_VWerewolf::DrawBBoxOverlay", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!sub_103cf5f0()) {
		sub_10008f44(this, 0x32, 0xff, 0x32, 0, 0);
		return;
	}
	sub_1009f4e0();
}
// END FUNCTION

// FUNCTION: 0x103d5130 size=0x378
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"
#include "globalvars.h"

void sub_10119750(const char *fmt, ...);
int sub_101cd9e0(int);
CBaseEntity *sub_10172710(int);
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[];
extern char g_1060a514[];
extern float g_104454c4;

struct CWerewolfCfgView
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x28];
	int m_n2c;
};
extern CWerewolfCfgView *g_1093f814;
extern CWerewolfCfgView *g_1093fa84;
extern CWerewolfCfgView *g_1093d4e4;

inline bool FlagSetB(unsigned int flags, unsigned char bit) { return (flags & bit) == bit; }
inline bool FlagSetI(unsigned int flags, unsigned int bit) { return (flags & bit) == bit; }

void CNPC_VWerewolf::vfunc76()
{
	ScopeTrace scope("CNPC_VWerewolf::DrawDebugStatOverlays", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float flNotSeen = gpGlobals->curtime - m_flTeleport66ec;
	flNotSeen = g_104454c4 > flNotSeen ? g_104454c4 : flNotSeen;
	sub_10119750("Not Seen Time  : %3.1f", (double)flNotSeen);
	sub_10119750("Player Distance: %3.1f", (double)m_f6264);
	sub_10366290();
	if (FlagSetB(m_nFlags66e8, 1))
		sub_10119750("ZONE_NO_TALL_ANIMS");
	if (FlagSetB(m_nFlags66e8, 2))
		sub_10119750("ZONE_PLAYER_ON_BREAKABLE");
	if (FlagSetB(m_nFlags66e8, 0x40))
		sub_10119750("ZONE_PLAYER_INSIDE");
	if (FlagSetB(m_nFlags66e8, 0x80))
		sub_10119750("ZONE_PLAYER_OUTSIDE");
	if (FlagSetB(m_nFlags66e8, 4))
		sub_10119750("ZONE_PLAYER_ON_PLATFORM");
	if (FlagSetI(m_nFlags66e8, 0x800))
		sub_10119750("ZONE_WOLF_INSIDE");
	if (FlagSetI(m_nFlags66e8, 0x1000))
		sub_10119750("ZONE_WOLF_OUTSIDE");
	if (FlagSetI(m_nFlags66e8, 0x100))
		sub_10119750("ZONE_WOLF_ON_PLATFORM");
	if (sub_10269aa0(0x77))
		sub_10119750("COND_VWEREWOLF_CAN_TELEPORT");
	if (sub_10269aa0(0x78))
		sub_10119750("COND_VWEREWOLF_CAN_SPECIAL_MOVE");
	if (sub_10269aa0(0x79))
		sub_10119750("COND_VWEREWOLF_ENEMY_REACHABLE");
	if (sub_10269aa0(0x7b))
		sub_10119750("COND_VWEREWOLF_SHOULD_BREAKHINT");
	if (sub_10269aa0(0x7a))
		sub_10119750("COND_VWEREWOLF_DEATH_TRIGGERED");
	if (m_nDoorState == 0)
		sub_10119750("door state: (%d)closed", m_nDoorState);
	else if (m_nDoorState == 1)
		sub_10119750("door state: (%d)closing", m_nDoorState);
	else if (m_nDoorState == 2)
		sub_10119750("door state: (%d)open", m_nDoorState);
	else if (m_nDoorState == 3)
		sub_10119750("door state: (%d)opening", m_nDoorState);
	if (!g_1093f814->vfunc1() && g_1093f814->m_n2c) {
		CBaseEntity *pEnt = sub_10172710(sub_101cd9e0(1));
		CAI_Hint *pHint = (CAI_Hint *)__RTDynamicCast(pEnt, 0, g_10538764, g_1060a514, 0);
		if (pHint)
			sub_103d5590(pHint);
	}
	if (m_pHint66bc)
		sub_103d5590(m_pHint66bc);
	else if (m_pHint66b0)
		sub_103d5590(m_pHint66b0);
	else if (!g_1093fa84->vfunc1() && g_1093fa84->m_n2c)
		sub_103d5590(m_pLastUsedTeleportHint);
	else if (!g_1093d4e4->vfunc1() && g_1093d4e4->m_n2c)
		sub_103d5590(m_pLastUsedMoveHint);
	int nStart = m_History.m_size - 5;
	nStart = nStart < 0 ? 0 : nStart;
	int nEnd = nStart + 5 < m_History.m_size ? nStart + 5 : m_History.m_size;
	for (int i = nStart; i < nEnd; i++) {
		CNPC_VWerewolfSchedule *pSched = ((CNPC_VWerewolfSchedule **)m_History.m_pMemory)[i];
		if (pSched && pSched->m_id40)
			sub_10119750((const char *)pSched->m_id40);
		else
			sub_10119750("INVALID SCHEDULE");
	}
}
// END FUNCTION

// FUNCTION: 0x103d5f60 size=0x7e
#include "CNPC_VWerewolf.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VWerewolf::vfunc465(const char *msg)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CNPC_VWerewolf::OnChangeActivity";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    sub_10295a60(msg);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103d7ce0 size=0xa4
#include "CNPC_VWerewolf.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HintObj_t {
	char m_pad0000[0x5dc];
	int m_nHintType;
};

bool CNPC_VWerewolf::vfunc566(void *pHint)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::FValidateHintType";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int type = ((HintObj_t *)pHint)->m_nHintType;
	if (type != 0x3a9f && type >= 0x3a98 && type <= 0x3aaa) {
		(*g_109f3680)--;
		return true;
	}
	(*g_109f3680)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103d8660 size=0xf5
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CNPC_VWerewolf.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

extern CUnknown1073dc28 g_1073dc28;

inline int FindSoundIndex(const char *pszName)
{
	for (int i = 0; i < g_1073dc28.m_nRecords; i++) {
		if (_strcmpi(g_1073dc28.m_ppRecords[i]->m_Name.Get(), pszName) == 0)
			return g_1073dc28.m_ppRecords[i]->m_nId;
	}
	return -1;
}

void CNPC_VWerewolf::vfunc500()
{
	ScopeTrace t("CNPC_VWerewolf::ExertHvySound", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	static int s_nSound = FindSoundIndex("Exert_Heavy");
	g_1073dc28.sub_101f5950((CBaseEntity *)this, s_nSound, 2, 1.0f, 0);
}
// END FUNCTION

// FUNCTION: 0x103d87a0 size=0xf5
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CNPC_VWerewolf.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

extern CUnknown1073dc28 g_1073dc28;

inline int FindSoundIndex(const char *pszName)
{
	for (int i = 0; i < g_1073dc28.m_nRecords; i++) {
		if (_strcmpi(g_1073dc28.m_ppRecords[i]->m_Name.Get(), pszName) == 0)
			return g_1073dc28.m_ppRecords[i]->m_nId;
	}
	return -1;
}

void CNPC_VWerewolf::vfunc491()
{
	ScopeTrace t("CNPC_VWerewolf::ExertHvySound", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	static int s_nSound = FindSoundIndex("Pain");
	g_1073dc28.sub_101f5950((CBaseEntity *)this, s_nSound, 2, 1.0f, 0);
}
// END FUNCTION

// FUNCTION: 0x103d88e0 size=0x194
#include "CBaseAnimating.h"
#include "CNPC_VWerewolf.h"
#include "CUnknown102d09b0.h"
#include "ScopeTrace.h"
#include <stdlib.h>
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

void sub_101cdba0(const float *pPos, float a, float b, float c, float d, int e, int f);

struct CWerewolfHintView {
	char m_pad0000[0x66c4];
	CNPC_VWerewolfHint66b0 *m_pHint66c4;	// 0x66c4
};

void CNPC_VWerewolf::vfunc259(int *pEvent)
{
	ScopeTrace trace("CNPC_VWerewolf::HandleAnimEvent", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	switch (pEvent[0]) {
	case 0x3eb: {
		CNPC_VWerewolfHint66b0 *pHint;
		pHint = m_pHint66b0;
		if (pHint) {
			((CUnknown102d09b0 *)pHint)->sub_102d09b0((CBaseEntity *)this, atoi((const char *)pEvent[1]));
			return;
		}
		pHint = m_pHint66bc;
		if (pHint) {
			((CUnknown102d09b0 *)pHint)->sub_102d09b0((CBaseEntity *)this, atoi((const char *)pEvent[1]));
			return;
		}
		pHint = ((CWerewolfHintView *)this)->m_pHint66c4;
		if (pHint) {
			((CUnknown102d09b0 *)pHint)->sub_102d09b0((CBaseEntity *)this, atoi((const char *)pEvent[1]));
			return;
		}
		sub_1029b290(pEvent);
		return;
	}
	case 0x802:
	case 0x803:
	case 0x804:
	case 0x805:
		sub_103d8c10();
		return;
	case 0x834: {
		CNPC_VWerewolfVec3 vecOrigin, vecAngles;
		((CBaseAnimating *)this)->sub_10092610((int)"Bip01", (int)&vecOrigin, (int)&vecAngles);
		sub_101cdba0(&vecOrigin.x, 16.0f, 2.0f, 2.0f, 1500.0f, 0, 1);
		return;
	}
	case 0x835:
		sub_103d8df0();
		return;
	case 0x836:
	case 0x837:
	case 0x838:
	case 0x839:
	case 0x83a:
	case 0x83b:
	case 0x83c:
	case 0x83d:
		return;
	default:
		sub_1029b290(pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x103d9ab0 size=0xb8
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
int __fastcall sub_100b39c0(char *pEnt);

char CNPC_VWerewolf::vfunc68(void *pOther)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::ShouldIgnoreCollision";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((unsigned char *)pOther + 0x4c) & 0x16) {
		(*g_109f3680)--;
		return 1;
	}
	if (sub_100b39c0((char *)pOther) & 8) {
		(*g_109f3680)--;
		return 1;
	}
	char result = sub_1029afc0(pOther);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103d9ba0 size=0xb8
#include "CNPC_VWerewolf.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
int __fastcall sub_100b39c0(char *pEnt);

char CNPC_VWerewolf::vfunc69(void *pOther)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VWerewolf::NavIgnoreCollision";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((unsigned char *)pOther + 0x4c) & 0x16) {
		(*g_109f3680)--;
		return 1;
	}
	if (sub_100b39c0((char *)pOther) & 8) {
		(*g_109f3680)--;
		return 1;
	}
	char result = sub_1029b180(pOther);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103d9e00 size=0x140
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct SDifficulty {
	virtual void s0();
	virtual char s1();
	char pad[0x24];
	float m28;
};
extern SDifficulty *g_1093d52c;

struct SEntNameView
{
	char m_pad0000[0x26c];
	const char *m_name26c;
	char m_pad0270[0x6320 - 0x270];
	float m_f6320;
};

struct CNPC_VWerewolfUnit : CAI_BaseNPCTroika
{
	void sub_103d9e00(CEntityVSlots *pEnt, Vector *pGoal, float *pOut, float *pExtra);	// "CNPC_VWerewolf::TranslateEnemyChasePosition"
	int sub_1027d990();	// the ideal state (stub 0x100023a1)
	void sub_102c3b50(CEntityVSlots *pEnt, Vector vecGoal, Vector *pGoal, float *pExtra);	// stub 0x100041d3
};

void CNPC_VWerewolfUnit::sub_103d9e00(CEntityVSlots *pEnt, Vector *pGoal, float *pOut, float *pExtra)
{
	SEntNameView *pView = (SEntNameView *)this;
	ScopeTrace trace("CNPC_VWerewolf::TranslateEnemyChasePosition", this ? (pView->m_name26c ? pView->m_name26c : g_106b8540) : g_105387dc);
	if (sub_1027d990() == 2) {
		Vector *pOrigin = pEnt->slot217();
		Vector vecTemp;
		Vector *pCenter = pEnt->slot193(&vecTemp);
		*pGoal += *pCenter - *pOrigin;
	} else {
		*pExtra = pView->m_f6320;
		*pExtra = (g_1093d52c->s1() ? 0.0f : g_1093d52c->m28) + *pExtra;
		sub_102c3b50(pEnt, *pGoal, pGoal, pExtra);
		*pOut = *pExtra;
	}
}
// END FUNCTION

// FUNCTION: 0x103da230 size=0x11b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "CWerewolfSlots.h"
#include "ScopeTrace.h"

struct CGlobal1093d694
{
	virtual void slot0();
	virtual char slot1();
	char m_pad[0x28];
	int m_n2c;
};
extern CGlobal1093d694 *g_1093d694;

// TARGET: CNPC_VWerewolf::vfunc617
bool CNPC_VWerewolf::vfunc617(CNPC_VWerewolfVec3 a, int b, int c, CNPC_VWerewolfVec3 d)
{
	ScopeTrace trace("CNPC_VWerewolf::EnemyCouldSeeHull", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_1093d694->slot1() && g_1093d694->m_n2c)
		return false;
	CWerewolfSlots *pSlots = (CWerewolfSlots *)this;
	if (pSlots->slot167() && !pSlots->slot167()->slot158())
		return false;
	return sub_10366510(a, b, c, d);
}
// END FUNCTION
