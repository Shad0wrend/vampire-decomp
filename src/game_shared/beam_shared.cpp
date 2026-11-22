// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 42 blocks
#include "vampire.h"

// FUNCTION: 0x100ba370 size=0x6
#include "CBeam.h"
namespace lifted {
extern char g_106d16f0;
}
int CBeam::vfunc80()
{
    return (int)&lifted::g_106d16f0;
}
// END FUNCTION

// FUNCTION: 0x100ba390 size=0x3
#include "CBeam.h"
int CBeam::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ba3b0 size=0xa
#include "SendTable.h"
SendTable g_106d16d4;
// END FUNCTION

// FUNCTION: 0x100ba430 size=0x5
int sub_100ba470(void);
int g_106d16d0 = ((int (*)(int))sub_100ba470)(0);
// END FUNCTION

// FUNCTION: 0x100ba470 size=0x90
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_10002c7f(const char *pVarName, int offset, int sizeofVar);	// SendPropPredictableId

extern SendTable g_106d16d4;

// TARGET: sub_100ba470
int sub_100ba470()
{
	static const char *pTableName = "DT_BeamPredictableId";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10002c7f("m_PredictableID", 0x1a8, 4),
		sub_10007bfd("m_bIsPlayerSimulated", 0x43c, 1, 1, 1, 0, 0),
	};
	g_106d16d4.sub_1000e8fe(props + 1, 2, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100ba560 size=0xa
#include "SendTable.h"
SendTable g_106d15b4;
// END FUNCTION

// FUNCTION: 0x100ba5e0 size=0x5
int sub_100ba620(void);
int g_106d15b0 = ((int (*)(int))sub_100ba620)(0);
// END FUNCTION

// FUNCTION: 0x100ba620 size=0x3ac
#include "SendProp.h"

SendProp sub_10246af0(const char *pName, int a, int b, int c, int d, int e, void *pProxy);
SendProp sub_10246dc0(const char *pName, int a, int b, void *pProxy);
SendProp sub_10246ef0(int a, int b, const char *pName, int c);
SendProp sub_10246700(const char *pName, int a, int b, int c, int d, float lo, float hi, void *pProxy);
SendProp sub_101ab220(const char *pName, int a, int b);
SendProp sub_10246510(const char *pName, int a, int b, int c, int d, float lo, float hi, void *pProxy);
void sub_10246300();
void sub_10003012();
void sub_100baac0();

struct S_SendTable
{
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);
};

extern S_SendTable g_106d15b4;
extern const char *g_1055a978;
extern int g_106d16d4;

