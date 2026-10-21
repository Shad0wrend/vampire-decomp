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

// FUNCTION: 0x1003e7a0 size=0xa9
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::vfunc237()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::PhysicsSolidMaskForEntity";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_100b3700() & 0x2000) {
		(*g_109f3680)--;
		return 0x202400b;
	}
	if (*(int *)((char *)this + 0xa8)) {
		(*g_109f3680)--;
		return 0x201400b;
	}
	(*g_109f3680)--;
	return 0x200400b;
}
// END FUNCTION

// FUNCTION: 0x1009ac80 size=0xb4
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);

void CBaseEntity::vfunc11(const char *name)
{
    const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::DebugSetEntityName";
    g_109f3620[*g_109f3680].b = n;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (name) {
        Q_strncpy((char *)this + 4, name, 0x1f);
        if (vfunc85())
            Q_strncpy(vfunc85(), name, 0x1f);
    }
    (*g_109f3680)--;
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

// FUNCTION: 0x1009ae10 size=0xb7
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern char *(__cdecl *g_109f3890)(char *, const char *, int);

void CBaseEntity::vfunc13(const char *classname)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::DebugSetClassName";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (classname) {
		char *(__cdecl *copy)(char *, const char *, int) = g_109f3890;
		copy((char *)this + 0x24, classname, 0x1f);
		if (vfunc85())
			copy(vfunc85() + 0x20, classname, 0x1f);
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1009af40 size=0xc0
#include "ScopeTrace.h"
#include "CCollisionProperty.h"

extern void (__cdecl *g_109f3630)(const char *fmt, ...);

void CBaseEntity::sub_1009af40(const float *pExtents)
{
	ScopeTrace trace("CBaseEntity::SetAttackExtents", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
	if (!pCollision) {
		g_109f3630("WARNING: Trying to set attack extents for %s which has no collision property.\n", sub_100ab4f0());
		return;
	}
	pCollision->sub_100dc220((int)pExtents);
	float *pDest = (float *)((char *)this + 0x50);
	pDest[0] = pExtents[0];
	pDest[1] = pExtents[1];
	pDest[2] = pExtents[2];
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

// FUNCTION: 0x1009d380 size=0xa2
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc67()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Unhide";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (*((char *)this + 0xf4)) {
        *(unsigned int *)((char *)this + 0xf8) &= 0xffffffbf;
        (*g_109f3680)--;
        return;
    }
    *(unsigned int *)((char *)this + 0x19c) &= 0xffffffbf;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009d460 size=0x122
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

extern CUnknown1073dc28 g_1073dc28;
extern char g_10555390[];

// The fields of the entity this slot reads (CBaseEntity.h still has them as padding).
struct EntSoundFields
{
    void *m_pVTable;
    char m_pad0004[0x98];
    CBaseCombatCharacter *m_pOwner;	// 0x9c
    int m_n00a0;
    char m_pad00a4[0xac - 0xa4];
    int m_n00ac;
    char m_pad00b0[0xb4 - 0xb0];
    int m_nGroup;	// 0xb4
    int m_nGroupFemale;	// 0xb8
    int m_nTableIdx;	// 0xbc
    const char *m_pszName;	// 0xc0
};

void CBaseEntity::vfunc71()
{
    ScopeTrace trace(g_10555390, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    EntSoundFields *f = (EntSoundFields *)this;
    if (f->m_pOwner) {
        if (f->m_n00ac != 0)
            f->m_nTableIdx = 3;
        else if (vfunc70())
            f->m_nTableIdx = 2;
        else if (f->m_pOwner->sub_10336920())
            f->m_nTableIdx = 1;
        else
            f->m_nTableIdx = 0;
    } else if (f->m_n00a0 != 0)
        f->m_nTableIdx = 0;
    f->m_nGroup = g_1073dc28.sub_101f55a0(this, f->m_pszName ? f->m_pszName : g_106b8540, 0);
    f->m_nGroupFemale = g_1073dc28.sub_101f55a0(this, f->m_pszName ? f->m_pszName : g_106b8540, 1);
}
// END FUNCTION

// FUNCTION: 0x1009e280 size=0xd1
#include "CBaseEntity.h"
#include "CEntityMapData.h"
#include "ScopeTrace.h"

// TARGET: CBaseEntity::vfunc107
void CBaseEntity::vfunc107(CEntityMapData *pMapData)
{
	ScopeTrace trace("CBaseEntity::ParseMapData", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char szValue[256];
	char szKey[256];
	if (pMapData->sub_10136e80(szKey, szValue))
	{
		do
		{
			vfunc110(szKey, szValue);
		} while (pMapData->sub_10136ee0(szKey, szValue));
	}
}
// END FUNCTION

// FUNCTION: 0x1009ebb0 size=0xbe
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern int (*g_109f388c)(char *, int, const char *, ...);
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

bool CBaseEntity::vfunc109(const char *key, float value)
{
    char buf[256];
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::KeyValue", ent, g_106b8540);
    g_109f388c(buf, 256, "%f", (double)value);
    return vfunc110(key, buf);
}
// END FUNCTION

// FUNCTION: 0x1009eca0 size=0xd4
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern int (*g_109f388c)(char *, int, const char *, ...);
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

// TARGET: CBaseEntity::vfunc108
bool CBaseEntity::vfunc108(const char *key, float x, float y, float z)
{
    char buf[256];
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::KeyValue", ent, g_106b8540);
    g_109f388c(buf, 256, "%f %f %f", (double)x, (double)y, (double)z);
    return vfunc110(key, buf);
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

// FUNCTION: 0x100a0d20 size=0xd7
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::vfunc143(float flHealth, int bitsDamageType)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::TakeHealth";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (m_pEdict2e0 && m_nTakeDamage >= 2 && m_iHealth < m_iMaxHealth) {
		int maxHealth = m_iMaxHealth;
		m_iHealth = (int)(m_iHealth + flHealth);
		if (m_iHealth > maxHealth)
			m_iHealth = maxHealth;
		--*g_109f3680;
		return 1;
	}
	--*g_109f3680;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100a1360 size=0xcb
#include "CBaseEntity.h"
#include "ScopeTrace.h"

struct CDamageModifier
{
    bool sub_100deb30();
    float sub_100deab0();
};

struct CModifierNode
{
    CDamageModifier *m_pModifier;
    int m_nPrev;
    int m_nNext;
};

#define MOD_NODE(self, i) ((*(CModifierNode **)((char *)(self) + 0x230))[i])

float CBaseEntity::vfunc203()
{
    ScopeTrace trace("CBaseEntity::GetAttackDamageScale", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    float flScale = 1.0f;
    for (int i = *(int *)((char *)this + 0x23c); i != -1; i = MOD_NODE(this, i).m_nNext) {
        if (!MOD_NODE(this, i).m_pModifier->sub_100deb30())
            flScale *= MOD_NODE(this, i).m_pModifier->sub_100deab0();
    }
    return flScale;
}
// END FUNCTION

// FUNCTION: 0x100a1a70 size=0x94
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
void sub_101cd940(CBaseEntity *pThis);

// TARGET: CBaseEntity::vfunc144
void CBaseEntity::vfunc144(void *pInfo)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (name == 0)
            name = g_106b8540;
    } else
        name = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Event_Killed";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    m_nTakeDamage = 0;
    m_field200 = 2;
    sub_101cd940(this);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a1d20 size=0x9b
#include "CUnknown100a1d20.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CEntListX {
	void *sub_100f7770(void *pStart, const char *pszName, void *pActivator, void *pCaller);
};
extern CEntListX g_106eb5d8;

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

void *CUnknown100a1d20::sub_100a1d20()
{
	CScopeTrace trace("CBaseEntity::GetNextTarget", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (!m_target20c)
		return 0;
	return g_106eb5d8.sub_100f7770(0, m_target20c, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x100a49d0 size=0xde
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct TouchSlots
{
	SL100(a) SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void StartTouch(CBaseEntity *pOther);	// slot 174
};

struct TouchHandle
{
	unsigned int m_Index;
	TouchSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (TouchSlots *)e->ent : 0;
	}
};

// TARGET: CBaseEntity::vfunc174
void CBaseEntity::vfunc174(CBaseEntity *pOther)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::StartTouch";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (((TouchHandle *)&m_hTouch254)->Get() != 0)
		((TouchHandle *)&m_hTouch254)->Get()->StartTouch(pOther);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a4af0 size=0xed
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct TouchSlots
{
	SL100(a) SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void c4();
	virtual void Touch(CBaseEntity *pOther);	// slot 175
};

struct TouchHandle
{
	unsigned int m_Index;
	TouchSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (TouchSlots *)e->ent : 0;
	}
};

// TARGET: CBaseEntity::vfunc175
void CBaseEntity::vfunc175(CBaseEntity *pOther)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::Touch";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (m_pfnTouch)
		(this->*m_pfnTouch)(pOther);
	if (((TouchHandle *)&m_hTouch254)->Get() != 0)
		((TouchHandle *)&m_hTouch254)->Get()->Touch(pOther);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a4c20 size=0xde
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct TouchSlots
{
	SL100(a) SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5();
	virtual void EndTouch(CBaseEntity *pOther);	// slot 176
};

struct TouchHandle
{
	unsigned int m_Index;
	TouchSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (TouchSlots *)e->ent : 0;
	}
};

void CBaseEntity::vfunc176(CBaseEntity *pOther)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::EndTouch";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (((TouchHandle *)&m_hTouch254)->Get() != 0)
		((TouchHandle *)&m_hTouch254)->Get()->EndTouch(pOther);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a4d40 size=0xed
#include "CBaseEntity.h"
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
struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern char *g_10566458;
typedef void (__fastcall *SlotFn)(CBaseEntity *, void **, CBaseEntity *);

void CBaseEntity::vfunc178(CBaseEntity *pOther)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::Blocked", ent, g_106b8540);
    if (m_pfnBlocked)
        (this->*m_pfnBlocked)(pOther);
    unsigned int h = m_hTouch254;
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent) {
            unsigned int h2 = *(volatile unsigned int *)&m_hTouch254;
            CBaseEntity *pTouch;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pTouch = e2->ent;
                else
                    pTouch = 0;
            } else
                pTouch = 0;
            void **vt = *(void ***)pTouch;
            ((SlotFn)vt[178])(pTouch, vt, pOther);
        }
    }
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

