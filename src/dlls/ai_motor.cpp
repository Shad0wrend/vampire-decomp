// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 41 blocks
#include "vampire.h"

// FUNCTION: 0x102623e0 size=0x9
#include "CAI_Motor.h"
extern float g_104492dc;
float CAI_Motor::vfunc11(int a) { return g_104492dc; }
// END FUNCTION

// FUNCTION: 0x102e0990 size=0x1e
#include "CAI_Motor.h"

// TARGET: CAI_Motor::vfunc0
CAI_Motor *CAI_Motor::vfunc0(unsigned int flags)
{
	sub_10014b32();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102e09c0 size=0x60
#include "CAI_Motor.h"
#include "utlvector.h"

extern void *vt_1049d854[];
extern void *vt_1049d824[];
extern void *vt_1049a0f8[];

struct sub_MotorView
{
	void **m_pVtbl;
	char pad04[0x10 - 4];
	void **m_pSinkVtbl;
	char pad14[0x54 - 0x14];
	CUtlVector<int> m_Queue;
};

// TARGET: CAI_Motor::sub_102e09c0
void CAI_Motor::sub_102e09c0()
{
	sub_MotorView *p = (sub_MotorView *)this;
	p->m_pVtbl = vt_1049d854;
	p->m_pSinkVtbl = vt_1049d824;
	p->m_Queue.~CUtlVector<int>();
	p->m_pVtbl = vt_1049a0f8;
}
// END FUNCTION

// FUNCTION: 0x102e0a40 size=0xa
struct CUnknown102e0a40 { int p[6]; int a; void sub_102e0a40(int v); };
// TARGET: CUnknown102e0a40::sub_102e0a40
void CUnknown102e0a40::sub_102e0a40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102e0a60 size=0xa
struct CUnknown102e0a60 { int p[7]; int a; void sub_102e0a60(int v); };
// TARGET: CUnknown102e0a60::sub_102e0a60
void CUnknown102e0a60::sub_102e0a60(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102e0a80 size=0x8c
#include "CAI_Motor.h"

// TARGET: CAI_Motor::sub_102e0a80
float CAI_Motor::sub_102e0a80(float flIdealYaw)
{
    float flDiff = flIdealYaw - *(float *)&m_18;
    if (flDiff > 180.0f)
        flDiff -= 360.0f;
    else if (flDiff <= -180.0f)
        flDiff += 360.0f;
    if (flDiff > *(float *)&m_1c)
        flDiff = *(float *)&m_1c;
    else if (flDiff < -*(float *)&m_1c)
        flDiff = -*(float *)&m_1c;
    float flResult = flDiff + *(float *)&m_18;
    if (flResult < 0)
        flResult += 360.0f;
    if (flResult >= 360.0f)
        flResult -= 360.0f;
    return flResult;
}
// END FUNCTION

// FUNCTION: 0x102e0b40 size=0x8
void __fastcall sub_102e0b40(float *p)
{
	p[11] = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x102e0b60 size=0xf
void sub_101cf250(void *p, int n);

// TARGET: sub_102e0b60
void __fastcall sub_102e0b60(char *pThis)
{
	sub_101cf250(pThis + 0x2c, 2);
}
// END FUNCTION

// FUNCTION: 0x102e0b80 size=0xf
void sub_101cf2f0(void *p, int n);

// TARGET: sub_102e0b80
void __fastcall sub_102e0b80(char *pThis)
{
	sub_101cf2f0(pThis + 0x2c, 2);
}
// END FUNCTION

// FUNCTION: 0x102e0ba0 size=0x16
// TARGET: sub_102e0ba0
void __fastcall sub_102e0ba0(char *pThis, int, int a)
{
	*(int *)(pThis + 0x14) = a;
	char *pOwner = *(char **)(pThis + 4);
	*(int *)(pThis + 0x68) = *(int *)(pOwner + 0x5d40);
}
// END FUNCTION

// FUNCTION: 0x102e0bd0 size=0x238
#include "CAI_Motor.h"
#include "CAI_MoveProbe.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "IPhysicsObject.h"
#include "Vector.h"
struct IShadowFloat
{
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void s3(float f);
};

void sub_101cf5c0(CBaseEntity *pEntity, int pOrigin, int bTouch);
float __fastcall sub_102e26f0(void *pComponent);

int CAI_Motor::sub_102e0bd0(void *pOut, CBaseEntity *pTarget, int a, char b, char c, AIMoveTrace_t *d, int e)
{
	AIMoveTrace_t trace;
	int nFlags = 1;
	if (!c)
		nFlags = 5;

	m_08 = *(int *)((char *)m_pOuter + 0x156c);
	m_0c = gpGlobals->framecount;

	CAI_MoveProbe *pWrite = (CAI_MoveProbe *)m_68;
	pWrite->m_n08 = *(int *)((char *)pWrite->m_pOuter + 0x156c);
	pWrite->m_n0c = gpGlobals->framecount;

	CAI_MoveProbe *pProbe = (CAI_MoveProbe *)m_68;
	Vector *pStart = ((CEntityVSlots *)m_pOuter)->slot220();
	pProbe->sub_102e4f50((const float *)pStart, (const float *)pOut, 0x202400b, 100.0f, nFlags, &trace, e, 0);

	if (d)
	{
		d->fStatus = trace.fStatus;
		*(Vector *)&d->m_fields.e0 = *(Vector *)&trace.m_fields.e0;
		((Vector *)&d->m_fields.n0)->sub_1003e4b0(*(Vector *)&trace.m_fields.n0);
		d->m_fields.nHit = trace.m_fields.nHit;
		d->m_fields.f20 = trace.m_fields.f20;
		d->m_fields.f24 = trace.m_fields.f24;
		((Vector *)&d->m_fields.s0)->sub_1003e4b0(*(Vector *)&trace.m_fields.s0);
		d->m_fields.fDist = trace.m_fields.fDist;
	}

	bool bHit = (trace.m_fields.nHit != 0 && (int)pTarget == trace.m_fields.nHit);
	bool bBlocked = (trace.fStatus < 0);

	if (bBlocked && !b && !bHit)
		return 0;

	sub_101cf5c0((CBaseEntity *)m_pOuter, (int)&trace.m_fields.e0, 1);

	if (trace.m_fields.fDist > 0.1f)
	{
		float fMax = sub_102e26f0(this);
		float fValue;
		if (fMax < trace.m_fields.fDist)
		{
			fValue = sub_102e26f0(this);
		}
		else
		{
			fValue = (trace.m_fields.fDist < 0.0f) ? 0.0f : trace.m_fields.fDist;
		}

		IPhysicsObject *pPhys = (IPhysicsObject *)((CBaseEntity *)m_pOuter)->m_obj36c;
		if (pPhys)
		{
			IPhysicsShadowController *pShadow = pPhys->vfunc48();
			if (pShadow)
				((IShadowFloat *)pShadow)->s3(fValue);
		}
	}

	if (*(float *)&a != -1.0f)
	{
		Vector vecAngles = *((CEntityVSlots *)m_pOuter)->slot221();
		vecAngles.y = *(float *)&a;
		((CEntityVSlots *)m_pOuter)->slot64((const float *)&vecAngles);
	}

	if (bHit)
		return 4;
	if (!bBlocked)
		return 1;
	return (trace.fStatus != -3) + 2;
}
// END FUNCTION

// FUNCTION: 0x102e0ea0 size=0xb8
#include "CAI_Motor.h"
#include "CCollisionProperty.h"
#include "CBCCSlotViews.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

class COuterView	// the NPC that owns the motor: slots 208 and 310
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT(200) VIEW_SLOT(201) VIEW_SLOT(202) VIEW_SLOT(203) VIEW_SLOT(204) VIEW_SLOT(205) VIEW_SLOT(206) VIEW_SLOT(207)
	virtual void vfunc208(int a);
	VIEW_SLOT(209)
	VIEW_SLOT10(21) VIEW_SLOT10(22) VIEW_SLOT10(23) VIEW_SLOT10(24) VIEW_SLOT10(25) VIEW_SLOT10(26) VIEW_SLOT10(27) VIEW_SLOT10(28) VIEW_SLOT10(29)
	VIEW_SLOT10(30)
	virtual void vfunc310(int a);
};

void CAI_Motor::vfunc3()
{
	COuterView *pOuter = (COuterView *)m_pOuter;
	pOuter->vfunc310(0x33);
	sub_102e2840(5, 0);
	pOuter = (COuterView *)m_pOuter;
	const char *name = pOuter ? (*(const char **)((char *)pOuter + 0x26c) ? *(const char **)((char *)pOuter + 0x26c) : g_106b8540) : "NULL ENTITY";
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)pOuter + 0x270);
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	pCol->sub_100dc480(2);
	(*g_109f3680)--;
	*(int *)(m_pOuter + 0x3ec) = 0;
	((COuterView *)m_pOuter)->vfunc208(0);
}
// END FUNCTION