int sub_100ba620()
{
	static SendProp s_props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246af0("m_nBeamType", 0x464, 4, 8, 1, 0, 0),
		sub_10246af0("m_nNumBeamEnts", 0x45c, 4, 5, 1, 0, 0),
		sub_101ab220("m_hAttachEntity[0]", 0x468, 4),
		sub_10246ef0(10, 4, "m_hAttachEntity", 0),
		sub_10246af0("m_nAttachIndex[0]", 0x490, 4, 5, 1, 0, 0),
		sub_10246ef0(10, 4, "m_nAttachIndex", 0),
		sub_10246af0("m_nHaloIndex", 0x460, 4, 0x10, 1, 0, 0),
		sub_10246510("m_fHaloScale", 0x4c4, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10246300),
		sub_10246510("m_fWidth", 0x4b8, 4, 8, 0x10, 0.0f, 25.5f, (void *)sub_10246300),
		sub_10246510("m_fEndWidth", 0x4bc, 4, 8, 0x10, 0.0f, 25.5f, (void *)sub_10246300),
		sub_10246510("m_fFadeLength", 0x4c0, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10246300),
		sub_10246510("m_fAmplitude", 0x4c8, 4, 8, 8, 0.0f, 64.0f, (void *)sub_10246300),
		sub_10246510("m_fStartFrame", 0x4cc, 4, 8, 8, 0.0f, 256.0f, (void *)sub_10246300),
		sub_10246510("m_fSpeed", 0x4d0, 4, 8, 0x10, 0.0f, 100.0f, (void *)sub_10246300),
		sub_10246af0("m_nRenderFX", 0x168, 4, 8, 1, 0, 0),
		sub_10246af0("m_nRenderMode", 0x16c, 4, 8, 1, 0, 0),
		sub_10246510("m_flFrameRate", 0x450, 4, 0xa, 0x10, -25.0f, 25.0f, (void *)sub_10246300),
		sub_10246510("m_flFrame", 0x4d4, 4, 0x14, 8, 0.0f, 256.0f, (void *)sub_10246300),
		sub_10246af0("m_clrRender", 0x1a0, 4, 0x20, 1, 0, 0),
		sub_10246700("m_vecEndPos", 0x4d8, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246af0("m_nModelIndex", 0x1a4, 4, 0xb, 0, 0, 0),
		sub_10246700("m_vecOrigin", 0x41c, 0xc, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10003012),
		sub_101ab220("moveparent", 0x25c, 4),
		sub_10246dc0("beampredictable_id", 0, (int)&g_106d16d4, (void *)sub_100baac0),
		sub_10246700("m_vecFacingTarget", 0x4e8, 0xc, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10003012)
	};
	g_106d15b4.sub_10247240(&s_props[1], 0x19, g_1055a978);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100baac0 size=0x9a
bool __fastcall sub_1042d6b0(int *p);
unsigned int __fastcall sub_1042d700(unsigned int *p);

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SProxyEnt {
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6();
	virtual SProxyEnt *GetOwnerEntity();
	int m_unk4[(0xa8 - 4) / 4];
	int m_unka8;
	int m_unkac[(0x1a8 - 0xac) / 4];
	unsigned int m_PredictableID;
	int m_unk1ac[(0x2e0 - 0x1ac) / 4];
	int m_pEdict;
	int edict() { return m_pEdict; }
	int entindex() { return engine->vfunc35(edict()); }
};

void *sub_100baac0(const void *pStruct, const void *pVarData, unsigned int *pRecipients)
{
	SProxyEnt *pEntity = (SProxyEnt *)pStruct;
	if (!pEntity || !sub_1042d6b0((int *)&pEntity->m_PredictableID))
		return 0;
	if (!pEntity->GetOwnerEntity())
		return 0;
	SProxyEnt *pOwner = pEntity->GetOwnerEntity();
	if (!pOwner || !pOwner->m_unka8)
		return 0;
	unsigned int id_player_index = sub_1042d700(&pEntity->m_PredictableID);
	unsigned int owner_player_index = pOwner->entindex() - 1;
	if (id_player_index != owner_player_index)
		return 0;
	pRecipients[0] = 0;
	pRecipients[owner_player_index >> 5] |= 1 << (owner_player_index & 31);
	return (void *)pVarData;
}
// END FUNCTION

// FUNCTION: 0x100babc0 size=0x6
#include "CBeam.h"
namespace lifted {
extern char g_1055a97c;
}
datamap_t * CBeam::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1055a97c);
}
// END FUNCTION

// FUNCTION: 0x100babe0 size=0x5
int sub_100bac20(void);
int g_106d0d14 = ((int (*)(int))sub_100bac20)(0);
// END FUNCTION

// FUNCTION: 0x100bac20 size=0x1a
namespace lifted {
extern int g_1055a97c;
extern int g_1055a980;
extern char g_1055a9c4;
}
int sub_100bac20()
{
    lifted::g_1055a980 = 0x15;
    lifted::g_1055a97c = (int)&lifted::g_1055a9c4;
    return (int)&lifted::g_1055a97c;
}
// END FUNCTION

// FUNCTION: 0x100bac50 size=0x2c
#include "CBeam.h"

// TARGET: CBeam::CBeam
CBeam::CBeam() : CBaseEntity(0)
{
	*(int *)((char *)this + 0x4e4) = -1;
}
// END FUNCTION

// FUNCTION: 0x100bac90 size=0x20
#include "CBeam.h"

// TARGET: CBeam::vfunc117
int CBeam::vfunc117()
{
	unsigned int flags = 0;
	if ((unsigned char)(m_flags204 >> 0xf) & 1)
		flags = 0x80000000;
	return (CBaseEntity::vfunc117() & 0xfffffffd) | flags;
}
// END FUNCTION

// FUNCTION: 0x100bacc0 size=0x90
#include "CBeam.h"
#include "TempVector.h"

Vector *CBeam::vfunc215()
{
	Vector &vec = AllocTempVector();
	VectorAdd(*(Vector *)sub_100bb270(), *(Vector *)sub_100bb440(), vec);
	vec *= 0.5f;
	return &vec;
}
// END FUNCTION

// FUNCTION: 0x100bad80 size=0x1e
#include "CBeam.h"

