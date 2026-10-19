// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10026b70 size=0xb
struct CUnknown10146790 {
	char m_unk0;
	char m_unk1;
	char m_unk2;
	void sub_10146790();
};

void CBaseEntity::vfunc89()
{
	((CUnknown10146790*)((char*)this + 0x1b0))->sub_10146790();
}
// END FUNCTION

// FUNCTION: 0x10026c50 size=0xd
void CBaseEntity::vfunc133()
{
	if (m_pfn0114)
		(this->*m_pfn0114)();
}
// END FUNCTION

// FUNCTION: 0x10026c70 size=0x7e
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_10026c70()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::Think";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    if (m_pfnThink)
        (this->*m_pfnThink)();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10027020 size=0x8
#include "CBaseEntity.h"

void CBaseEntity::vfunc168()
{
	typedef void (__fastcall *Fn)(CBaseEntity *);
	(*(Fn *)((char *)*(void **)this + 0x29c))(this);
}
// END FUNCTION

// FUNCTION: 0x10027490 size=0xa
#include "CBaseEntity.h"
// TARGET: CBaseEntity::vfunc116
int CBaseEntity::vfunc116() { return m_flags268 & 1; }
// END FUNCTION

// FUNCTION: 0x10027570 size=0x7e
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct ICollSolid {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual int GetSolid();
};

int CBaseEntity::sub_10027570()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::GetSolid";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    int solid = ((ICollSolid *)((char *)this + 0x270))->GetSolid();
    --*g_109f3680;
    return solid;
}
// END FUNCTION

// FUNCTION: 0x10039ff0 size=0x71
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::vfunc238(int a, int b, int c, int d)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::PerformCustomPhysics";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1003d3d0 size=0x85
#include "CBaseEntity.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

bool CBaseEntity::vfunc207()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].fn = "CBaseEntity::IsCurrentlyTouching";
	g_109f3620[*g_109f3680].name = name;
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	if (sub_1003cb00(1)) {
		(*g_109f3680)--;
		return true;
	}
	(*g_109f3680)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1009ad70 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char * __fastcall sub_1009ad70(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::DebugGetEntityName";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return self + 4;
}
// END FUNCTION

// FUNCTION: 0x1009b030 size=0x1e
#include "CBaseEntity.h"

struct V3 {
	float x, y, z;
};

float *CBaseEntity::sub_1009b030(float *out)
{
	*(V3 *)out = *(V3 *)((char *)this + 0x50);
	return out;
}
// END FUNCTION

// FUNCTION: 0x1009b2c0 size=0x83
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_1009b2c0(int a, int b)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::TraceMessage";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1009b1d0(a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009b380 size=0x83
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc17(int a, int b)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::TraceMessage";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1009b1d0(a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009b500 size=0x7e
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_1009b500(const char *msg)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::TraceMessageBare";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    sub_1009b440(msg);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1009b5a0 size=0x7e
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_1009b5a0(const char *msg)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::TraceMessageBare";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    sub_1009b440(msg);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1009f2c0 size=0x86
#include "CBaseEntity.h"
#include "CBaseEntitySlots.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::vfunc197(int a, int b, int c, int d)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::BodyTarget";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CBaseEntitySlots *)this)->slot192((float *)a);
	(*g_109f3680)--;
	return a;
}
// END FUNCTION

// FUNCTION: 0x1009faf0 size=0x6f
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::vfunc125()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::DrawMuzzleOverlay";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a65a0 size=0x71
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::vfunc228(int a, int b)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::VPhysicsShadowCollision";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a9eb0 size=0x86
#include "CBaseEntity.h"
#include "CBaseEntitySlots.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseEntity::vfunc222(int a)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::GetSoundEmissionOrigin";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	((CBaseEntitySlots *)this)->slot192((float *)a);
	--*g_109f3680;
	return a;
}
// END FUNCTION

// FUNCTION: 0x100aa5a0 size=0xd
void CBaseEntity::vfunc130(int a)
{
	vfunc6(0);
}
// END FUNCTION

// FUNCTION: 0x100aa680 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100aa680(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::ShouldSavePhysics";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x100aa840 size=0x81
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

char CBaseEntity::sub_100aa840()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseEntity::IsTransparent", n);
    return *(int *)((char *)this + 0x16c) != 0;
}
// END FUNCTION

