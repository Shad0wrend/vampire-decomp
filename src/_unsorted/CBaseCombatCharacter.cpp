// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10053e20 size=0x127
#include "ScopeTrace.h"
struct ShakyFields {
    char pad[0x1044];
    int m_nStamp;
    float m_flTime;
    int m_n104c;
    float m_flAmount;
};
void __fastcall sub_10053e20(CBaseEntity *self, int unused, float flDelay, float flAmount, int stamp)
{
    ScopeTrace trace("CBaseCombatCharacter::SetShakyHands", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
    ShakyFields *p = (ShakyFields *)self;
    if (stamp >= p->m_nStamp) {
        p->m_nStamp = stamp;
        p->m_flTime = flDelay + gpGlobals->curtime;
        p->m_flAmount = flAmount > 1.0f ? 1.0f : (flAmount < 0.0f ? 0.0f : flAmount);
    } else if (stamp == -1) {
        p->m_nStamp = -1;
        p->m_flTime = 0.0f;
        p->m_flAmount = 0.0f;
        p->m_n104c = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10053fa0 size=0x8f
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern float g_104454c4;

struct CScopeGuard {
	CScopeGuard(const char *func, const char *name)
	{
		g_109f3620[*g_109f3680].a = func;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeGuard() { (*g_109f3680)--; }
};

float CBaseCombatCharacter::vfunc344()
{
	CScopeGuard guard("CBaseCombatCharacter::GetShakyHandsIntensity", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (*(int *)((char *)this + 0x1044) > -1)
		return *(float *)((char *)this + 0x1050);
	return g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10105f30 size=0xd5
#include "CBaseCombatCharacter.h"
#include "CBaseFlex.h"
#include "ScopeTrace.h"

void CBaseCombatCharacter::vfunc284()
{
	ScopeTrace trace("CBaseCombatCharacter::AddSceneExpressions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nItems = *(int *)((char *)this + 0xa64);
	for (int i = 0; i < nItems; i++) {
		CBaseFlexItem *pItem = (CBaseFlexItem *)(*(char **)((char *)this + 0xa58) + i * 0x1c);
		CBaseFlexItemObject *pObject = pItem->m_pObject;
		if (pObject->sub_100029c8() == 10 && pObject->sub_1000695b())
			vfunc289(pItem);
		pItem->m_b08 = 1;
		nItems = *(int *)((char *)this + 0xa64);
	}
}
// END FUNCTION

// FUNCTION: 0x10107120 size=0x134
#include "CBaseCombatCharacter.h"

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern void (*g_109f3890)(char *, const char *, int);
extern void (*g_109f364c)(const char *, ...);

bool CBaseCombatCharacter::vfunc347(int event, char *pszName, float *pA, float *pB, float *pC, float *pD)
{
    const char *pszEnt;
    if (this) {
        pszEnt = m_name26c;
        if (!pszEnt)
            pszEnt = g_106b8540;
    } else {
        pszEnt = "NULL ENTITY";
    }
    g_109f3620[*g_109f3680].m_pszName = "CBaseCombatCharacter::GetExpressionEventParams";
    g_109f3620[*g_109f3680].m_pszEnt = pszEnt;
    g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
    (*g_109f3680)++;
    if (event >= 0 && event < 2) {
        switch (event) {
        case 0:
            g_109f3890(pszName, "Knockback", 64);
            *pA = 1.0f;
            *pB = 0.1f;
            *pC = 1.0f;
            *pD = 0.2f;
            (*g_109f3680)--;
            return true;
        case 1:
            g_109f3890(pszName, "Knockback", 64);
            *pA = 1.0f;
            *pB = 0.25f;
            *pC = 2.0f;
            *pD = 0.5f;
            (*g_109f3680)--;
            return true;
        default:
            g_109f364c("Unhandled Expression Event: %s!!\n", event);
            break;
        }
    }
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1014f6f0 size=0x3
// TARGET: sub_1014f6f0
int __cdecl sub_1014f6f0() { return 0; }
// END FUNCTION

// FUNCTION: 0x1014f710 size=0x3
// TARGET: sub_1014f710
void __stdcall sub_1014f710(void *a, void *b, void *c) {}
// END FUNCTION

// FUNCTION: 0x1014f730 size=0x5
// TARGET: sub_1014f730
bool __stdcall sub_1014f730(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f750 size=0x5
// TARGET: sub_1014f750
bool __stdcall sub_1014f750(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f770 size=0x5
// TARGET: sub_1014f770
bool __stdcall sub_1014f770(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f7d0 size=0x3
// TARGET: sub_1014f7d0
void __stdcall sub_1014f7d0(void *p) {}
// END FUNCTION

// FUNCTION: 0x1014f7f0 size=0x3
// TARGET: sub_1014f7f0
bool __cdecl sub_1014f7f0() { return true; }
// END FUNCTION

// FUNCTION: 0x1014f810 size=0x3
// TARGET: sub_1014f810
bool __cdecl sub_1014f810() { return true; }
// END FUNCTION

// FUNCTION: 0x1014f830 size=0x3
// TARGET: sub_1014f830
bool __cdecl sub_1014f830() { return false; }
// END FUNCTION

// FUNCTION: 0x1014f850 size=0x3
// TARGET: sub_1014f850
bool __cdecl sub_1014f850() { return false; }
// END FUNCTION

// FUNCTION: 0x1014f870 size=0x3
// TARGET: sub_1014f870
void __stdcall sub_1014f870(void *a, void *b) {}
// END FUNCTION

// FUNCTION: 0x1014f890 size=0x3
// TARGET: sub_1014f890
void __stdcall sub_1014f890(void *p) {}
// END FUNCTION

// FUNCTION: 0x1014f8d0 size=0x1
// TARGET: sub_1014f8d0
void __fastcall sub_1014f8d0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1014f8f0 size=0x1
// TARGET: sub_1014f8f0
void __fastcall sub_1014f8f0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1014f930 size=0x3
// TARGET: CBaseCombatCharacter::vfunc360
char CBaseCombatCharacter::vfunc360() { return 0; }
// END FUNCTION

// FUNCTION: 0x1014f950 size=0x3
// TARGET: sub_1014f950
bool __cdecl sub_1014f950() { return false; }
// END FUNCTION

// FUNCTION: 0x1014fa30 size=0x3
// TARGET: sub_1014fa30
bool __cdecl sub_1014fa30() { return false; }
// END FUNCTION

// FUNCTION: 0x1014fa50 size=0x3
// TARGET: sub_1014fa50
bool __cdecl sub_1014fa50() { return false; }
// END FUNCTION

// FUNCTION: 0x1015dc20 size=0x5
bool CBaseCombatCharacter::vfunc72(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1031a5a0 size=0x6
namespace lifted {
extern char g_1061664c;
}
datamap_t * CBaseCombatCharacter::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1061664c);
}
// END FUNCTION

// FUNCTION: 0x10321670 size=0x6
namespace lifted {
extern char g_10619d10;
}
int CBaseCombatCharacter::vfunc79()
{
    return (int)&lifted::g_10619d10;
}
// END FUNCTION

// FUNCTION: 0x10321960 size=0x6
namespace lifted {
extern char g_10936d54;
}
int CBaseCombatCharacter::vfunc80()
{
    return (int)&lifted::g_10936d54;
}
// END FUNCTION

// FUNCTION: 0x10321980 size=0x3
int CBaseCombatCharacter::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10323a90 size=0x96
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc103()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Spawn";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    const char *p = *(const char **)((char *)this + 0x10ac);
    if (!p) p = g_106b8540;
    if (*p)
        sub_103239a0(p);
    ((CBaseAnimating *)this)->CBaseAnimating::vfunc103();
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10323b60 size=0x84
#include "CBaseCombatCharacter.h"

// TARGET: CBaseCombatCharacter::vfunc130
void CBaseCombatCharacter::vfunc130(int a)
{
	sub_1008df10(a);
	if (CVStatListSet::Of(this)->Find(3)->sub_10010609(10) > 0)
		sub_10323370();
}
// END FUNCTION

// FUNCTION: 0x10323c20 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_10323c20(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetMaxInvenSlotsPerSection";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x20;
}
// END FUNCTION

// FUNCTION: 0x10324430 size=0x98
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CActivityNotifier {
	void sub_101f6010(CBaseCombatCharacter *pChar, int newAct, int oldAct);
};
extern CActivityNotifier g_1073dd58;

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

void CBaseCombatCharacter::sub_10324430(int activity)
{
	CScopeTrace trace("CBaseCombatCharacter::SetActivity", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	int *pAct = (int *)((char *)this + 0xfec);
	if (activity != *pAct)
		g_1073dd58.sub_101f6010(this, activity, *pAct);
	*pAct = activity;
}
// END FUNCTION

// FUNCTION: 0x103250d0 size=0xb6
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"

void CBaseCombatCharacter::vfunc311(int a, int b, int c)
{
	ScopeTrace trace("CBaseCombatCharacter::ForcePreTranslatedSequenceAndActivity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (c >= 0) {
		*(int *)((char *)this + 0xff0) = a;
		*(int *)((char *)this + 0xff4) = b;
		((CAI_BaseNPC *)this)->sub_10260a50(c);
		*(float *)((char *)this + 0x6f8) = 0;
		sub_10090950();
		*(int *)((char *)this + 0x6f4) = *(int *)((char *)this + 0x1488);
	}
}
// END FUNCTION

// FUNCTION: 0x103251c0 size=0xff
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc252(int a, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SelectWeightedSequenceForStat";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	int r = -1;
	if (b >= 0 && b < 4) {
		CVStatList_t *p = CVStatListSet::Of(this)->Find(b);
		r = p->sub_10010609(c);
	}
	int ret = ((CBaseAnimating *)this)->sub_1008dc40(a, r);
	--*g_109f3680;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10325300 size=0xff
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc254(int a, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SelectSameSequenceForStat";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	int r = -1;
	if (b >= 0 && b < 4) {
		CVStatList_t *p = CVStatListSet::Of(this)->Find(b);
		r = p->sub_10010609(c);
	}
	int ret = ((CBaseAnimating *)this)->sub_1008de20(a, r);
	--*g_109f3680;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10325440 size=0xff
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc253(int a, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SelectHeaviestSequenceForStat";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	int r = -1;
	if (b >= 0 && b < 4) {
		CVStatList_t *p = CVStatListSet::Of(this)->Find(b);
		r = p->sub_10010609(c);
	}
	int ret = ((CBaseAnimating *)this)->sub_1008dd30(a, r);
	--*g_109f3680;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10325580 size=0x71
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f458[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::vfunc333(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f458;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10325f00 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10325f00(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasHumanGibs";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10325fa0 size=0x7f
#include "CBaseCombatCharacter.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct EntSlots138 {
    S100(a)
    S10(b0)
    S10(b1)
    S10(b2)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6(); virtual void c7();
    virtual void v138();
};

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10325fa0()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::HasAlienGibs";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    ((EntSlots138 *)this)->v138();
    --*g_109f3680;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10326040 size=0xc8
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];
extern float g_1070d9d0[3];

// TARGET: CBaseCombatCharacter::vfunc395
void CBaseCombatCharacter::vfunc395()
{
    ScopeTrace trace("CBaseCombatCharacter::CorpseFade", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    *(int *)((char *)this + 0x6f4) = 0;
    sub_100b2e30(g_1070d1b0);
    vfunc93(0, 0);
    sub_100b2f50(g_1070d9d0);
    *(float *)((char *)this + 0x174) = gpGlobals->curtime;
    *(int *)((char *)this + 0x19c) |= 0x10;
    sub_102695d0();
}
// END FUNCTION

// FUNCTION: 0x10326750 size=0x132
#include "CBaseCombatCharacter.h"
#include "CUnknown10738964.h"
#include "ScopeTrace.h"
#include "Vector.h"

#define TV_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// The slots of a target entity this function calls: 29 (a float) and 192 (a position returned by value).
class CTargetView
{
public:
	TV_SLOTS10(a0) TV_SLOTS10(a1)
	virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24();
	virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28();
	virtual float vfunc29();
	TV_SLOTS10(a3) TV_SLOTS10(a4) TV_SLOTS10(a5) TV_SLOTS10(a6) TV_SLOTS10(a7) TV_SLOTS10(a8) TV_SLOTS10(a9)
	TV_SLOTS10(b0) TV_SLOTS10(b1) TV_SLOTS10(b2) TV_SLOTS10(b3) TV_SLOTS10(b4) TV_SLOTS10(b5) TV_SLOTS10(b6) TV_SLOTS10(b7) TV_SLOTS10(b8)
	virtual void c90(); virtual void c91();
	virtual Vector vfunc192();
};

extern CUnknown10738964 *g_10936f74;

char CBaseCombatCharacter::vfunc363(CBaseEntity *pTarget)
{
	ScopeTrace trace("CBaseCombatCharacter::FInViewCone", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CTargetView *pView = (CTargetView *)pTarget;
	if (!g_10936f74->vfunc1() && g_10936f74->m_n2c == 2)
		return sub_103261f0(pView->vfunc192(), pView->vfunc29(), m_field1574);
	return sub_103264d0(pView->vfunc192(), pView->vfunc29(), m_field1574);
}
// END FUNCTION

// FUNCTION: 0x10326a20 size=0x86
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char CBaseCombatCharacter::vfunc362(const float *pos)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::FInViewCone";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char result = sub_103268e0(pos, m_field1574);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10326ae0 size=0xb5
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SelfSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8)
	virtual void c0(); virtual void c1(); virtual void c2();
	virtual float *s193(float *out);
	SL10(d0) SL10(d1) SL10(d2) SL10(d3) SL10(d4) SL10(d5) SL10(d6) SL10(d7) SL10(d8) SL10(d9)
	SL10(e0) SL10(e1) SL10(e2) SL10(e3) SL10(e4) SL10(e5) SL10(e6)
	virtual int s364(float *v);
};
struct TargetSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
	virtual float *s197(float *out, float *in, int a, int b);
};

int CBaseCombatCharacter::vfunc365(CBaseEntity *pTarget)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::FInAimCone";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	float a[3];
	float b[3];
	int r = ((SelfSlots *)this)->s364(((TargetSlots *)pTarget)->s197(b, ((SelfSlots *)this)->s193(a), 1, 0));
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10326bd0 size=0x11b
#include "ScopeTrace.h"
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CBaseCombatCharacter.h"

bool CBaseCombatCharacter::vfunc364(const Vector *pTarget)
{
	ScopeTrace trace("CBaseCombatCharacter::FInAimCone", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	Vector dir = *pTarget - *pSelf->slot217();
	dir.z = 0;
	VectorNormalize(dir);
	Vector fwd;
	pSelf->slot372(&fwd);
	if (DotProduct(dir, fwd) > 0.994)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10326d40 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10326d40(char *self, int, int a, int b, int c)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HandleInteraction";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x103274a0 size=0x1e
#include "CBaseCombatCharacter.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseCombatCharacter::vfunc5
CBaseCombatCharacter *CBaseCombatCharacter::vfunc5(unsigned int flags)
{
	sub_100078c4();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10327790 size=0x161
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

void sub_101cd940(void *pEntity);
void __fastcall sub_103234a0(CBaseCombatCharacter *pChar);

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

class S_Slot139
{
public:
	SL100(a)
	SL10(b0)
	SL10(b1)
	SL10(b2)
	virtual void b30(); virtual void b31(); virtual void b32(); virtual void b33(); virtual void b34();
	virtual void b35(); virtual void b36(); virtual void b37(); virtual void b38();
	virtual void slot139(CBaseEntity *pOther);
};

struct S_CharView
{
	char m_pad0[0x5a8];
	unsigned int m_hRemove;
	char m_pad1[0x1598 - 0x5ac];
	void **m_ppRelationships;
	int m_nRelAlloc;
	int m_nRelationships;
};

void CBaseCombatCharacter::vfunc180()
{
	ScopeTrace trace("CBaseCombatCharacter::UpdateOnRemove", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	S_CharView *v = (S_CharView *)this;
	CBaseEntity *pOwner = vfunc97();
	if (pOwner)
		((S_Slot139 *)pOwner)->slot139(this);
	int i;
	for (i = 0; i < v->m_nRelationships; i++) {
		if (v->m_ppRelationships[i])
			delete v->m_ppRelationships[i];
	}
	delete v->m_ppRelationships;
	v->m_ppRelationships = 0;
	v->m_nRelationships = 0;
	v->m_nRelAlloc = 0;
	for (i = 0; i < 0xe0; i++) {
		if (sub_1032e8b0(i))
			sub_101cd940(sub_1032e8b0(i));
	}
	sub_10052030();
	sub_103234a0(this);
	sub_10323770();
	sub_101cd940(EHandle_Get(v->m_hRemove));
	CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x10327e20 size=0x77
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f908[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::vfunc393()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f908;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return 0x43;
}
// END FUNCTION

// FUNCTION: 0x10328030 size=0xa5
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

char __cdecl sub_104126a0(int act);

int CBaseCombatCharacter::vfunc375(int act)
{
	ScopeTrace trace("CBaseCombatCharacter::NPC_EarlyTranslateActivity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (sub_104126a0(act))
		return sub_10328380(act, -1, 0, -1);
	return act;
}
// END FUNCTION

// FUNCTION: 0x10328110 size=0x78
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f9ac[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::vfunc376(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f9ac;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return a;
}
// END FUNCTION

// FUNCTION: 0x10329760 size=0x270
#include "CBaseCombatCharacter.h"
#include "CStatDefault3List.h"
#include "ScopeTrace.h"

extern "C" int sprintf(char *, const char *, ...);
void sub_101cf5c0(CBaseEntity *p, int v, int w);

struct CGrappleDbg10937034
{
	virtual void v0();
	virtual char v1();
	char pad[0x2c - 4];
	int m2c;
};
extern CGrappleDbg10937034 *g_10937034;
extern CStatDefault3List g_10738d10;

// TARGET: CBaseCombatCharacter::vfunc379
char CBaseCombatCharacter::vfunc379(CBaseEntity *pTarget, int nRole, int nType, int a4, int a5, int a6, char bHolster)
{
	ScopeTrace trace("CBaseCombatCharacter::EnterGrappleState", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_10937034->v1() && g_10937034->m2c) {
		char buf[256];
		sprintf(buf, "%s EnterGrappleState with %s : role=%d type=%d", sub_100ab4f0(), pTarget->sub_100ab4f0(), nRole, nType);
		sub_103221b0(buf);
	}
	if (pTarget)
		m_hTarget1538 = pTarget;
	else
		m_hTarget1538 = (CBaseEntity *)0;
	m_nTarget153c = nRole;
	m_nTargetMode1540 = nType;
	m_nGrapple1544 = a4;
	m_bGrapple1554 = 0;
	if (bHolster) {
		if (sub_1032e7b0() && (((CBaseEntity *)sub_1032e7b0())->m_nEffectFlags & 0x40) != 0x40) {
			((CBaseEntity *)sub_1032e7b0())->vfunc66();
			m_bGrapple1554 = 1;
		}
	}
	sub_100976e0();
	m_vecGrapple1548 = *(Vector *)a86();
	sub_101cf5c0(this, a5, 0);
	vfunc65(*(int *)((char *)this + 0x428), a6, *(int *)((char *)this + 0x430));
	m_nGrapple1534 = vfunc94();
	if (m_pA8)
		vfunc93(0, 0);
	m_hGrapple1558 = (CBaseEntity *)0;
	if (nRole)
		m_hGrapple1558 = pTarget;
	char *pCtrl = (char *)m_pA8;
	if (pCtrl)
		*(int *)(pCtrl + 0x1a90) = g_10738d10.sub_101d5f10((CBaseCombatCharacter *)m_hTarget1538.Get())->m_d0[0][12];
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1032af40 size=0x1b7
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CBaseCombatCharacter.h"
#include "CBCCSlotViews.h"

struct CvarInner402 { virtual void v0(); virtual char vfunc1(); char pad[0x28]; int m_nValue; };
struct CvarEntry402 { int pad; CvarInner402 *m_pInner; };
struct CvarSys402 { virtual void v0(); virtual void v1(); virtual CvarEntry402 *FindVar(const char *name); };
extern CvarSys402 *g_1070b234;

char CBaseCombatCharacter::vfunc402()
{
	CCombatCharGibSlotView *pView = (CCombatCharGibSlotView *)this;
	ScopeTrace trace("CBaseCombatCharacter::Event_Gibbed", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	bool bGib = false;
	if (pView->vfunc396()) {
		CvarEntry402 *pVar = g_1070b234->FindVar("violence_hgibs");
		if (pVar && (pVar->m_pInner->vfunc1() || !pVar->m_pInner->m_nValue))
			bGib = true;
	} else if (pView->vfunc397()) {
		CvarEntry402 *pVar = g_1070b234->FindVar("violence_agibs");
		if (pVar && (pVar->m_pInner->vfunc1() || !pVar->m_pInner->m_nValue))
			bGib = true;
	}
	m_nTakeDamage = 0;
	{
		ScopeTrace trace2("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	m_field200 = 2;
	sub_100b3b00();
	if (bGib) {
		pView->vfunc395();
		return 0;
	}
	vfunc66();
	return pView->vfunc394();
}
// END FUNCTION

// FUNCTION: 0x1032bdf0 size=0x6f
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc403()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Event_Dying";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1032c580 size=0xd4
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

extern "C" int _strcmpi(const char *, const char *);

#define W10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define W100(p) W10(p##0) W10(p##1) W10(p##2) W10(p##3) W10(p##4) W10(p##5) W10(p##6) W10(p##7) W10(p##8) W10(p##9)

class CWeaponNameUnit
{
public:
    W100(a) W100(b) W100(c) W10(d0) W10(d1) W10(d2) W10(d3)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7();
    virtual const char *GetClassname();
    void sub_103f9160(int a);
};

void CBaseCombatCharacter::vfunc300(int a, int b, int c)
{
    ScopeTrace trace("CBaseCombatCharacter::Event_TookLife", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (*(unsigned char *)((char *)this + 0xe38) & 4) {
        for (int i = 0; i < sub_1032e890(); i++) {
            CWeaponNameUnit *pWeapon = (CWeaponNameUnit *)sub_1032e8b0(i);
            if (pWeapon && !_strcmpi(pWeapon->GetClassname(), "item_p_occult_regen"))
                pWeapon->sub_103f9160(a);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1032d2e0 size=0x7a
#include "CBaseCombatCharacter.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct Slot386 {
    V100(a) V100(b) V100(c)
    V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k)
    virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5();
    virtual void v386();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10620140[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::vfunc387()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10620140;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ((Slot386 *)this)->v386();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032d380 size=0x2aa
#include "ScopeTrace.h"
#include "CBaseCombatWeapon.h"
bool __fastcall sub_10256280(void *p);
// TARGET: CBaseCombatCharacter::vfunc383
void CBaseCombatCharacter::vfunc383(CBaseCombatWeapon *pWeapon, char bNoEquip)
{
	ScopeTrace st("CBaseCombatCharacter::Weapon_Equip", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	bool bEquipped = false;
	sub_10334e70(pWeapon);
	if (!m_pA8 && !bNoEquip && !sub_10256280(pWeapon)) {
		if (m_hActiveWeapon19a4.Get()) {
			((CBaseCombatWeapon *)m_hActiveWeapon19a4.Get())->vfunc316(0);
			((CBaseCombatWeapon *)m_hActiveWeapon19a4.Get())->vfunc66();
		}
		m_hActiveWeapon19a4 = (CBaseEntity *)pWeapon;
		((CBaseCombatWeapon *)m_hActiveWeapon19a4.Get())->vfunc67();
		sub_10335de0(m_hActiveWeapon19a4.Get());
		bEquipped = true;
		if (*(unsigned *)((char *)this + 0x204) & 0x100) {
			*(unsigned *)((char *)m_hActiveWeapon19a4.Get() + 0x8c0) = 0x4e6e6b28;
			*(unsigned *)((char *)m_hActiveWeapon19a4.Get() + 0x8c4) = 0x4e6e6b28;
		}
	}
	pWeapon->vfunc298(this, *(int *)&bNoEquip);
	if (!sub_10256280(pWeapon))
		*((char *)this + 0x1588) = 1;
	if (!bNoEquip && bEquipped) {
		pWeapon->vfunc315();
		return;
	}
	if (!m_pA8)
		pWeapon->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x1032d6e0 size=0x14e
#include "CBaseCombatCharacter.h"

struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern "C" int __cdecl _strcmpi(const char *, const char *);

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CccVt
{
	S100(a) S100(b) S100(c) S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
	virtual int TakeAmmo(int a, int b, int c);
};

struct NameObj
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual const char *GetName();
};

struct NameHolder
{
	virtual void a0(); virtual void a1(); virtual void a2();
	virtual NameObj *GetObj();
};

struct AmmoEdict
{
	char pad[0x40];
	NameHolder *m_pHolder;
};

struct AmmoWeapon
{
	S100(a) S100(b) S100(c) S10(d0) S10(d1) S10(d2)
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual bool Notify(int a, int b, int c, int d, int e, int f);
};

// TARGET: CBaseCombatCharacter::vfunc384
void CBaseCombatCharacter::vfunc384(CBaseEntity *pAmmoWeapon)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Weapon_EquipAmmoOnly";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	for (int i = 0; i < 0xe0; i++)
	{
		if (sub_1032e8b0(i))
		{
			AmmoEdict *edict = (AmmoEdict *)pAmmoWeapon->m_pEdict2e0;
			const char *ammoName;
			if (!edict->m_pHolder)
				ammoName = g_106b8540;
			else
				ammoName = edict->m_pHolder->GetObj()->GetName();
			const char **pcls = (const char **)((char *)sub_1032e8b0(i) + 0x11c);
			const char *cls = *pcls;
			if (!cls)
				cls = g_106b8540;
			if (_strcmpi(cls, ammoName) == 0)
			{
				int *p = (int *)((char *)pAmmoWeapon + 0x74c);
				*((char *)this + 0x1588) = 0;
				bool bAny = false;
				for (int k = 2; k != 0; k--)
				{
					int count = p[0];
					int taken = ((CccVt *)this)->TakeAmmo(count, p[-2], 0);
					p[0] -= taken;
					if (taken > 0)
						bAny = true;
					p++;
				}
				*((char *)this + 0x1588) = 1;
				if (bAny)
					((AmmoWeapon *)pAmmoWeapon)->Notify(10, 3, 0, 0, 0, 0);
				--*g_109f3680;
				return;
			}
		}
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032d9b0 size=0x14e
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
#define SL50(p) SL10(p##a) SL10(p##b) SL10(p##c) SL10(p##d) SL10(p##e)
struct WepRec { int key; int ref; char flag; };
struct WepL {
    SL50(w0) SL50(w1) SL50(w2) SL50(w3) SL50(w4) SL50(w5) SL50(w6) SL10(w7)
    virtual void x0(); virtual void x1();
    virtual WepRec *v362();
    virtual int v363();
};
struct CharL {
    SL50(c0) SL50(c1) SL50(c2) SL50(c3) SL50(c4) SL50(c5) SL50(c6) SL10(c7) SL10(c8)
    SL5(c9)
    virtual void y0();
    virtual int v376(int a);
};

bool CBaseCombatCharacter::sub_1032d9b0(void *pWeapon)
{
    const char *ent;
    if (this) {
        ent = *(const char **)((char *)this + 0x26c);
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseCombatCharacter::Weapon_CanUse", ent, g_106b8540);
    WepL *w = (WepL *)pWeapon;
    CharL *self = (CharL *)this;
    WepRec *recs = w->v362();
    int count = w->v363();
    for (int i = 0; i < count; i++) {
        if (recs[i].flag) {
            int a = self->v376(recs[i].ref);
            if (((CBaseAnimating *)this)->sub_1008dd30(a, -1) < 0) {
                int j;
                for (j = 0; j < count; j++) {
                    if (recs[i].key == recs[j].key && i != j) {
                        int b = self->v376(recs[j].ref);
                        if (((CBaseAnimating *)this)->sub_1008dd30(b, -1) >= 0)
                            break;
                    }
                }
                if (j == count)
                    return false;
            }
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1032ebc0 size=0x9d
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106203f4[];
extern char g_106b8540[];
extern char g_105387dc[];
int CBaseCombatCharacter::vfunc143(float flHealth, int bitsDamageType)
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106203f4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (m_nTakeDamage == 0) {
        --*g_109f3680;
        return 0;
    }
    int r = CBaseEntity::vfunc143(flHealth, bitsDamageType);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1032fb80 size=0x98
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
#define SL50(p) SL10(p##a) SL10(p##b) SL10(p##c) SL10(p##d) SL10(p##e)
struct PoseSetter {
    SL50(q0) SL50(q1) SL50(q2) SL50(q3) SL50(q4) SL50(q5) SL10(q6a) SL10(q6b) SL10(q6c) SL10(q6d) SL5(q7)
    virtual void q8();
    virtual void vfunc346(int pose, int a, int b);
};

// TARGET: CBaseCombatCharacter::vfunc345
void CBaseCombatCharacter::vfunc345(const char *pszName, int a, int b)
{
    const char *ent;
    if (this != 0) {
        ent = m_name26c;
        if (ent == 0)
            ent = g_106b8540;
    } else
        ent = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SetPoseParameter";
    g_109f3620[*g_109f3680].b = ent;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ((PoseSetter *)this)->vfunc346(sub_10092270(pszName), a, b);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032fe60 size=0x158
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"

// TARGET: CBaseCombatCharacter::vfunc348
int CBaseCombatCharacter::vfunc348()
{
	ScopeTrace trace("CBaseCombatCharacter::HealthToPercent", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int a = GetActiveStatList()->sub_10010609(0x11);
	int b = GetActiveStatList()->sub_10010609(0xf);
	return (a - b) * m_iMaxHealth / a;
}
// END FUNCTION

// FUNCTION: 0x10330020 size=0x75
#include "CBaseCombatCharacter.h"
extern char g_10937cf2;
struct CDisciplineEntry {
    char m_pad[0x2c];
    float m_flDuration;
};
struct CDisciplineMgrView {
    int sub_101e1250(int a, int b);
    CDisciplineEntry *sub_101e11c0(int index);
};
extern CDisciplineMgrView g_10739a4c;

bool CBaseCombatCharacter::vfunc334(int a, int b)
{
    if (m_field146c > 0)
        return false;
    g_10937cf2 = 0;
    int nIndex = g_10739a4c.sub_101e1250(a, b);
    if (nIndex != -1) {
        CDisciplineEntry *pEntry = g_10739a4c.sub_101e11c0(nIndex);
        float flElapsed = gpGlobals->curtime - ((float *)((char *)this + 0xec0))[nIndex];
        float flDuration = pEntry->m_flDuration;
        if (flElapsed < flDuration) {
            g_10937cf2 = 1;
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x103315e0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_103315e0(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::OnTakeDamage_Dying";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10331680 size=0xb9
#include "CVDmg_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc392(void *pInfo)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::OnTakeDamage_Dead";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (*(int *)((char *)this + 0x1fc) != 1) {
		CVDmg_t *pDmg = *(CVDmg_t **)pInfo;
		float dmg;
		if (pDmg)
			dmg = (float)pDmg->sub_101faa70();
		else
			dmg = *(float *)((char *)pInfo + 0x30);
		*(int *)((char *)this + 0x210) = (int)((float)*(int *)((char *)this + 0x210) - dmg);
	}
	--*g_109f3680;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10331880 size=0x97
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct ScopeGuard
{
	ScopeGuard(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~ScopeGuard() { (*g_109f3680)--; }
};

typedef QAngle *(__fastcall *PFN_ANGLES)(void *);

QAngle CBaseCombatCharacter::vfunc367()
{
	ScopeGuard guard("CBaseCombatCharacter::BodyAngles", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	return *((PFN_ANGLES)(*(void ***)this)[219])(this);
}
// END FUNCTION

// FUNCTION: 0x10331950 size=0xb6
#include "Vector.h"
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_10620864[];
extern float (__fastcall *g_1057966c)(Vector *pThis);

#define S10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
#define S100(x) S10(x##0) S10(x##1) S10(x##2) S10(x##3) S10(x##4) S10(x##5) S10(x##6) S10(x##7) S10(x##8) S10(x##9)
struct BodySlots {
	S100(a) S100(b) S100(c)
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual void vfunc369(Vector *pOut);
};

struct ScopeTraceGuard {
	ScopeTraceGuard(const char *a, const char *b, const char *c)
	{
		g_109f3620[*g_109f3680].a = a;
		g_109f3620[*g_109f3680].b = b;
		g_109f3620[*g_109f3680].c = c;
		++*g_109f3680;
	}
	~ScopeTraceGuard() { --*g_109f3680; }
};

Vector CBaseCombatCharacter::vfunc368()
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	ScopeTraceGuard trace(g_10620864, name, g_106b8540);
	Vector vBodyDir;
	((BodySlots *)this)->vfunc369(&vBodyDir);
	vBodyDir.z = 0;
	g_1057966c(&vBodyDir);
	return vBodyDir;
}
// END FUNCTION

// FUNCTION: 0x10331a40 size=0xb8
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *name; const void *file; const void *line; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);

struct ScopeTrace
{
	ScopeTrace(const char *func, const char *name)
	{
		g_109f3620[*g_109f3680].name = func;
		g_109f3620[*g_109f3680].file = name;
		g_109f3620[*g_109f3680].line = g_106b8540;
		(*g_109f3680)++;
	}
	~ScopeTrace() { (*g_109f3680)--; }
};

#define SL1(n) virtual void s##n();
#define SL10(p) SL1(p##0) SL1(p##1) SL1(p##2) SL1(p##3) SL1(p##4) SL1(p##5) SL1(p##6) SL1(p##7) SL1(p##8) SL1(p##9)
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

class CBCCSlots367
{
public:
	SL100(0) SL100(1) SL100(2)
	SL10(30) SL10(31) SL10(32) SL10(33) SL10(34) SL10(35)
	SL1(360) SL1(361) SL1(362) SL1(363) SL1(364) SL1(365) SL1(366)
	virtual QAngle slot367();
};

// TARGET: CBaseCombatCharacter::vfunc369
Vector CBaseCombatCharacter::vfunc369()
{
	ScopeTrace trace("CBaseCombatCharacter::BodyDirection3D", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	QAngle ang = ((CBCCSlots367 *)this)->slot367();
	Vector fwd;
	::sub_10139610(&ang, &fwd, 0, 0);
	return fwd;
}
// END FUNCTION

// FUNCTION: 0x10331cb0 size=0xb6
#include "Vector.h"
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_106208f4[];
extern float (__fastcall *g_1057966c)(Vector *pThis);

#define S10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
#define S100(x) S10(x##0) S10(x##1) S10(x##2) S10(x##3) S10(x##4) S10(x##5) S10(x##6) S10(x##7) S10(x##8) S10(x##9)
struct HeadSlots {
	S100(a) S100(b) S100(c)
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9(); virtual void e10();
	virtual void vfunc371(Vector *pOut);
};

struct ScopeTraceGuard {
	ScopeTraceGuard(const char *a, const char *b, const char *c)
	{
		g_109f3620[*g_109f3680].a = a;
		g_109f3620[*g_109f3680].b = b;
		g_109f3620[*g_109f3680].c = c;
		++*g_109f3680;
	}
	~ScopeTraceGuard() { --*g_109f3680; }
};

Vector CBaseCombatCharacter::vfunc370()
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	ScopeTraceGuard trace(g_106208f4, name, g_106b8540);
	Vector vHeadDir;
	((HeadSlots *)this)->vfunc371(&vHeadDir);
	vHeadDir.z = 0;
	g_1057966c(&vHeadDir);
	return vHeadDir;
}
// END FUNCTION

// FUNCTION: 0x10332010 size=0x80
#include "CBaseCombatCharacter.h"
struct ScopeTraceEntry { const char *m_pFunction; const char *m_pEntity; const char *m_pExtra; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void CBaseCombatCharacter::vfunc50(int a)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].m_pFunction = "CBaseCombatCharacter::GetCameraViewpointPosition";
	g_109f3620[*g_109f3680].m_pEntity = name;
	g_109f3620[*g_109f3680].m_pExtra = "";
	++*g_109f3680;
	sub_10014eb6(a, 0);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103320b0 size=0xbe
#include "CBaseCombatCharacter.h"
#include "CBaseEntitySlots.h"
#include "ScopeTrace.h"

// TARGET: CBaseCombatCharacter::vfunc51
void CBaseCombatCharacter::vfunc51(int unused, float *pOut)
{
	ScopeTrace trace("CBaseCombatCharacter::GetCameraTargetPosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_b10d4)
	{
		sub_10014eb6((int)pOut, 0);
		return;
	}
	float buf[3];
	float *p = ((CBaseEntitySlots *)this)->slot192(buf);
	pOut[0] = p[0];
	pOut[1] = p[1];
	pOut[2] = p[2];
}
// END FUNCTION

// FUNCTION: 0x103321a0 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

float __fastcall sub_103321a0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetCameraFadeInTime";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    float r = *(float *)(self + 0x10d0);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10332240 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

float __fastcall sub_10332240(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetCameraFadeOutTime";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    float r = *(float *)(self + 0x10d0);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10332ef0 size=0x92
#include "CUnknown10332fc0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

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

void CUnknown10332fc0::sub_10332ef0(void *pSpeaker, int nDelta, int unused)
{
	CScopeTrace trace("CBaseCombatCharacter::AdjustDialogReaction", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	sub_103330f0(pSpeaker, sub_10332fc0(pSpeaker) + nDelta);
}
// END FUNCTION

// FUNCTION: 0x10333700 size=0x15a
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
extern char g_105387dc[];
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
#define SL50(p) SL10(p##a) SL10(p##b) SL10(p##c) SL10(p##d) SL10(p##e)
struct TargetL {
    SL50(t0) SL50(t1) SL10(t2) SL10(t3) SL10(t4) SL5(t5)
    virtual void u0(); virtual void u1(); virtual void u2();
    virtual int v138();
};
struct RelRec { EHANDLE handle; int cls; int pad; int priority; };
struct RelHolder {
    char pad[0x1598];
    RelRec **m_pTable;
    int m_nCap;
    int m_nCount;
};

int CBaseCombatCharacter::sub_10333700(CBaseEntity *pTarget)
{
    const char *ent;
    if (this) {
        ent = *(const char **)((char *)this + 0x26c);
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseCombatCharacter::IRelationPriority", ent, g_106b8540);
    if (!pTarget)
        return 0;
    RelHolder *self = (RelHolder *)this;
    int i;
    for (i = 0; i < self->m_nCount; i++) {
        if (pTarget == self->m_pTable[i]->handle.Get())
            return self->m_pTable[i]->priority;
    }
    for (i = 0; i < self->m_nCount; i++) {
        if (((TargetL *)pTarget)->v138() == self->m_pTable[i]->cls)
            return self->m_pTable[i]->priority;
    }
    return 5;
}
// END FUNCTION

// FUNCTION: 0x103338c0 size=0x19c
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "Vector.h"

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

Vector CBaseCombatCharacter::vfunc389(const Vector &vecSrc)
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_ShootPosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseAnimating *pWeapon = (CBaseAnimating *)sub_1032e7b0();
	if (pWeapon) {
		Vector vecPos;
		Vector vecDummy;
		if ((char)pWeapon->sub_10092e20((int)"muzzleflash", (int)&vecPos, (int)&vecDummy))
			return vecPos;
	}
	Vector forward, right, up;
	::sub_10139610(*(const QAngle *)((CEntityVSlots *)this)->slot221(), &forward, &right, &up);
	return forward * m_f157c + vecSrc + right * m_f1578 + up * m_f1580;
}
// END FUNCTION

// FUNCTION: 0x10334a50 size=0x86
#include "CBaseCombatCharacter.h"
#include "CBaseEntitySlots.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc228(int a, int b)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::VPhysicsShadowCollision";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CBaseEntitySlots *)this)->slot75(a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10335f60 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10335f60(char *self, int, int a, int b)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Inventory_ShouldAllow_Autopickup";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10336000 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10336000(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Inventory_ShouldAllow_AutopickupAmmo";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10336cd0 size=0x75
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseCombatCharacter::vfunc307()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasUsableMeleeWeapon";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_10336a50();
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10336d70 size=0x142
#include "CBaseCombatCharacter.h"

struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern int g_10619eb4[];
extern int g_10619d28[];
extern int g_10937cd0[];

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CccVt
{
	S100(a) S100(b)
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7) S10(c8)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
	virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
	virtual int GroupSize(int group);
};

struct Weapon
{
	S100(a) S100(b) S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7)
	virtual char IsEquippable(int a);
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual unsigned int GetFlags();
	char pad[0x744 - 4];
	int m_ammoType;
};

// TARGET: CBaseCombatCharacter::vfunc308
bool CBaseCombatCharacter::vfunc308()
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = g_105387dc;
	int *p = g_10619eb4;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasUsableRangedWeapon";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	for (; *p != -1; p++)
	{
		int group = g_10619d28[*p];
		if (group >= 0)
		{
			int start = g_10937cd0[*p];
			int end = start + ((CccVt *)this)->GroupSize(group);
			for (int i = start; i < end; i++)
			{
				if (sub_1032e8b0(i))
				{
					Weapon *w = (Weapon *)sub_1032e8b0(i);
					if (w->GetFlags() & 0x6000)
					{
						if (((Weapon *)sub_1032e8b0(i))->IsEquippable(0)
							|| ((int *)this)[0x15a4 / 4 + ((Weapon *)sub_1032e8b0(i))->m_ammoType] > 0)
						{
							--*g_109f3680;
							return true;
						}
					}
				}
			}
		}
	}
	--*g_109f3680;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10337080 size=0x149
#include "CBaseCombatWeapon.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct Slots298 {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
    S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7) S10(c8)
    S1(d, 0) S1(d, 1) S1(d, 2) S1(d, 3) S1(d, 4) S1(d, 5) S1(d, 6) S1(d, 7)
    virtual int f298(int group);
};

struct ScopeTraceEntry {
    const char *m_pszName;
    const char *m_pszEntity;
    const char *m_pszExtra;
};
extern "C" __declspec(dllimport) ScopeTraceEntry g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;

struct ScopeTrace {
    ScopeTrace(const char *name, const char *entity)
    {
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszName = name;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszEntity = entity;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszExtra = "";
        g_ScopeTraceStackDepth++;
    }
    ~ScopeTrace() { g_ScopeTraceStackDepth--; }
};

extern int g_10619eb4[];
extern int g_10619d28[];
extern int g_10937cd0[];

// TARGET: CBaseCombatCharacter::vfunc309
void *CBaseCombatCharacter::vfunc309()
{
    ScopeTrace trace("CBaseCombatCharacter::GetBestRangedWeapon", this ? (m_name26c ? m_name26c : "") : "NULL ENTITY");
    for (int *p = g_10619eb4; *p != -1; p++) {
        int group = g_10619d28[*p];
        if (group >= 0) {
            int start = g_10937cd0[*p];
            int end = start + ((Slots298 *)this)->f298(group);
            for (int i = start; i < end; i++) {
                if (sub_1032e8b0(i)) {
                    CBaseCombatWeapon *w = (CBaseCombatWeapon *)sub_1032e8b0(i);
                    if (w->vfunc360() & 0x6000) {
                        w = (CBaseCombatWeapon *)sub_1032e8b0(i);
                        if (w->vfunc280(0) || *(int *)((char *)this + *(int *)((char *)sub_1032e8b0(i) + 0x744) * 4 + 0x15a4) > 0)
                            return sub_1032e8b0(i);
                    }
                }
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10337ca0 size=0xa6
#include "CBaseCombatCharacter.h"
#include "CVStatListManager_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc111()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::MemberSync";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int edict = m_pEdict2e0;
    int index = engine->vfunc35(edict);
    ((CVStatListManager_t *)((char *)this + 0x13a8))->sub_10201fa0(index);
    *(unsigned int *)((char *)this + 0x13cc) = (unsigned char)sub_10336920();
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10337d80 size=0x8b
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseCombatCharacter::vfunc106(const char *szClassname)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::PostConstructor";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	CBaseEntity::vfunc106(szClassname);
	vfunc111();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10339800 size=0xed
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
struct EntInfo { void *pEnt; unsigned int serial; int pad; };
struct EntList { int hdr; EntInfo e[1]; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern EntList *g_10566458;

__forceinline void *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntInfo *e = &g_10566458->e[h & 0x1fff];
		if (e->serial == (h >> 13))
			return e->pEnt;
	}
	return 0;
}

char CBaseCombatCharacter::vfunc342(int unused)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::CanBeFedUponBy";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_10339a90() && !(*(unsigned int *)((char *)this + 0x14bc) & 0x8000000)) {
		if (!ResolveHandle(*(unsigned int *)((char *)this + 0x1538)) || *(int *)((char *)this + 0x153c) == -1) {
			if (vfunc158() && !sub_10341aa0()) {
				(*g_109f3680)--;
				return 1;
			}
		}
	}
	(*g_109f3680)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1033b500 size=0xbf
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];

// TARGET: CBaseCombatCharacter::vfunc356
void CBaseCombatCharacter::vfunc356()
{
	ScopeTrace trace("CBaseCombatCharacter::PrayerBegin", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	*(float *)((char *)this + 0x1494) = 2.0f;
	*(float *)((char *)this + 0x1490) = gpGlobals->curtime + 2.0f;
	*(int *)((char *)this + 0xff0) = 0x131;
	sub_100b2e30(g_1070d1b0);
	if (*(int *)((char *)this + 0xa8) != 0)
		vfunc93(0, 0);
}
// END FUNCTION

// FUNCTION: 0x1033cb90 size=0x74
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc119()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Kill";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	CBaseEntity::vfunc119();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033cc30 size=0x71
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc338(int a, int b, int c)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::AddPreDisciplineEffect";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033ccd0 size=0x71
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10622018[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::vfunc340(int a, int b, int c)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10622018;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033cd70 size=0x71
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc339(int a, int b, int c)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::AddDisciplineEffect";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033cef0 size=0x86
#include "CUnknown101e3af0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CUnknown101e3af0 g_10739a4c;

void CBaseCombatCharacter::vfunc341(int discipline, int unused)
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::RemoveDisciplineEffects";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	g_10739a4c.sub_101e3af0(this, discipline, 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033dde0 size=0x9b
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_10011fdb(CBaseCombatCharacter *pChar, const char *pszName, int a);

void CBaseCombatCharacter::vfunc304()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GiveBaseFightingItems";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (!sub_10335950("item_w_fists")) {
        sub_10011fdb(this, "item_w_fists", 0);
        sub_1033c6b0(0x10);
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033deb0 size=0x92
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int __fastcall sub_1033c9c0(char *pThis);
void sub_100118d8(CBaseCombatCharacter *pThis, const char *classname);

void CBaseCombatCharacter::vfunc305()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::RemoveBaseFightingItems";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_1033c9c0((char *)this) & 0x10) {
		sub_100118d8(this, "item_w_fists");
		sub_1033c770(0x10);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033e370 size=0xea
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"

#define HV1(p) virtual void p();
#define HV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HV100(p) HV10(p##0) HV10(p##1) HV10(p##2) HV10(p##3) HV10(p##4) HV10(p##5) HV10(p##6) HV10(p##7) HV10(p##8) HV10(p##9)

struct LookProbe	// a character as seen through its vtable: slots 192, 193 and 220 are typed
{
	HV100(la) HV10(lb0) HV10(lb1) HV10(lb2) HV10(lb3) HV10(lb4) HV10(lb5) HV10(lb6) HV10(lb7) HV10(lb8)
	HV1(lc0) HV1(lc1)
	virtual Vector vfunc192();
	virtual Vector vfunc193();
	HV10(ld0) HV10(ld1) HV1(ld20) HV1(ld21) HV1(ld22) HV1(ld23) HV1(ld24) HV1(ld25)
	virtual void *vfunc220();
};

struct LookTarget	// the object at +0x5d44 of the AI object at +0x94
{
	void sub_102e20b0(void *pPos, float flTime);	// stub 0x10007248
};

struct LookOwner	// the AI object at +0x94
{
	char m_pad0000[0x5d44];
	LookTarget *m_pLook;
};

void __fastcall sub_102e0b40(float *pLook);

void CBaseCombatCharacter::vfunc306(CBaseCombatCharacter *pTarget, char bUseEyes)
{
	ScopeTrace trace("CBaseCombatCharacter::LookAtEntity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (bUseEyes)
		((LookProbe *)pTarget)->vfunc192();
	else
		((LookProbe *)pTarget)->vfunc193();
	((LookProbe *)this)->vfunc193();
	LookOwner *pOwner = *(LookOwner **)((char *)this + 0x94);
	if (pOwner) {
		sub_102e0b40((float *)pOwner->m_pLook);
		LookTarget *pLook = pOwner->m_pLook;
		pLook->sub_102e20b0(((LookProbe *)pTarget)->vfunc220(), -1.0f);
	}
}
// END FUNCTION

// FUNCTION: 0x1033e7e0 size=0x121
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

void sub_10143b70(const float *pos, const float *mins, const float *maxs, int a, int r, int b, int c, float duration);

typedef float *(__fastcall *GetAbsOriginFn)(CBaseCombatCharacter *pThis);

void CBaseCombatCharacter::vfunc125()
{
	ScopeTrace trace("CBaseCombatCharacter::DrawMuzzleOverlay", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *pWeapon = sub_1032e7b0();
	if (pWeapon) {
		float *p = ((GetAbsOriginFn)(*(void ***)this)[217])(this);
		float pos[3];
		pos[0] = p[0];
		pos[1] = p[1];
		pos[2] = p[2];
		float ang[3];
		int r = 0;
		if ((char)((CBaseAnimating *)pWeapon)->sub_10092e20((int)"muzzleflash", (int)pos, (int)ang))
			r = 0xff;
		float mins[3] = { -3.0f, -3.0f, -3.0f };
		float maxs[3] = { 3.0f, 3.0f, 3.0f };
		sub_10143b70(pos, mins, maxs, 0xff, r, 0, 1, 0.3f);
	}
}
// END FUNCTION

// FUNCTION: 0x10340360 size=0x139
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CStatDefault3List.h"
#include "CUnknown101d4f20.h"

extern CStatDefault3List g_10738d10;
extern "C++" __declspec(dllimport) void DevMsg(const char *fmt, ...);
void sub_10191ac0(int nValue);
char sub_102f9970();
int sub_102f9950();
void sub_102f9920(int a);
const char *sub_102d6230(int a);

struct CUnknown101d4f20Ret : CUnknown101d4f20
{
	CUnknown101d4f20_Value *sub_101d4f20(CUnknown101d4f20_Value *out);
};

#define BCV(n) virtual void b##n();
#define BCV10(p) BCV(p##0) BCV(p##1) BCV(p##2) BCV(p##3) BCV(p##4) BCV(p##5) BCV(p##6) BCV(p##7) BCV(p##8) BCV(p##9)
struct CCharacterView	// the character as seen for slot 337
{
	BCV10(0) BCV10(1) BCV10(2) BCV10(3) BCV10(4) BCV10(5) BCV10(6) BCV10(7) BCV10(8) BCV10(9)
	BCV10(10) BCV10(11) BCV10(12) BCV10(13) BCV10(14) BCV10(15) BCV10(16) BCV10(17) BCV10(18) BCV10(19)
	BCV10(20) BCV10(21) BCV10(22) BCV10(23) BCV10(24) BCV10(25) BCV10(26) BCV10(27) BCV10(28) BCV10(29)
	BCV10(30) BCV10(31) BCV10(32) BCV(330) BCV(331) BCV(332) BCV(333) BCV(334) BCV(335) BCV(336)
	virtual int vfunc337();
};

// TARGET: CBaseCombatCharacter::vfunc104
void CBaseCombatCharacter::vfunc104()
{
	ScopeTrace trace("CBaseCombatCharacter::Precache", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CUnknown101d4f20_Value value;
	int nTemplate = sub_10337860();
	sub_10191ac0(((CUnknown101d4f20Ret *)g_10738d10.sub_101d5e80(nTemplate))->sub_101d4f20(&value)->m_value);
	vfunc71();
	if (sub_102f9970())
	{
		int nA = ((CCharacterView *)this)->vfunc337();
		nA &= sub_102f9950();
		if (nA != ((CCharacterView *)this)->vfunc337())
		{
			DevMsg("\n****ERROR***\n");
			DevMsg("%s is being spawned after links have been initialized, but its hull %s\n", sub_100ab4f0(), sub_102d6230(m_field1568));
			DevMsg("Has not been initialized.  Be sure that this class's GetUsedHullBits function includes that hull type.\n");
			DevMsg("If it already is, this entity is probably spawned after the node graph is created.\n");
			DevMsg("Have the class responsible for spawning it include it.\n");
			DevMsg("****ERROR***\n\n");
		}
	}
	else
		sub_102f9920(((CCharacterView *)this)->vfunc337());
}
// END FUNCTION

// FUNCTION: 0x103404f0 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_103404f0(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::ReceivesImpactDamage";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10340590 size=0x8b
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

bool CBaseCombatCharacter::vfunc73(CBaseEntity *pOther)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::CausesImpactDamage";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	bool result = (pOther->sub_100b3700() & 0x20000000) == 0x20000000;
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10340650 size=0x10c
#include "CBaseCombatCharacter.h"
#include "CBaseEntitySlots.h"
#include "ScopeTrace.h"

// TARGET: CBaseCombatCharacter::vfunc68
bool CBaseCombatCharacter::vfunc68(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseCombatCharacter::ShouldIgnoreCollision", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char *pOwner = *(char **)((char *)pOther + 0x9c);
	if (pOwner && !pOwner[0x1480])
		return false;
	if (pOther->sub_100b5190())
		return false;
	if (((CBaseEntitySlots *)pOther)->slot95() == 1)
		return true;
	char *pChar = *(char **)((char *)pOther + 0x98);
	if (pChar && (*(unsigned int *)(pChar + 0x14b8) & 0x20000))
		return true;
	return sub_1008bfe0(pOther);
}
// END FUNCTION

// FUNCTION: 0x103407b0 size=0xec
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"



char CBaseCombatCharacter::vfunc86(int a, int b, int c, int d, int e)
{
	ScopeTrace t("CBaseCombatCharacter::ShouldTransmit", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_flForceTransmitTime > gpGlobals->curtime)
		return 1;
	int idx = engine->vfunc35(b) - 1;
	if (*((char *)this + 0x14e4 + idx))
		return 1;
	return sub_100ab020(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x103408e0 size=0x89
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

const char *CBaseCombatCharacter::vfunc244()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetSkeletonModelName";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_10336920()) {
		(*g_109f3680)--;
		return "models/character/npc/common/skeleton/skeleton_male.mdl";
	}
	(*g_109f3680)--;
	return "models/character/npc/common/skeleton/skeleton_female.mdl";
}
// END FUNCTION

// FUNCTION: 0x103409a0 size=0x1b8
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

extern char g_105387dc[];
void sub_101381b0(const float *pIn, const float *pMatrix, float *pOut);

class CCombatChar138SlotView
{
public:
	VIEW_SLOT100(0) VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12)
	VIEW_SLOT(130) VIEW_SLOT(131) VIEW_SLOT(132) VIEW_SLOT(133) VIEW_SLOT(134) VIEW_SLOT(135) VIEW_SLOT(136) VIEW_SLOT(137)
	virtual void *vfunc138();
};

void CBaseCombatCharacter::vfunc105(const char *pszModel)
{
	ScopeTrace trace("CBaseCombatCharacter::SetModel", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_100b5ab0(pszModel);
	char *pHdr = (char *)sub_100952d0(-1);
	if (pHdr) {
		int bLegs = (~*(unsigned int *)(pHdr + 0xe4) >> 8) & 1;
		GetActiveStatList()->sub_102008e0(11, bLegs);
		m_nHasLegs13cc = bLegs;
		if (((CCombatChar138SlotView *)this)->vfunc138())
			sub_10106c40();
		m_nPoseIndex[0] = ((CBaseAnimating *)this)->sub_10092270("aim_pitch");
		m_nPoseIndex[1] = ((CBaseAnimating *)this)->sub_10092270("aim_yaw");
		m_nHeadBone1080 = sub_10092550((int)"Bip01 Head");
		if (m_nHeadBone1080 >= 0) {
			Vector vecAxis(0.0f, -1.0f, 0.0f);
			sub_101381b0(&vecAxis.x, (float *)(pHdr + m_nHeadBone1080 * 0xa0 + *(int *)(pHdr + 0xf4) + 0x58), &m_vecHeadAxis1074.x);
		}
		m_nVSoundTableIdx = -1;
	}
}
// END FUNCTION

// FUNCTION: 0x103412b0 size=0x8c
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc349(inputdata_t *pInput)
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputBarterBegin";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (pInput->pActivator)
		sub_103411c0(*(int *)((char *)pInput->pActivator + 0x9c), 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10341450 size=0x8c
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseCombatCharacter::vfunc350(inputdata_t *pInput)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::InputBarterEnd";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	if (pInput->pActivator)
		sub_10341370(*(int *)((char *)pInput->pActivator + 0x9c), 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103415f0 size=0x6f
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc335()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::NotifyChangeSizeSmall";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10341680 size=0x6f
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc336()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::NotifyChangeSizeNormal";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10341710 size=0x77
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106236c4[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::vfunc337()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106236c4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103417b0 size=0x76
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106236f4[];
extern char g_105387dc[];
extern char g_106b8540[];
bool CBaseCombatCharacter::vfunc295(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106236f4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10341850 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10341850(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsValidStealthKillTarget";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10342800 size=0xcb
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct CWeaponInfoBlock
{
    char pad0[0x242c];
    unsigned char m_flags242c;
};

struct CWeaponUnit : public CEntityVSlots
{
    CWeaponInfoBlock *sub_102517b0();
};

int CBaseCombatCharacter::vfunc34(int pOther)
{
    ScopeTrace trace("CBaseCombatCharacter::GetHighlightMaterial", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    CWeaponUnit *pWeapon = (CWeaponUnit *)((CBaseCombatCharacter *)pOther)->sub_1032e7b0();
    if (pWeapon && !pWeapon->slot267() && (pWeapon->sub_102517b0()->m_flags242c & 2) && pWeapon->slot285() == (int)this)
        return 6;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10344dd0 size=0x14b
#include "CBaseCombatCharacter.h"
#include "Vector.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CSlot219View
{
	SV100(a0) SV100(a1) SV10(a20) SV1(a210) SV1(a211) SV1(a212) SV1(a213) SV1(a214) SV1(a215) SV1(a216) SV1(a217) SV1(a218)
	virtual float *vfunc219();
};

float sub_101d2c70(const Vector *pVec);

int CBaseCombatCharacter::vfunc323(const Vector *pDirection)
{
	int nSide = 0;
	Vector vecDir = *pDirection;
	if (FastSqrt(vecDir.x * vecDir.x + vecDir.y * vecDir.y) >= 1e-7f) {
		vecDir.z = 0;
		VectorNormalize(vecDir);
		float flYaw = sub_101d2c70(&vecDir);
		float flAngle = (float)(unsigned short)(int)((((CSlot219View *)this)->vfunc219()[1] - flYaw) * 182.04445f) * 0.005493164f;
		if (flAngle < 0)
			flAngle += 360.0f;
		if (flAngle > 316.0f || flAngle <= 45.0f)
			nSide = 2;
		else if (flAngle <= 135.0f)
			nSide = 3;
		else if (flAngle > 135.0f && flAngle <= 225.0f)
			nSide = 0;
		else if (flAngle > 225.0f)
			nSide = 1;
	}
	return nSide;
}
// END FUNCTION

// FUNCTION: 0x10345460 size=0x3
bool CBaseCombatCharacter::vfunc327()
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x103482e0 size=0xaa
#include "CBaseCombatCharacter.h"
#include "CStatDefault3List.h"
#include "CVStatList_t.h"

extern CStatDefault3List g_10738d10;

// TARGET: CBaseCombatCharacter::vfunc326
bool CBaseCombatCharacter::vfunc326(int unused1, int unused2)
{
	StatDefault3 *pDefault = g_10738d10.sub_101d5f10(this);
	if (pDefault->m_98[6])
		return false;
	if (CVStatListSet::Of(this)->Find(0)->sub_102017b0(0xf, 0x11))
		return false;
	if (vfunc158())
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10348890 size=0xb7
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_10015311(void *p, int a);

int CBaseCombatCharacter::vfunc127(int a)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Restore";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int result = CBaseEntity::vfunc127(a);
    const char *p = *(const char **)((char *)this + 0x10ac);
    if (!p) p = g_106b8540;
    if (*p)
        sub_103239a0(p);
    sub_10015311((char *)this + 0x13d0, 1);
    (*g_109f3680)--;
    return result;
}
// END FUNCTION

// FUNCTION: 0x10348980 size=0xb0
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_1062416c[];
extern char g_106b8540[];
extern char g_105387dc[];
void sub_1009d940(void *, int);
void sub_1009d960(void *, int);
int CBaseCombatCharacter::vfunc126(int a)
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1062416c;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_1009d940((char *)this + 0x13d0, 1);
    vfunc111();
    int r = CBaseEntity::vfunc126(a);
    sub_1009d960((char *)this + 0x13d0, 1);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10348a60 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10348a60(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasExplosiveGibs";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10348b00 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_10348b00(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::KnockbackActivity_Default";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x8a;
}
// END FUNCTION

// FUNCTION: 0x10348ba0 size=0x47
#include "CBaseCombatCharacter.h"
char CBaseCombatCharacter::vfunc296(int a)
{
	if (m_nTarget153c != -1 && m_hTarget1538.Get() && a == 0xb)
		return 1;
	return 0;
}
// END FUNCTION