void sub_100aa7b0(void *p);

// TARGET: CBeam::vfunc5
CBaseEntity *CBeam::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100badb0 size=0x53
#include "CBeam.h"

struct CModelInfoBeam {
	virtual void s0(); virtual void s1();
	virtual const void *GetModel(int modelindex);
	virtual void s3(); virtual void s4(); virtual void s5();
	virtual int GetModelType(const void *model);
	virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual int GetModelIndex(const char *name);
};
extern CModelInfoBeam *g_1070b250;
extern void (*g_109f3628)(const char *, ...);
void sub_101cf4a0(CBaseEntity *pEnt, const char *pszName);

// TARGET: CBeam::vfunc105
void CBeam::vfunc105(const char *pszModelName)
{
	int index = g_1070b250->GetModelIndex(pszModelName);
	const void *pModel = g_1070b250->GetModel(index);
	if (pModel && g_1070b250->GetModelType(pModel) != 2)
		g_109f3628("Setting CBeam to non-sprite model %s\n", pszModelName);
	sub_101cf4a0(this, pszModelName);
}
// END FUNCTION

// FUNCTION: 0x100bae30 size=0x97
#include "CBeam.h"
#include "CCollisionProperty.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CBeam::vfunc103
void CBeam::vfunc103()
{
    vfunc93(0, 0);
    const char *name = m_name26c;
    if (name == 0)
        name = g_106b8540;
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    --*g_109f3680;
    *(int *)((char *)this + 0x16c) = 2;
    vfunc104();
}
// END FUNCTION

// FUNCTION: 0x100baf00 size=0x8e
#include "CBeam.h"
extern CGlobalEntityList *g_10566458;

struct CHandleX {
    unsigned int m_Index;
    CBaseEntity *Get() const
    {
        if (m_Index != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
            if (s->m_Serial == (int)(m_Index >> 13))
                return (CBaseEntity *)s->m_pEntity;
        }
        return 0;
    }
};

struct CBeamH : CBeam {
    CHandleX m_hAttach;
    void Run();
};

void CBeam::vfunc104()
{
    if (vfunc97())
        sub_100bafc0(vfunc97());
    CBeamH *p = (CBeamH *)this;
    if (p->m_hAttach.Get() != 0)
        sub_100bb030(p->m_hAttach.Get());
}
// END FUNCTION

// FUNCTION: 0x100bafc0 size=0x45
#include "CBeam.h"
#define V1(a) virtual void a();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##a) V10(p##b) V10(p##c) V10(p##d) V10(p##e) V10(p##f) V10(p##g) V10(p##h) V10(p##i) V10(p##j)
struct CBeamSlot202View {
	V100(q) V100(r)
	V1(s0) V1(s1)
	virtual void SetOwner(CBaseEntity *pOwner);
};
void CBeam::sub_100bafc0(CBaseEntity *pEnt)
{
	((EHANDLE &)m_hEndEntity) = pEnt;
	((CBeamSlot202View *)this)->SetOwner(pEnt);
}
// END FUNCTION

// FUNCTION: 0x100bb030 size=0x56
#include "CBeam.h"
void CBeam::sub_100bb030(CBaseEntity *pEnt)
{
	EHANDLE *pSlot = (EHANDLE *)((char *)this + 0x464) + m_nNumBeamEnts;
	*pSlot = pEnt;
	*(EHANDLE *)((char *)this + 0x4e4) = pEnt;
}
// END FUNCTION

// FUNCTION: 0x100bb0b0 size=0x9e
#include "CBeam.h"
extern CGlobalEntityList *g_10566458;

static inline bool TestBit(unsigned int value, int bit)
{
    return ((value >> bit) & 1) != 0;
}

#define D(n) virtual void n();
#define D10(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
struct CBeamSlots {
    D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D(b60) D(b61)
    virtual void vfunc62(const float *pPos);
};

struct CHandleX {
    unsigned int m_Index;
    CBaseEntity *Get() const
    {
        if (m_Index != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
            if (s->m_Serial == (int)(m_Index >> 13))
                return (CBaseEntity *)s->m_pEntity;
        }
        return 0;
    }
};

void sub_10138630(const float *pIn, float *pOut);
void sub_10137fe0(const float *pPos, const float *pMatrix, float *pOut);

