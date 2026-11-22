// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 72 blocks
#include "vampire.h"

// FUNCTION: 0x1002d6c0 size=0x68
#include "CPhysicsHook.h"
#include "utlvector.h"

void __cdecl sub_10430964(void *p);

CPhysicsHook *CPhysicsHook::vfunc8(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x4))->~CUtlVector<int>();
	sub_1000cfbd();
	if (flags & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002d750 size=0x5e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

extern char g_106b88ec[];	// the PhysicsGameSystem singleton

// TARGET: sub_1002d750
char *sub_1002d750()
{
	ScopeTrace trace("PhysicsGameSystem", g_106b8540);
	return g_106b88ec;
}
// END FUNCTION

// FUNCTION: 0x1002d7d0 size=0x106
#include "CPhysicsHook.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBCCSlotViews.h"

struct PHFactory { int a; void *(*fn)(const char *, int); int c; };
struct PHFileSystem {
    VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4)
    VIEW_SLOT10(5) VIEW_SLOT10(6) VIEW_SLOT10(7) VIEW_SLOT10(8)
    virtual void *LoadFile(const char *name, int flags);
    virtual void FreeFile(void *p);
};
struct PHSurfaceProps {
    virtual void v0();
    virtual void Parse(const char *name, void *data);
};
extern void *g_10723934;
extern void *g_1072393c;
extern PHSurfaceProps *g_10723944;
extern PHFileSystem *g_1070b22c;
void sub_1012ee40(PHFactory *out);

bool CPhysicsHook::vfunc0()
{
    ScopeTrace trace("CPhysicsHook::Init", g_106b8540);
    PHFactory factory;
    sub_1012ee40(&factory);
    if (factory.fn) {
        g_10723934 = factory.fn("VPhysics030", 0);
        if (g_10723934) {
            g_1072393c = factory.fn("VPhysicsCollision007", 0);
            if (g_1072393c) {
                g_10723944 = (PHSurfaceProps *)factory.fn("VPhysicsSurfaceProps001", 0);
                if (g_10723944) {
                    void *data = g_1070b22c->LoadFile("scripts/surfaceproperties.txt", 0);
                    g_10723944->Parse("scripts/surfaceproperties.txt", data);
                    g_1070b22c->FreeFile(data);
                    return true;
                }
            }
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1002d930 size=0x19f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsHook.h"
#include "CUnknown106b89bc.h"
#include "ScopeTrace.h"
#include "CCollisionEvent.h"

extern char g_10539aa8[];
#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct S10723934
{
	virtual void *vfunc0();
	virtual void v1();
	virtual void v2();
	virtual int vfunc3();
};

struct S10723940
{
	virtual void v0();
	virtual void vfunc1(int a);
	virtual void vfunc2();
	virtual void vfunc3(float *pGravity);
	PV10(a0) PV10(a1) virtual void a20();
	virtual void v25(void *p);
	virtual void v26(); virtual void v27(); virtual void v28();
	virtual void v29(float f);
	virtual void v30(); virtual void v31();
	virtual void v32(void *p);
	virtual void v33(void *p);
	virtual void v34(void *p);
	PV10(b0) virtual void b10(); virtual void b11();
	virtual void v47(int a);
};

struct S109ef2d4
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad04[0x28 - 4];
	float m_f28;
};

extern S10723934 *g_10723934;
extern S10723940 *g_10723940;
extern int g_10723948;
extern int g_10723938;
extern S109ef2d4 *g_109ef2d4;
extern CUnknown106b89bc *g_106b89bc;
extern CCollisionEvent g_106b86d8;	// g_Collisions (physics.cpp): its IPhysicsCollisionSolver part sits at +4
extern char g_106b8694[];
extern void *g_10539010;
extern int g_106b85b8;
extern float g_104454c4;
void sub_1000fdc1(int *pOut);
int sub_1023bd00();
int sub_1002e140(int a);

void CPhysicsHook::vfunc2()
{
	ScopeTrace trace(g_10539aa8, g_106b8540);
	float vecGravity[3];
	int nSettings[3];
	g_10723940 = (S10723940 *)g_10723934->vfunc0();
	g_10723948 = g_10723934->vfunc3();
	sub_1000fdc1(nSettings);
	g_10723940->vfunc1(nSettings[0]);
	g_10723940->v47(1);
	g_10723940->v25(static_cast<IPhysicsCollisionSolver *>(&g_106b86d8));
	g_10723940->v32(&g_106b86d8);
	g_10723940->v34(g_10539010);
	g_10723940->v33(g_106b8694);
	g_10723940->v29(0.015f);
	float flGravity;
	if (g_109ef2d4->vfunc1())
		flGravity = g_104454c4;
	else
		flGravity = g_109ef2d4->m_f28;
	vecGravity[0] = 0;
	vecGravity[1] = 0;
	vecGravity[2] = -flGravity;
	g_10723940->vfunc3(vecGravity);
	g_106b85b8 = 0;
	g_10723938 = sub_1002e140(sub_1023bd00());
	g_106b89bc = new CUnknown106b89bc;
	m_18 = 1;
}
// END FUNCTION

// FUNCTION: 0x1002db40 size=0x5c
#include "CPhysicsHook.h"
struct ScopeEntry { const char *name; const char *a; const char *b; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CPhysicsHook::vfunc3()
{
	g_109f3620[*g_109f3680].name = "CPhysicsHook::LevelInitPostEntity";
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	m_18 = 0;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1002dbc0 size=0x6a
#include "CPhysicsHook.h"
struct ScopeEntry {
    const char *a;
    const char *b;
    const char *c;
};
struct IThing {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42();
    virtual void v43(int a);
};
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IThing *g_10723940;

void CPhysicsHook::vfunc4()
{
    g_109f3620[*g_109f3680].a = "CPhysicsHook::LevelShutdownPreEntity";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (g_10723940)
        g_10723940->v43(1);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1002dc50 size=0xd5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsHook.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"
extern char g_10539b24[];
struct S1053c5e0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void vfunc4(); };
struct S10723934 { virtual void v0(); virtual void vfunc1(int a); virtual void v2(); virtual void v3(); virtual void vfunc4(int a); };
struct SListOwner_t;
void __fastcall sub_100d1250(SListOwner_t *pThis);
struct S106b89bc { ~S106b89bc() { sub_100d1250((SListOwner_t *)this); } };
extern int g_10723940;
extern int g_10723948;
extern int g_10723938;
extern S1053c5e0 *g_1053c5e0;
extern S10723934 *g_10723934;
static S106b89bc *g_106b89bc;
extern CCollisionEvent g_106b86d8;
void CPhysicsHook::vfunc5()
{
    ScopeTrace t(g_10539b24, g_106b8540);
    if (!g_10723940)
        return;
    g_1053c5e0->vfunc4();
    g_106b86d8.sub_10031520();
    g_10723934->vfunc1(g_10723940);
    g_10723940 = 0;
    g_10723934->vfunc4(g_10723948);
    g_10723948 = 0;
    g_10723938 = 0;
    delete g_106b89bc;
    g_106b89bc = 0;
    *(int *)((char *)this + 0x10) = 0;
}
// END FUNCTION

// FUNCTION: 0x1002dd70 size=0x1ec
#include "CPhysicsHook.h"
struct ScopeTraceEntry_ { const char *name; const char *a; const char *b; };
extern ScopeTraceEntry_ *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct VPCycle_ {
    unsigned __int64 m_Int64;
    VPCycle_() { m_Int64 = 0; }
    void Sample() {
        unsigned long *pSample = (unsigned long *)&m_Int64;
        __asm {
            mov ecx, pSample
            rdtsc
            mov [ecx], eax
            mov [ecx+4], edx
        }
    }
    VPCycle_ &operator+=(VPCycle_ const &other) { m_Int64 += other.m_Int64; return *this; }
};

struct VPNode_ {
    const char *m_pszName;
    int pad4;
    VPCycle_ m_Timer;
    int m_nRecursions;
    int m_nCurFrameCalls;
    VPCycle_ m_CurFrameTime;
    char pad20[0x48 - 0x20];
    VPNode_ *m_pParent;
    char pad4c[0x54 - 0x4c];
    int m_BudgetGroupID;
};

struct VProfile_ {
    bool m_bVTuneGroupEnabled;
    int m_nVTuneGroupID;
    int m_GroupIDStack[1024];
    int m_GroupIDStackDepth;
    int m_enabled;
    bool m_fAtRoot;
    VPNode_ *m_pCurNode;
    VPNode_ *m_pRoot;
};

extern VProfile_ *g_109f3648;
extern VPNode_ *(VPNode_::*g_109f3644)(const char *, int, const char *);
extern void (VProfile_::*g_109f363c)();
extern void (*g_109f3640)(bool);


void sub_1002ea40(float);
void sub_1000a8cb(void *);

static inline void VPEnter(const char *pszName, int detail, const char *group)
{
    VProfile_ *p = g_109f3648;
    if (p->m_enabled != 0 || !p->m_fAtRoot) {
        if (p->m_pCurNode->m_pszName != pszName)
            p->m_pCurNode = (p->m_pCurNode->*g_109f3644)(pszName, detail, group);
        VPNode_ *n = p->m_pCurNode;
        n->m_nCurFrameCalls++;
        if (n->m_nRecursions++ == 0) {
            n->m_Timer.Sample();
            VProfile_ *q = g_109f3648;
            int id = n->m_BudgetGroupID;
            q->m_GroupIDStack[q->m_GroupIDStackDepth] = id;
            q->m_GroupIDStackDepth++;
            if (q->m_GroupIDStack[q->m_GroupIDStackDepth - 2] != id && q->m_bVTuneGroupEnabled && id == q->m_nVTuneGroupID)
                g_109f3640(true);
        }
        p->m_fAtRoot = false;
    }
}

static inline void VPExit()
{
    VProfile_ *p = g_109f3648;
    if (!p->m_fAtRoot || p->m_enabled != 0) {
        VPNode_ *n = p->m_pCurNode;
        if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
            VPCycle_ cnt;
            cnt.Sample();
            n->m_Timer.m_Int64 = cnt.m_Int64 - n->m_Timer.m_Int64;
            n->m_CurFrameTime += n->m_Timer;
            (g_109f3648->*g_109f363c)();
        }
        if (n->m_nRecursions == 0)
            p->m_pCurNode = p->m_pCurNode->m_pParent;
        p->m_fAtRoot = (p->m_pCurNode == p->m_pRoot);
    }
}

struct VPScope_ {
    VPScope_(const char *name, int detail, const char *group) { VPEnter(name, detail, group); }
    ~VPScope_() { VPExit(); }
};

struct TraceScope_ {
    TraceScope_(const char *name) {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].a = g_106b8540;
        g_109f3620[*g_109f3680].b = g_106b8540;
        (*g_109f3680)++;
    }
    ~TraceScope_() { (*g_109f3680)--; }
};

void CPhysicsHook::vfunc7()
{
    TraceScope_ trace("CPhysicsHook::FrameUpdatePostEntityThink");
    VPScope_ vp("CPhysicsHook::FrameUpdatePostEntityThink", 0, "Physics");
    sub_1002ea40(gpGlobals->frametime);
    sub_1000a8cb(m_04);
}
// END FUNCTION

// FUNCTION: 0x1002dfe0 size=0x85
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct IPhysicsEnv {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual int CreateBbox(int mins, int maxs);
};
struct IPhysCallback {
    virtual void OnCreate(int mins, int maxs, int obj);
};
extern IPhysicsEnv *g_1072393c;
extern IPhysCallback *g_1053c5e0;

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int sub_1002dfe0(int mins, int maxs)
{
    CScopeGuard guard("PhysCreateBbox");
    int obj = g_1072393c->CreateBbox(mins, maxs);
    g_1053c5e0->OnCreate(mins, maxs, obj);
    return obj;
}
// END FUNCTION

// FUNCTION: 0x1002e0a0 size=0x7c
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct IPhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void SetGameFlags(unsigned short flags);
    virtual unsigned short GetGameFlags();
};

unsigned short sub_1002e0a0(IPhysObj *obj, unsigned short flags)
{
    g_109f3620[*g_109f3680].name = "PhysSetFlags";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    unsigned short r = obj->GetGameFlags();
    r |= flags;
    obj->SetGameFlags(r);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1002e140 size=0x93
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct IPhysParser {
	virtual void slot0(void *a, void *b, void *c);
};
struct IPhysFactory {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17();
	virtual void *slot18(int a);
};
extern IPhysParser *g_1070b240;
extern IPhysFactory *g_1070b250;
extern void *g_10723940;
extern char g_107238e0[];
extern char g_1046ecb4[];
void *sub_10158600(void *pBuffer, void *pWorld, void *pParams);

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = name;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void *sub_1002e140(void *pBuffer)
{
	CScopeTrace trace("PhysCreateWorld", g_106b8540);
	g_1070b240->slot0(g_10723940, g_107238e0, pBuffer);
	return sub_10158600(pBuffer, g_1070b250->slot18(1), g_1046ecb4);
}
// END FUNCTION

// FUNCTION: 0x1002e210 size=0x136
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include <string.h>

struct SVCollide102e210 { int m_nSolidCount; void **m_ppSolids; void *m_pKeyData; };
struct SPhysParams102e210 { int m_n[12]; };
extern SPhysParams102e210 g_1046ecb4;
struct SPhysSolid102e210
{
	char m_pad0000[0x628];
	const char *m_pName628;
	CBaseEntity *m_pEntity62c;
	char m_pad0630[0x63c - 0x630];
	char m_bFlag63c;
	char m_pad063d[0x640 - 0x63d];
};
struct CKeyParserFactory102e210
{
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();
	virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11();
	virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17();
	virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23();
	virtual void f24(); virtual void f25();
	virtual void *Create(void *pData);
	virtual void Destroy(void *pParser);
};
struct CKVParser102e210
{
	virtual void p0();
	virtual char *Token();
	virtual char IsEOF();
	virtual void Parse(void *pSolid, const void *pKV);
	virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8();
	virtual void Next();
};
struct SString102e210
{
	SString102e210() {}
	SString102e210(const SString102e210 &o) : m_p(o.m_p) {}
	const char *m_p;
};
struct CEntityName102e210
{
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual SString102e210 GetModelName();
};
extern CKeyParserFactory102e210 *g_1072393c;
extern char g_107238e0[];

bool sub_1002e210(SPhysSolid102e210 *pSolid, CBaseEntity *pEntity, int modelIndex)
{
	ScopeTrace trace("PhysModelParseSolid", g_106b8540);
	SVCollide102e210 *pCollide = (SVCollide102e210 *)engine->vfunc58(modelIndex);
	if ( !pCollide )
		return false;
	memset(pSolid, 0, sizeof(*pSolid));
	memcpy((char *)pSolid + 0x610, &g_1046ecb4, sizeof(g_1046ecb4));
	CKVParser102e210 *pParser = (CKVParser102e210 *)g_1072393c->Create(pCollide->m_pKeyData);
	while ( !pParser->IsEOF() )
	{
		char *pToken = pParser->Token();
		if ( !_strcmpi(pToken, "solid") )
		{
			pParser->Parse(pSolid, g_107238e0);
			break;
		}
		pParser->Next();
	}
	g_1072393c->Destroy(pParser);
	pSolid->m_bFlag63c = 1;
	pSolid->m_pEntity62c = pEntity;
	const char *pName = ((CEntityName102e210 *)pEntity)->GetModelName().m_p;
	if ( !pName )
		pName = g_106b8540;
	pSolid->m_pName628 = pName;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1002e3a0 size=0x17a
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "Tier1.h"

struct SweepA { int x; };
struct SweepB { int x; };
struct SweepC { int x; };
struct SweepD { int x; };
struct SweepE { int x; };
struct SweepF { int x; };

struct SVCollide
{
	int solidCount;
	void **solids;
};

struct SSolid
{
	char m_pad0000[0x404];
	char surfaceprop[0x610 - 0x404];
	char params[0x640 - 0x610];
};

struct SPhysEnv
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void *vfunc7(void *pCollide, int surfaceProp, const float *origin, const float *angles, void *params);
};

struct SPhysProps
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual int vfunc3(const char *pszName);
};

struct SPhysObjects
{
	virtual void v0(); virtual void v1();
	virtual void vfunc2(void *pObject, int modelIndex);
};

extern SPhysEnv *g_10723940;
extern SPhysProps *g_10723944;
extern SPhysObjects *g_1053c5e0;

bool sub_1002e210(SSolid *solid, CBaseEntity *pEntity, int modelIndex);

struct PMEnt : CBaseEntity
{
	int edictX() { return m_pEdict2e0; }
	int entindexX() { return engine->vfunc35(edictX()); }
	int entindexY() { return engine->vfunc35(m_pEdict2e0); }
	const char *GetDebugNameX() { return sub_100ab4f0(); }
};
inline int ENTINDEXX(int e) { return engine->vfunc35(e); }

inline bool IsValidCollide(SVCollide *pCollide, CBaseEntity *pEntity)
{
	if (!pCollide)
		return false;
	if (!pCollide->solidCount || !pCollide->solids) {
		int idx = engine->vfunc35(((PMEnt *)pEntity)->edictX());
		g_109f364c("(%d)%s has invalid collision data\n", idx, pEntity->sub_100ab4f0());
		return false;
	}
	return true;
}

void *sub_1002e3a0(CBaseEntity *pEntity, int modelIndex, const float *origin, const float *angles, SSolid *pSolid)
{
	ScopeTrace trace("PhysModelCreate", g_106b8540);
	SVCollide *pCollide = (SVCollide *)engine->vfunc58(modelIndex);
	if (!IsValidCollide(pCollide, pEntity))
		return 0;
	SSolid tmpSolid;
	if (!pSolid) {
		pSolid = &tmpSolid;
		if (!sub_1002e210(&tmpSolid, pEntity, modelIndex))
			return 0;
	}
	int surfaceProp = -1;
	if (pSolid->surfaceprop[0])
		surfaceProp = g_10723944->vfunc3(pSolid->surfaceprop);
	void *pObject = g_10723940->vfunc7(pCollide->solids[0], surfaceProp, origin, angles, pSolid->params);
	if (pObject)
		g_1053c5e0->vfunc2(pObject, modelIndex);
	return pObject;
}
// END FUNCTION

// FUNCTION: 0x1002e580 size=0x1de
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include <string.h>

struct SVCollide
{
	int m_n0;
	void **m_ppSolids;
	const char *m_pKeyText;
};

struct SObjectParams
{
	void *massCenterOverride;
	float mass;
	float inertia;
	float damping;
	float rotdamping;
	float rotInertiaLimit;
	const char *pName;
	void *pGameData;
	float volume;
	float dragCoefficient;
	float m_f28;
	char enableCollisions;
};

struct SSolid
{
	int index;
	char name[512];
	char parent[512];
	char surfaceprop[512];
	float massCenterOverride[3];
	SObjectParams params;
};

struct ISolidParser
{
	virtual void s0();
	virtual const char *GetCurrentBlockName();
	virtual char Finished();
	virtual void ParseSolid(SSolid *pSolid, void *pSetup);
	virtual void s4();
	virtual void s5();
	virtual void s6();
	virtual void s7();
	virtual void s8();
	virtual void SkipBlock();
};

struct IKeyParserFactory
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25();
	virtual ISolidParser *Create(const char *pKeyText);
	virtual void Destroy(ISolidParser *pParser);
};

