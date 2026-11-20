// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102eca50 size=0x93
#include "CAI_Navigator.h"

struct TObj {
	char m_pad[0x84];
	TObj *sub_1030bec0();
};
void *operator new(unsigned int);

CAI_Navigator::CAI_Navigator(int pOuter) :
	CAI_Component((void *)pOuter),
	m_i54(-1)
{
	TObj *p = (TObj *)operator new(0x84);
	m_p30 = (CAI_NavRoute *)(p ? p->sub_1030bec0() : 0);
	m_pProviders = 0;
	m_b34 = 0;
	m_i38 = 0;
	m_i18 = 0;
	m_b1c = 0;
	m_b50 = 1;
	m_pair58.Set(0.25f);
	m_pair60.Set(3.0f);
	m_i20 = 0;
	m_i24 = 0;
	m_i28 = 0;
}
// END FUNCTION

// FUNCTION: 0x102ecb20 size=0x1e
#include "CAI_Navigator.h"

// TARGET: CAI_Navigator::vfunc0
CAI_Navigator *CAI_Navigator::vfunc0(unsigned int flags)
{
	this->CAI_Navigator::~CAI_Navigator();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102ecb50 size=0x28
#include "CAI_Navigator.h"

// TARGET: CAI_Navigator::vfunc3
void CAI_Navigator::vfunc3(int a)
{
    char *owner = (char *)m_pOuter;
    m_i20 = *(int *)(owner + 0x5d44);
    m_i24 = *(int *)(owner + 0x5d40);
    m_i28 = *(int *)(owner + 0x5d38);
    m_pProviders = (CAI_NavProviderList *)a;
}
// END FUNCTION

// FUNCTION: 0x102eea30 size=0x3
#include "CAI_Navigator.h"
void CAI_Navigator::vfunc4(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x102eea50 size=0x1
#include "CAI_Navigator.h"
void CAI_Navigator::vfunc6()
{
}
// END FUNCTION

// FUNCTION: 0x102eea70 size=0xe
// TARGET: CAI_Navigator::vfunc7
#include "CAI_Navigator.h"

void CAI_Navigator::vfunc7()
{
    sub_102eeb70();
    m_b1c = 1;
}
// END FUNCTION

// FUNCTION: 0x102eea90 size=0x15
#include "CAI_Navigator.h"

struct CUnknown102eccc0
{
	void sub_102eccc0();
};

// TARGET: CAI_Navigator::vfunc8
void CAI_Navigator::vfunc8()
{
	sub_102eeb70();
	((CUnknown102eccc0 *)this)->sub_102eccc0();
	*(char *)((char *)this + 0x1c) = 1;
}
// END FUNCTION

// FUNCTION: 0x102eeac0 size=0x10
#include "CAI_Navigator.h"
#include "vampire.h"

// TARGET: CAI_Navigator::vfunc11
void CAI_Navigator::vfunc11(int a)
{
	sub_102eeb70();
	m_b1c = 1;
}
// END FUNCTION

// FUNCTION: 0x102eeb50 size=0xd
#include "CAI_Navigator.h"

void CAI_Navigator::vfunc9(int a, float b)
{
	vfunc10(a, b);
}
// END FUNCTION

// FUNCTION: 0x102eebc0 size=0xda
#include "CAI_Navigator.h"
#include "CEntityVSlots.h"
#include "CUnknown1030bc20.h"
struct CNavMotorV
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual void v3();
	virtual int v4(CUnknown1030bc20_Record *pGoal, float flValue);
	virtual void v5();
};
namespace block_102ee3f0 {
struct CNavUnit : CAI_Navigator { int sub_102ee3f0(); };
int CNavUnit::sub_102ee3f0() { return m_p30->m_i2c; }
}
using namespace block_102ee3f0;
// TARGET: CAI_Navigator::vfunc13
int CAI_Navigator::vfunc13(int a)
{
	if (m_i18 != 3) {
		Vector vecGoal = *sub_102ee140();
		if (vecGoal.z > ((CEntityVSlots *)m_pOuter)->slot220()->z)
			((CEntityVSlots *)m_pOuter)->slot310(0x33);
		else
			((CEntityVSlots *)m_pOuter)->slot310(0x34);
		((CNavMotorV *)m_i20)->v3();
	}
	sub_10008832(3);
	CAI_NavRoute *pRoute = m_p30;
	CNavMotorV *pMotor = (CNavMotorV *)m_i20;
	int nResult = pMotor->v4(((CUnknown1030bc20 *)pRoute)->sub_1030b7c0(), pRoute->sub_1030b880());
	if (nResult == 1) {
		sub_102f0400();
		if (m_p30->sub_1030bc00() != 3) {
			((CEntityVSlots *)m_pOuter)->slot310(((CNavUnit *)this)->sub_102ee3f0());
			((CNavMotorV *)m_i20)->v5();
			sub_10008832(0);
		}
	}
	return nResult;
}
// END FUNCTION

// FUNCTION: 0x102eece0 size=0x10a
#include "CBaseEntity.h"
#include "CAI_Navigator.h"
#include "CUnknown1030bc20.h"
#include "CUnknown1070b22c.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
struct NavResult { int v[14]; };
struct CNavQuery { int sub_10012b43(int a, int b, void *c, int d, int e, float f, int g, NavResult *h, int i, int j); };
struct CNavMotorV { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void v6(void *p); virtual void v7(); virtual void v8(); };
struct CNavOwnerV {
	U22C_SLOTS10(a0) U22C_SLOTS10(a1) U22C_SLOTS10(a2) U22C_SLOTS10(a3) U22C_SLOTS10(a4)
	U22C_SLOTS10(a5) U22C_SLOTS10(a6) U22C_SLOTS10(a7) U22C_SLOTS10(a8) U22C_SLOTS10(a9)
	U22C_SLOTS10(b0) U22C_SLOTS10(b1) U22C_SLOTS10(b2) U22C_SLOTS10(b3) U22C_SLOTS10(b4)
	U22C_SLOTS10(b5) U22C_SLOTS10(b6) U22C_SLOTS10(b7) U22C_SLOTS10(b8) U22C_SLOTS10(b9)
	U22C_SLOTS10(c0) U22C_SLOTS10(c1)
	virtual void *v220();
};
struct CNavUnit : CAI_Navigator { int sub_10009322(); void sub_10006744(); };
bool sub_100147a4();
int CAI_Navigator::vfunc14(int param)
{
	int one = 1;
	if (m_i18 != one) {
		if (((CBaseEntity *)m_pOuter)->sub_100b3700() & 1) {
			NavResult r;
			memset(&r, 0, sizeof(r));
			CUnknown1030bc20 *route = (CUnknown1030bc20 *)m_p30;
			void *ent = ((CNavOwnerV *)m_pOuter)->v220();
			CNavQuery *q = (CNavQuery *)m_i24;
			int t = ((CNavUnit *)this)->sub_10009322();
			CUnknown1030bc20_Record *rec = route->sub_1030b7c0();
			q->sub_10012b43(1, (int)ent, rec, 0x202400b, t, 100.0f, 0, &r, param, 0);
			if (r.v[0] < 0)
				return r.v[0];
			sub_10008832(1);
			((CNavMotorV *)m_i20)->v6(&r.v[10]);
			return 0;
		}
		if (m_i18 != one)
			goto L1;
	}
	if (((CBaseEntity *)m_pOuter)->sub_100b3700() & 1) {
		((CNavMotorV *)m_i20)->v8();
		sub_10008832(0);
		if (sub_100147a4()) {
			vfunc8();
			return 0;
		}
		((CNavUnit *)this)->sub_10006744();
		return one;
	}
L1:
	((CNavMotorV *)m_i20)->v7();
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102eee40 size=0x11d
#include "CAI_Navigator.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102e12c0.h"
#include "CHolderInner24.h"

double __fastcall sub_10008bfc(CUnknown102e12c0 *p);
float sub_100067ad(Vector *pVec);

void CAI_Navigator::vfunc17(CAI_NavGoal *pGoal)
{
	pGoal->m_i30 = m_i18;
	pGoal->m_vecStart = *m_p30->sub_1030b7c0();
	Vector *delta = &pGoal->m_vecDelta;
	int bFlag = m_i18;
	float *pOrigin = ((CAI_BaseNPC *)m_pOuter)->vfunc220();
	delta->x = pGoal->m_vecStart.x - pOrigin[0];
	delta->y = pGoal->m_vecStart.y - pOrigin[1];
	float flLen;
	if (bFlag == 0) {
		delta->z = 0;
		flLen = sub_100067ad(delta);
	} else {
		delta->z = pGoal->m_vecStart.z - pOrigin[2];
		flLen = VectorNormalize(*delta);
	}
	pGoal->m_flDist = flLen;
	pGoal->m_vecDir = *delta;
	double flSpeed = sub_10008bfc((CUnknown102e12c0 *)m_i20);
	pGoal->m_f24 = (float)flSpeed;
	pGoal->m_f2c = (float)(((CUnknown102e12c0 *)m_i20)->m_f30 * flSpeed);
	pGoal->m_p34 = sub_102ecc40();
	if (pGoal->m_f2c > pGoal->m_flDist)
		pGoal->m_f2c = pGoal->m_flDist;
	if (((CHolderInner24 *)m_p30)->sub_1030bd50()) {
		pGoal->m_flags |= 1;
	} else {
		CHolderInner24_Node *pNode = ((CHolderInner24 *)m_p30)->m_pNode;
		if (pNode->m_pNext && pNode->m_pNext->m_i2c != pNode->m_i2c)
			pGoal->m_flags |= 4;
	}
	pGoal->m_pRoute = m_p30;
}
// END FUNCTION

// FUNCTION: 0x102ef510 size=0x134
#include "CAI_Navigator.h"
#include "CAI_BaseNPC.h"

struct CNavWpView
{
	Vector m_vecPos;
	char m_pad0c[0x2c - 0xc];
	int m_i2c;
	CNavWpView *m_pLinked;	// 0x30
};

struct CNavGlobalView
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad08[0x2c - 4];
	int m_i2c;
};

extern CNavGlobalView *g_106bbaa4;
extern char g_10934070;
float sub_10146150(const Vector *pVec);

struct CAI_NavigatorUnit : public CAI_Navigator
{
	char sub_102ee660();
};

bool CAI_Navigator::vfunc16(int *pOut)
{
	CAI_BaseNPC *pOwner = (CAI_BaseNPC *)m_pOuter;
	CAI_NavRoute *pRoute = m_p30;
	int bFlat = m_i18;
	CNavWpView *pWp = (CNavWpView *)pRoute->m_pWaypoint.m_p;
	const Vector *pOrigin = (const Vector *)pOwner->vfunc220();
	float flDist;
	if (bFlat == 0)
	{
		float dx = pWp->m_vecPos.x - pOrigin->x;
		float dy = pWp->m_vecPos.y - pOrigin->y;
		flDist = FastSqrt(dx * dx + dy * dy);
	}
	else
	{
		Vector vecDelta = pWp->m_vecPos - *pOrigin;
		flDist = sub_10146150(&vecDelta);
	}
	char bArrived;
	bArrived = ((CAI_NavigatorUnit *)this)->sub_102ee660();
	if ((float)((!g_106bbaa4->vfunc1() && g_106bbaa4->m_i2c) ? 0.25 : 0.0625) >= flDist)
	{
		if (!g_10934070 || !pWp->m_pLinked || pWp->m_pLinked->m_i2c == pWp->m_i2c || flDist < 0.001)
		{
			if (bArrived)
			{
				vfunc8();
				*pOut = 0;
				return true;
			}
			sub_102f0400();
			*pOut = 1;
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102ef870 size=0x1b4
#include "CAI_Navigator.h"
#include "CAI_Motor.h"
#include "CAI_LocalNavigator.h"
#include "CVProfile.h"
#include "CUnknown10270290.h"
#include <string.h>

struct CCycleSample
{
	unsigned __int64 m_Int64;
	void Sample() { unsigned int *p = (unsigned int *)&m_Int64; __asm { mov ecx, p
		rdtsc
		mov [ecx], eax
		mov [ecx + 4], edx } }
};

struct CNavScope
{
	CNavScope() { g_109f3648->EnterScope("CAI_Navigator_MoveEnact", 0, "Unaccounted", false); }
	~CNavScope()
	{
		CVProfile *pProf = g_109f3648;
		if (!pProf->m_bAtRoot || pProf->m_enabled) {
			CVProfNode *pNode = pProf->m_pCurNode;
			if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
				CCycleSample s;
				s.m_Int64 = 0;
				s.Sample();
				CUnknownCycle100335e0 *pc = &pNode->m_CurFrameTime;
				pc->m_Int64 = s.m_Int64 - pc->m_Int64;
				pNode->m_TotalTime += pc->m_Int64;
				CVProfile *pPop = g_109f3648;
				--pPop->m_nGroupStackDepth;
				int nNew = pPop->m_GroupIDStack[pPop->m_nGroupStackDepth];
				int nOld = pPop->m_GroupIDStack[pPop->m_nGroupStackDepth + 1];
				if (nNew != nOld && pPop->m_bVTuneGroupsEnabled && nOld == pPop->m_nVTuneGroupID)
					vtune(false);
			}
			if (pNode->m_nRecursions == 0)
				pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
			pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
		}
	}
};

// TARGET: CAI_Navigator::vfunc15
int CAI_Navigator::vfunc15(void *pGoal, int a)
{
	CNavScope scope;
	int goal[31];
	memcpy(goal, pGoal, sizeof(goal));
	int nResult = -4;
	int pBlocker = 0;
	nResult = LocalNav()->vfunc3(goal, 0, &pBlocker);
	if (pBlocker)
		((CUnknown10270290 *)m_pOuter)->sub_10270290(pBlocker);
	if (nResult == 0)
		nResult = Motor()->sub_102e23a0((struct CAI_MoveRequest *)goal, *(float *)&a);
	else if (nResult != 1)
		Motor()->vfunc10();
	if (nResult < 0)
		sink5(&nResult);
	return nResult;
}
// END FUNCTION

// FUNCTION: 0x102efaa0 size=0x21a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_Navigator.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include <string.h>

#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)

struct NavMoveOwner {
	V64(p) V64(q) V64(r) V16(s) V4(t) V4(u) virtual void v0();
	virtual Vector *vfunc217();
	V16(w) V4(x0) V4(x1) V4(x2) virtual void y0(); virtual void y1();
	virtual float vfunc248();
	V16(a1) V16(a2) V16(a3) V4(b1) V4(b2) V4(b3) virtual void c0();
	virtual void vfunc310(int act);
};
extern float g_104454c4;

struct NavMoveOwnerData {
	char pad0[0x6f0];
	int m6f0;
	char pad1[0xfec - 0x6f4];
	int mAct;
};
struct NavMoveTrace {
	NavMoveTrace() { memset(this, 0, sizeof(*this)); }
	char m_b[0x38];
};
struct NavMoveGoal {
	NavMoveGoal() { memset(this, 0, sizeof(*this)); }
	char m_pre[0x44];
	NavMoveTrace m_trace;
};

static inline float NavLen(const Vector &v)
{
	return FastSqrt(v.x * v.x + (v.y * v.y + v.z * v.z));
}

namespace block_102efaa0 {
struct CAI_NavigatorUnit : CAI_Navigator {
	int sub_102ee3f0();
};
int CAI_NavigatorUnit::sub_102ee3f0() { return m_p30->m_i2c; }
}
using namespace block_102efaa0;

#define OWNER ((NavMoveOwner *)m_pOuter)
#define ODATA ((NavMoveOwnerData *)m_pOuter)

// TARGET: CAI_Navigator::vfunc12
int CAI_Navigator::vfunc12(int a)
{
	ScopeTrace trace("CAI_Navigator::MoveNormal", g_106b8540, g_106b8540);
	if (!sub_102efd50())
		return -4;
	int result = -4;
	if (vfunc16(&result))
		return result;
	float flDist = OWNER->vfunc248();
	int act = ODATA->mAct;
	int s6f0 = ODATA->m6f0;
	Vector savedPos = *OWNER->vfunc217();
	OWNER->vfunc310(((CAI_NavigatorUnit *)this)->sub_102ee3f0());
	if (OWNER->vfunc248() <= g_104454c4 && ODATA->mAct == 2)
		return 0;
	NavMoveGoal goal;
	vfunc17((CAI_NavGoal *)&goal);
	result = vfunc15(&goal, a);
	if (result == 0) {
		if (flDist < 0.01) {
			if (NavLen(*OWNER->vfunc217() - savedPos) < 0.01) {
				ODATA->m6f0 = s6f0;
				OWNER->vfunc310(act);
			}
		}
		if (result == 0 && !m_b51)
			vfunc6();
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x102eff40 size=0x2a4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_Navigator.h"
#include "ScopeTrace.h"
#include "globalvars.h"

__declspec(dllimport) void DevMsg(const char *pMsg, ...);
__declspec(dllimport) void Warning(const char *pMsg, ...);

#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)

struct NavOwner {
    V64(p) V64(q) V64(r) V64(s) V64(t) V64(u) V64(v) V64(w) V4(x) V4(y) V4(z)
    virtual void f0();
    virtual char vfunc525(float flInterval);
};
struct NavOwnerData {
    int vptr;
    char pad[0x156c - 4];
    int m156c;
    char pad2[0x1a40 - 0x1570];
    char b1a40;
    char pad3[0x5d44 - 0x1a41];
    struct NavComp *p5d44;
};
struct NavComp {
    int vptr;
    NavOwnerData *pOuter;
    int stamp8;
    int stampC;
};
struct NavMotor {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
    virtual void vfunc5();
    virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
    virtual void vfunc10();
    char pad[0x30 - 4];
    float f30;
};
struct NavSelfView {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
    virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
    virtual void OnNavFailed(int code, int force);
};

extern int g_1060fcc4[];
extern float g_104454c4;
extern int __fastcall sub_1030ba70(void *p);
extern char __fastcall sub_10280a20(void *p);

void CAI_Navigator::vfunc5(float flInterval, int a)
{
    ScopeTrace trace("CAI_Navigator::Move", g_106b8540, g_106b8540);
    if (flInterval > 1.0)
        flInterval = 1.0f;
    if (sub_102ee2e0())
        return;
    NavOwner *pOwner = (NavOwner *)m_pOuter;
    if (pOwner->vfunc525(flInterval))
        return;
    NavOwnerData *pData = (NavOwnerData *)m_pOuter;
    if (pData->b1a40) {
        m_n08 = pData->m156c;
        m_n0c = gpGlobals->framecount;
        NavComp *c = (NavComp *)sub_102ecc00();
        c->stamp8 = c->pOuter->m156c;
        c->stampC = gpGlobals->framecount;
        c = (NavComp *)m_i28;
        c->stamp8 = c->pOuter->m156c;
        c->stampC = gpGlobals->framecount;
        c = (NavComp *)m_i24;
        c->stamp8 = c->pOuter->m156c;
        c->stampC = gpGlobals->framecount;
        c = ((NavOwnerData *)m_pOuter)->p5d44;
        c->stamp8 = c->pOuter->m156c;
        c->stampC = gpGlobals->framecount;
        m_p30->sub_1030bc00();
        ((NavMotor *)m_i20)->f30 = flInterval;
        int result = 0;
        if (!sub_1030ba70(m_p30)) {
            Warning("AIError: Move requested with no route!\n");
            result = 1;
        } else if (!m_p30->m_pWaypoint) {
            result = 2;
        }
        if (result == 0) {
            if (sub_10280a20((void *)m_pOuter))
                return;
            int nLoopCount = 0;
            int moveResult = 1;
            m_b1c = 0;
            while (moveResult >= 0 && !m_b1c) {
                if (((NavMotor *)m_i20)->f30 <= g_104454c4) {
                    moveResult = 0;
                    break;
                }
                switch (m_p30->sub_1030bc00()) {
                case 3:
                    moveResult = vfunc13(a);
                    break;
                case 1:
                    moveResult = vfunc14(a);
                    break;
                case 0:
                case 2:
                    moveResult = vfunc12(a);
                    break;
                default:
                    DevMsg("Bogus route move type!");
                    moveResult = -4;
                    break;
                }
                ++nLoopCount;
                if (nLoopCount > 16) {
                    DevMsg("ERROR: AI navigation not terminating. Possibly bad cyclical solving?\n");
                    goto fail;
                }
            }
            if (moveResult < 0) {
                if (moveResult != -3) {
fail:
                    sub_102f1fa0(4.0f, 0);
                }
                ((NavSelfView *)this)->OnNavFailed(0xc, 1);
            }
            return;
        }
        ((NavSelfView *)this)->OnNavFailed(g_1060fcc4[result], 1);
        return;
    } else if (m_i18 == 3) {
        ((NavMotor *)m_i20)->vfunc5();
        sub_10008832(0);
        return;
    } else if (m_i18 != -1) {
        ((NavMotor *)m_i20)->vfunc10();
    }
}
// END FUNCTION
