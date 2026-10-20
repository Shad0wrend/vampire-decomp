// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002d7d0 size=0x106
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

// FUNCTION: 0x1002dd70 size=0x1ec
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

struct Globals_ { char pad[0x10]; float frametime; };
extern Globals_ *g_1070b228;

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
    sub_1002ea40(g_1070b228->frametime);
    sub_1000a8cb(m_04);
}
// END FUNCTION