// FUNCTION: 0x100a6800 size=0xc0
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct SurfaceData
{
	char m_pad0000[0x70];
	short m_nMaterial;	// 0x70
};

class IPhysicsSurfaceProps
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual SurfaceData *GetSurfaceData(int surfaceProps);	// slot 5
};
extern IPhysicsSurfaceProps *g_10723944;
void sub_100093fe(CBaseEntity *pEnt, void *pObject, float energy, int surfaceProps);

void CBaseEntity::vfunc231(void *pObject, float energy, int surfaceProps, int surfacePropsHit)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::VPhysicsFriction";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	SurfaceData *pHit = g_10723944->GetSurfaceData(surfacePropsHit);
	SurfaceData *pSurf = g_10723944->GetSurfaceData(surfaceProps);
	if (pHit->m_nMaterial != 0x58 && pSurf->m_nMaterial != 0x58)
		sub_100093fe(this, pObject, energy, surfaceProps);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100a6ad0 size=0xa3
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::vfunc233(int *pList, int maxObjects)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::VPhysicsGetObjectList";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int pObj = *(int *)((char *)this + 0x36c);
	if (pObj && maxObjects > 0)
	{
		*pList = pObj;
		--*g_109f3680;
		return 1;
	}
	--*g_109f3680;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100a7aa0 size=0xef