// FUNCTION: 0x102e0f90 size=0x122
#include "CAI_Motor.h"
#include "CAI_BaseNPC.h"

struct MotorOwnerView
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5)
	CAI_NPC_V(60) CAI_NPC_V(61)
	virtual void vfunc62(const Vector &vecGoal);
	CAI_NPC_V(63) CAI_NPC_V(64) CAI_NPC_V(65) CAI_NPC_V(66) CAI_NPC_V(67) CAI_NPC_V(68) CAI_NPC_V(69)
	CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9) CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15)
	CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19) CAI_NPC_V10(20) CAI_NPC_V10(21)
	virtual float *vfunc220();
};

// TARGET: CAI_Motor::vfunc4
int CAI_Motor::vfunc4(const Vector &vecGoal, float flYaw)
{
	Vector vecDir = vecGoal - *(Vector *)((MotorOwnerView *)m_pOuter)->vfunc220();
	float flDist = VectorNormalize(vecDir);
	Vector vecMove = vecDir * 100.0f;
	sub_102e2690(&vecMove);
	if (m_30 * 100.0f > flDist)
	{
		if (flDist <= 0.01)
			flDist = 0;
		float flSpeed = m_30;
		flSpeed -= flDist * 0.01f;
		m_30 = flSpeed;
		((MotorOwnerView *)m_pOuter)->vfunc62(vecGoal);
		return 1;
	}
	m_30 = 0;
	sub_102e1c10(flYaw, -1.0f);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102e1110 size=0x41
#include "CAI_Motor.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct CMotorOwnerView {
    V100(a) V100(b) V100(c) V10(d)
    virtual void s310(int a);
    char m_pad[0x3ec - 4];
    float m_f3ec;
};
struct CUnknown102ee3f0 { int sub_102ee3f0(); };
extern Vector g_1070d1b0;