void CBeam::sub_100bb0b0(const float *pPos)
{
    if (((CHandleX *)((char *)this + 0x25c))->Get() == 0) {
        ((CBeamSlots *)this)->vfunc62(pPos);
        return;
    }
    if (TestBit(m_flags268, 11))
        vfunc98();
    float vecLocal[3];
    float matInverse[12];
    sub_10138630((const float *)((char *)this + 0x130), matInverse);
    sub_10137fe0(pPos, matInverse, vecLocal);
    ((CBeamSlots *)this)->vfunc62(vecLocal);
}
// END FUNCTION

// FUNCTION: 0x100bb180 size=0xbc
#include "CBaseEntity.h"
struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

void sub_10005394(float *a, float *b);
void sub_100087ba(const float *in, float *m, float *out);

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	EntInfo *e;
	return (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13))) ? e->m_pEntity : 0;
}

void CBaseEntity::sub_100bb180(const float *pLocal)
{
	float *pOut = (float *)((char *)this + 0x4d8);
	CBaseEntity *pParent = ResolveHandle(*(unsigned int *)((char *)this + 0x25c));
	if (!pParent) {
		pOut[0] = pLocal[0];
		pOut[1] = pLocal[1];
		pOut[2] = pLocal[2];
	} else {
		float tmp[3];
		float inv[12];
		if (TestBit(m_flags268, 11))
			vfunc98();
		sub_10005394((float *)((char *)this + 0x130), inv);
		sub_100087ba(pLocal, inv, tmp);
		pOut[0] = tmp[0];
		pOut[1] = tmp[1];
		pOut[2] = tmp[2];
	}
}
// END FUNCTION

// FUNCTION: 0x100bb270 size=0x16e
#include "CGlobalEntityList.h"
#include "CUnknown1070b22c.h"
#include "CBeam.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct Slots217 {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
    S10(c0)
    S1(v, 0) S1(v, 1) S1(v, 2) S1(v, 3) S1(v, 4) S1(v, 5) S1(v, 6)
    virtual float *f217();
};

struct ScopeTraceEntry {
    const char *m_pszName;
    const char *m_pszEntity;
    const char *m_pszExtra;
};
extern "C" __declspec(dllimport) ScopeTraceEntry g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern const char g_106b8540[];

struct ScopeTrace {
    ScopeTrace(const char *name, const char *entity)
    {
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszName = name;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszEntity = entity;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszExtra = g_106b8540;
        g_ScopeTraceStackDepth++;
    }
    ~ScopeTrace() { g_ScopeTraceStackDepth--; }
};

extern CGlobalEntityList *g_10566458;
extern CUnknown1070b22c *g_1070b22c;

struct UnkLike {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual CBaseEntity *GetBaseEntity();
};

struct CUnknown1070b22c_Edict {
    char m_pad0000[0x40];
    UnkLike *m_pUnk;
};

struct EdictOwner {
    char m_pad0000[0x2e0];
    int m_pEdict;
    int GetEdict() { return m_pEdict; }
};

// TARGET: CBeam::sub_100bb270
float *CBeam::sub_100bb270()
{
    CGlobalEntityList_Slot *s;
    CBaseEntity *pEnt = 0;
    if ((m_nBeamType & 0xf) == 2 && m_hEndEntity != 0xffffffff
        && (s = &g_10566458->m_Slots[m_hEndEntity & 0x1fff])->m_Serial == (int)(m_hEndEntity >> 13)
        && s->m_pEntity
        && g_1070b22c->vfunc35(((EdictOwner *)s->m_pEntity)->GetEdict())) {
        int idx = (m_hEndEntity != 0xffffffff
                   && (s = &g_10566458->m_Slots[m_hEndEntity & 0x1fff])->m_Serial == (int)(m_hEndEntity >> 13)
                   && s->m_pEntity)
            ? g_1070b22c->vfunc35(((EdictOwner *)s->m_pEntity)->GetEdict())
            : 0;
        CUnknown1070b22c_Edict *pEdict = g_1070b22c->vfunc38(idx);
        {
            ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
            if (!pEdict)
                pEdict = g_1070b22c->vfunc38(0);
            if (pEdict && pEdict->m_pUnk)
                pEnt = pEdict->m_pUnk->GetBaseEntity();
            else
                pEnt = 0;
        }
        if (!pEnt)
            return ((Slots217 *)this)->f217();
        return ((Slots217 *)pEnt)->f217();
    }
    return ((Slots217 *)this)->f217();
}
// END FUNCTION

