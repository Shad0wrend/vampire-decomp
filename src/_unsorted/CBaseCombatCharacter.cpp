// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
#include "CUnknown1070b22c.h"
#include "CVStatListManager_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CUnknown1070b22c *g_1070b22c;

void CBaseCombatCharacter::vfunc111()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::MemberSync";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int edict = m_pEdict2e0;
    int index = g_1070b22c->vfunc35(edict);
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

struct CGlobalVarsLocal { char pad[0xc]; float curtime; };
extern CGlobalVarsLocal *g_1070b228;
extern float g_1070d1b0[3];

// TARGET: CBaseCombatCharacter::vfunc356
void CBaseCombatCharacter::vfunc356()
{
	ScopeTrace trace("CBaseCombatCharacter::PrayerBegin", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	*(float *)((char *)this + 0x1494) = 2.0f;
	*(float *)((char *)this + 0x1490) = g_1070b228->curtime + 2.0f;
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
#include "CUnknown1070b22c.h"
#include "ScopeTrace.h"

struct CGlobalVars1070b228
{
	int m_pad0;
	int m_n4;
	int m_pad8;
	float m_curtime;
};

extern CGlobalVars1070b228 *g_1070b228;
extern CUnknown1070b22c *g_1070b22c;

char CBaseCombatCharacter::vfunc86(int a, int b, int c, int d, int e)
{
	ScopeTrace t("CBaseCombatCharacter::ShouldTransmit", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_flForceTransmitTime > g_1070b228->m_curtime)
		return 1;
	int idx = g_1070b22c->vfunc35(b) - 1;
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