struct IPhysEnvCreate
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void *CreatePolyObjectStatic(void *pSolid, int surfaceIndex, const Vector *origin, const Vector *angles, SObjectParams *pParams);
};

struct ISurfacePropsIndex
{
	virtual void s0(); virtual void s1(); virtual void s2();
	virtual int GetSurfaceIndex(const char *pName);
};

struct IPhysCreateNotify
{
	virtual void s0(); virtual void s1();
	virtual void OnCreate(void *pObject, int a);
};

extern IKeyParserFactory *g_1072393c;
extern IPhysEnvCreate *g_10723940;
extern ISurfacePropsIndex *g_10723944;
extern IPhysCreateNotify *g_1053c5e0;
extern SObjectParams g_1046ecb4;
extern char g_107238e0[];

void *sub_1002e580(CBaseEntity *pEntity, int modelIndex, const Vector *origin, const Vector *angles)
{
	ScopeTrace trace("PhysModelCreateUnmoveable", g_106b8540, g_106b8540);
	SVCollide *pCollide = (SVCollide *)engine->vfunc58(modelIndex);
	if (!pCollide || !pCollide->m_ppSolids)
		return 0;
	int tmp;
	SSolid solid;
	memset(&solid, 0, sizeof(solid));
	solid.params = g_1046ecb4;
	ISolidParser *pParse = g_1072393c->Create(pCollide->m_pKeyText);
	while (!pParse->Finished())
	{
		const char *pBlock = pParse->GetCurrentBlockName();
		if (!_strcmpi(pBlock, "solid"))
		{
			pParse->ParseSolid(&solid, g_107238e0);
			break;
		}
		pParse->SkipBlock();
	}
	g_1072393c->Destroy(pParse);
	int surfaceIndex = -1;
	solid.params.enableCollisions = 1;
	solid.params.mass = 1.0f;
	if (solid.surfaceprop[0])
		surfaceIndex = g_10723944->GetSurfaceIndex(solid.surfaceprop);
	solid.params.pGameData = pEntity;
	const char *pszName = *pEntity->vfunc9(&tmp);
	solid.params.pName = pszName;
	if (!pszName)
		solid.params.pName = g_106b8540;
	void *pObject = g_10723940->CreatePolyObjectStatic(pCollide->m_ppSolids[0], surfaceIndex, origin, angles, &solid.params);
	if (pObject)
		g_1053c5e0->OnCreate(pObject, modelIndex);
	return pObject;
}
// END FUNCTION

// FUNCTION: 0x1002e7e0 size=0x13d
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

class CBaseEntity;