void CAI_Motor::vfunc5()
{
    CUnknown102ee3f0 *pOwner = (CUnknown102ee3f0 *)sub_102e2610();
    int n = pOwner->sub_102ee3f0();
    ((CMotorOwnerView *)m_pOuter)->s310(n);
    sub_102e2840(4, 0);
    sub_102e2690(&g_1070d1b0);
    ((CMotorOwnerView *)m_pOuter)->m_f3ec = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x102e1180 size=0x42
#include "CAI_Motor.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CMotorOuterSlots
{
	V100(a0) V100(a1)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
	virtual void vfunc208(int a);
	V100(e0) virtual void f0();
	virtual void vfunc310(int a);
};
float __cdecl sub_101d2c70(const Vector *pVec);

void CAI_Motor::vfunc6(Vector *pDirection)
{
	sub_102e2690(pDirection);
	((CMotorOuterSlots *)m_pOuter)->vfunc208(0);
	((CMotorOuterSlots *)m_pOuter)->vfunc310(0x2c);
	sub_102e1c10(sub_101d2c70(pDirection), -1.0f);
}
// END FUNCTION

// FUNCTION: 0x102e11f0 size=0x5f
#include "CAI_Motor.h"
#include "CAI_BaseNPC.h"
struct CAI_MotorOwner310 {
	CAI_NPC_V10(0) CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28) CAI_NPC_V10(29)
	CAI_NPC_V10(30)
	virtual void vfunc310(int a);
};
int CAI_Motor::vfunc7()
{
	sub_102e1e20(-1);
	Vector vecDir;
	sub_102e26b0(&vecDir);
	if (vecDir.z > 0.0f)
		((CAI_MotorOwner310 *)m_pOuter)->vfunc310(0x2d);
	else
		((CAI_MotorOwner310 *)m_pOuter)->vfunc310(0x2e);
	m_30 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102e1270 size=0x3a
#include "CAI_Motor.h"

#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CMotorOwnerView
{
	P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k) P10(l) P10(m)
	P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u) P10(v) P10(w) P10(x) P10(y) P10(z)
	P10(A) P10(B) P10(C) P10(D) P10(E)
	virtual void vfunc310(int a);
};

// TARGET: CAI_Motor::vfunc8
void CAI_Motor::vfunc8()
{
	Vector v(0.0f, 0.0f, 0.0f);
	sub_102e2690(&v);
	((CMotorOwnerView *)m_pOuter)->vfunc310(0x30);
}
// END FUNCTION

// FUNCTION: 0x102e12c0 size=0xb
#include "CUnknown102e12c0.h"
void CUnknown102e12c0::sub_102e12c0()
{
	m_pOuter->vfunc248();
}
// END FUNCTION

// FUNCTION: 0x102e12e0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e12e0(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e1300 size=0xba
#include "CAI_Motor.h"
#include "Vector.h"

