// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004fc30 size=0x3
// TARGET: sub_1004fc30
int __cdecl sub_1004fc30() { return 0; }
// END FUNCTION

// FUNCTION: 0x1004fc50 size=0x3
// TARGET: sub_1004fc50
void *__fastcall sub_1004fc50(void *p) { return p; }
// END FUNCTION

// FUNCTION: 0x1004fc70 size=0x7
#include "CBaseAnimating.h"

char CBaseAnimating::vfunc251()
{
	return *(char *)((char *)this + 0x65c);
}
// END FUNCTION

// FUNCTION: 0x1008a760 size=0x6
#include "datamap.h"
#include "CBaseAnimating.h"
namespace lifted {
extern char g_1054cd70;
}
datamap_t * CBaseAnimating::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1054cd70);
}
// END FUNCTION

// FUNCTION: 0x1008a9f0 size=0x6
#include "CBaseAnimating.h"
namespace lifted {
extern char g_106ccf4c;
}
int CBaseAnimating::vfunc80()
{
    return (int)&lifted::g_106ccf4c;
}
// END FUNCTION

// FUNCTION: 0x1008aa10 size=0x3
#include "CBaseAnimating.h"
int CBaseAnimating::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b390 size=0x1e
#include "CBaseAnimating.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseAnimating::vfunc5
CBaseAnimating *CBaseAnimating::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1008b530 size=0x23f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "CBaseToggle.h"
#include "ScopeTrace.h"