struct PhysCustomView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6();
	virtual int v7(void *a, int id, int b, void *c, void *out);
	virtual int v8(void *a, int id, int b, void *c, void *out);
};
struct PhysSurfaceView {
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual int v3(const char *name);
};
struct PhysNotifyView {
	virtual void v0();
	virtual void v1(int pObject, void *pEntity);
};
struct PhysEntityView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual const char **v9(void *out);
};
struct PhysTail {
	int w[12];
};
struct PhysCreateParams {
	char m_pad0000[0x610];
	PhysTail m_tail;
};

extern PhysCustomView *g_10723940;
extern PhysSurfaceView *g_10723944;
extern PhysNotifyView *g_1053c5e0;
extern PhysTail g_1046ecb4;

int sub_1002e7e0(CBaseEntity *pEnt, int pObj, int b, void *c, const char *pszName, char bFlag, PhysCreateParams *pParams)
{
	ScopeTrace trace("PhysModelCreateCustom", g_106b8540);
	PhysCreateParams local;
	if (!pParams) {
		local.m_tail = g_1046ecb4;
		local.m_tail.w[1] = 0x42aa0000;
		local.m_tail.w[2] = 0x6753c21c;
		pParams = &local;
	}
	int id = -1;
	if (pszName && *pszName)
		id = g_10723944->v3(pszName);
	pParams->m_tail.w[7] = (int)pEnt;
	char tmp[4];
	const char *pName = *((PhysEntityView *)pEnt)->v9(tmp);
	if (!pName)
		pName = g_106b8540;
	pParams->m_tail.w[6] = (int)pName;
	int ret;
	if (bFlag)
		ret = g_10723940->v8((void *)pObj, id, b, c, &pParams->m_tail);
	else
		ret = g_10723940->v7((void *)pObj, id, b, c, &pParams->m_tail);
	if (ret)
		g_1053c5e0->v1(ret, (void *)pObj);
	return ret;
}
// END FUNCTION

// FUNCTION: 0x1002e970 size=0xa0
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct SurfaceProps { virtual void v0(); virtual void v1(); virtual void v2(); virtual int v3(const char *name); };
struct PhysEnv { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual void *v9(int a, int b, int c, void *d, void *e, int f); };
extern SurfaceProps *g_10723944;
extern PhysEnv *g_10723940;
extern char g_1070d9d0[];

void *sub_1002e970(int a, int b, int c, char *obj)
{
    g_109f3620[*g_109f3680].a = "PhysSphereCreate";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int mat = -1;
    if (obj[0x404])
        mat = g_10723944->v3(obj + 0x404);
    void *r = g_10723940->v9(b, mat, c, g_1070d9d0, obj + 0x610, 0);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1002ea40 size=0x2d0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "PhysFrame.h"
#include "IPhysicsEnvironment.h"
#include "IPhysicsObject.h"
#include "ConVar.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "Tier1.h"
#include "CBCCSlotViews.h"
#include "CBaseEntity.h"
#include "ehandle.h"
#include <malloc.h>

extern IPhysicsEnvironment *g_10723940;
extern ConVar g_106b85c0;
extern ConVar g_106b8608;
extern float g_106b85b8;
extern char g_106b8814;
extern int g_106b89c0;
extern void *g_106b89bc;
extern float g_104454c4;
extern CCollisionEvent g_106b86d8;

class CPhysObject4View
{
public:
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void s3();
	virtual char vfunc4();
};

class CPhysEntityView
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT10(20) VIEW_SLOT10(21)
	VIEW_SLOT(220) VIEW_SLOT(221) VIEW_SLOT(222) VIEW_SLOT(223) VIEW_SLOT(224) VIEW_SLOT(225)
	virtual void vfunc226(void *p);
	VIEW_SLOT(227) VIEW_SLOT(228)
	virtual void vfunc229(void *p);
};

void sub_1002ea40(float flFrameTime)
{
	ScopeTrace trace("PhysFrame", g_106b8540);
	int *pItem;
	if (g_10723940 == 0)
		return;

	if (flFrameTime > 1.0f || flFrameTime < g_104454c4)
	{
		flFrameTime = 0.0f;
		g_109f3628("Reset physics clock\n");
	}
	else if (flFrameTime > 0.1f)
	{
		flFrameTime = 0.1f;
	}

	float simRealTime = 0;

	flFrameTime *= g_106b85c0.GetFloat();
	if (flFrameTime > 0.1f)
		flFrameTime = 0.1f;

	bool bProfile = g_106b8608.GetBool();
	if (bProfile)
		simRealTime = engine->vfunc87();

	g_106b8814 = 1;
	g_10723940->vfunc26(flFrameTime);
	int activeCount = g_10723940->vfunc44();
	void **pActiveList = 0;
	if (activeCount)
	{
		pActiveList = (void **)_alloca(activeCount * 4);
		g_10723940->vfunc45(pActiveList);
		for (int i = 0; i < activeCount; i++)
		{
			IPhysicsObject *pObj = (IPhysicsObject *)pActiveList[i];
			CBaseEntity *pEnt = (CBaseEntity *)pObj->vfunc6();
			if (pEnt != 0)
				((CPhysEntityView *)pEnt)->vfunc226(pActiveList[i]);
		}
	}

	for (pItem = *(int **)((char *)g_106b89bc + 4); pItem != 0; pItem = (int *)pItem[1])
	{
		EHANDLE h;
		h.m_Index = pItem[0];
		CBaseEntity *pEnt = h.Get();
		if (pEnt == 0)
		{
			g_109f3628("Dangling pointer to physics entity!!!\n");
			continue;
		}
		IPhysicsObject *pPhys = *(IPhysicsObject **)((char *)pEnt + 0x36c);
		if (pPhys != 0 && !((CPhysObject4View *)pPhys)->vfunc4())
			((CPhysEntityView *)pEnt)->vfunc229(pPhys);
	}

	if (bProfile)
	{
		simRealTime = engine->vfunc87() - simRealTime;
		if (simRealTime < g_104454c4)
			simRealTime = g_104454c4;
		g_106b85b8 *= 0.8;
		g_106b85b8 += (simRealTime * 0.2);
		if (g_106b89c0 != 0 || activeCount != 0)
		{
			g_109f3628("Physics: %3d objects, %4.1fms / AVG: %4.1fms\n", activeCount, simRealTime * 1000.0f, g_106b85b8 * 1000.0f);
		}
		g_106b89c0 = activeCount;
	}
	g_106b8814 = 0;
	g_106b86d8.sub_10030910();
}
// END FUNCTION

// FUNCTION: 0x1002edd0 size=0x66
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];

struct PhysShadowSystem
{
	void sub_100d1290(void *pEnt);
};
extern PhysShadowSystem *g_106b89bc;

// TARGET: sub_1002edd0
void sub_1002edd0(void *pEnt)
{
	g_109f3620[*g_109f3680].a = "PhysAddShadow";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	g_106b89bc->sub_100d1290(pEnt);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1002ee60 size=0x66
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];

struct PhysShadowSystem
{
	void sub_100d13d0(void *pEnt);
};
extern PhysShadowSystem *g_106b89bc;

