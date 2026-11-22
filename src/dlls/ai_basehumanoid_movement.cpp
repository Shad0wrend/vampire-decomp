// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 4 blocks
#include "vampire.h"

// FUNCTION: 0x10262400 size=0x1e
#include "CAI_HumanoidMotor.h"

// TARGET: CAI_HumanoidMotor::vfunc0
CAI_HumanoidMotor *CAI_HumanoidMotor::vfunc0(unsigned int flags)
{
	sub_10014b32();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10264470 size=0x17b
#include "CAI_HumanoidNavigator.h"
#include "CAI_Navigator.h"
#include "CAI_BaseNPC.h"
#include "CUnknown102e12c0.h"
#include <string.h>

struct HNOwner
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20)
	CAI_NPC_V(210) CAI_NPC_V(211) CAI_NPC_V(212) CAI_NPC_V(213) CAI_NPC_V(214) CAI_NPC_V(215) CAI_NPC_V(216)
	virtual float *vfunc217();
	CAI_NPC_V(218) CAI_NPC_V(219)
	CAI_NPC_V10(22) CAI_NPC_V10(23)
	CAI_NPC_V(240) CAI_NPC_V(241) CAI_NPC_V(242) CAI_NPC_V(243) CAI_NPC_V(244) CAI_NPC_V(245) CAI_NPC_V(246) CAI_NPC_V(247)
	virtual float vfunc248();
	char m_pad04[0x6f0 - 4];
	int m_i6f0;
	char m_pad6f4[0xfec - 0x6f4];
	int m_ifec;
};

struct HNGoalTail
{
	int d[14];
	HNGoalTail() { memset(this, 0, sizeof(*this)); }
};

struct HNGoal
{
	int d[17];
	HNGoalTail tail;
	HNGoal() { memset(this, 0, sizeof(*this)); }
};

#define OWNER ((HNOwner *)nav->m_pOuter)

// TARGET: CAI_HumanoidNavigator::vfunc12
int CAI_HumanoidNavigator::vfunc12(int a)
{
	CAI_Navigator *nav = (CAI_Navigator *)this;
	if (!nav->sub_102efd50())
		return -4;
	int result = -4;
	if (nav->vfunc16(&result))
		return result;
	float flSpeed = OWNER->vfunc248();
	int iAct = OWNER->m_ifec;
	int iSeq = OWNER->m_i6f0;
	Vector vecStart = *(Vector *)OWNER->vfunc217();
	((char *)this)[0x68] = 1;
	((CUnknown102e12c0 *)this)->sub_10264450(nav->sub_102ee3f0());
	HNGoal goal;
	((char *)this)[0x68] = 1;
	nav->vfunc17((CAI_NavGoal *)&goal);
	result = nav->vfunc15(&goal, a);
	if (result == 0 && flSpeed < 0.01)
	{
		if ((*(Vector *)OWNER->vfunc217() - vecStart).Length() < 0.01)
		{
			OWNER->m_i6f0 = iSeq;
			((CUnknown102e12c0 *)this)->sub_10264450(iAct);
		}
	}
	if (result == 0 && !((char *)this)[0x51])
		nav->vfunc6();
	return result;
}
// END FUNCTION

// FUNCTION: 0x10264650 size=0x17
#include "CAI_HumanoidMotor.h"
#include "CAI_Motor.h"

void CAI_HumanoidMotor::vfunc10()
{
	((CAI_Motor *)this)->CAI_Motor::vfunc10();
	if (m_n6c != -1)
		m_n6c = -1;
}
// END FUNCTION

// FUNCTION: 0x10264680 size=0x3ed
#include "CAI_HumanoidMotor.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include "CBaseAnimating.h"
#include "CAI_Navigator.h"
#include "globalvars.h"

extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

#define HV10(a) virtual void v##a##0(); virtual void v##a##1(); virtual void v##a##2(); virtual void v##a##3(); virtual void v##a##4(); \
	virtual void v##a##5(); virtual void v##a##6(); virtual void v##a##7(); virtual void v##a##8(); virtual void v##a##9();
struct HumSpeedView {
	HV10(0) HV10(1) HV10(2) HV10(3) HV10(4) HV10(5) HV10(6) HV10(7) HV10(8) HV10(9)
	HV10(10) HV10(11) HV10(12) HV10(13) HV10(14) HV10(15) HV10(16) HV10(17) HV10(18) HV10(19)
	HV10(20) HV10(21) HV10(22) HV10(23)
	virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3();
	virtual void w4(); virtual void w5(); virtual void w6(); virtual void w7();
	virtual float GetSpeed248();
};