// FUNCTION: 0x100aa900 size=0x76
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10556c80[];
extern char g_105387dc[];
extern char g_106b8540[];
bool CBaseEntity::vfunc99(int a, int b, int c)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10556c80;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100aa9a0 size=0x76
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100aa9a0(CBaseEntity *self, int, int a, int b, int c)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::TestHitboxes";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100aac30 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100aac30(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetMoveType";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x35c);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100aacd0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100aacd0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetMoveCollide";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x360);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100acf90 size=0x7b
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_101cd940(CBaseEntity *pEnt);

void CBaseEntity::vfunc119()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Kill";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    sub_101cd940(this);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ad6e0 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100ad6e0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Illumination";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x80;
}
// END FUNCTION

// FUNCTION: 0x100ad780 size=0x98
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc114()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::PostClientMessagesSent";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	unsigned int *pFlags = (unsigned int *)((char *)this + 0x19c);
	if (*pFlags & 0x100)
		*pFlags &= 0xfffff7ff;
	*pFlags &= 0xfffffced;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ad850 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100ad850(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetDamageType";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b12e0 size=0x7e
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100b12e0(char value)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::SetSentLastFrame";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *((char *)this + 0x380) = value;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b15f0 size=0x7e
#include "CBaseEntity.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558a94[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::vfunc212(int set)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558a94;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x388) = set;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b1750 size=0x7e
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100b1750(int index)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::SetModelIndex";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x1a4) = index;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b17f0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100b17f0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetModelIndex";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x1a4);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100b1890 size=0x92
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc213(const float *size)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSize";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	float *dst = (float *)((char *)this + 0x38c);
	dst[0] = size[0];
	dst[1] = size[1];
	dst[2] = size[2];
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b1960 size=0x7b
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558b14[];
extern char g_105387dc[];
extern char g_106b8540[];
float *CBaseEntity::vfunc214()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558b14;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return (float *)((char *)this + 0x38c);
}
// END FUNCTION

// FUNCTION: 0x100b3070 size=0x7b
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

float *CBaseEntity::vfunc220()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::GetOrigin";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return (float *)((char *)this + 0x41c);
}
// END FUNCTION

// FUNCTION: 0x100b3110 size=0x7b
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558d80[];
extern char g_105387dc[];
extern char g_106b8540[];
float *CBaseEntity::vfunc221()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558d80;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return (float *)((char *)this + 0x428);
}
// END FUNCTION

// FUNCTION: 0x100b31b0 size=0x93
#include "CBaseEntity.h"
struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

float *CBaseEntity::vfunc217()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].fn = "CBaseEntity::GetAbsOrigin";
	g_109f3620[*g_109f3680].name = name;
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	if (TestBit(m_flags268, 11))
		vfunc98();
	(*g_109f3680)--;
	return (float *)((char *)this + 0x404);
}
// END FUNCTION

// FUNCTION: 0x100b3280 size=0x93
struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

float *CBaseEntity::vfunc219()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].fn = "CBaseEntity::GetAbsAngles";
	g_109f3620[*g_109f3680].name = name;
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	if (TestBit(m_flags268, 11))
		vfunc98();
	(*g_109f3680)--;
	return (float *)((char *)this + 0x410);
}
// END FUNCTION

// FUNCTION: 0x100b3d10 size=0x79
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseEntity::sub_100b3d10()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::GetEdict";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    int edict = *(int *)((char *)this + 0x2e0);
    --*g_109f3680;
    return edict;
}
// END FUNCTION

// FUNCTION: 0x100b4bc0 size=0x8
#include "CBaseEntity.h"

void CBaseEntity::vfunc194()
{
	typedef void (__fastcall *Fn)(CBaseEntity *);
	(*(Fn *)((char *)*(void **)this + 0x36c))(this);
}
// END FUNCTION

// FUNCTION: 0x100b4be0 size=0x8
#include "CBaseEntity.h"

typedef void (__fastcall *VFunc)(CBaseEntity *);

// TARGET: CBaseEntity::vfunc195
void CBaseEntity::vfunc195()
{
	(*(VFunc **)this)[221](this);
}
// END FUNCTION

// FUNCTION: 0x100b4c00 size=0x14
#include "CBaseEntity.h"
#include "CBaseEntitySlots.h"

int CBaseEntity::vfunc196(int a)
{
	((CBaseEntitySlots *)this)->slot193(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x100b4dc0 size=0xe
// TARGET: CBaseEntity::vfunc158
bool CBaseEntity::vfunc158()
{
	return m_field200 == 0;
}
// END FUNCTION

// FUNCTION: 0x100b4f10 size=0xd
void CBaseEntity::vfunc84(int flags)
{
	m_flags268 = flags;
}
// END FUNCTION