#include "CBaseEntity.h"
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
struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern char *g_10566458;
typedef bool (__fastcall *SlotFn)(CBaseEntity *, void **, CBaseEntity *);

bool CBaseEntity::vfunc140(CBaseEntity *pAttacker)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::PassesDamageFilter", ent, g_106b8540);
    unsigned int h = m_hDamageFilter;
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent) {
            unsigned int h2 = *(volatile unsigned int *)&m_hDamageFilter;
            CBaseEntity *pFilter;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pFilter = e2->ent;
                else
                    pFilter = 0;
            } else
                pFilter = 0;
            void **vt = *(void ***)pFilter;
            return ((SlotFn)vt[241])(pFilter, vt, pAttacker);
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x100a9800 size=0xc0
#include "CBaseEntity.h"
#include "CBCCSlotViews.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

class CViewableSlotView	// slot 94 of the entity
{
public:
	VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4) VIEW_SLOT10(5) VIEW_SLOT10(6) VIEW_SLOT10(7) VIEW_SLOT10(8)
	VIEW_SLOT(90) VIEW_SLOT(91) VIEW_SLOT(92) VIEW_SLOT(93)
	virtual int vfunc94();
};

struct CViewableHelper	// the "is this entity rendered" helper (stub 0x100117d9 for 0x100b5110)
{
	char sub_100b5110();
};