// FUNCTION: 0x100bb440 size=0x1c3
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CBeam.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "TestBit.h"

void sub_10137fe0(const float *pIn, const float *pMatrix, float *pOut);

struct CBeamServerUnknownView
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual CBaseEntity *vfunc4();
};

struct CBeamEdictView
{
	char m_pad0000[0x40];
	CBeamServerUnknownView *m_pUnknown;
};

static inline CBaseEntity *CBeam_Instance(CBeamEdictView *pEdict)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pEdict)
		pEdict = (CBeamEdictView *)engine->vfunc38(0);
	return (pEdict && pEdict->m_pUnknown) ? pEdict->m_pUnknown->vfunc4() : 0;
}

struct BeamHandleV
{
	unsigned int m_Index;
	CBaseEntity *Get() const { return (CBaseEntity *)g_10566458->sub_100290c0((unsigned int *)this); }
};

static inline int BEAM_ENTINDEX(int pEdict) { return engine->vfunc35(pEdict); }

struct CBeamStartView : CBeam
{
	int GetType() const { return m_nBeamType & 0x0F; }
	int GetEndEntity() const
	{
		CBaseEntity *pEntity = ((const BeamHandleV *)&m_hBeamEnts[m_nNumBeamEnts - 1])->Get();
		return pEntity ? BEAM_ENTINDEX(pEntity->m_pEdict2e0) : 0;
	}
};

float *CBeam::sub_100bb440()
{
	const CBeamStartView *self = (const CBeamStartView *)this;
	if (self->GetType() != 0 && self->GetType() != 3 && self->GetEndEntity()) {
		CBaseEntity *pStart = CBeam_Instance((CBeamEdictView *)engine->vfunc38(self->GetEndEntity()));
		if (pStart)
			return (float *)((CEntityVSlots *)pStart)->slot217();
	}
	if (!EHandle_Get(m_hMoveParent))
		return m_vecEndPos;
	static Vector s_vecResult;
	if (TestBit(m_flags268, 11))
		vfunc98();
	sub_10137fe0(m_vecEndPos, (float *)((char *)this + 0x130), (float *)&s_vecResult);
	return (float *)&s_vecResult;
}
// END FUNCTION

// FUNCTION: 0x100bb6b0 size=0x4e
#include "CBeam.h"

__declspec(dllimport) void __cdecl Warning(const char *fmt, ...);
void *sub_10136580(const char *name);
extern "C" void *__cdecl __RTDynamicCast(void *inptr, long VfDelta, void *SrcType, void *TargetType, int isReference);
extern char g_10538764[];
extern char g_1055b054[];

CBeam *sub_100bb6b0(const char *a, int b)
{
	CBeam *pBeam = (CBeam *)__RTDynamicCast(sub_10136580("beam"), 0, g_10538764, g_1055b054, 0);
	if (!pBeam)
		Warning("classname %s used to create wrong class type\n");
	pBeam->sub_100bb790(a, b);
	return pBeam;
}
// END FUNCTION

// FUNCTION: 0x100bb720 size=0x4c
#include "CBaseEntity.h"
struct CFoo { void sub_100b4ad0(int *p); };
CBaseEntity *sub_100b3db0(const char *classname, const char *module, int line);

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CBeamSlots
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t)
	virtual void z0(); virtual void z1();
	virtual void SetOwner(CBaseEntity *pOwner);
};

CBaseEntity *sub_100bb720(const char *module, int line, int unused, const char *model, int value, CBaseEntity *pOwner)
{
	CBaseEntity *pBeam = sub_100b3db0("beam", module, line);
	if (pBeam)
	{
		pBeam->sub_100bb790(model, value);
		((CBeamSlots *)pBeam)->SetOwner(pOwner);
		((CFoo *)pBeam)->sub_100b4ad0((int *)pOwner);
	}
	return pBeam;
}
// END FUNCTION

// FUNCTION: 0x100bb790 size=0xaf
#include "CBeam.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CBeamSlot212View
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t)
	V10(u)
	virtual void z0(); virtual void z1();
	virtual void SetModelName(string_t name);	// slot 212
};

inline string_t MAKE_STRING_BEAM(const char *str) { return string_t(*str ? str : 0); }