float CAI_Motor::vfunc16()
{
    float flAccel = sub_102e12e0();
    if (flAccel > 0.0) {
        float flTime = FastSqrt(m_3c * m_3c + m_40 * m_40 + m_44 * m_44) / flAccel;
        float flDist = FastSqrt(m_3c * m_3c + m_40 * m_40 + m_44 * m_44) * flTime - flAccel * (double)flTime * (double)flTime * 0.5;
        if (flDist > 10.0)
            return flDist;
    }
    return 10.0f;
}
// END FUNCTION

// FUNCTION: 0x102e13f0 size=0x1b
// TARGET: sub_102e13f0
struct CUnk102e13f0 {
    float sub_102e12c0();
    float sub_102e27b0();
    float sub_102e13f0();
};
float CUnk102e13f0::sub_102e13f0()
{
    float a = sub_102e12c0();
    return sub_102e27b0() * a;
}
// END FUNCTION

// FUNCTION: 0x102e1420 size=0x1
#include "CAI_Motor.h"
void CAI_Motor::vfunc9()
{
}
// END FUNCTION

// FUNCTION: 0x102e1440 size=0x1b
#include "CAI_Motor.h"
#include <string.h>

struct CUnknown102ddc40 {
	void *sub_102ddc40();
};

// TARGET: CAI_Motor::vfunc10
int CAI_Motor::vfunc10()
{
	memset(&m_3c, 0, 12);
	return (int)((CUnknown102ddc40 *)*(char **)(m_pOuter + 0x5d38))->sub_102ddc40();
}
// END FUNCTION

// FUNCTION: 0x102e1470 size=0x1d
// TARGET: sub_102e1470
float __cdecl sub_102e1470(float a, float b, float c)
{
    return (b * b - a * a) * 0.5 / c;
}
// END FUNCTION

// FUNCTION: 0x102e14a0 size=0x81
#include "CAI_Motor.h"
#include "Vector.h"

int CAI_Motor::vfunc19(int a, int b, int c)
{
	vfunc18(a);
	float flNewSpeed = sub_102e12c0();
	float flInterval = m_30;
	float flTotal = 0.5 * (FastSqrt(m_3c * m_3c + m_40 * m_40 + m_44 * m_44) + flNewSpeed) * flInterval;
	return sub_102e1560(a, flNewSpeed, flTotal, b, c);
}
// END FUNCTION

// FUNCTION: 0x102e1560 size=0x18b
#include "CAI_Motor.h"
#include "CAI_MoveProbe.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "Vector.h"
struct AILocalMoveGoal_t
{
	int m_unk00;
	int m_unk04;
	int m_unk08;
	Vector dir;		// 0x0c
	int m_unk18;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
	float maxDist;		// 0x28
	int m_unk2c;
	int m_unk30;
	CBaseEntity *pMoveTarget;	// 0x34
	unsigned char flags;	// 0x38
};

struct CAI_MovementSinkView
{
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void s3();
	virtual void s4();
	virtual void s5();
	virtual bool OnMoveStalled(const AILocalMoveGoal_t &move);
};

int CAI_Motor::sub_102e1560(int a, float speed, float dist, int b, int c)
{
	const AILocalMoveGoal_t &move = *(const AILocalMoveGoal_t *)a;
	bool bReachingLocalGoal = (dist > move.maxDist);

	if (bReachingLocalGoal)
	{
		if (!(move.flags & 2))
			m_30 = m_30 * (1 - move.maxDist / dist);
		else
			m_30 = 0;
		dist = move.maxDist;
	}
	else
	{
		m_30 = 0;
	}

	*(Vector *)&m_3c = move.dir * speed;

	int result = 1;
	if (dist > 0.0)
	{
		Vector vecFrom = *((CEntityVSlots *)m_pOuter)->slot220();
		Vector vecTo = vecFrom + move.dir * dist;

		result = sub_102e0bd0(&vecTo, move.pMoveTarget, 0xbf800000, true, bReachingLocalGoal, (AIMoveTrace_t *)b, c);

		if (result == 0)
			vfunc10();
	}
	else if (!((CAI_MovementSinkView *)((char *)this + 0x10))->OnMoveStalled(move))
	{
		result = 0;
	}

	return result;
}
// END FUNCTION

// FUNCTION: 0x102e1760 size=0x1fa
#include "CBaseEntity.h"
// TARGET: CAI_Motor::vfunc20
#include "CAI_Motor.h"
#include <math.h>

struct CMoveRequestView
{
	char m_pad00[0xc];
	Vector dir;	// 0x0c
	char m_pad18[0x10];
	float maxDist;	// 0x28
	char m_pad2c[8];
	int pMoveTarget;	// 0x34
};

struct CMoveVecView
{
	Vector v;
	CMoveVecView &operator=(const CMoveVecView &o) { v.sub_1003e4b0(o.v); return *this; }
};