char __fastcall sub_100a9800(CBaseEntity *self)
{
	const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::IsViewable";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if ((*(unsigned char *)((char *)self + 0x19c) & 0x40) == 0) {
		if (((CViewableHelper *)self)->sub_100b5110()) {
			if (((CViewableSlotView *)self)->vfunc94()) {
				(*g_109f3680)--;
				return 1;
			}
		} else {
			if (self->vfunc8()) {
				(*g_109f3680)--;
				return 1;
			}
		}
	}
	(*g_109f3680)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100a9ba0 size=0xb4
struct ScopeEntry { const char *a; const char *b; const char *c; };
struct EntEntry { void *pEnt; int serial; int pad; };
struct EntTable { int hdr; EntEntry entries[1]; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern EntTable *g_10566458;

int CBaseEntity::vfunc96()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetAimEntEdict";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    unsigned int h = *(unsigned int *)((char *)this + 0x37c);
    if (h != 0xffffffff) {
        EntEntry *e = &g_10566458->entries[h & 0x1fff];
        if ((unsigned int)e->serial == (h >> 13)) {
            char *pEnt = (char *)e->pEnt;
            if (pEnt) {
                int edict = *(int *)(pEnt + 0x2e0);
                (*g_109f3680)--;
                return edict;
            }
        }
    }
    (*g_109f3680)--;
    return 0;
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

// FUNCTION: 0x100a9f70 size=0xcc
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SaveSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7)
	virtual void b0(); virtual void b1();
	virtual int s82();
};

int CBaseEntity::vfunc126(int pSave)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::Save";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	float *pNextThink = (float *)((char *)this + 0x17c);
	float *pOut = (float *)((char *)this + 0x180);
	if (*pNextThink <= 0.0f) {
		*pOut = *pNextThink;
	} else {
		if (*(int *)pNextThink == 0x7f7fffff)
			*pOut = 3.4028235e38f;
		else
			*pOut = 1.0f;
	}
	int r = sub_100aa080((void *)pSave, ((SaveSlots *)this)->s82());
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x100aa4e0 size=0x84
#include "CBaseEntity.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseEntity::vfunc129()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::OnSave";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	vfunc98();
	sub_100b1d10();
	(*g_109f3680)--;
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

// FUNCTION: 0x100aab10 size=0xd7
struct SEntityEntry
{
    int m_pad;
    void *m_pEnt;
    unsigned int m_serial;
};

struct SPhysObject
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25();
};

extern int *g_109f3680;
extern const char **g_109f3620;
extern const char g_105387dc[];
extern const char g_106b8540[];
extern const char g_10556ce8[];
extern SEntityEntry *g_10566458;