// "CBeam::BeamInit(pSpriteName, width)": declared on CBaseEntity because the matched callers (CBeam::BeamCreate
// 0x100bb6b0, 0x100bb720) pass the width as its bits (int)
void CBaseEntity::sub_100bb790(const char *pSpriteName, int width)
{
	CBeam *pBeam = (CBeam *)this;
	((CBaseEntityColor32 *)m_pad01a0)->r = 255;	// m_clrRender (+0x1a0)
	((CBaseEntityColor32 *)m_pad01a0)->g = 255;
	((CBaseEntityColor32 *)m_pad01a0)->b = 255;
	((CBaseEntityColor32 *)m_pad01a0)->a = 255;
	pBeam->m_flNoiseAmplitude = 0;
	pBeam->m_fStartFrame = 0;
	pBeam->m_flTextureScroll = 0;
	((CBeamSlot212View *)this)->SetModelName(MAKE_STRING_BEAM(pSpriteName));
	m_n16c = 2;
	int index = sub_100adfd0(pSpriteName);
	vfunc10(index);
	pBeam->m_fWidth = *(float *)&width;
	pBeam->m_fEndWidth = *(float *)&width;
	pBeam->m_fFadeLength = 0;
	for (int i = 0; i < 10; i++) {
		pBeam->m_hBeamEnts[i] = 0;
		pBeam->m_nAttachIndex[i] = 0;
	}
	*(int *)pBeam->m_pad0460 = 0;	// halo index (+0x460)
	pBeam->m_fHaloScale = 10.0f;
	pBeam->m_nBeamType = 0;
}
// END FUNCTION

// FUNCTION: 0x100bb870 size=0x6b
#include "CBeam.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct Slots62 {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5)
    S1(b, 0) S1(b, 1)
    virtual void f62(int a);
};

struct VecF {
    float x, y, z;
    VecF &operator=(const VecF &o)
    {
        x = o.x;
        y = o.y;
        z = o.z;
        return *this;
    }
};

// TARGET: CBeam::sub_100bb870
void CBeam::sub_100bb870(int a, const float *pPos)
{
    m_nBeamType &= 0xff0;
    m_nNumBeamEnts = 2;
    ((Slots62 *)this)->f62(a);
    *(VecF *)m_vecEndPos = *(const VecF *)pPos;
    m_nAttach[1] = 0;
    m_nAttach[m_nNumBeamEnts] = 0;
    sub_100bbbf0();
}
// END FUNCTION

// FUNCTION: 0x100bb900 size=0x6b
#include "CBeam.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct Slots62 {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5)
    S1(b, 0) S1(b, 1)
    virtual void f62(int a);
};

struct VecF {
    float x, y, z;
    VecF &operator=(const VecF &o)
    {
        x = o.x;
        y = o.y;
        z = o.z;
        return *this;
    }
};

// TARGET: CBeam::sub_100bb900
void CBeam::sub_100bb900(int a, const float *pPos)
{
    m_nNumBeamEnts = 2;
    m_nBeamType = (m_nBeamType & 0xff0) | 3;
    ((Slots62 *)this)->f62(a);
    *(VecF *)m_vecEndPos = *(const VecF *)pPos;
    m_nAttach[1] = 0;
    m_nAttach[m_nNumBeamEnts] = 0;
    sub_100bbbf0();
}
// END FUNCTION

// FUNCTION: 0x100bb990 size=0x59
#include "CBeam.h"
#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CSlot62View
{
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5)
	SV(60) SV(61)
	virtual void SetLocalOrigin(const float *pPos);
};
void CBeam::sub_100bb990(const float *pPos, CBaseEntity *pEnt)
{
	m_nNumBeamEnts = 2;
	m_nBeamType = (m_nBeamType & 0xff0) | 1;
	((CSlot62View *)this)->SetLocalOrigin(pPos);
	sub_100bb030(pEnt);
	m_nAttach[1] = 0;
	m_nAttach[m_nNumBeamEnts] = 0;
	sub_100bbbf0();
}
// END FUNCTION

// FUNCTION: 0x100bba10 size=0x58
#include "CBeam.h"
// TARGET: CBeam::sub_100bba10
void CBeam::sub_100bba10(CBaseEntity *pStart, CBaseEntity *pEnd)
{
	m_nNumBeamEnts = 2;
	m_nBeamType = (m_nBeamType & 0xff0) | 2;
	sub_100bafc0(pStart);
	sub_100bb030(pEnd);
	m_nAttach[1] = 0;
	m_nAttach[m_nNumBeamEnts] = 0;
	sub_100bbbf0();
}
// END FUNCTION