struct HumMoveReq {
	int m_00; int m_04; int m_08;
	Vector m_dir;
	Vector m_vec18;
	int m_24;
	float m_flMax;
	int m_2c; int m_30;
	int m_n34;
	unsigned char m_flags;
	char pad39[0x7c - 0x39];
};
struct HumWp {
	float f00; float f04; float f08; float d0c; float ang10;
	char pad[0x38 - 0x14];
};
struct HumVec {
	HumWp *m_p;
	int m_04; int m_08;
	int m_n;
	int m_10;
};
struct HumOuter : CEntityVSlots {
	char pad4[0x224 - 4];
	unsigned int m_flags224;
	char p2[0x654 - 0x228];
	float m_f654;
	char p3[0x6f0 - 0x658];
	int m_n6f0;
	char p4[0x5d34 - 0x6f4];
	CAI_Navigator *m_pNav;
	char p5[0x6024 - 0x5d38];
	HumVec m_v6024;
	HumVec m_v6038;
	void sub_10262590(int a);
	float sub_10091490(int seq, bool b);
	int GetSequence() { return m_n6f0; }
};
struct HumSink {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual bool s6(HumMoveReq *p);
};
struct HumMotor : CAI_Motor {
	int m_n6c;
	float GetCurSpeed() { return ((Vector *)&m_3c)->Length(); }
	void SetMoveInterval(float f) { m_30 = f; }
};
float sub_10146150(float *v);
float sub_1013d580(float a, float b);
Vector *sub_101d2f40(Vector *pOut, float yaw);

inline float HumAngleDiff(float a, float b) { return sub_1013d580(a, b); }

int CAI_HumanoidMotor::vfunc19(int a, int b, int c)
{
	HumMotor *m = (HumMotor *)this;
	HumMoveReq *pReq = (HumMoveReq *)a;
	((HumOuter *)m->m_pOuter)->sub_10262590(0);
	float flSpeed = sub_10146150(&m->m_3c);
	HumOuter *o;
	{
		float flYaw = ((HumOuter *)m->m_pOuter)->slot219()->y;
		o = (HumOuter *)m->m_pOuter;
		int i;
		for (i = 1; i < o->m_v6024.m_n; i++) {
			if (m->m_30 < o->m_v6024.m_p[i].f04) {
				float t = m->m_30 / o->m_v6024.m_p[i].f04;
				flSpeed = (1.0f - t) * o->m_v6024.m_p[i - 1].d0c + t * o->m_v6024.m_p[i].d0c;
				break;
			}
		}
		for (i = 1; i < o->m_v6038.m_n; i++) {
			if (m->m_30 < o->m_v6038.m_p[i].f04) {
				float t = m->m_30 / o->m_v6038.m_p[i].f04;
				float flDiff = HumAngleDiff(o->m_v6038.m_p[i].ang10, o->m_v6038.m_p[i - 1].ang10);
				HumOuter *o2 = (HumOuter *)m->m_pOuter;
				flYaw = (float)((int)((flDiff * t + o2->m_v6038.m_p[i - 1].ang10) * 182.04445f) & 0xffff) * 0.005493164f;
				if (o2->m_flags224 & 0x1000) {
					Msg("yaw %.2f : %.2f\n", flYaw, o2->slot219()->y);
				}
				break;
			}
		}
		HumMoveReq local = *pReq;
		Vector vTmp;
		local.m_vec18 = *sub_101d2f40(&vTmp, flYaw);
		m->vfunc18((int)&local);
	}
	o = (HumOuter *)m->m_pOuter;
	o->m_f654 = o->sub_10091490(o->GetSequence(), false);
	float flDist = 0.5 * (m->GetCurSpeed() + flSpeed) * m->GetMoveInterval();
	if (m->m_n6c == -1) {
		if (((HumOuter *)m->m_pOuter)->m_pNav->sub_102ee430() == -1) {
			((CBaseAnimating *)m->m_pOuter)->sub_1008dc40(1, -1);
		}
		m->m_n6c = -1;
	}
	m->sub_102e12c0();
	o = (HumOuter *)m->m_pOuter;
	if (o->m_flags224 & 0x1000) {
		Msg("%6.2f : Speed %.1f : %.1f : %.2f\n", gpGlobals->curtime, flSpeed, ((HumSpeedView *)o)->GetSpeed248(), flSpeed / m->sub_102e12c0());
	}
	if (flDist > pReq->m_flMax) {
		if (!(pReq->m_flags & 2)) {
			m->SetMoveInterval((1.0f - pReq->m_flMax / flDist) * m->GetMoveInterval());
		} else {
			m->SetMoveInterval(0);
		}
		flDist = pReq->m_flMax;
	} else {
		m->SetMoveInterval(0);
	}
	*(Vector *)&m->m_3c = pReq->m_dir * flSpeed;
	int r = 1;
	if (flDist > 0.0) {
		Vector vOrigin = *((HumOuter *)m->m_pOuter)->slot220();
		Vector vEnd = vOrigin + pReq->m_dir * flDist;
		r = m->sub_102e0bd0(&vEnd, (CBaseEntity *)pReq->m_n34, (int)0xbf800000, true, true, (AIMoveTrace_t *)b, c);
		if (r == 0)
			m->vfunc10();
	} else if (!((HumSink *)&m->m_pSinkVtbl)->s6(pReq)) {
		r = 0;
	}
	return r;
}
// END FUNCTION