void CBaseAnimating::vfunc31(int pDump)
{
	ScopeTrace trace("CBaseAnimating::Dump", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_1009ba60(pDump, "m_flYawSpeed", *(int *)((char *)this + 0x560));
	sub_1009ba60(pDump, "m_flGroundSpeedScalar", *(int *)((char *)this + 0x564));
	sub_1009ba60(pDump, "m_flGroundSpeed", *(int *)((char *)this + 0x654));
	sub_1009ba60(pDump, "m_flLastEventCheck", *(int *)((char *)this + 0x658));
	sub_1009b8a0(pDump, (int)"m_fSequencePastHalf", *(char *)((char *)this + 0x568));
	sub_1009b980(pDump, "m_nForceBone", *(int *)((char *)this + 0x660));
	sub_1009be00(pDump, "m_vecForce", *(Vector *)((char *)this + 0x664));
	sub_1009b980(pDump, "m_nSkin", *(int *)((char *)this + 0x670));
	sub_1009b980(pDump, "m_nBody", *(int *)((char *)this + 0x67c));
	sub_1009b980(pDump, "m_nHitboxSet", *(int *)((char *)this + 0x680));
	sub_1009ba60(pDump, "m_flModelScale", *(int *)((char *)this + 0x684));
	sub_1009b980(pDump, "m_nTopColor", *(int *)((char *)this + 0x688));
	sub_1009b980(pDump, "m_nBottomColor", *(int *)((char *)this + 0x68c));
	sub_1009c5f0(pDump, "m_flPoseParameter", (int *)((char *)this + 0x690), 0x18);
	sub_1009b980(pDump, "m_nSequence", *(int *)((char *)this + 0x6f0));
	sub_1009ba60(pDump, "m_flPlaybackRate", *(int *)((char *)this + 0x6f4));
	sub_1009ba60(pDump, "m_flCycle", *(int *)((char *)this + 0x6f8));
	sub_1009ba60(pDump, "m_flEffectStartTime", *(int *)((char *)this + 0x5a4));
	sub_1009c5f0(pDump, "m_flEncodedController", (int *)((char *)this + 0x6fc), 4);
	sub_1009b8a0(pDump, (int)"m_bClientSideAnimation", *(char *)((char *)this + 0x70c));
	sub_1009b980(pDump, "m_nClientSideFrameReset", *(int *)((char *)this + 0x710));
	((CBaseToggle *)this)->CBaseToggle::vfunc31(pDump);
}
// END FUNCTION

// FUNCTION: 0x1008bfe0 size=0x86
#include "CBaseAnimating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
bool sub_10158b90(CBaseAnimating *pEnt, CBaseEntity *pOther);

bool CBaseAnimating::vfunc68(CBaseEntity *pOther)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseAnimating::ShouldIgnoreCollision";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	bool bResult = sub_10158b90(this, pOther);
	(*g_109f3680)--;
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x1008c0a0 size=0xa0
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct SEntityBase { void sub_100aae50(); };

void CBaseAnimating::vfunc103()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseAnimating::Spawn";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    ((SEntityBase *)this)->sub_100aae50();
    int *p = (int *)((char *)this + 0x584);
    for (int i = 0; i < 4; i++) {
        p[-4] = -2;
        p[0] = 0;
        p[4] = 0;
        p++;
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1008df10 size=0x136
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "CBaseAnimating.h"
#include "CEHandleGet.h"
void sub_100c7be0(void *a, void *b, void *c, void *d, void *e);

// TARGET: CBaseAnimating::vfunc130
void CBaseAnimating::vfunc130(int a)
{
	ScopeTrace trace("CBaseAnimating::OnRestore", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!EHandle_Get(*(unsigned int *)((char *)this + 0x5b8))) {
		((CEntityVSlots *)this)->slot246();
	} else {
		for (int i = 0; i < 2; i++) {
			sub_100c7be0((char *)this + 0x5c4 + i * 0x14, sub_100952d0(i), (char *)this + 0x5ec, sub_100952d0(-1), (char *)this + 0x614);
		}
	}
	if (!EHandle_Get(*(unsigned int *)((char *)this + 0x63c))) {
		*(int *)((char *)this + 0x648) = 0;
		*(int *)((char *)this + 0x64c) = 0;
	}
	CBaseEntity::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x1008e0a0 size=0x1ee
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include "ehandle.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
void sub_100c7be0(void *, void *, char *, void *, char *);
__declspec(dllimport) char *Q_strncpy(char *, const char *, int);

struct CAnimExtraView
{
	char m_pad0000[0x26c];
	char *m_name26c;
	char m_pad0270[0x5b8 - 0x270];
	EHANDLE m_hExtra;	// 0x5b8
	int m_n5bc;
	int m_n5c0;
	char m_vecs[0x28];	// 0x5c4
	char m_name1[0x28];	// 0x5ec
	char m_name2[0x28];	// 0x614
};

void CBaseAnimating::sub_1008e0a0(CBaseEntity *pModel, const char *pszA, const char *pszB, int n1, int n2)
{
	CAnimExtraView *f = (CAnimExtraView *)this;
	ScopeTrace trace("CBaseAnimating::AddExtraAnimationModels", this ? (f->m_name26c ? f->m_name26c : g_106b8540) : g_105387dc);
	if (n1 < 0)
		n1 = 0;
	if (n2 < 0)
		n2 = 0;
	if (pModel && (n1 || n2)) {
		if (!pszA)
			pszA = g_106b8540;
		if (!pszB)
			pszB = g_106b8540;
		if (f->m_hExtra.Get() == pModel && !_strcmpi(pszA, f->m_name1) && !_strcmpi(pszB, f->m_name2) && f->m_n5bc == n1 && f->m_n5c0 == n2)
			return;
		f->m_hExtra = pModel;
		f->m_n5c0 = n2;
		f->m_n5bc = n1;
		Q_strncpy(f->m_name1, pszA ? pszA : g_106b8540, 0x28);
		Q_strncpy(f->m_name2, pszB ? pszB : g_106b8540, 0x28);
		for (int i = 0; i < 2; i++)
			sub_100c7be0(f->m_vecs + i * 0x14, sub_100952d0(i), f->m_name1, sub_100952d0(-1), f->m_name2);
	} else {
		((void (__fastcall *)(CBaseAnimating *))(*(void ***)this)[246])(this);
	}
}
// END FUNCTION

// FUNCTION: 0x1008e310 size=0x11e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <string.h>
#include "ScopeTrace.h"
#include "CBaseAnimating.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *p);

struct VecX {
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
};
struct AnimLayoutX {
	char pad[0x5b8];
	int m_hExtra;	// 0x5b8
	int m_h[2];	// 0x5bc
	VecX m_v[2];	// 0x5c4
	int m_a1[10];	// 0x5ec
	int m_a2[10];	// 0x614
};
struct Slot260X { void sub_10260a50(int c); };

void CBaseAnimating::vfunc246()
{
	ScopeTrace trace("CBaseAnimating::RemoveExtraAnimationModels", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	AnimLayoutX *p = (AnimLayoutX *)this;
	int i;
	p->m_hExtra = -1;
	memset(p->m_a1, 0, sizeof(p->m_a1));
	memset(p->m_a2, 0, sizeof(p->m_a2));
	for (i = 0; i < 2; i++) {
		VecX *v = &p->m_v[i];
		v->m_size = 0;
		if (v->m_growSize != -1) {
			if (v->m_pMemory != 0) {
				Plat_Free(v->m_pMemory);
				v->m_pMemory = 0;
			}
			v->m_allocationCount = 0;
		}
		v->m_pElements = v->m_pMemory;
		p->m_h[i] = 0;
	}
	if (!sub_1008d990(*(int *)((char *)this + 0x6f0))) {
		int seq = sub_1008dd30(1, -1);
		if (seq < 0)
			seq = 0;
		((Slot260X *)this)->sub_10260a50(seq);
		sub_10090bc0(0x10);
	}
}
// END FUNCTION

// FUNCTION: 0x1008f3c0 size=0x81
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseAnimating::vfunc252(int a, int b, int c)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::SelectWeightedSequenceForStat ";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_1008dc40(a, -1);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1008f480 size=0x81
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseAnimating::vfunc254(int a, int b, int c)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::SelectSameSequenceForStat ";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_1008de20(a, -1);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1008f600 size=0x81
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseAnimating::vfunc253(int a, int b, int c)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::SelectHeaviestSequenceForStat ";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_1008dd30(a, -1);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10090c80 size=0x142
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "ScopeTrace.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"
int __fastcall sub_100b39c0(CBaseEntity *self);
struct AttackExtentsView {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
    virtual void SetAttackExtents(const float *pExtents);
};
void __fastcall sub_10090c80(CBaseAnimating *self, int unused, int sequence)
{
    ScopeTrace trace("CBaseAnimating::SetAttackExtentsForSequence", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
    if (sub_100b39c0(self) & 4) {
        char *pSeq = (char *)self->sub_1008d990(sequence);
        if (pSeq) {
            CCollisionProperty *pCol = (CCollisionProperty *)((char *)self + 0x270);
            float *pMaxs = pCol->vfunc2();
            float vecMaxs[3];
            vecMaxs[0] = pMaxs[0];
            vecMaxs[1] = pMaxs[1];
            vecMaxs[2] = pMaxs[2];
            float ext[3];
            int i = 0;
            const float *bb = (const float *)(pSeq + 0x1c);
            for (; i < 3; i++, bb++)
                ext[i] = (bb[3] > fabs(bb[0])) ? bb[3] : fabs(bb[0]);
            ext[0] = sqrt(ext[0] * ext[0] + ext[1] * ext[1]);
            ext[1] = ext[0];
            for (int j = 0; j < 3; j++)
                ext[j] = (ext[j] > vecMaxs[j]) ? ext[j] - vecMaxs[j] : 0.0f;
            ((AttackExtentsView *)self)->SetAttackExtents(ext);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100916a0 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

float __fastcall sub_100916a0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseAnimating::GetIdealYawSpeed";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    float r = *(float *)(self + 0x560);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10091740 size=0x78
#include "CBaseAnimating.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

float CBaseAnimating::sub_10091740()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseAnimating::GetIdealSpeed";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    float speed = *(float *)((char *)this + 0x654);
    --*g_109f3680;
    return speed;
}
// END FUNCTION

// FUNCTION: 0x100917e0 size=0x80
#include "CBaseAnimating.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct Slot248 {
    V100(a) V100(b)
    V10(c) V10(d) V10(e) V10(f)
    virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
    virtual void g5(); virtual void g6(); virtual void g7();
    virtual float v248();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1054f854[];
extern char g_105387dc[];
extern char g_106b8540[];
extern float g_1044ffe8;
float CBaseAnimating::vfunc249()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1054f854;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    float r = ((Slot248 *)this)->v248() + g_1044ffe8;
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10091da0 size=0x11d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) void DevWarning(int level, const char *fmt, ...);
extern "C" int atoi(const char *);

struct SAnimEvent
{
	int event;
	const char *options;
};

void CBaseAnimating::vfunc259(void *pEventIn)
{
	SAnimEvent *pEvent = (SAnimEvent *)pEventIn;
	const char *pszOptions;
	ScopeTrace trace("CBaseAnimating::HandleAnimEvent", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	switch (pEvent->event) {
	case 0x816:
		pszOptions = pEvent->options;
		sub_100978c0(sub_10097980(pszOptions));
		break;
	case 0x817:
		pszOptions = pEvent->options;
		sub_100977f0(sub_10097980(pszOptions));
		break;
	case 0xfa5:
		*(int *)((char *)this + 0x6f0) = sub_1008dc40(atoi(pEvent->options), -1);
		sub_10090950();
		break;
	default:
		DevWarning(2, "Unhandled animation event %d for %s\n", pEvent->event, sub_100ab4f0());
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10091f10 size=0x93
#include "CBaseAnimating.h"
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
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void CBaseAnimating::sub_10091f10(const char *name, float value)
{
	CScopeTrace trace("CBaseAnimating::SetPoseParameter01", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	((CEntityVSlots *)this)->slot260(sub_10092270(name), value);
}
// END FUNCTION

// FUNCTION: 0x10091fe0 size=0xb3
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
float sub_100c43e0(void *pStudioHdr, int iParameter, float flValue, float *pOut);

// CBaseAnimating::SetPoseParameter (slot 260) as a fastcall function: ecx = this, edx unused
float __fastcall sub_10091fe0(CBaseAnimating *self, int unused, int iParameter, float flValue)
{
	const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::SetPoseParameter02";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	void *pStudioHdr = self->sub_100952d0(-1);
	if (pStudioHdr && iParameter >= 0) {
		float r = sub_100c43e0(pStudioHdr, iParameter, flValue, (float *)((char *)self + 0x690) + iParameter);
		(*g_109f3680)--;
		return r;
	}
	(*g_109f3680)--;
	return flValue;
}
// END FUNCTION

// FUNCTION: 0x10092b50 size=0xfb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include "CUnknown100c7f30.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SetupBonesSlots
{
	V100(a) V100(b)
	V10(c0)
	virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15(); virtual void c16();
	virtual void *slot217();
	virtual void c18();
	virtual void *slot219();
	V10(c2) V10(c3) V10(c4)
	virtual void c50(); virtual void c51(); virtual void c52(); virtual void c53(); virtual void c54();
	virtual void slot255(void *pOut, void *pBuf, CUnknown100c7f30 *pBits);
};

void sub_100142f4(void *hdr, void *angles, void *origin, void *pOut, void *pBuf, int a, int b, CUnknown100c7f30 *pBits);

void CBaseAnimating::vfunc257(int a, int b)
{
	char buf[0x15e0];
	char out[0x1068];
	char bitsMem[0x30];
	ScopeTrace trace("CBaseAnimating::SetupBones", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *hdr = sub_100952d0(-1);
	CUnknown100c7f30 *bits = (CUnknown100c7f30 *)bitsMem;
	bits->sub_100c7f30((CUnknown100c7f30Hdr *)hdr, b);
	SetupBonesSlots *s = (SetupBonesSlots *)this;
	s->slot255(out, buf, bits);
	sub_100142f4(hdr, s->slot219(), s->slot217(), out, buf, -1, a, bits);
}
// END FUNCTION

// FUNCTION: 0x10093000 size=0x162
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

#define AS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define AS100(p) AS10(p##0) AS10(p##1) AS10(p##2) AS10(p##3) AS10(p##4) AS10(p##5) AS10(p##6) AS10(p##7) AS10(p##8) AS10(p##9)

// The animating entity's virtual table up to slot 256 (the bone matrix getter).
struct CAnimSlots
{
	AS100(a) AS100(b) AS10(c0) AS10(c1) AS10(c2) AS10(c3) AS10(c4)
	virtual void c50(); virtual void c51(); virtual void c52(); virtual void c53(); virtual void c54(); virtual void c55();
	virtual void vfunc256(int bone, float *pMatrix);
};

struct CAimEntHandle
{
	unsigned int m_Index;
	CBaseEntity *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (m_Index >> 13) ? (CBaseEntity *)e->m_pEntity : 0;
	}
};

void sub_10138df0(const float *pLocal, const char *pAttachmentMatrix, float *pOut);	// stub 0x1000a01a

// TARGET: CBaseAnimating::vfunc262
bool CBaseAnimating::vfunc262(int iAttachment, float *pMatrix)
{
    float matrix[12];
    ScopeTrace trace("CBaseAnimating::GetAttachment03", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    char *hdr = (char *)sub_100952d0(-1);
    if (!hdr || iAttachment < 1 || iAttachment > *(int *)(hdr + 0x148))
        return false;
    char *pAtt = hdr + *(int *)(hdr + 0x14c) + iAttachment * 0x3c - 0x3c;
    CBaseEntity *pOwner = ((CAimEntHandle *)((char *)this + 0x37c))->Get();
    if (pOwner) {
        CBaseAnimating *pChar = *(CBaseAnimating **)((char *)pOwner + 0x9c);
        if (pChar) {
            char *rec = hdr + *(int *)(hdr + 0xf4) + *(int *)(pAtt + 8) * 0xa0;
            int idx = pChar->sub_10092550((int)(rec + *(int *)rec));
            if (idx >= 0) {
                ((CAnimSlots *)pChar)->vfunc256(idx, matrix);
                goto Done;
            }
        }
    }
    ((CAnimSlots *)this)->vfunc256(*(int *)(pAtt + 8), matrix);
Done:
    sub_10138df0(matrix, pAtt + 0xc, pMatrix);
    return true;
}
// END FUNCTION

// FUNCTION: 0x10095a20 size=0x159
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

struct SPhysicsProps
{
	virtual void s0(); virtual void s1(); virtual void s2();
	virtual short GetSurfaceIndex(void *pName);
};

extern SPhysicsProps *g_10723944;
void sub_100c4600(void *pBoneData, int pCache, void *pHdr, void *pSet);
char sub_100c4d50(int a, void *pHdr, void *pSet, void *pBoneData, int b, char *pTrace);

bool CBaseAnimating::vfunc100(int a, int b, char *pTrace)
{
	ScopeTrace trace("CBaseAnimating::TestHitboxes", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char *pHdr = (char *)sub_100952d0(-1);
	if (pHdr) {
		char *pSet = pHdr + *(int *)(pHdr + 0x104) + *(int *)((char *)this + 0x680) * 12;
		if (pSet && *(int *)(pSet + 4)) {
			char boneData[1400];
			int pCache = sub_10095460();
			sub_100c4600(boneData, pCache, pHdr, pSet);
			if (sub_100c4d50(a, pHdr, pSet, boneData, b, pTrace)) {
				int iBone = *(int *)(pSet + *(int *)(pSet + 8) + *(int *)(pTrace + 0x50) * 0x20);
				int iBones = *(int *)(pHdr + 0xf4);
				*(const char **)(pTrace + 0x3c) = "**studio**";
				*(short *)(pTrace + 0x42) = (short)0x8000;
				SPhysicsProps *pProps = g_10723944;
				char *pBone = pHdr + iBone * 0xa0 + iBones;
				*(short *)(pTrace + 0x40) = pProps->GetSurfaceIndex(pBone + *(int *)(pBone + 0x98));
			}
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10095e50 size=0x13a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "matrix3x4_t.h"
#include "ScopeTrace.h"

#define KV(n) virtual void vfunc##n();
#define KV10(p) KV(p##0) KV(p##1) KV(p##2) KV(p##3) KV(p##4) KV(p##5) KV(p##6) KV(p##7) KV(p##8) KV(p##9)
struct CAnimSlots
{
	KV10(0) KV10(1) KV10(2) KV10(3) KV10(4) KV10(5) KV10(6) KV10(7) KV10(8)
	KV(90) KV(91) KV(92) KV(93)
	virtual int vfunc94();	// GetMoveType
	KV(95) KV(96) KV(97) KV(98) KV(99)
	KV10(10) KV10(11) KV10(12) KV10(13) KV10(14) KV10(15) KV10(16) KV10(17) KV10(18) KV10(19)
	KV10(20) KV10(21)
	KV(220)
	virtual float *vfunc221();	// GetAngles
};

void sub_10139b90(const float *pAngles, matrix3x4_t *pMatrix);
void sub_101381b0(const float *pIn, const matrix3x4_t *pMatrix, float *pOut);

// TARGET: CBaseAnimating::vfunc199
void CBaseAnimating::vfunc199(float *vVelocity, float *vAngVelocity)
{
	ScopeTrace trace("CBaseAnimating::GetVelocity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (((CAnimSlots *)this)->vfunc94() == 7) {
		sub_100ad1a0(vVelocity, vAngVelocity);
		return;
	}
	if (!(sub_100b3700() & 1)) {
		sub_100ad1a0(vVelocity, vAngVelocity);
		return;
	}
	if (vVelocity) {
		Vector vecVelocity;
		sub_1008fcd0(*(int *)((char *)this + 0x6f0), &vecVelocity.x);
		matrix3x4_t matrix;
		sub_10139b90(((CAnimSlots *)this)->vfunc221(), &matrix);
		sub_101381b0(&vecVelocity.x, &matrix, vVelocity);
	}
	if (vAngVelocity) {
		vAngVelocity[0] = m_angVel3c8[0];
		vAngVelocity[1] = m_angVel3c8[1];
		vAngVelocity[2] = m_angVel3c8[2];
	}
}
// END FUNCTION

// FUNCTION: 0x10095fe0 size=0xdb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

void sub_100c32e0(char *pHdr, void *pPos, void *pAng, int pPoseParams, int mask);
void sub_100c2ce0(char *pHdr, void *pPos, void *pAng, int pControllers, int mask);

void CBaseAnimating::vfunc255(void *pPos, void *pAng, int mask)
{
	ScopeTrace trace("CBaseAnimating::GetSkeleton", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char *pHdr = (char *)sub_100952d0(-1);
	if (pHdr) {
		sub_1008e770(pPos, pAng, *(int *)((char *)this + 0x6f0), *(int *)((char *)this + 0x6f8), (float *)((char *)this + 0x690), mask);
		sub_100c32e0(pHdr, pPos, pAng, (int)((char *)this + 0x690), mask);
		sub_100c2ce0(pHdr, pPos, pAng, (int)((char *)this + 0x6fc), mask);
	}
}
// END FUNCTION

// FUNCTION: 0x10096100 size=0x240
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include <string.h>

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int entindex, int offset, const char *text, int duration, int r, int g, int b, int a);

static inline void DebugEntityText(int nEdict, int nOffset, const char *pszText)
{
	sub_101434b0(engine->vfunc35(nEdict), nOffset, pszText, 0, 255, 255, 255, 255);
}

int CBaseAnimating::vfunc124()
{
	ScopeTrace trace("CBaseAnimating::DrawDebugTextOverlays", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int text_offset = CBaseEntity::vfunc124();
	if (*(unsigned char *)((char *)this + 0x224) & 1)
	{
		int nUnused;
		char tempstr[1024];
		const char *pszModel = *vfunc9(&nUnused);
		if (!pszModel)
			pszModel = "";
		Q_snprintf(tempstr, sizeof(tempstr), "Model:%s", pszModel);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "Sequence: (%3d) %s", *(int *)((char *)this + 0x6f0), sub_1008fe80(*(int *)((char *)this + 0x6f0)));
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		const char *pszActivity = sub_1008ff50(*(int *)((char *)this + 0x6f0));
		if (pszActivity && strlen(pszActivity) > 0)
		{
			Q_snprintf(tempstr, sizeof(tempstr), "Activity %s", pszActivity);
			DebugEntityText(m_pEdict2e0, text_offset, tempstr);
			text_offset++;
		}
		Q_snprintf(tempstr, sizeof(tempstr), "Cycle: %.5f", *(float *)((char *)this + 0x6f8));
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x10096980 size=0x163
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

extern float g_106cc010[][3];
void sub_10142b80(float *pos, float *mins, float *maxs, float *angles, int r, int g, int b, int a, int duration);

void CBaseAnimating::vfunc264()
{
	ScopeTrace trace("CBaseAnimating::DrawServerHitboxes", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char *pStudioHdr = (char *)sub_100952d0(-1);
	if (pStudioHdr) {
		char *pSet = pStudioHdr + *(int *)(pStudioHdr + 0x104) + *(int *)((char *)this + 0x680) * 12;
		if (pSet && 0 < *(int *)(pSet + 4)) {
			{ int i = 0; while (i < *(int *)(pSet + 4)) { float pos[3];
				float angles[3];
				char *pBox = pSet + *(int *)(pSet + 8) + i * 0x20;
				int c;
				sub_100926e0(*(int *)pBox, (int)pos, (int)angles); c = *(int *)(pBox + 4) % 8;
				sub_10142b80(pos, (float *)(pBox + 8), (float *)(pBox + 0x14), angles,
					(int)(*(c + g_106cc010)[0] * 255.0f), (int)(g_106cc010[c][1] * 255.0f), (int)(*(2 + *(g_106cc010 + c)) * 255.0f), 0, 0); ++i; } }
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10097ae0 size=0x6
#include "CBaseAnimating.h"
namespace lifted {
extern char g_1054d900;
}
int CBaseAnimating::vfunc79()
{
    return (int)&lifted::g_1054d900;
}
// END FUNCTION