struct CMoveTraceView
{
	int fStatus;	// 0x00
	Vector vEndPosition;	// 0x04
	Vector vHitNormal;	// 0x10
	int pObstruction;	// 0x1c
	float flTotalDist;	// 0x20
	float flDistObstructed;	// 0x24
	CMoveVecView vJumpVelocity;	// 0x28
	float flStepUpDistance;	// 0x34

	CMoveTraceView() { memset(this, 0, sizeof(*this)); }
};

void __cdecl sub_10139500(const Vector *pStart, float flScale, const Vector *pDir, Vector *pDest);
void __cdecl sub_101cf5c0(CBaseEntity *pEntity, int a, int b);

int CAI_Motor::vfunc20(int a, int b, int c)
{
	CMoveTraceView *pTraceResult = (CMoveTraceView *)b;
	const CMoveRequestView &move = *(CMoveRequestView *)a;

	vfunc18(a);

	float flNewSpeed = sub_102e12c0();
	*(Vector *)&m_3c = move.dir * flNewSpeed;

	float flTotal = 0.5 * (((Vector *)&m_3c)->Length() + flNewSpeed) * GetMoveInterval();

	float distance = move.maxDist;
	if (flTotal > distance) {
		m_30 = GetMoveInterval() * (1 - distance / flTotal);
		flTotal = distance;
	} else {
		m_30 = 0;
	}

	Vector vecStart, vecEnd;
	vecStart = *((CEntityVSlots *)m_pOuter)->slot220();
	sub_10139500(&vecStart, flTotal, &move.dir, &vecEnd);

	CMoveTraceView moveTrace;
	((CAI_MoveProbe *)m_68)->sub_102e6d70(2, (const float *)&vecStart, (const float *)&vecEnd, 0x202400b, 0, 100.0, 0, (AIMoveTrace_t *)&moveTrace, c, 0);
	int pObstruction;
	if ((char)a == -1) pObstruction = *(int *)&moveTrace.pObstruction; else pObstruction = *(volatile int *)&moveTrace.pObstruction;
	if (pTraceResult) {
		pTraceResult->fStatus = moveTrace.fStatus;
		pTraceResult->vEndPosition = moveTrace.vEndPosition;
		pTraceResult->vHitNormal = moveTrace.vHitNormal;
		pTraceResult->pObstruction = pObstruction;
		pTraceResult->flTotalDist = moveTrace.flTotalDist;
		pTraceResult->flDistObstructed = moveTrace.flDistObstructed;
		pTraceResult->vJumpVelocity = moveTrace.vJumpVelocity;
		pTraceResult->flStepUpDistance = moveTrace.flStepUpDistance;
	}

	if (fabs(moveTrace.flDistObstructed - flTotal) <= 1e-1) {
		if (move.pMoveTarget && (pObstruction == move.pMoveTarget))
			return 4;
		return 0;
	}
	sub_101cf5c0((CBaseEntity *)m_pOuter, (int)&moveTrace.vEndPosition, 1);
	return (moveTrace.fStatus < 0) ? 3 : 1;
}
// END FUNCTION

// FUNCTION: 0x102e19e0 size=0x1b4
#include "CAI_Motor.h"
#include "CAI_BaseNPC.h"

struct CAIGoal
{
	char m_pad[0xc];
	Vector m_vecDir;
	Vector m_vecTarget;
};

struct CMotorNodeA
{
	float sub_102e2790(int h);
};

struct CMotorNodeB
{
	char sub_102e2820(int h, const char *name);
};

float sub_101d2c70(const Vector *pVec);
float sub_1013d580(float a, float b);

void CAI_Motor::vfunc18(int a)
{
	CAIGoal *pGoal = (CAIGoal *)a;
	float flInterval = m_30;
	if (((CAI_BaseNPC *)m_pOuter)->vfunc526(pGoal, flInterval))
		return;

	float flGoalYaw = sub_101d2c70(&pGoal->m_vecDir);
	int h = *(int *)(m_pOuter + 0x6f0);
	((CMotorNodeA *)this)->sub_102e2790(h);
	if (!((CMotorNodeB *)this)->sub_102e2820(h, "move_yaw"))
	{
		sub_102e1c10((float)((int)(flGoalYaw * 182.04445f) & 0xFFFF) * 0.005493164f, -1.0f);
		return;
	}

	Vector vecDir;
	float flInterest = vfunc15(vecDir);
	Vector vecScaledDir = vecDir * flInterest;
	vecDir = vecScaledDir + pGoal->m_vecTarget * (1.0f - flInterest);
	VectorNormalize(vecDir);
	float flBlendYaw = sub_101d2c70(&vecDir);
	float flNewYaw = (float)((int)(flBlendYaw * 182.04445f) & 0xFFFF) * 0.005493164f;
	sub_102e1c10(flNewYaw, -1.0f);

	float *pAngles = ((CAI_BaseNPC *)m_pOuter)->vfunc221();
	float flCurYaw = pAngles[1];
	float flDiff = sub_1013d580(flGoalYaw, flCurYaw);
	float flNegDiff = -flDiff;
	char *pObj = *(char **)(m_pOuter + 0x98);
	if (pObj)
		*(float *)(pObj + 0x63ec) = flNegDiff;
	else
		sub_102e27d0("move_yaw", flNegDiff);
}
// END FUNCTION

