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
		CVStatList_t *p;
		for (int i = 0; i < m_nStatLists; i++) {
			if (m_pStatLists[i]->m_field10 == b) {
				p = m_pStatLists[i];
				goto found;
			}
		}
		{
			static CVStatList_t def(-1);
			p = &def;
		}
found:
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
		CVStatList_t *p;
		for (int i = 0; i < m_nStatLists; i++) {
			if (m_pStatLists[i]->m_field10 == b) {
				p = m_pStatLists[i];
				goto found;
			}
		}
		{
			static CVStatList_t def(-1);
			p = &def;
		}
found:
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
		CVStatList_t *p;
		for (int i = 0; i < m_nStatLists; i++) {
			if (m_pStatLists[i]->m_field10 == b) {
				p = m_pStatLists[i];
				goto found;
			}
		}
		{
			static CVStatList_t def(-1);
			p = &def;
		}
found:
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
