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