// TARGET: CBaseEntity::vfunc202
void CBaseEntity::vfunc202(CBaseEntity *pOwner)
{
    const char *name;
    if (this) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else {
        name = g_105387dc;
    }
    g_109f3620[*g_109f3680 * 3] = g_10556ce8;
    g_109f3620[*g_109f3680 * 3 + 1] = name;
    g_109f3620[*g_109f3680 * 3 + 2] = g_106b8540;
    ++*g_109f3680;
    CBaseEntity *cur;
    unsigned int h = m_hOwner364;
    if (h == 0xffffffff) {
        cur = 0;
    } else {
        void **q = &g_10566458[h & 0x1fff].m_pEnt;
        if ((unsigned int)q[1] == (h >> 13))
            cur = (CBaseEntity *)q[0];
        else
            cur = 0;
    }
    if (cur != pOwner) {
        if (pOwner)
            m_hOwner364 = *pOwner->vfunc1();
        else
            m_hOwner364 = 0xffffffff;
        if (m_obj36c)
            ((SPhysObject *)m_obj36c)->v25();
    }
    --*g_109f3680;
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

// FUNCTION: 0x100aad70 size=0xa1
#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// The object at +0x36c viewed as a plain list of slots up to 25.
struct SSlot25Object
{
	PV10(a0) PV10(a1)
	virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24();
	virtual void Slot25();
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc93(int moveType, int moveCollide)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetMoveType";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int *pType = (int *)((char *)this + 0x35c);
	if (*pType != moveType)
	{
		*pType = moveType;
		pType[1] = moveCollide;
		SSlot25Object *pObj = *(SSlot25Object **)((char *)this + 0x36c);
		if (pObj)
			pObj->Slot25();
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100ab450 size=0x79
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void __cdecl sub_101cd110(int a, int b, int c, int d, int e);
void CBaseEntity::sub_100ab450(int a, int b, int c, int d, int e)
{
    g_109f3620[*g_109f3680].a = "Physics_TraceEntity";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_101cd110(a, b, c, d, e);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100acab0 size=0x111
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CVariantCopy.h"

extern "C" int _strcmpi(const char *, const char *);
extern char g_1055726c[];

struct TypeDescView
{
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    int pad[5];
};

struct DataMapView
{
    TypeDescView *dataDesc;
    int dataNumFields;
    const char *dataClassName;
    DataMapView *baseMap;
};

bool CBaseEntity::vfunc121(const char *szKeyName, CVariantCopy *pVariant)
{
    ScopeTrace trace(g_1055726c, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (szKeyName) {
        for (DataMapView *dmap = (DataMapView *)vfunc82(); dmap; dmap = dmap->baseMap) {
            for (int i = 0; i < dmap->dataNumFields; i++) {
                if ((dmap->dataDesc[i].flags & 0x14) && _strcmpi(dmap->dataDesc[i].externalName, szKeyName) == 0) {
                    pVariant->sub_1000b320(dmap->dataDesc[i].fieldType, (char *)this + dmap->dataDesc[i].fieldOffset[0]);
                    return true;
                }
            }
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x100ace00 size=0xb1
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct EntSlots
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119();
	virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149();
	virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155(); virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159();
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165(); virtual void s166(); virtual void s167(); virtual void s168(); virtual void s169();
	virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178(); virtual void s179();
	virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188(); virtual void s189();
	virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199();
	virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208(); virtual void s209();
	virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual float *s217(); virtual void s218(); virtual float *s219();
};

void CBaseEntity::vfunc120(const char *key, float *pos, float *ang)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::GetInputDispatchEffectPosition";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	float *p = ((EntSlots *)this)->s217();
	pos[0] = p[0]; pos[1] = p[1]; pos[2] = p[2];
	float *q = ((EntSlots *)this)->s219();
	ang[0] = q[0]; ang[1] = q[1]; ang[2] = q[2];
	--*g_109f3680;
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

// FUNCTION: 0x100ad460 size=0xbb
#include "CBaseEntity.h"
#include "CUnknown1070b22c.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CUnknown1070b22c *g_1070b22c;
extern void (__cdecl *g_109f3628)(const char *, ...);
void sub_101cf4a0(CBaseEntity *pEnt, const char *pszModel);

void CBaseEntity::vfunc105(const char *pszModel)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetModel";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int idx = g_1070b22c->vfunc20(pszModel);
	if (g_1070b22c->vfunc21(idx) != 1)
		g_109f3628("Setting CBaseEntity to non-brush model %s\n", pszModel);
	sub_101cf4a0(this, pszModel);
	*((char *)this + 0x1b1) = 1;
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

// FUNCTION: 0x100ada20 size=0x142
#include "CBaseEntity.h"
#include "ScopeTrace.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct UtlMem3
{
    int *m_pMemory;
    int m_allocationCount;
    int m_growSize;

    void sub_100b4a40(int num);	// "CUtlMemory::Grow"
};

struct EntStack : public UtlMem3	// the global CUtlVector<CBaseEntity *> of the entities being teleported
{
    int m_Size;	// 0x0c
    int *m_pElements;	// 0x10

    int Find(int pEnt)
    {
        for (int i = 0; i < m_Size; i++) {
            if (m_pMemory[i] == pEnt)
                return i;
        }
        return -1;
    }
};

extern EntStack g_106cf218;
extern char g_105574a0[];
void sub_100adbd0(CBaseEntity *pTarget, CBaseEntity *pThis, const float *pOrigin, const float *pAngles, const float *pVelocity);

void __fastcall sub_100ada20(CBaseEntity *pThis, int unused, const float *pOrigin, const float *pAngles, const float *pVelocity)
{
    ScopeTrace trace(g_105574a0, pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
    if (g_106cf218.Find((int)pThis) >= 0)
        return;
    int elem = g_106cf218.m_Size;
    if (g_106cf218.m_Size + 1 > g_106cf218.m_allocationCount)
        g_106cf218.sub_100b4a40(g_106cf218.m_Size - g_106cf218.m_allocationCount + 1);
    g_106cf218.m_Size += 1;
    g_106cf218.m_pElements = g_106cf218.m_pMemory;
    int numToMove = g_106cf218.m_Size - elem - 1;
    if (numToMove > 0)
        memmove(g_106cf218.m_pMemory + elem + 1, g_106cf218.m_pMemory + elem, numToMove * 4);
    int *p = g_106cf218.m_pMemory + elem;
    if (p)
        *p = (int)pThis;
    sub_100adbd0(pThis, pThis, pOrigin, pAngles, pVelocity);
    if (g_106cf218.m_Size > 0) {
        memmove(g_106cf218.m_pMemory + elem, g_106cf218.m_pMemory + g_106cf218.m_Size - 1, 4);
        g_106cf218.m_Size--;
    }
}
// END FUNCTION

// FUNCTION: 0x100b11d0 size=0xc1
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
void sub_100f8e20(CBaseEntity *pEnt);

void CBaseEntity::vfunc6(bool check)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetCheckUntouch";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (check) {
		++*(int *)((char *)this + 0x1ac);
		if (!(*((unsigned char *)this + 0x26b) & 1)) {
			m_flags268 |= 0x1000000;
			sub_100f8e20(this);
		}
	} else {
		m_flags268 &= 0xfeffffff;
	}
	--*g_109f3680;
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

// FUNCTION: 0x100b1420 size=0xb1
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc208(CBaseEntity *pEnt)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetGroundEntity";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (pEnt) {
        *(unsigned int *)((char *)this + 0x384) = *pEnt->vfunc1();
        sub_100b3580(1);
    } else {
        *(unsigned int *)((char *)this + 0x384) = 0xffffffff;
        sub_100b3640(1);
    }
    (*g_109f3680)--;
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

// FUNCTION: 0x100b4f30 size=0xcb
#include "CBaseEntity.h"
extern void (__cdecl *g_109f3628)(const char *fmt, ...);

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CPhysObjSlotsX {
	SV10(0) SV10(1) SV10(2)
	SV(30) SV(31) SV(32) SV(33) SV(34) SV(35) SV(36)
	virtual void s37(float *pPosition, float *pAngles);
};

struct CEntitySlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20)
	SV(210) SV(211) SV(212) SV(213) SV(214) SV(215)
	virtual void s216(float *pOrigin);
	virtual void s217();
	virtual void s218(float *pAngles);
};

static inline unsigned long &FloatBits(float &f)
{
	return *reinterpret_cast<unsigned long *>(&f);
}

static inline bool IsFinite(float f)
{
	return (FloatBits(f) & 0x7F800000) != 0x7F800000;
}

void CBaseEntity::vfunc226(int a)
{
	int moveType = (*(int (__fastcall **)(CBaseEntity *))(*(int *)this + 0x178))(this);
	switch (moveType) {
	case 1:
	case 8:
		sub_100a55b0((void *)a);
		break;
	case 7: {
		float angles[3];
		float origin[3];
		((CPhysObjSlotsX *)a)->s37(origin, angles);
		if (!IsFinite(angles[0]) || !IsFinite(angles[1]) || !IsFinite(angles[0]))
			g_109f3628("Infinite values from vphysics!\n");
		((CEntitySlotsX *)this)->s216(origin);
		((CEntitySlotsX *)this)->s218(angles);
		sub_100a53d0(0);
		sub_100342c0();
		break;
	}
	}
}
// END FUNCTION