// TARGET: sub_1002ee60
void sub_1002ee60(void *pEnt)
{
	g_109f3620[*g_109f3680].a = "PhysRemoveShadow";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	g_106b89bc->sub_100d13d0(pEnt);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1002eef0 size=0x11c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

CCollisionEvent::CCollisionEvent()
{
	ScopeTrace trace("CCollisionEvent::CCollisionEvent", g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x1002f060 size=0x3
#include "CCollisionEventRecord12.h"

// TARGET: ??0CCollisionEventRecord12@@QAE@XZ
CCollisionEventRecord12::CCollisionEventRecord12() {}
// END FUNCTION

// FUNCTION: 0x1002f080 size=0x3
#include "IPhysicsCollisionEvent.h"

// TARGET: ?vfunc8@IPhysicsCollisionEvent@@UAEXPAX0@Z
void IPhysicsCollisionEvent::vfunc8(void *pObject1, void *pObject2) {}
// END FUNCTION

// FUNCTION: 0x1002f0a0 size=0x3
#include "IPhysicsCollisionEvent.h"

// TARGET: ?vfunc9@IPhysicsCollisionEvent@@UAEXPAX0@Z
void IPhysicsCollisionEvent::vfunc9(void *pObject1, void *pObject2) {}
// END FUNCTION

// FUNCTION: 0x1002f0c0 size=0x3
#include "IPhysicsCollisionSolver.h"

// TARGET: ?solverfunc4@IPhysicsCollisionSolver@@UAEXPAX0@Z
void IPhysicsCollisionSolver::solverfunc4(void *pObject1, void *pObject2) {}
// END FUNCTION

// FUNCTION: 0x1002f0e0 size=0x5
char __stdcall sub_1002f0e0(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1002f100 size=0x6a
#include "CBaseEntity.h"
#include "Vector.h"

__declspec(dllimport) void __cdecl DevMsg(const char *fmt, ...);

#define PO_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CEntityOriginPtrView
{
public:
	PO_SLOTS10(a00) PO_SLOTS10(a01) PO_SLOTS10(a02) PO_SLOTS10(a03) PO_SLOTS10(a04)
	PO_SLOTS10(a05) PO_SLOTS10(a06) PO_SLOTS10(a07) PO_SLOTS10(a08) PO_SLOTS10(a09)
	PO_SLOTS10(a10) PO_SLOTS10(a11) PO_SLOTS10(a12) PO_SLOTS10(a13) PO_SLOTS10(a14)
	PO_SLOTS10(a15) PO_SLOTS10(a16) PO_SLOTS10(a17) PO_SLOTS10(a18) PO_SLOTS10(a19)
	PO_SLOTS10(a20)
	virtual void a210(); virtual void a211(); virtual void a212(); virtual void a213(); virtual void a214();
	virtual void a215(); virtual void a216();
	virtual float *GetAbsOriginPtr();	// slot 217
};

void __stdcall sub_1002f100(int unused, CBaseEntity *pEnt)
{
	if (pEnt) {
		Vector pos = *(Vector *)((CEntityOriginPtrView *)pEnt)->GetAbsOriginPtr();
		const char *name = pEnt->m_name26c;
		DevMsg("phys %s %s at %.1f %.1f %.1f\n", name, pEnt->sub_1009f200(), pos.x, pos.y, pos.z);
	}
}
// END FUNCTION

// FUNCTION: 0x1002f190 size=0x3f
#include "vampire.h"

typedef void (*CUnknownDevMsgFn1002f190)(int level, const char *pszFormat, ...);
extern CUnknownDevMsgFn1002f190 g_109f3650;

// TARGET: sub_1002f190
int __stdcall sub_1002f190(int nCount)
{
    if (nCount < 0x4b0)
    {
        g_109f3650(1, "VPhysics Collision detection getting expensive, check for too many convex pieces!\n");
        return 0x4b0 - nCount;
    }
    g_109f3650(1, "VPhysics exceeded collision check limit (%d)!!!\nInterpenetration may result!\n", nCount);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1002f1e0 size=0x500
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "ehandle.h"

#define F1(n) virtual void n();
#define F5(p) F1(p##0) F1(p##1) F1(p##2) F1(p##3) F1(p##4)
#define F10(p) F5(p##a) F5(p##b)
#define F50(p) F10(p##0) F10(p##1) F10(p##2) F10(p##3) F10(p##4)
#define F100(p) F50(p##a) F50(p##b)

struct ColEnt
{
	F50(e) F10(f) F5(g) F1(h0) F1(h1) F1(h2)
	virtual bool s68(ColEnt *pOther);
	F10(i) F10(j) F1(k0) F1(k1) F1(k2)
	virtual int s92();
	F1(l0)
	virtual int s94();
	F1(m0) F1(m1)
	virtual ColEnt *s97();
	F100(n) F10(o) F1(p0) F1(p1) F1(p2)
	virtual unsigned int s211();
	F10(q) F1(r0) F1(r1)
	virtual bool s224(ColEnt *pOther);
	F10(t) F1(u0) F1(u1)
	virtual unsigned int s237();

	char m_pad0004[0x25c - 4];
	EHANDLE m_hMoveParent;
};

struct ColEntFields : ColEnt
{
	char m_pad0260[0x2e0 - 0x260];
	int m_pEdict;
	char m_pad02e4[0x368 - 0x2e4];
	int m_nCollisionGroup;
	void *m_pPhysics;
};

struct ColObj
{
	F5(a) F1(b0) F1(b1) F1(b2)
	virtual unsigned short s8();
	F1(c0)
	virtual unsigned int s10();
	F10(d) F10(e) F10(f) F10(g) F1(h0)
	virtual bool s52();
	F5(i) F1(j0) F1(j1) F1(j2) F1(j3)
	virtual bool s62();
	F1(k0) F1(k1)
	virtual unsigned int s65();
};

struct ColHash
{
	F1(a0) F1(a1) F1(a2)
	virtual bool IsPair(void *a, void *b);
};

struct ColGroups
{
	F50(a) F10(b) F10(c) F5(d) F1(e0) F1(e1)
	virtual bool Should(int a, int b);
};

struct WheelObj_t;
struct WheelEnt_t;
bool sub_1002f820(WheelObj_t *, WheelEnt_t *);
ColEnt *sub_1012c9c0(ColEnt *);
extern ColHash *g_10723948;
extern ColGroups *g_1070ba0c;

int CCollisionEventSolver::sub_1002f1e0(void *pObject0, void *pObject1, CBaseEntity *pEntity0, CBaseEntity *pEntity1)
{
	ScopeTrace trace("CCollisionEvent::ShouldCollide", g_106b8540);
	ColObj *pObj0 = (ColObj *)pObject0;
	ColObj *pObj1 = (ColObj *)pObject1;
	ColEntFields *e0 = (ColEntFields *)pEntity0;
	ColEntFields *e1 = (ColEntFields *)pEntity1;

	if (e0 && e1) {
		unsigned short gameFlags0 = pObj0->s8();
		unsigned short gameFlags1 = pObj1->s8();
		if (e0 == e1) {
			if ((gameFlags0 | gameFlags1) & 0x8000)
				goto fail;
			if (g_10723948->IsPair(pObj0, pObj1))
				return 0;
			return 1;
		}
		if ((gameFlags0 & gameFlags1 & 2)
			|| ((pObj0->s10() & 0x40) && !sub_1002f820((WheelObj_t *)pObj1, (WheelEnt_t *)e1))
			|| ((pObj1->s10() & 0x40) && !sub_1002f820((WheelObj_t *)pObj0, (WheelEnt_t *)e0)))
			goto fail;
		if (!e0->s224(e1) && !e1->s224(e0)) {
			if (e0->m_pEdict && e1->m_pEdict) {
				if (e0->s97() == e1 || e1->s97() == e0)
					goto fail;
			}
			if (e0->m_hMoveParent.Get() || e1->m_hMoveParent.Get()) {
				ColEntFields *p0 = (ColEntFields *)sub_1012c9c0(e0);
				ColEntFields *p1 = (ColEntFields *)sub_1012c9c0(e1);
				if (p0 == p1 || g_10723948->IsPair(p0, p1))
					goto fail;
				void *o0 = p0->m_pPhysics;
				void *o1 = p1->m_pPhysics;
				if (o0 && o1 && g_10723948->IsPair(o0, o1))
					goto fail;
			}
			int solid0 = e0->s92();
			int solid1 = e1->s92();
			unsigned int solidFlags0 = e0->s211();
			unsigned int solidFlags1 = e1->s211();
			int moveType0 = e0->s94();
			int moveType1 = e1->s94();
			bool bMove0 = moveType0 == 8 || e0->m_hMoveParent.Get();
			bool bMove1 = moveType1 == 8 || e1->m_hMoveParent.Get();
			if ((bMove0 && !pObj1->s52())
				|| (bMove1 && !pObj0->s52())
				|| (bMove0 && bMove1)
				|| !solid0 || !solid1)
				goto fail;
			if ((solidFlags1 | solidFlags0) & 4) {
				if (pObj0->s62() && !(solidFlags1 & 4))
					goto ok;
				if (!pObj1->s62())
					goto fail;
				if (!(solidFlags0 & 4))
					goto ok;
			} else {
				if ((solidFlags0 & 8) && solid1 != 6 && solid1 != 1 && moveType1 != 7)
					return 0;
				if ((solidFlags1 & 8) && solid0 != 6 && solid0 != 1 && moveType0 != 7)
					return 0;
				int g1 = e1->m_nCollisionGroup;
				int g0 = e0->m_nCollisionGroup;
				if (!g_1070ba0c->Should(g0, g1))
					return 0;
				if (!(pObj0->s65() & e1->s237()))
					goto fail;
				if (!(pObj1->s65() & e0->s237()))
					goto fail;
				if (g_10723948->IsPair(e0, e1))
					return 0;
				if (g_10723948->IsPair(pObj0, pObj1))
					return 0;
				if (e0->s68(e1))
					goto fail;
				if (!e1->s68(e0))
					goto ok;
			}
			goto fail;
		}
	}
ok:
	return 1;
fail:
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1002f820 size=0xa3
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct WheelObj_t
{
	virtual void v0();
	virtual bool IsFlagged();
};
struct WheelEnt_t
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
	virtual int GetKind();
	char m_pad0004[0x364];
	int m_n368;
};

bool sub_1002f820(WheelObj_t *pObj, WheelEnt_t *pEnt)
{
	g_109f3620[*g_109f3680].a = "WheelCollidesWith";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (pEnt->GetKind() == 8 || pEnt->GetKind() == 7 || pObj->IsFlagged()) {
		(*g_109f3680)--;
		return true;
	}
	if (pEnt->m_n368 == 2) {
		(*g_109f3680)--;
		return false;
	}
	(*g_109f3680)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1002f900 size=0x18c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "CCollisionEvent.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "utlvector.h"

struct penetrateevent_t
{
	EHANDLE hEntity0;
	EHANDLE hEntity1;
	float startTime;
	float timeStamp;
	int collisionState;
};

#define m_penetrateEventsV (*(CUtlVector<penetrateevent_t> *)&m_penetrateEvents)

CPenetrateEvent_t *CCollisionEvent::sub_1002f900(CBaseEntity *pEntity0, CBaseEntity *pEntity1)
{
	ScopeTrace trace("CCollisionEvent::FindOrAddPenetrateEvent", g_106b8540);
	int index = -1;
	for (int i = m_penetrateEventsV.Count() - 1; i >= 0; --i)
	{
		if (m_penetrateEventsV[i].hEntity0.Get() == pEntity0 && m_penetrateEventsV[i].hEntity1.Get() == pEntity1)
		{
			index = i;
			break;
		}
	}
	if (index < 0)
	{
		index = m_penetrateEventsV.AddToTail();
		penetrateevent_t &event = m_penetrateEventsV[index];
		event.hEntity0 = pEntity0;
		event.hEntity1 = pEntity1;
		event.startTime = gpGlobals->curtime;
		event.collisionState = 0;
	}
	penetrateevent_t &event = m_penetrateEventsV[index];
	event.timeStamp = gpGlobals->curtime;
	return (CPenetrateEvent_t *)&event;
}
// END FUNCTION

// FUNCTION: 0x1002fb00 size=0xf0
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionEvent.h"


class CDevConVar
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CDevConVarHolder
{
	int m_n00;
	CDevConVar *m_pVar;
};
extern CDevConVarHolder *g_1070af4c;
extern float g_10449258;

void sub_1002fc30(CBaseEntity *pEnt, float flTime);

int CCollisionEventSolver::sub_1002fb00(void *pObject0, void *pObject1, CBaseEntity *pEntity0, CBaseEntity *pEntity1, float flDeltaTime)
{
	ScopeTrace trace("CCollisionEvent::ShouldSolvePenetration", g_106b8540);
	CBaseEntity *pLow = pEntity0;
	CBaseEntity *pHigh = pEntity1;
	if (pEntity0 > pEntity1) {
		pLow = pEntity1;
		pHigh = pEntity0;
	}
	CPenetrateEvent_t *pEvent = Event()->sub_1002f900(pLow, pHigh);
	if (gpGlobals->curtime - pEvent->m_flLastTime > g_10449258) {
		pEvent->m_nReported = 1;
		CDevConVarHolder *pHolder = g_1070af4c;
		if (!pHolder->m_pVar->vfunc1() && pHolder->m_pVar->m_n2c) {
			sub_1002fc30(pLow, 10.0f);
			sub_1002fc30(pHigh, 10.0f);
		}
		pEvent->m_flLastTime = gpGlobals->curtime;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1002fc30 size=0xac
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_10539f8c[];
extern char g_10539f68[];
extern char g_106b8540[];
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
struct E94 {
    V16(p) V16(q) V16(r) V16(s) V16(t) V4(u0) V4(u1) V4(u2)
    virtual void m0(); virtual void m1();
    virtual int f();
};
struct SubObj { virtual void v0(); virtual bool v1(); char pad[0x2c - 4]; int m_n; };
struct Holder { int pad; SubObj *p; };
extern Holder *g_1070af4c;
void sub_1002fc30(CBaseEntity *pEnt, float time)
{
    g_109f3620[*g_109f3680].a = g_10539f8c;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (((E94 *)pEnt)->f() == 7) {
        Holder *h = g_1070af4c;
        if (!h->p->v1() && h->p->m_n > 1)
            *(unsigned int *)((char *)pEnt + 0x224) |= 0x20;
        pEnt->sub_1009f3c0(g_10539f68, (int)time);
    }
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1002fd10 size=0x281
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionEvent.h"
#include "CBaseEntity.h"
#include "IPhysicsObject.h"
#include "IPhysicsEnvironment.h"
#include "Vector.h"

struct IPhysicsFluidControllerView
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2();
	virtual void GetSurfacePlane(Vector *pNormal, float *pDist);
	virtual float GetDensity();
};

extern IPhysicsEnvironment *g_10723940;
void sub_10151150(void *pFluid, void *pObject, CBaseEntity *pEntity);

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

void CCollisionEvent::vfunc5(void *pObjectV, void *pFluidV)
{
	IPhysicsObject *pObject = (IPhysicsObject *)pObjectV;
	IPhysicsFluidControllerView *pFluid = (IPhysicsFluidControllerView *)pFluidV;
	ScopeTrace scope("CCollisionEvent::FluidStartTouch", g_106b8540);
	if ((pObject == 0) || (pFluid == 0))
		return;

	float dist;
	CBaseEntity *pEntity = (CBaseEntity *)pObject->vfunc6();
	if (pEntity)
	{
		pEntity->m_flags268 |= 0x80000;
		float timeSinceLastCollision = sub_100309a0((int)pEntity);
		if (timeSinceLastCollision < 0.5f)
			return;

		Vector normal;
		pFluid->GetSurfacePlane(&normal, &dist);

		Vector vel;
		Vector angVel;
		pObject->vfunc40(&vel.x, &angVel.x);

		Vector unitVel = vel;
		VectorNormalize(unitVel);

		float dragScale = pFluid->GetDensity() * g_10723940->vfunc28();
		normal = -normal;
		float drag = pObject->vfunc58(normal);
		float linearScale = (unitVel.x * normal.x + unitVel.y * normal.y + unitVel.z * normal.z) * drag * dragScale * 0.5;
		linearScale = clamp(linearScale, 0.0f, 1.0f);
		vel *= -linearScale;

		Vector rotAxis = angVel;
		VectorNormalize(rotAxis);
		float angScale = pObject->vfunc59(angVel) * dragScale * 0.25;
		angScale = clamp(angScale, 0.0f, 1.0f);
		angVel *= -angScale;

		sub_10151150(pFluid, pObject, pEntity);

		pObject->vfunc41(&vel, &angVel);
	}
}
// END FUNCTION

// FUNCTION: 0x10030050 size=0xb4
#include "CCollisionEvent.h"
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern float g_104454d0;
void sub_10151150(void *pFluid, void *pObject, CBaseEntity *pEntity);

struct IPhysObjectStub {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual CBaseEntity *vfunc6();
};

void CCollisionEvent::vfunc6(void *pObject, void *pFluid)
{
	g_109f3620[*g_109f3680].a = "CCollisionEvent::FluidEndTouch";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (pObject && pFluid) {
		CBaseEntity *pEntity = ((IPhysObjectStub *)pObject)->vfunc6();
		if (pEntity) {
			pEntity->m_flags268 &= 0xfff7ffff;
			if (!(sub_100309a0((int)pEntity) < g_104454d0))
				sub_10151150(pFluid, pObject, pEntity);
		}
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10030140 size=0x99
#include "CCollisionEvent.h"

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct PhysObj {
	V16(a) V16(b) V4(c) V4(d)
	virtual void v40(void *a, void *b);
};

struct PreEvent {
	PhysObj *pObjects[2];
	int m_rest[6];
};

void CCollisionEvent::vfunc0(void *pEventArg)
{
	PreEvent *pEvent = (PreEvent *)pEventArg;
	g_109f3620[*g_109f3680].a = "CCollisionEvent::PreCollision";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	*(PreEvent *)((char *)this + 0x68) = *pEvent;
	int i = 0;
	char *rec = (char *)this + 0x88;
	do {
		if (pEvent->pObjects[i])
			pEvent->pObjects[i]->v40(rec, rec + 0x30);
		i++;
		rec += 12;
	} while (i < 2);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10030210 size=0x257
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "gamevcollisionevent_t.h"
#include "CUnknown10074f70.h"

extern CUnknown10074f70_Global *g_107238f4;
void sub_10158550(IPhysicsObject *pObject, float flTime);

struct CColEntView
{
	char m_pad0000[0x94];
	int m_n94;
	char m_pad0098[0xa8 - 0x98];
	int m_nA8;

	bool HasPhysicsParent()
	{
		if (m_n94 || m_nA8)
			return true;
		return false;
	}
};

void CCollisionEvent::vfunc1(void *pEventArg)
{
	gamevcollisionevent_t *pEvent = (gamevcollisionevent_t *)pEventArg;
	ScopeTrace trace("CCollisionEvent::PostCollision", g_106b8540, g_106b8540);
	char bHasFlags[2] = { 0, 0 };
	char bFlag10[2] = { 0, 0 };
	for (int i = 0; i < 2; i++) {
		IPhysicsObject *pObject = pEvent->pObjects[i];
		if (pObject) {
			m_pEntities[i] = (CBaseEntity *)pObject->vfunc6();
			if (m_pEntities[i]) {
				bHasFlags[i] = ((CColEntView *)m_pEntities[i])->HasPhysicsParent();
				int flags = (unsigned short)pObject->vfunc10();
				pObject->vfunc40((float *)m_postVelocity[i], 0);
				if (flags & 0x10)
					bFlag10[i] = 1;
				if (pEvent->deltaCollisionTime < 1.0) {
					if (!g_107238f4->vfunc1() && g_107238f4->m_n2c)
						sub_10158550(pObject, pEvent->deltaCollisionTime);
				}
			}
		}
	}
	if (m_pEntities[0] && m_pEntities[1] && !((CEntityVSlots *)m_pEntities[0])->slot68((CEntityVSlots *)m_pEntities[1]) && !((CEntityVSlots *)m_pEntities[1])->slot68((CEntityVSlots *)m_pEntities[0])) {
		m_flSpeed80 = pEvent->collisionSpeed;
		m_pInternalData84 = (int)pEvent->pInternalData;
		if (m_pEntities[0] == m_pEntities[1]) {
			if (pEvent->isCollision && m_pEntities[0]) {
				m_pEntities[1] = 0;
				((CEntityVSlots *)m_pEntities[0])->slot230(0, m_event68);
				return;
			}
		} else if (!bHasFlags[0] || !bHasFlags[1]) {
			for (int i = 0; i < 2; i++) {
				if (pEvent->isCollision)
					((CEntityVSlots *)m_pEntities[i])->slot230(i, m_event68);
				if (pEvent->isShadowCollision && bFlag10[i])
					((CEntityVSlots *)m_pEntities[i])->slot228(i, m_event68);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10030510 size=0x19a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "Vector.h"
#include "ScopeTrace.h"

#define FR_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CFrContactData {
	virtual void v0();
	virtual void GetContactPoint(Vector &out);
};

struct CFrEntity {
	FR_SLOTS10(a0) FR_SLOTS10(a1) FR_SLOTS10(a2) FR_SLOTS10(a3) FR_SLOTS10(a4) FR_SLOTS10(a5) FR_SLOTS10(a6) FR_SLOTS10(a7) FR_SLOTS10(a8) FR_SLOTS10(a9)
	FR_SLOTS10(b0) FR_SLOTS10(b1) FR_SLOTS10(b2) FR_SLOTS10(b3) FR_SLOTS10(b4) FR_SLOTS10(b5) FR_SLOTS10(b6) FR_SLOTS10(b7) FR_SLOTS10(b8) FR_SLOTS10(b9)
	FR_SLOTS10(c0) FR_SLOTS10(c1) FR_SLOTS10(c2)
	virtual void slot230(); 
	virtual void slot231(void *pObject, float energy, int surfaceProps, int surfacePropsHit);
};

struct CFrObject {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5();
	virtual CFrEntity *GetGameData();
	FR_SLOTS10(b0) FR_SLOTS10(b1) FR_SLOTS10(b2)
	virtual void b37(); virtual void b38(); virtual void b39(); virtual void b40(); virtual void b41();
	virtual void GetVelocityAtPoint(const Vector &point, Vector *pVelocity);
};

struct CFrSurface {
	char m_pad0000[0x70];
	unsigned short m_nGameMaterial;
};

struct CFrSurfaceProps {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual CFrSurface *GetSurfaceData(int index);
};

struct CFrEffects {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual void slot4(const Vector &pos, const Vector &vel, float flScale, float flRadius);
	virtual void a5();
	virtual void slot6(const Vector &pos, const Vector &vel);
};

extern CFrSurfaceProps *g_10723944;
extern CFrEffects *g_10566258;

void CCollisionEvent::vfunc2(void *pObjectIn, float energy, int surfaceProps, int surfacePropsHit, void *pDataIn)
{
	ScopeTrace trace("CCollisionEvent::Friction", g_106b8540);
	CFrObject *pObject = (CFrObject *)pObjectIn;
	CFrContactData *pData = (CFrContactData *)pDataIn;
	CFrSurface *pSurf = g_10723944->GetSurfaceData(surfaceProps);
	CFrSurface *pHit = g_10723944->GetSurfaceData(surfacePropsHit);
	Vector vecPos;
	Vector vecVel;
	pData->GetContactPoint(vecPos);
	pObject->GetVelocityAtPoint(vecPos, &vecVel);
	vecVel = -vecVel;
	VectorNormalize(vecVel);
	switch (pHit->m_nGameMaterial) {
	case 'C':
		if (!(energy < 7840.0f))
			g_10566258->slot4(vecPos, vecVel, 1.0f, 16.0f);
		break;
	case 'D':
		if (!(energy < 2250.0f))
			g_10566258->slot4(vecPos, vecVel, 1.0f, 16.0f);
		break;
	}
	if (energy > 12250.0f && (pSurf->m_nGameMaterial == 'M' || pSurf->m_nGameMaterial == 'G')) {
		switch (pHit->m_nGameMaterial) {
		case 'C':
		case 'M':
			g_10566258->slot6(vecPos, vecVel);
			break;
		}
	}
	CFrEntity *pEntity = pObject->GetGameData();
	if (pEntity)
		pEntity->slot231(pObject, energy, surfaceProps, surfacePropsHit);
}
// END FUNCTION

// FUNCTION: 0x10030720 size=0x9b
#include "CCollisionEvent.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

CFrictionEntry_t *CCollisionEvent::sub_10030720(int key)
{
	g_109f3620[*g_109f3680].fn = "CCollisionEvent::FindFriction";
	g_109f3620[*g_109f3680].name = "";
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	CFrictionEntry_t *pFree = 0;
	for (unsigned int i = 0; i < 8; i++) {
		if (!m_friction[i].m_key && !pFree)
			pFree = &m_friction[i];
		if (m_friction[i].m_key == key) {
			(*g_109f3680)--;
			return &m_friction[i];
		}
	}
	(*g_109f3680)--;
	return pFree;
}
// END FUNCTION

// FUNCTION: 0x100307f0 size=0x77
#include "CCollisionEvent.h"
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
struct IPhysicsFrictionLike {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void DestroySnapshot(int pSnapshot);
};
IPhysicsFrictionLike *sub_101bdb50();
void CCollisionEvent::sub_100307f0(CFrictionEntry_t *pEntry)
{
    g_109f3620[*g_109f3680].a = "CCollisionEvent::ShutdownFriction";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_101bdb50()->DestroySnapshot(pEntry->m_value);
    pEntry->m_value = 0;
    pEntry->m_key = 0;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10030890 size=0x5a
#include "CCollisionEvent.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

void sub_10030e40();

// TARGET: CCollisionEvent::vfunc7
void CCollisionEvent::vfunc7()
{
	g_109f3620[*g_109f3680].name = "CCollisionEvent::PostSimulationFrame";
	g_109f3620[*g_109f3680].file = g_106b8540;
	g_109f3620[*g_109f3680].line = g_106b8540;
	(*g_109f3680)++;
	sub_10030e40();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10030910 size=0x6c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

extern char g_1053a0d8[];

void CCollisionEvent::sub_10030910()
{
	ScopeTrace trace(g_1053a0d8, g_106b8540);
	sub_10030ae0();
	sub_10030d50();
	sub_10030e40();
}
// END FUNCTION

// FUNCTION: 0x100309a0 size=0xf3
#include "UtlVec8.h"
#include "CCollisionEvent.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
extern float g_10449140;
struct CMem8b_t { void *p; int alloc; int grow; void sub_10033160(int num); };
struct CEImpl { char pad[0x128]; UtlVec8 v; };

float CCollisionEvent::sub_100309a0(int key)
{
    ScopeTrace trace("CCollisionEvent::DeltaTimeSinceLastFluid", g_106b8540, g_106b8540);
    CEImpl *p = (CEImpl *)this;
    for (int i = p->v.m_Size - 1; i >= 0; --i) {
        if (((UtlVec8Elem *)p->v.m_pMemory)[i].a == key)
            return gpGlobals->curtime - ((float *)p->v.m_pMemory)[i * 2 + 1];
    }
    UtlVec8 *v = &p->v;
    int n = v->m_Size;
    if (n + 1 > v->m_allocationCount)
        ((CMem8b_t *)v)->sub_10033160(n - v->m_allocationCount + 1);
    v->m_Size++;
    v->m_pElements = (UtlVec8Elem *)v->m_pMemory;
    v->sub_10032f00(n, 1);
    ((UtlVec8Elem *)v->m_pMemory)[n].a = key;
    ((float *)v->m_pMemory)[n * 2 + 1] = gpGlobals->curtime;
    return g_10449140;
}
// END FUNCTION

// FUNCTION: 0x10030ae0 size=0x90
#include "CCollisionEvent.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};


extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CCollisionEvent::sub_10030ae0()
{
	g_109f3620[*g_109f3680].m_pszFunc = "CCollisionEvent::UpdateFrictionSounds";
	g_109f3620[*g_109f3680].m_pszName = "";
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	for (int i = 0; i < 8; i++)
	{
		if (m_friction[i].m_value && *(float *)&m_friction[i].m_extra < gpGlobals->curtime - 0.1f)
			sub_10012544(&m_friction[i]);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10030ba0 size=0xc8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "Vector.h"

extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)

struct SStartTouchTrace
{
	Vector startpos;
	Vector endpos;
	Vector normal;
	float dist;
	float rest[11];
};

struct CUnknown1003e4e0
{
	void sub_1003e4e0(CBaseEntity *pOther, SStartTouchTrace &trace);
};

inline void DispatchStartTouch(void *a, void *b, const Vector &point, const Vector &normal)
{
	SStartTouchTrace trace;
	memset(&trace, 0, sizeof(trace));
	trace.endpos = point;
	trace.dist = DotProduct(point, normal);
	trace.normal = normal;
	((CUnknown1003e4e0 *)a)->sub_1003e4e0((CBaseEntity *)b, trace);
}

// TARGET: CCollisionEvent::sub_10030ba0
void CCollisionEvent::sub_10030ba0(void *a, void *b, void *pData1, void *pData2)
{
	ScopeTrace scope("CCollisionEvent::DispatchStartTouch", g_106b8540);
	DispatchStartTouch(a, b, *(const Vector *)pData1, *(const Vector *)pData2);
}
// END FUNCTION

// FUNCTION: 0x10030cb0 size=0x75
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void __cdecl sub_1003d640(void *pA, void *pB);
void __stdcall sub_10030cb0(void *pA, void *pB)
{
    g_109f3620[*g_109f3680].a = "CCollisionEvent::DispatchEndTouch";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_1003d640(pA, pB);
    sub_1003d640(pB, pA);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10030d50 size=0xb9
#include "CCollisionEvent.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CCollisionEvent::sub_10030d50()
{
	int i = 0;
	g_109f3620[*g_109f3680].a = "CCollisionEvent::UpdateTouchEvents";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (m_nTouchEvents > 0) {
		int offset = 0;
		do {
			int *pRec = (int *)(m_pTouchEvents + offset);
			if (pRec[2] == 0)
				sub_10030ba0((void *)pRec[0], (void *)pRec[1], pRec + 3, pRec + 6);
			else
				sub_10030cb0((void *)pRec[0], (void *)pRec[1]);
			i++;
			offset += 0x24;
		} while (i < m_nTouchEvents);
	}
	m_nTouchEvents = 0;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10030e40 size=0xbc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBaseEntity.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

// TARGET: CCollisionEvent::sub_10030e40
void CCollisionEvent::sub_10030e40()
{
	ScopeTrace trace("CCollisionEvent::UpdateDamageEvents", g_106b8540, g_106b8540);
	for (int i = 0; i < m_damageVec.Count(); i++)
	{
		CDamageEvent_t &event = m_pDamageEvents[i];
		CDamageInfoBlob info = event.m_info;
		event.m_pEntity->sub_100a1250(&info);
	}
	m_damageVec.RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x10030f30 size=0xfc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CUtlVector36.h"
#include "CCollisionEvent.h"

struct CTouchEventRec {	// 0x24 bytes
	void *m_pObject0;
	void *m_pObject1;
	int m_nType;
	int m_data0[3];
	int m_data1[3];

	void sub_100119ff();	// constructor (stub 0x100119ff)
};

void CCollisionEvent::sub_10030f30(void *a, void *b, int c, void *pData1, void *pData2)
{
	ScopeTrace trace("CCollisionEvent::AddTouchEvent", g_106b8540);
	if (a && b) {
		CUtlVector36 *pVec = (CUtlVector36 *)&m_pTouchEvents;
		int elem = pVec->m_size;
		if (elem + 1 > pVec->m_allocationCount)
			pVec->sub_10033040(elem - pVec->m_allocationCount + 1);
		pVec->m_size++;
		pVec->m_pElements = pVec->m_pMemory;
		pVec->sub_10032b20(elem, 1);
		CTouchEventRec *pRec = (CTouchEventRec *)(pVec->m_pMemory + elem * sizeof(CTouchEventRec));
		if (pRec)
			pRec->sub_100119ff();
		pRec = (CTouchEventRec *)(pVec->m_pMemory + elem * sizeof(CTouchEventRec));
		pRec->m_nType = c;
		pRec->m_pObject0 = a;
		pRec->m_pObject1 = b;
		const int *pSrc0 = (const int *)pData1;
		pRec->m_data0[0] = pSrc0[0];
		pRec->m_data0[1] = pSrc0[1];
		pRec->m_data0[2] = pSrc0[2];
		const int *pSrc1 = (const int *)pData2;
		pRec->m_data1[0] = pSrc1[0];
		pRec->m_data1[1] = pSrc1[1];
		pRec->m_data1[2] = pSrc1[2];
	}
}
// END FUNCTION

// FUNCTION: 0x10031070 size=0x189
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "CUtlVector88.h"
#include "ScopeTrace.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CPhysObjX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4)
	PV(50) PV(51)
	virtual bool vfunc52();
};

struct CCollisionEventUnit : CCollisionEvent
{
	int sub_10031340(CPhysObjX *pObject, float *pPos, float *pVel, char bRecurse);
};

struct Mem;
void __fastcall sub_100330d0(Mem *pMem, int num, int num2);
void *__fastcall sub_101c2690(void *pInfo);

struct CDmgVecX : CUtlVector88
{
	char *m_pElements;
};
struct CDmgSrcX
{
	int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17;
	char b0, b1, b2;

	void Copy(const CDmgSrcX *s)
	{
		d0 = s->d0;
		d1 = s->d1;
		d2 = s->d2;
		d3 = s->d3;
		d4 = s->d4;
		d5 = s->d5;
		d6 = s->d6;
		d7 = s->d7;
		d8 = s->d8;
		d9 = s->d9;
		d10 = s->d10;
		d11 = s->d11;
		d12 = s->d12;
		d13 = s->d13;
		d14 = s->d14;
		d15 = s->d15;
		d16 = s->d16;
		d17 = s->d17;
		b0 = s->b0;
		b1 = s->b1;
		b2 = s->b2;
	}
};
struct CDmgEventX
{
	int m_pEntity;
	int m_unused;
	CDmgSrcX m_info;
	char m_bFlag;
};

// TARGET: CCollisionEvent::sub_10031070
void CCollisionEvent::sub_10031070(int a, void *pData, int pObject, char bFlag, void *pExtra1, void *pExtra2)
{
	ScopeTrace trace("CCollisionEvent::AddDamageEvent", g_106b8540);
	int elem = m_nDamageEvents;
	CDmgVecX *pVec = (CDmgVecX *)&m_pDamageEvents;
	if (elem + 1 > pVec->m_allocationCount)
		sub_100330d0((Mem *)pVec, elem - pVec->m_allocationCount + 1, elem - pVec->m_allocationCount + 1);
	pVec->m_size++;
	pVec->m_pElements = pVec->m_pMemory;
	pVec->sub_10032bb0(elem, 1);
	CDmgEventX *pNew = (CDmgEventX *)(pVec->m_pMemory + elem * 88);
	if (pNew)
		sub_101c2690(&pNew->m_info);
	CDmgEventX *pEvent = (CDmgEventX *)(pVec->m_pMemory + elem * 88);
	pEvent->m_pEntity = a;
	pEvent->m_info.Copy((const CDmgSrcX *)pData);
	pEvent->m_unused = pObject;
	pEvent->m_bFlag = bFlag;
	if (!pObject || !((CPhysObjX *)pObject)->vfunc52())
		pEvent->m_bFlag = 0;
	if (pEvent->m_bFlag) {
		if (sub_10031270(pObject) < 0)
			((CCollisionEventUnit *)this)->sub_10031340((CPhysObjX *)pObject, (float *)pExtra1, (float *)pExtra2, 1);
	}
}
// END FUNCTION

// FUNCTION: 0x10031270 size=0x92
#include "CCollisionEvent.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CCollisionEvent::sub_10031270(int inflictor)
{
	g_109f3620[*g_109f3680].a = "CCollisionEvent::FindDamageInflictor";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int i = *(int *)((char *)this + 0x10c) - 1;
	if (i >= 0) {
		int *p = (int *)(i * 0x20 + *(int *)((char *)this + 0x100));
		do {
			if (*p == inflictor) {
				(*g_109f3680)--;
				return i;
			}
			i--;
			p -= 8;
		} while (i >= 0);
	}
	(*g_109f3680)--;
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10031340 size=0x175
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "CUtlVector32.h"
#include "UtlVec32.h"
#include "ScopeTrace.h"
#define PV_V(n) virtual void v##n();
#define PV_V10(p) PV_V(p##0) PV_V(p##1) PV_V(p##2) PV_V(p##3) PV_V(p##4) PV_V(p##5) PV_V(p##6) PV_V(p##7) PV_V(p##8) PV_V(p##9)
struct CPhysEntX {
    PV_V10(0) PV_V10(1) PV_V10(2) PV_V10(3) PV_V10(4) PV_V10(5) PV_V10(6) PV_V10(7) PV_V10(8) PV_V10(9)
    PV_V10(10) PV_V10(11) PV_V10(12) PV_V10(13) PV_V10(14) PV_V10(15) PV_V10(16) PV_V10(17) PV_V10(18) PV_V10(19)
    PV_V10(20) PV_V10(21) PV_V10(22)
    PV_V(230) PV_V(231) PV_V(232)
    virtual int vfunc233(struct CPhysObjX **pList, int maxObjects);
};
struct CPhysObjX {
    PV_V(0) PV_V(1) PV_V(2) PV_V(3) PV_V(4) PV_V(5)
    virtual CPhysEntX *vfunc6();
    PV_V10(7) PV_V(17) PV_V(18) PV_V(19)
    PV_V10(2) PV_V10(3)
    virtual void vfunc40(float *pos, float *ang);
};
struct CInflictorRecX {
    CPhysObjX *m_pObj;	// 0x00
    float m_pos[3];	// 0x04
    float m_ang[3];	// 0x10
    short m_nLink;	// 0x1c
    short m_nZero;	// 0x1e
};
struct CCollisionEventUnit : CCollisionEvent {
    int sub_10031340(CPhysObjX *pObj, float *pos, float *ang, char bRecurse);
    int sub_10001e0b(CPhysObjX *pObj, float *pos, float *ang, char bRecurse);	// stub of sub_10031340
};

// TARGET: CCollisionEventUnit::sub_10031340
int CCollisionEventUnit::sub_10031340(CPhysObjX *pObj, float *pos, float *ang, char bRecurse)
{
    ScopeTrace trace("CCollisionEvent::AddDamageInflictor", g_106b8540);
    UtlVec32 *v = (UtlVec32 *)((char *)this + 0x100);
    int idx = v->m_Size;
    ((CUtlVector32 *)v)->sub_10032c60(1);
    v->sub_10032d20(idx, 1);
    CInflictorRecX *e = (CInflictorRecX *)(v->m_pMemory + idx * 32);
    e->m_pObj = pObj;
    e->m_pos[0] = pos[0]; e->m_pos[1] = pos[1]; e->m_pos[2] = pos[2];
    e->m_ang[0] = ang[0]; e->m_ang[1] = ang[1]; e->m_ang[2] = ang[2];
    e->m_nZero = 0;
    e->m_nLink = -1;
    if (bRecurse) {
        CPhysEntX *pEnt = pObj->vfunc6();
        if (pEnt) {
            CPhysObjX *objs[0x40];
            int n = pEnt->vfunc233(objs, 0x40);
            if (n > 1) {
                int prev = idx;
                for (int j = 0; j < n; j++) {
                    if (objs[j] != pObj) {
                        float p[3], a[3];
                        objs[j]->vfunc40(p, a);
                        int r = sub_10001e0b(objs[j], p, a, 0);
                        ((CInflictorRecX *)(v->m_pMemory + prev * 32))->m_nLink = (short)r;
                        prev = r;
                    }
                }
            }
        }
    }
    return idx;
}
// END FUNCTION

// FUNCTION: 0x10031520 size=0x76
#include "CCollisionEvent.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CCollisionEvent::sub_10031520()
{
	g_109f3620[*g_109f3680].m_pszFunc = "CCollisionEvent::LevelShutdown";
	g_109f3620[*g_109f3680].m_pszName = "";
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	for (int i = 0; i < 8; i++) {
		if (m_friction[i].m_value)
			sub_10012544(&m_friction[i]);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100315c0 size=0xe5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

struct CVec3 { float x, y, z; };

struct IPhysObjUnit
{
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void *GetGameData();
};

struct IPhysCollisionDataUnit
{
    virtual void GetSurfaceNormal(CVec3 &v);
    virtual void GetContactPoint(CVec3 &v);
};

void CCollisionEvent::vfunc3(void *pObject1, void *pObject2, void *pData)
{
    ScopeTrace trace("CCollisionEvent::StartTouch", g_106b8540);
    void *pEntity1 = ((IPhysObjUnit *)pObject1)->GetGameData();
    void *pEntity2 = ((IPhysObjUnit *)pObject2)->GetGameData();
    if (pEntity1 && pEntity2) {
        CVec3 vecA, vecB;
        ((IPhysCollisionDataUnit *)pData)->GetContactPoint(vecB);
        ((IPhysCollisionDataUnit *)pData)->GetSurfaceNormal(vecA);
        if (!*((char *)this + 0x13c)) {
            sub_10030ba0(pEntity1, pEntity2, &vecB, &vecA);
            return;
        }
        sub_10030f30(pEntity1, pEntity2, 0, &vecB, &vecA);
    }
}
// END FUNCTION

// FUNCTION: 0x100316f0 size=0xd9
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionEvent.h"
#include "ScopeTrace.h"

class CBaseEntity;

struct CPhysObjSlots
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
	virtual CBaseEntity *GetGameData();
};

struct CPhysDataSlots
{
	virtual void GetContactPoint(float *pOut);
	virtual void GetSurfaceNormal(float *pOut);
};

extern char g_1070d1b0[];

void CCollisionEvent::vfunc4(void *pObject1, void *pObject2, void *pData)
{
	ScopeTrace t("CCollisionEvent::EndTouch", g_106b8540);
	CBaseEntity *pEnt1 = ((CPhysObjSlots *)pObject1)->GetGameData();
	CBaseEntity *pEnt2 = ((CPhysObjSlots *)pObject2)->GetGameData();
	if (pEnt1 && pEnt2) {
		float normal[3];
		float point[3];
		((CPhysDataSlots *)pData)->GetSurfaceNormal(normal);
		((CPhysDataSlots *)pData)->GetContactPoint(point);
		if (*((char *)this + 0x13c) == 0) {
			sub_10030cb0(pEnt1, pEnt2);
			return;
		}
		sub_10030f30(pEnt1, pEnt2, 1, g_1070d1b0, g_1070d1b0);
	}
}
// END FUNCTION

// FUNCTION: 0x10031810 size=0x81
#include "CCollisionEvent.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct EntX {
    V100(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3();
    virtual void v174(EntX *other);
};
struct PhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual EntX *v6();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053a320[];
extern char g_106b8540[];
void CCollisionEvent::vfunc8(void *pObject1, void *pObject2)
{
    g_109f3620[*g_109f3680].a = g_1053a320;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    EntX *e1 = ((PhysObj *)pObject1)->v6();
    EntX *e2 = ((PhysObj *)pObject2)->v6();
    if (e1 && e2)
        e1->v174(e2);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100318d0 size=0x81
#include "CCollisionEvent.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct EntX {
    V100(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3(); virtual void j4(); virtual void j5();
    virtual void v176(EntX *other);
};
struct PhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual EntX *v6();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053a34c[];
extern char g_106b8540[];
void CCollisionEvent::vfunc9(void *pObject1, void *pObject2)
{
    g_109f3620[*g_109f3680].a = g_1053a34c;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    EntX *e1 = ((PhysObj *)pObject1)->v6();
    EntX *e2 = ((PhysObj *)pObject2)->v6();
    if (e1 && e2)
        e1->v176(e2);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10031990 size=0x9c
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CPhysicsHook.h"

struct S10032fb0;
extern CPhysicsHook g_106b88ec;	// g_PhysicsHook (physics.cpp): sub_1002d070 works on its member at +4
void sub_1002d070(S10032fb0 *, int, int, int, int, unsigned int, unsigned short, float);

void sub_10031990(CBaseEntity *ent, int a2, int a3, unsigned int a4, unsigned short a5, float a6)
{
    ScopeTrace scope("PhysicsImpactSound", g_106b8540);
    int edict = ent->m_pEdict2e0;
    sub_1002d070((S10032fb0 *)g_106b88ec.m_04, (int)ent, engine->vfunc35(edict), a3, a2, a4, a5, a6);
}
// END FUNCTION

// FUNCTION: 0x10031a60 size=0xa
#include "ConVar.h"
ConVar g_106b8818("physics_impact_sound_max", "1.0", 0, "For physics impact sounds, max volume.");
// END FUNCTION

// FUNCTION: 0x10031af0 size=0xa
#include "ConVar.h"
ConVar g_106b8860("physics_impact_sound_min", "0.1", 0, "For physics impact sounds, min volume, anything less than this is not played.");
// END FUNCTION

// FUNCTION: 0x10031b80 size=0x5
#define PCD_INITIALIZERS
#include "SoundTracker_t.h"
SoundTracker_t g_106b8698[8];
// END FUNCTION

// FUNCTION: 0x10031bd0 size=0x72
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
struct Slot { unsigned int handle; float time; };
extern EntInfo *g_10566458;
extern Slot g_106b8698[8];
static inline void *Resolve(unsigned int h)
{
    if (h != 0xffffffff) {
        Sub *e = &g_10566458[h & 0x1fff].s;
        if (e->serial == (h >> 13))
            return e->pEnt;
    }
    return 0;
}
bool sub_10031bd0(void *ent)
{
    for (Slot *s = g_106b8698; (int)s < (int)(g_106b8698 + 8); s++) {
        if (Resolve(s->handle) == ent) {
            if (!(gpGlobals->curtime >= s->time))
                return true;
            s->handle = 0xffffffff;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10031c70 size=0xa8
#include "CBaseEntity.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	int m_serial;
	int m_unused;
};
extern char *g_10566458;

extern void (__cdecl *g_109f3630)(const char *, ...);
extern float g_104454c0;

struct SoundTracker_t {
	unsigned int m_hEntity;
	float m_flExpire;

	void Set(CBaseEntity *pEnt)
	{
		if (pEnt)
			m_hEntity = *pEnt->vfunc1();
		else
			m_hEntity = 0xffffffff;
	}
};
extern SoundTracker_t g_106b8698[8];

bool sub_10031c70(CBaseEntity *pEnt)
{
	int i = 0;
	do {
		unsigned int h = g_106b8698[i].m_hEntity;
		if (h == 0xffffffff)
			break;
		EntInfo *e = &((EntInfo *)(g_10566458 + 4))[h & 0x1fff];
		if (e->m_serial != (int)(h >> 13) || !e->m_pEntity)
			break;
		if (gpGlobals->curtime >= g_106b8698[i].m_flExpire)
			break;
		i++;
		if (i >= 8) {
			g_109f3630("WARNING: Ran out of sound trackers.  This is okay if it doesn't happen much.\n");
			return false;
		}
	} while (true);
	g_106b8698[i].Set(pEnt);
	float t = gpGlobals->curtime;
	t += g_104454c0;
	g_106b8698[i].m_flExpire = t;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10031d50 size=0x1f6
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "ConVar.h"
#include "CUnknown101d7520.h"
#include "CSoundEnt.h"

void *__fastcall sub_100a8240(void *);
void *__fastcall sub_100a82c0(void *);
char __cdecl sub_10031bd0(int);
void __cdecl sub_10031c70(int);
void __cdecl sub_10031990(CBaseEntity *, int, int, int, int, float);

struct CPhysSoundParams
{
	int m_iVolume;	// 0x00
	char m_pad04[0x2e - 4];
	char m_bFlag;	// 0x2e
};
extern CPhysSoundParams g_1072bc98;
extern float g_104454c4;

extern ConVar g_106b8860;	// physics_impact_sound_min
extern ConVar g_106b8818;	// physics_impact_sound_max

#define VT10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define VT100(p) VT10(p##0) VT10(p##1) VT10(p##2) VT10(p##3) VT10(p##4) VT10(p##5) VT10(p##6) VT10(p##7) VT10(p##8) VT10(p##9)

struct CPhysTarget
{
	VT100(a) VT100(b) VT10(c) VT10(d)
	virtual float *vfunc220();
};

void sub_10031d50(CBaseEntity *pEntity, int a2, int a3, int a4, int a5, float a6, float a7)
{
	ScopeTrace trace("PhysCollisionSound", g_106b8540);

	if (!(a6 < 0.025f)) {
		if (!(a7 < 3.2f)) {
			if (pEntity) {
				void *p1 = sub_100a8240(pEntity);
				int obj1;
				if (!p1) {
					obj1 = 0;
				} else {
					obj1 = *(int *)((char *)p1 + 0x9c);
					if (obj1 && !sub_10031bd0(obj1)) {
						int vol = g_1072bc98.m_iVolume;
						char flag = g_1072bc98.m_bFlag;
						CSoundEnt::sub_101bac90(2, (const Vector *)((CPhysTarget *)pEntity)->vfunc220(), vol, 0.2f, flag, (CBaseEntity *)obj1);
						sub_10031c70(obj1);
					}
				}
				void *p2 = sub_100a82c0(pEntity);
				if (p2) {
					int obj2 = *(int *)((char *)p2 + 0x9c);
					if (obj2 && obj1 != obj2 && !sub_10031bd0(obj2)) {
						int vol = g_1072bc98.m_iVolume;
						char flag = g_1072bc98.m_bFlag;
						CSoundEnt::sub_101bac90(2, (const Vector *)((CPhysTarget *)pEntity)->vfunc220(), vol, 0.2f, flag, (CBaseEntity *)obj2);
						sub_10031c70(obj2);
					}
				}
			}

			a7 = a7 * a7 * 9.765625e-6f;
			float f = g_106b8860.GetFloat();
			if (!(a7 < f)) {
				float f2 = g_106b8818.GetFloat();
				if (a7 > f2) {
					a7 = g_106b8818.GetFloat();
				}
				sub_10031990(pEntity, a2, a3, a4, a5, a7);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10031fd0 size=0xa
#include "ConVar.h"
ConVar g_106b8908("collision_shake_amp", "0.2", 0);
// END FUNCTION

// FUNCTION: 0x10032060 size=0xa
#include "ConVar.h"
ConVar g_106b88a8("collision_shake_freq", "0.5", 0);
// END FUNCTION

// FUNCTION: 0x100320f0 size=0xa
#include "ConVar.h"
ConVar g_106b8978("collision_shake_time", "0.5", 0);
// END FUNCTION

// FUNCTION: 0x10032180 size=0x18a
#include "ConVar.h"
#include "Vector.h"

#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)

struct PhysObj_t {
	V(0)
	virtual char IsAsleep();
	V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
	V(10) V(11)
	virtual float GetMass();
	V(13) V(14) V(15) V(16) V(17) V(18) V(19)
	V10(2) V10(3) V10(4) V10(5) V10(6)
	virtual float GetEnergy();
};

struct PhysPoint_t {
	V(0)
	virtual void GetPosition(Vector *pOut);
};

struct ImpactEvent_t {
	PhysObj_t *pObjects[2];
	char pad08[0x10];
	float flSpeed;
	PhysPoint_t *pPoint;
};

extern ConVar g_106b8908;	// collision_shake_amp
extern ConVar g_106b8978;	// collision_shake_time
extern ConVar g_106b88a8;	// collision_shake_freq
extern float g_104454c4;
extern float g_1044913c;
void sub_1000c1b7(Vector *pCenter, float flAmplitude, float flFrequency, float flDuration, float flRadius, int command, int airShake);

void sub_10032180(ImpactEvent_t *pEvent, int index)
{
	int other = (index == 0);
	float flMass = pEvent->pObjects[index]->GetMass();
	if (pEvent->pObjects[index]->GetEnergy() != g_104454c4)
		flMass = pEvent->pObjects[index]->GetEnergy();
	if (flMass >= g_1044913c && pEvent->pObjects[other]->IsAsleep()) {
		if (flMass > 2000.0f)
			flMass = 2000.0f;
		else if (flMass < g_1044913c)
			flMass = g_1044913c;
		if (pEvent->flSpeed > 30.0f) {
			Vector vecPos;
			pEvent->pPoint->GetPosition(&vecPos);
			flMass = flMass * pEvent->flSpeed;
			float flAmplitude = g_106b8908.GetFloat() / (g_1044913c * 30.0f) * flMass;
			float flDuration = g_106b8978.GetFloat();
			float flFrequency = g_106b88a8.GetFloat();
			sub_1000c1b7(&vecPos, flAmplitude, flFrequency, flDuration, flAmplitude * 60.0f, 0, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10032380 size=0xed
#include <stdlib.h>
#include "gamevcollisionevent_t.h"
#include "CUnknown1070b244.h"
struct SSurfaceData { char m_pad[0x70]; unsigned short m_material; };
struct SEffects { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void Sparks(const Vector &pos, const Vector &dir, float flMagnitude, float flTrail); };
extern SEffects *g_10566258;
extern CUnknown1070b244 *g_1070b244;
void sub_10032380(gamevcollisionevent_t *pEvent, SSurfaceData *pSurface)
{
    bool bSkip;
    switch (pSurface->m_material)
    {
    case 0x43:
        bSkip = pEvent->collisionSpeed < 340.0f;
        break;
    case 0x44:
        bSkip = pEvent->collisionSpeed < 200.0f;
        break;
    default:
        return;
    }
    if (!bSkip)
    {
        Vector pos;
        pEvent->pInternalData->vfunc1(&pos);
        Vector dir;
        dir.x = rand() * (2.0f / 32767.0f) - 1.0f;
        dir.y = rand() * (2.0f / 32767.0f) - 1.0f;
        dir.z = rand() * (2.0f / 32767.0f) - 1.0f;
        dir.z = g_1070b244->vfunc1(0.3f, 1.0f);
        VectorNormalize(dir);
        g_10566258->Sparks(pos, dir, 8.0f, pEvent->collisionSpeed);
    }
}
// END FUNCTION

// FUNCTION: 0x100324b0 size=0x141
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CSoundEnt.h"

void *__fastcall sub_100a8240(void *);
void *__fastcall sub_100a82c0(void *);
char __cdecl sub_10031bd0(int);
void __cdecl sub_10031c70(int);

struct CPhysFrictionParams
{
	int m_iVolume;	// 0x00
	char m_pad04[0x31 - 4];
	char m_bFlag;	// 0x31
};
extern CPhysFrictionParams g_1072bc94;

#define VT10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define VT100(p) VT10(p##0) VT10(p##1) VT10(p##2) VT10(p##3) VT10(p##4) VT10(p##5) VT10(p##6) VT10(p##7) VT10(p##8) VT10(p##9)

struct CPhysFrictionTarget
{
	VT100(a) VT100(b) VT10(c) VT10(d)
	virtual float *vfunc220();
};

void sub_100324b0(CBaseEntity *pEntity, void *pObject, float flSpeed, int n)
{
	ScopeTrace trace("PhysFrictionSound", g_106b8540);

	if (!pEntity)
		return;
	if (flSpeed < 75.0)
		return;
	if (n < 0)
		return;

	void *p1 = sub_100a8240(pEntity);
	int obj1;
	if (!p1) {
		obj1 = 0;
	} else {
		obj1 = *(int *)((char *)p1 + 0x9c);
		if (obj1 && !sub_10031bd0(obj1)) {
			int vol = g_1072bc94.m_iVolume;
			char flag = g_1072bc94.m_bFlag;
			CSoundEnt::sub_101bac90(2, (const Vector *)((CPhysFrictionTarget *)pEntity)->vfunc220(), vol, 0.2f, flag, (CBaseEntity *)obj1);
			sub_10031c70(obj1);
		}
	}
	void *p2 = sub_100a82c0(pEntity);
	if (p2) {
		int obj2 = *(int *)((char *)p2 + 0x9c);
		if (obj2 && obj1 != obj2 && !sub_10031bd0(obj2)) {
			int vol = g_1072bc94.m_iVolume;
			char flag = g_1072bc94.m_bFlag;
			CSoundEnt::sub_101bac90(2, (const Vector *)((CPhysFrictionTarget *)pEntity)->vfunc220(), vol, 0.2f, flag, (CBaseEntity *)obj2);
			sub_10031c70(obj2);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10032660 size=0x8f
#include "CCollisionEvent.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern CCollisionEvent g_106b86d8;

void sub_10032660(void *a1, void *a2, int *p, int sel)
{
    g_109f3620[*g_109f3680].a = "PhysCallbackDamage";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int idx = (sel == 0);
    int *q = p + idx * 3;
    g_106b86d8.sub_10031070((int)a1, a2, p[idx], 1, q + 8, q + 20);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10032720 size=0x10a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CCollisionEvent.h"

struct CPhysCallbackVec {
	float x, y, z;
};

struct CPhysDamageInfo {
	char m_pad0000[0x28];
	CBaseEntity *m_pInflictor;	// 0x28
};

class CPhysCallbackIface {
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26();
	virtual char vfunc27();
};

extern CPhysCallbackIface *g_10723940;
extern CCollisionEvent g_106b86d8;
extern CPhysCallbackVec g_1070d1b0;
extern "C" __declspec(dllimport) void DevMsg(int level, const char *pszFormat, ...);

void sub_10032720(CBaseEntity *pEntity, CPhysDamageInfo *pInfo)
{
	ScopeTrace trace("PhysCallbackDamage", g_106b8540);
	if (g_10723940->vfunc27()) {
		int pObject = pInfo->m_pInflictor ? *(int *)((char *)pInfo->m_pInflictor + 0x36c) : 0;
		CPhysCallbackVec vecLocal = g_1070d1b0;
		g_106b86d8.sub_10031070((int)pEntity, pInfo, pObject, 0, &g_1070d1b0, &vecLocal);
		if (pEntity && pInfo->m_pInflictor)
			DevMsg(2, "Warning: Physics damage event with no recovery info!\nObjects: %s, %s\n", pEntity->sub_1009f200(), pInfo->m_pInflictor->sub_1009f200());
	} else {
		pEntity->sub_100a1250(pInfo);
	}
}
// END FUNCTION

// FUNCTION: 0x10032880 size=0xc9
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern "C" double atof(const char *);
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EngineSlots {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
	virtual const char *Argv(int i);
	virtual int Argc();
};
struct PhysEnv {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void SetAirDensity(float d);
	virtual float GetAirDensity();
};
extern EngineSlots *g_1070b22c;
extern PhysEnv *g_10723940;

void sub_10032880()
{
    g_109f3620[*g_109f3680].a = "CC_AirDensity";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (g_10723940) {
        if (g_1070b22c->Argc() < 2) {
            Msg("air_density <value>\nCurrent air density is %.2f\n", g_10723940->GetAirDensity());
            (*g_109f3680)--;
            return;
        }
        float density = (float)atof(g_1070b22c->Argv(1));
        g_10723940->SetAirDensity(density);
    }
    (*g_109f3680)--;
}
// END FUNCTION