// FUNCTION: 0x102e1c10 size=0xa9
#include "CAI_Motor.h"

void CAI_Motor::sub_102e1c10(float flIdealYaw, float flYawSpeed)
{
    float yaw = flIdealYaw;
    if (m_28) {
        if (flIdealYaw >= 180.0f)
            yaw = flIdealYaw - 180.0f;
        else
            yaw = flIdealYaw + 180.0f;
    }
    if (m_1c == 0x43340000)
        m_34 = yaw;
    else
        m_34 = sub_102e0a80(yaw);
    if (flYawSpeed == -1.0f) {
        sub_102e1cf0();
    } else if (flYawSpeed != -2.0f) {
        *(float *)&m_38 = flYawSpeed;
    }
    sub_102e1e20(-1);
}
// END FUNCTION

// FUNCTION: 0x102e1cf0 size=0x10
struct CUnknownEmbed102e1cf0 {
    char m_pad0000[0x10];
    char m_embed10[0x28];
    float m_f38;
    void sub_102e1cf0();
};

// TARGET: sub_102e1cf0
void CUnknownEmbed102e1cf0::sub_102e1cf0()
{
    void *obj = (char *)this + 0x10;
    void **vt = *(void ***)obj;
    float f = ((float (__fastcall *)(void *))vt[0])(obj);
    m_f38 = f;
}
// END FUNCTION

// FUNCTION: 0x102e1d10 size=0xc9
inline float UTIL_AngleMod_102e1d10(float a)
{
	a = (360.0f / 65536) * ((int)(a * (65536.0f / 360.0f)) & 65535);
	return a;
}

float sub_102e1d10(float yawSpeedPerSec, float current, float target, float time)
{
	if (current != target) {
		float speed = yawSpeedPerSec * time;
		float move = target - current;
		if (target > current) {
			if (move > 180.0f)
				move = move - 360.0f;
		} else {
			if (move <= -180.0f)
				move = move + 360.0f;
		}
		if (move > 0) {
			if (move > speed)
				move = speed;
		} else {
			if (move < -speed)
				move = -speed;
		}
		return UTIL_AngleMod_102e1d10(current + move);
	}
	return target;
}
// END FUNCTION

// FUNCTION: 0x102e1e20 size=0x11b
#include "CAI_Motor.h"
#include "CEntityVSlots.h"

struct CMotorGlobals
{
	char m_pad0000[0xc];
	float curtime;
};
extern CMotorGlobals *g_1070b228;
extern float g_104454c4;
float sub_102e1d10(float flSpeed, float flCurrent, float flIdeal, float flScale);

#define OUTER ((CEntityVSlots *)m_pOuter)

// TARGET: CAI_Motor::sub_102e1e20
void CAI_Motor::sub_102e1e20(int yawSpeed)
{
	if (yawSpeed == -1)
		yawSpeed = (int)*(float *)&m_38;
	float current = (unsigned short)(int)(OUTER->slot221()->y * 182.04445f) * 0.0054931640625f;
	float ideal = (unsigned short)(int)(m_34 * 182.04445f) * 0.0054931640625f;
	if (*(float *)&m_2c < g_104454c4)
		*(float *)&m_2c = g_1070b228->curtime - 0.1;
	CMotorGlobals *pGlobals = g_1070b228;
	float newYaw = sub_102e1d10((float)yawSpeed * 10.0, current, ideal, pGlobals->curtime - *(float *)&m_2c);
	*(float *)&m_2c = pGlobals->curtime;
	if (newYaw != current)
	{
		Vector angles = *(Vector *)OUTER->slot221();
		angles.y = newYaw;
		OUTER->slot64(&angles.x);
	}
}
// END FUNCTION

// FUNCTION: 0x102e1f90 size=0x6b
#include "CAI_Motor.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CMotorOuterSlots
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213) PV(214) PV(215) PV(216) PV(217) PV(218) PV(219)
	PV(220)
	virtual float *v221();
};