// FUNCTION: 0x100bba90 size=0x58
#include "CBeam.h"
// TARGET: CBeam::sub_100bba90
void CBeam::sub_100bba90(CBaseEntity *pStart, CBaseEntity *pEnd)
{
	m_nNumBeamEnts = 2;
	m_nBeamType = (m_nBeamType & 0xff0) | 5;
	sub_100bafc0(pStart);
	sub_100bb030(pEnd);
	m_nAttach[1] = 0;
	m_nAttach[m_nNumBeamEnts] = 0;
	sub_100bbbf0();
}
// END FUNCTION

// FUNCTION: 0x100bbb10 size=0xa9
#include "CBeam.h"
extern void (__cdecl *g_109f3628)(const char *, ...);

struct HandleSrc {
	virtual void pad0();
	virtual unsigned int *GetRefEHandle();
};

void CBeam::sub_100bbb10(int nEnts, CBaseEntity **ppEnts, int *pAttach)
{
	if (nEnts < 2) {
		g_109f3628("ERROR: Min of 2 ents required for spline beam.\n");
	} else if (nEnts > 10) {
		g_109f3628("ERROR: Max of %i ents allowed for spline beam.\n", 10);
	}
	m_nBeamType = (m_nBeamType & 0xff0) | 4;
	for (int i = 0; i < nEnts; i++) {
		HandleSrc *e = (HandleSrc *)ppEnts[i];
		unsigned int *h = (unsigned int *)((char *)this + 0x468) + i;
		if (e)
			*h = *e->GetRefEHandle();
		else
			*h = 0xffffffff;
		*(int *)((char *)h + 0x28) = pAttach[i];
	}
	m_nNumBeamEnts = nEnts;
	sub_100bbbf0();
}
// END FUNCTION

// FUNCTION: 0x100bbbf0 size=0x183
#include "CBeam.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"

// TARGET: CBeam::sub_100bbbf0
void CBeam::sub_100bbbf0()
{
    const float *a = sub_100bb270();
    const float *b = sub_100bb440();
    Vector mins, maxs;
    mins.x = (a[0] < b[0]) ? a[0] : b[0];
    mins.y = (a[1] < b[1]) ? a[1] : b[1];
    mins.z = (a[2] < b[2]) ? a[2] : b[2];
    maxs.x = (a[0] > b[0]) ? a[0] : b[0];
    maxs.y = (a[1] > b[1]) ? a[1] : b[1];
    maxs.z = (a[2] > b[2]) ? a[2] : b[2];
    Vector vecLocalMaxs = maxs - *((CEntityVSlots *)this)->slot217();
    Vector vecLocalMins = mins - *((CEntityVSlots *)this)->slot217();
    sub_1009edc0(&vecLocalMins.x, &vecLocalMaxs.x);
    CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
    float *pMins = pCollision->vfunc1();
    float *pMaxs = pCollision->vfunc2();
    sub_100adf10(pMins, pMaxs);
}
// END FUNCTION

// FUNCTION: 0x100bbdf0 size=0x56
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
extern CGlobalEntityList g_106eb5d8;
// TARGET: sub_100bbdf0
CBaseEntity * __stdcall sub_100bbdf0(const char *pszName)
{
	CBaseEntity *pResult = 0;
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pEnt) {
		int n = -1;
		do {
			n++;
			if (enginerandom->vfunc2(0, n) < 1)
				pResult = pEnt;
			pEnt = g_106eb5d8.sub_100f7770(pEnt, pszName, 0, 0);
		} while (pEnt);
	}
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x100bbe70 size=0x51
#include "CBeam.h"

struct CBeamEffectsView
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(int a, int b, int c, int d);
};
extern CBeamEffectsView *g_10566258;

struct CBeamFlags
{
	unsigned int low : 4;
	unsigned int bStart : 1;
	unsigned int bEnd : 1;
	unsigned int bHigh : 26;
	bool Start() const { return bStart; }
	bool End() const { return bEnd; }
};

