// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