float sub_1013d580(float flA, float flB);

// TARGET: CAI_Motor::sub_102e1f90
float CAI_Motor::sub_102e1f90()
{
	float flYaw = (float)(unsigned short)(((CMotorOuterSlots *)m_pOuter)->v221()[1] * 182.04445f) * 0.005493164f;
	if ((double)m_34 == flYaw)
		return 0.0f;
	float flIdeal = m_34;
	return sub_1013d580(flIdeal, flYaw);
}
// END FUNCTION

// FUNCTION: 0x102e2020 size=0x68
#include "CAI_Motor.h"

void CAI_Motor::sub_102e2020(const float *pPosition, int b)
{
    float yaw = sub_102e2750(pPosition);
    if (m_28) {
        if (yaw >= 180.0f)
            yaw = yaw - 180.0f;
        else
            yaw = yaw + 180.0f;
    }
    if (m_1c == 0x43340000)
        m_34 = yaw;
    else
        m_34 = sub_102e0a80(yaw);
}
// END FUNCTION

// FUNCTION: 0x102e20b0 size=0x23
#include "CAI_Motor.h"
// TARGET: CAI_Motor::sub_102e20b0
void CAI_Motor::sub_102e20b0(const float *pPosition, float flWeight)
{
    sub_102e1c10(sub_102e2750(pPosition), flWeight);
}
// END FUNCTION

// FUNCTION: 0x102e20f0 size=0x20
#include "CBaseEntity.h"
#include "CAI_Motor.h"

class CUnknown102d9040
{
public:
	void sub_102d8cf0(CBaseEntity *pEnt, float flValue, float duration, float amount);
};

// TARGET: CAI_Motor::vfunc14
void CAI_Motor::vfunc14(CBaseEntity *pEnt, float flValue, float duration, float amount)
{
	((CUnknown102d9040 *)((char *)this + 0x54))->sub_102d8cf0(pEnt, flValue, duration, amount);
}
// END FUNCTION

// FUNCTION: 0x102e2120 size=0x20
#include "CBaseEntity.h"
#include "CAI_Motor.h"

class CUnknown102d9040
{
public:
	void sub_102d8e50(CBaseEntity *pEnt, float flValue, float duration, float amount);
};

// TARGET: CAI_Motor::vfunc13
void CAI_Motor::vfunc13(CBaseEntity *pEnt, float flValue, float duration, float amount)
{
	((CUnknown102d9040 *)((char *)this + 0x54))->sub_102d8e50(pEnt, flValue, duration, amount);
}
// END FUNCTION

// FUNCTION: 0x102e2150 size=0x20
#include "CBaseEntity.h"
#include "CAI_Motor.h"

class CUnknown102d9040
{
public:
	void sub_102d8f20(CBaseEntity *pEnt, const char *pszName, float a, float b, float c);
};