void CBeam::sub_100bbe70(int a, int b)
{
	CBeamFlags *f = (CBeamFlags *)((char *)this + 0x204);
	if (*(unsigned int *)f & 0x30) {
		if (f->Start())
			g_10566258->vfunc3(a, 1, 1, 0);
		if (f->End())
			g_10566258->vfunc3(b, 1, 1, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x100bbef0 size=0x13d
#include "CBeam.h"
#include "CGameTrace.h"
#include "CVDmg_t.h"
#include "CUnknown101c26d0.h"

void sub_101c2c30();
void sub_101c2c60();

inline float CurTime() { return gpGlobals->curtime; }

// TARGET: CBeam::sub_100bbef0
void CBeam::sub_100bbef0(CGameTrace *pTrace)
{
	sub_100bbbf0();
	if ((pTrace->m_fraction < 1.0f || pTrace->m_allsolid || pTrace->m_startsolid) && pTrace->m_pEnt != 0)
	{
		CBaseEntity *pEnt = pTrace->m_pEnt;
		if (pEnt && pEnt->m_nTakeDamage)
		{
			sub_101c2c30();
			Vector vecDir = *(Vector *)pTrace->m_endpos - *(Vector *)pTrace->m_startpos;
			VectorNormalize(vecDir);
			float flDamage = (gpGlobals->curtime - m_flStartTime) * m_flDamageRate;
			CVDmg_t vdmg;
			vdmg.sub_101fa960((CVDmgSource_t *)this);
			int nDamage = (int)flDamage;
			if (nDamage < 1)
				nDamage = 1;
			vdmg.sub_101fa8d0(0, 0, nDamage);
			CUnknown101c26d0 info;
			info.sub_101c26d0(this, this, 1.0f, 0, 0, (int)&vdmg, -1);
			pEnt->sub_100a7d00((int)&info, (int)&vecDir, (int)pTrace);
			sub_101c2c60();
			vdmg.sub_101fa680();
		}
	}
	m_flStartTime = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100bc080 size=0x41
#include "CBeam.h"
#include "inputdata_t.h"

void CBeam::sub_100bc080(inputdata_t &data)
{
    m_fWidth = data.value.fieldType == 1 ? data.value.flValue : 0.0f;
    m_fEndWidth = data.value.fieldType == 1 ? data.value.flValue : 0;
}
// END FUNCTION

// FUNCTION: 0x100bc0f0 size=0x23
#include "CUnknown100bc0f0.h"

void CUnknown100bc0f0::sub_100bc0f0(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk4c8 = data->m_value;
	else
		m_unk4c8 = 0;
}
// END FUNCTION

// FUNCTION: 0x100bc130 size=0x93
#include "CBeam.h"
#include "CBaseEntity.h"

struct CCheckTransmitInfo_t { char pad[0x10]; unsigned char *m_pPVS; };

// TARGET: CBeam::vfunc87
void CBeam::vfunc87(void *pCheckTransmitInfo)
{
    CCheckTransmitInfo_t *pInfo = (CCheckTransmitInfo_t *)pCheckTransmitInfo;
    int edict = m_pEdict2e0;
    int idx = engine->vfunc35(edict);
    if (!(pInfo->m_pPVS[idx >> 3] & (1 << (idx & 7)))) {
        CBaseEntity::vfunc87(pInfo);
        EHANDLE *p = (EHANDLE *)&m_hEndEntity;
        for (int i = 10; i != 0; i--, p++) {
            if (*p)
                (*p)->vfunc87(pInfo);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100bc200 size=0x128
#include "CBeam.h"
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int index, int line, const char *text, int a, int r, int g, int b, int al);
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct BeamEntView {
    V100(a) V100(b) V10(c0)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
    virtual const float *GetAbsOrigin();
};
int CBeam::vfunc124()
{
    int offset = CBaseEntity::vfunc124();
    if (*((char *)this + 0x224) & 1) {
        char tempstr[512];
        BeamEntView *pEnt = (BeamEntView *)this;
        Q_snprintf(tempstr, sizeof(tempstr), "start: (%.2f,%.2f,%.2f)", pEnt->GetAbsOrigin()[0], pEnt->GetAbsOrigin()[1], pEnt->GetAbsOrigin()[2]);
        int edict = m_pEdict2e0;
        sub_101434b0(engine->vfunc35(edict), offset, tempstr, 0, 255, 255, 255, 255);
        offset++;
        Q_snprintf(tempstr, sizeof(tempstr), "end  : (%.2f,%.2f,%.2f)", m_vecEndPos[0], m_vecEndPos[1], m_vecEndPos[2]);
        edict = m_pEdict2e0;
        sub_101434b0(engine->vfunc35(edict), offset, tempstr, 0, 255, 255, 255, 255);
        offset++;
    }
    return offset;
}
// END FUNCTION
