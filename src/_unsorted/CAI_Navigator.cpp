// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ecb20 size=0x1e
#include "CAI_Navigator.h"

// TARGET: CAI_Navigator::vfunc0
CAI_Navigator *CAI_Navigator::vfunc0(unsigned int flags)
{
	sub_10011c98();
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