// TARGET: CAI_Motor::vfunc12
void CAI_Motor::vfunc12(CBaseEntity *pEnt, const char *pszName, float a, float b, float c)
{
	((CUnknown102d9040 *)((char *)this + 0x54))->sub_102d8f20(pEnt, pszName, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x102e2180 size=0x1a6
#include "utlrbtree.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include "globalvars.h"

struct CUnknown102d8bc0 { float sub_102d8bc0(); };
struct CUnknown102d8a90 { Vector *sub_102d8a90(); };
struct CAI_InterestTargetUnit : CAI_InterestTarget { bool sub_102d8b50(); };

#define QUEUE (*(CUtlVector<CAI_InterestTarget> *)&m_54)

float CAI_Motor::vfunc15(Vector &vecDir)
{
	float flTotalInterest = 0.0f;
	vecDir.Init(0.0f, 0.0f, 0.0f);
	int i;
	for (i = 0; i < QUEUE.Count(); ) {
		if (!((CAI_InterestTargetUnit *)&QUEUE[i])->sub_102d8b50())
			QUEUE.Remove(i);
		else
			i++;
	}
	for (i = 0; i < QUEUE.Count(); i++) {
		float flInterest = ((CUnknown102d8bc0 *)&QUEUE[i])->sub_102d8bc0();
		CEntityVSlots *pOuter = (CEntityVSlots *)m_pOuter;
		Vector vecTarget = *((CUnknown102d8a90 *)&QUEUE[i])->sub_102d8a90() - *pOuter->slot217();
		VectorNormalize(vecTarget);
		vecDir = vecDir * (1.0f - flInterest) + vecTarget * flInterest;
		flTotalInterest = 1.0f - (1.0f - flTotalInterest) * (1.0f - flInterest);
		VectorNormalize(vecDir);
	}
	return flTotalInterest;
}
// END FUNCTION

// FUNCTION: 0x102e23a0 size=0x177
#include "CAI_Motor.h"
#include "CVProfile.h"
#include <string.h>

struct CAI_MoveRequest { char m_pad[0x30]; int m_nSpecial30; };
__declspec(dllimport) void vtune(bool bEnable);
extern int g_1060e654[];

struct CMoveSinkView {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6();
	virtual void vfunc7(CAI_MoveRequest *pMove, void *pBuf, int nResult, int *pValue);
};

struct CCycleSampleView
{
	unsigned __int64 m_Int64;
	void Sample()
	{
		__asm {
			mov ecx, this
			rdtsc
			mov dword ptr [ecx], eax
			mov dword ptr [ecx + 4], edx
		}
	}
	void End()
	{
		CCycleSampleView now;
		now.m_Int64 = 0;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
};

inline void ProfPopGroup(CVProfile *p)
{
	p->m_nGroupStackDepth--;
	int d = p->m_nGroupStackDepth;
	int cur = p->m_GroupIDStack[d + 1];
	if (p->m_GroupIDStack[d] != cur && p->m_bVTuneGroupsEnabled && cur == p->m_nVTuneGroupID)
		vtune(false);
}

inline bool ProfNodeExit(CVProfNode *n)
{
	if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
		((CCycleSampleView *)&n->m_CurFrameTime)->End();
		n->m_TotalTime += n->m_CurFrameTime.m_Int64;
		ProfPopGroup(g_109f3648);
	}
	return n->m_nRecursions == 0;
}

int CAI_Motor::sub_102e23a0(CAI_MoveRequest *pMove, float flInterval)
{
	g_109f3648->EnterScope("CAI_Motor_MoveNormalExecute", 0, "Unaccounted", false);
	int buf[14];
	memset(buf, 0, sizeof(buf));
	int nResult;
	if (pMove->m_nSpecial30 == 0)
		nResult = vfunc19((int)pMove, (int)buf, *(int *)&flInterval);
	else
		nResult = vfunc20((int)pMove, (int)buf, *(int *)&flInterval);
	int value = g_1060e654[nResult];
	if (value) {
		((CMoveSinkView *)&m_pSinkVtbl)->vfunc7(pMove, buf, nResult, &value);
		m_30 = 0;
	}
	int ret = value;
	CVProfile *p = g_109f3648;
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (ProfNodeExit(n))
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
	return ret;
}
// END FUNCTION

// FUNCTION: 0x102e2580 size=0x6c
#include "CAI_Motor.h"

float sub_102d61b0(int a);

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

namespace block_102e2580 {
#define NPCV(n) virtual void vfunc##n();
#define NPCV10(p) NPCV(p##0) NPCV(p##1) NPCV(p##2) NPCV(p##3) NPCV(p##4) NPCV(p##5) NPCV(p##6) NPCV(p##7) NPCV(p##8) NPCV(p##9)
#define NPCV100(p) NPCV10(p##0) NPCV10(p##1) NPCV10(p##2) NPCV10(p##3) NPCV10(p##4) NPCV10(p##5) NPCV10(p##6) NPCV10(p##7) NPCV10(p##8) NPCV10(p##9)
// the owning NPC's vtable as CAI_Motor::GetIdealSpeed sees it: slot 248 (+0x3e0) is CAI_BaseNPC::GetIdealSpeed
struct CAI_OuterSpeedView {
	NPCV100(0) NPCV100(1) NPCV10(20) NPCV10(21) NPCV10(22) NPCV10(23)
	NPCV(240) NPCV(241) NPCV(242) NPCV(243) NPCV(244) NPCV(245) NPCV(246) NPCV(247)
	virtual float GetIdealSpeed() const;	// slot 248
};
struct CAI_MotorUnit : CAI_Motor {
	CAI_OuterSpeedView *GetOuter() { return (CAI_OuterSpeedView *)m_pOuter; }
	float sub_102e12c0();
};
// CAI_Motor::GetIdealSpeed
float CAI_MotorUnit::sub_102e12c0()
{
	return GetOuter()->GetIdealSpeed();
}
}
using namespace block_102e2580;

// TARGET: CAI_Motor::vfunc17
float CAI_Motor::vfunc17()
{
	float flMoveDist = GetMoveInterval() * ((CAI_MotorUnit *)this)->sub_102e12c0();
	float flMinDist = MAX(vfunc16(), flMoveDist);
	if (flMinDist < sub_102d61b0(GetHullType()))
		flMinDist = sub_102d61b0(GetHullType());
	return flMinDist;
}
// END FUNCTION
