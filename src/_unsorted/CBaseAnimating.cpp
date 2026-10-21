// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x10096980 size=0x163
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
