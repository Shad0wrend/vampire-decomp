// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1025e450 size=0x6
#include "CAI_BaseHumanoid.h"
#include "datamap.h"
namespace lifted {
extern char g_105c8b78;
}
datamap_t *CAI_BaseHumanoid::vfunc82()
{
    return (datamap_t *)&lifted::g_105c8b78;
}
// END FUNCTION

// FUNCTION: 0x1025e4e0 size=0x1b
#include "CAI_BaseHumanoid.h"
#include "CBaseAnimatingOverlay.h"

float CAI_BaseHumanoid::vfunc250(float a)
{
	m_flags5f4c &= ~3;
	return ((CBaseAnimatingOverlay *)this)->vfunc250(a);
}
// END FUNCTION

// FUNCTION: 0x1025e510 size=0x1e5
#include "CAI_BaseHumanoid.h"
void CAI_BaseHumanoid::vfunc105(void *p)
{
    sub_1000245f(p);
    m_nPose5fb8[0] = sub_10009ac5("body_trans_Y");
    m_nPose5fb8[1] = sub_10009ac5("body_trans_X");
    m_nPose5fb8[2] = sub_10009ac5("body_lift");
    m_nPose5fb8[3] = sub_10009ac5("body_yaw");
    m_nPose5fb8[4] = sub_10009ac5("body_pitch");
    m_nPose5fb8[5] = sub_10009ac5("body_roll");
    m_nPose5fb8[6] = sub_10009ac5("spine_yaw");
    m_nPose5fb8[7] = sub_10009ac5("spine_pitch");
    m_nPose5fb8[8] = sub_10009ac5("spine_roll");
    m_nPose5fb8[9] = sub_10009ac5("neck_trans");
    m_nPose5fe0[0] = sub_10009ac5("head_yaw");
    m_nPose5fe0[1] = sub_10009ac5("head_pitch");
    m_nPose5fe0[2] = sub_10009ac5("head_roll");
    m_nPose5fec[0] = sub_1001337c("move_rightleft");
    m_nPose5fec[1] = sub_1001337c("move_forwardback");
    m_nPose5fec[2] = sub_1001337c("move_updown");
    m_nPose5fec[3] = sub_1001337c("body_rightleft");
    m_nPose5fec[4] = sub_1001337c("body_updown");
    m_nPose5fec[5] = sub_1001337c("body_tilt");
    m_nPose5fec[6] = sub_1001337c("chest_rightleft");
    m_nPose5fec[7] = sub_1001337c("chest_updown");
    m_nPose5fec[8] = sub_1001337c("chest_tilt");
    m_nPose5fec[9] = sub_1001337c("head_forwardback");
    m_nPose5fec[10] = sub_1001337c("head_rightleft");
    m_nPose5fec[11] = sub_1001337c("head_updown");
    m_nPose5fec[12] = sub_1001337c("head_tilt");
}
// END FUNCTION

// FUNCTION: 0x1025e780 size=0x13
#include "CAI_BaseHumanoid.h"
#include "CBaseFlex.h"

// TARGET: CAI_BaseHumanoid::vfunc277
void CAI_BaseHumanoid::vfunc277(const float *v)
{
    unsigned int *flags = (unsigned int *)((char *)this + 0x5f4c);
    *flags = *flags & 0xfffffffe;
    ((CBaseFlex *)this)->sub_100b5b00(v);
}
// END FUNCTION

// FUNCTION: 0x1025e8e0 size=0x28
#include "CAI_BaseHumanoid.h"

// TARGET: CAI_BaseHumanoid::vfunc193
Vector CAI_BaseHumanoid::vfunc193()
{
    sub_10010be5();
    return m_vec5f50;
}
// END FUNCTION

// FUNCTION: 0x1025e920 size=0xa4
#include "CAI_BaseHumanoid.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct CHumanoidSlotView
{
	V100(a) V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8)
	virtual void c0(); virtual void c1(); virtual void c2();
	virtual Vector slot193();
	V100(d) V10(e0) V10(e1) V10(e2) V10(e3) V10(e4) V10(e5) V10(e6)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();
	virtual Vector slot371();
};

char CAI_BaseHumanoid::vfunc587(const Vector &vecPos)
{
	CHumanoidSlotView *pView = (CHumanoidSlotView *)this;
	Vector vecFacing = pView->slot371();
	Vector vecDir = vecPos - pView->slot193();
	VectorNormalize(vecDir);
	return DotProduct(vecDir, vecFacing) > 0.5;
}
// END FUNCTION

// FUNCTION: 0x1025ea00 size=0xb7
#include "CAI_BaseHumanoid.h"
#include <math.h>
#define S1(n) virtual void s##n();
#define S10(p) S1(p##0) S1(p##1) S1(p##2) S1(p##3) S1(p##4) S1(p##5) S1(p##6) S1(p##7) S1(p##8) S1(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CHumanoidSlots588 {
	S100(0) S10(10) S10(11) S10(12) S10(13) S10(14) S10(15) S10(16) S10(17) S10(18)
	S1(190) S1(191) S1(192)
	virtual Vector *slot193(Vector *pOut);
	S1(194) S1(195) S1(196) S1(197) S1(198) S1(199)
	S100(2) S10(30) S10(31) S10(32) S10(33) S10(34) S10(35)
	S1(360) S1(361) S1(362) S1(363) S1(364) S1(365) S1(366) S1(367) S1(368)
	virtual void slot369(Vector *pOut);
};
char CAI_BaseHumanoid::vfunc588(const Vector &vecPos)
{
	CHumanoidSlots588 *p = (CHumanoidSlots588 *)this;
	Vector vecFacing;
	p->slot369(&vecFacing);
	Vector vecEye;
	Vector vecDir = vecPos - *p->slot193(&vecEye);
	VectorNormalize(vecDir);
	return DotProduct(vecDir, vecFacing) > -0.5 && fabs(vecDir.z) < 0.7;
}
// END FUNCTION

// FUNCTION: 0x1025eaf0 size=0x3cc
#define inline __forceinline
#include "Vector.h"
#undef inline
#include "CAI_BaseHumanoid.h"
#include "CAI_BaseNPC.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "VectorHelpers.h"
#include <math.h>

struct CHumanoidPoseView
{
	EVS10(a) EVS10(b) EVS10(c) EVS10(d) EVS10(e) EVS10(f) EVS10(g) EVS10(h) EVS10(i) EVS10(j)
	EVS10(k) EVS10(l) EVS10(m) EVS10(n) EVS10(o) EVS10(p) EVS10(q) EVS10(r) EVS10(s) EVS10(t)
	EVS10(u) EVS10(v) EVS10(w) EVS10(x) EVS10(y) EVS10(z) EVS10(aa) EVS10(ab)
	EVS(ac0)
	virtual float GetFlexWeight(int index);
	EVS10(ba) EVS10(bb) EVS10(bc) EVS10(bd) EVS10(be) EVS10(bf)
	EVS(bg0) EVS(bg1) EVS(bg2) EVS(bg3)
	virtual float SetPoseParameter(int index, float value, int a = 0);
};

struct CAI_BaseActorV : CAI_BaseHumanoid
{
	void SetP(int index, float flValue) { ((CHumanoidPoseView *)this)->SetPoseParameter(index, flValue); }
	float GetP(int index) { return ((CBaseAnimating *)this)->sub_10092190(index); }
	float GetF(int index) { return ((CHumanoidPoseView *)this)->GetFlexWeight(index); }
	float VecToYaw(const Vector &v) { return ((CAI_BaseNPC *)this)->sub_1027db80(&v); }
};

// TARGET: CAI_BaseHumanoid::vfunc537
void CAI_BaseHumanoid::vfunc537(const Vector *pPos, float flInterval)
{
	CAI_BaseActorV *a = (CAI_BaseActorV *)this;
	const Vector &vTargetPos = *pPos;
	float flDiff;

	if (!(((CAI_BaseNPC *)this)->vfunc513() & 0x1000))
	{
		return;
	}

	Vector vEyePosition;
	Vector vEyeAngles;
	sub_10092e20("eyes", &vEyePosition, &vEyeAngles);

	float flDesiredYaw = a->VecToYaw(vTargetPos - vEyePosition) + a->GetF(m_nPose5fec[10]);
	flDiff = sub_1013d580(flDesiredYaw, vEyeAngles.y);
	a->SetP(m_nPose5fe0[0], a->GetP(m_nPose5fe0[0]) + flDiff);

	float flDesiredPitch = sub_101d2ce0(&(vTargetPos - vEyePosition)) + a->GetF(m_nPose5fec[11]);
	flDiff = sub_1013d580(flDesiredPitch, vEyeAngles.x);
	a->SetP(m_nPose5fe0[1], a->GetP(m_nPose5fe0[1]) + flDiff);

	float flDesiredRoll = a->GetF(m_nPose5fec[12]);
	flDiff = sub_1013d580(flDesiredRoll, vEyeAngles.z);
	if (fabs(flDiff) > 10.0)
		flDiff = flDiff;
	a->SetP(m_nPose5fe0[2], a->GetP(m_nPose5fe0[2]) + flDiff);

	a->SetP(m_nPose5fb8[0], a->GetF(m_nPose5fec[0]));
	a->SetP(m_nPose5fb8[1], a->GetF(m_nPose5fec[1]));
	a->SetP(m_nPose5fb8[2], a->GetF(m_nPose5fec[2]));
	a->SetP(m_nPose5fb8[3], a->GetF(m_nPose5fec[3]));
	a->SetP(m_nPose5fb8[4], a->GetF(m_nPose5fec[4]));
	a->SetP(m_nPose5fb8[5], a->GetF(m_nPose5fec[5]));
	a->SetP(m_nPose5fb8[6], a->GetF(m_nPose5fec[6]));
	a->SetP(m_nPose5fb8[7], a->GetF(m_nPose5fec[7]));
	a->SetP(m_nPose5fb8[8], a->GetF(m_nPose5fec[8]));
	a->SetP(m_nPose5fb8[9], a->GetF(m_nPose5fec[9]));

	((CBaseAnimating *)this)->sub_100955c0();
	m_flags5f4c &= ~3;
}
// END FUNCTION

// FUNCTION: 0x1025f040 size=0x44
#include "CAI_BaseHumanoid.h"
#define HV1(p) virtual void p();
#define HV10(p) HV1(p##0) HV1(p##1) HV1(p##2) HV1(p##3) HV1(p##4) HV1(p##5) HV1(p##6) HV1(p##7) HV1(p##8) HV1(p##9)
#define HV100(p) HV10(p##0) HV10(p##1) HV10(p##2) HV10(p##3) HV10(p##4) HV10(p##5) HV10(p##6) HV10(p##7) HV10(p##8) HV10(p##9)
struct CHumanoidSlots373	// vtable view of CAI_BaseHumanoid up to slot 373
{
	HV100(ha) HV100(hb) HV100(hc) HV10(hd0) HV10(hd1) HV10(hd2) HV10(hd3) HV10(hd4) HV10(hd5) HV10(hd6)
	HV1(he0) HV1(he1) HV1(he2)
	virtual Vector vfunc373();
};
Vector CAI_BaseHumanoid::vfunc372()
{
	Vector v = ((CHumanoidSlots373 *)this)->vfunc373();
	v.z = 0;
	VectorNormalize(v);
	return v;
}
// END FUNCTION

// FUNCTION: 0x1025f0b0 size=0x28
#include "CAI_BaseHumanoid.h"

// TARGET: CAI_BaseHumanoid::vfunc373
Vector CAI_BaseHumanoid::vfunc373()
{
    sub_10010be5();
    return m_vec5f5c;
}
// END FUNCTION

// FUNCTION: 0x1025f0f0 size=0x44
#include "CAI_BaseHumanoid.h"

#define HS(n) virtual void n();
#define HS10(p) HS(p##0) HS(p##1) HS(p##2) HS(p##3) HS(p##4) HS(p##5) HS(p##6) HS(p##7) HS(p##8) HS(p##9)

struct CHumanoidSlots
{
	HS10(a0) HS10(a1) HS10(a2) HS10(a3) HS10(a4) HS10(a5) HS10(a6) HS10(a7) HS10(a8) HS10(a9)
	HS10(b0) HS10(b1) HS10(b2) HS10(b3) HS10(b4) HS10(b5) HS10(b6) HS10(b7) HS10(b8) HS10(b9)
	HS10(c0) HS10(c1) HS10(c2) HS10(c3) HS10(c4) HS10(c5) HS10(c6) HS10(c7) HS10(c8) HS10(c9)
	HS10(d0) HS10(d1) HS10(d2) HS10(d3) HS10(d4) HS10(d5) HS10(d6)
	HS(e0)
	virtual Vector slot371();
};

Vector CAI_BaseHumanoid::vfunc370()
{
	Vector dir = ((CHumanoidSlots *)this)->slot371();
	dir.z = 0;
	VectorNormalize(dir);
	return dir;
}
// END FUNCTION

// FUNCTION: 0x1025f160 size=0x28
#include "CAI_BaseHumanoid.h"

// TARGET: CAI_BaseHumanoid::vfunc371
Vector CAI_BaseHumanoid::vfunc371()
{
    sub_10010be5();
    return m_vec5f68;
}
// END FUNCTION

// FUNCTION: 0x1025f1a0 size=0xe
#include "CAI_BaseHumanoid.h"
bool CAI_BaseHumanoid::vfunc586()
{
	return m_unk5f94 != 0;
}
// END FUNCTION

// FUNCTION: 0x1025f1c0 size=0x472
#include "CAI_BaseHumanoid.h"
#include "CAI_Navigator.h"
#include "CBaseEntity.h"
#include "Vector.h"
// TARGET: CAI_BaseHumanoid::vfunc585
#include "CUnknown101cccf0.h"

#define HVS(n) virtual void hs_##n();
#define HVS10(p) HVS(p##a) HVS(p##b) HVS(p##c) HVS(p##d) HVS(p##e) HVS(p##f) HVS(p##g) HVS(p##h) HVS(p##i) HVS(p##j)

struct CHumanoidUnitVtbl
{
	HVS10(0) HVS10(10) HVS10(20) HVS10(30) HVS10(40) HVS10(50) HVS10(60) HVS10(70) HVS10(80) HVS10(90)
	HVS10(100) HVS10(110) HVS10(120) HVS10(130) HVS10(140)
	HVS(150) HVS(151) HVS(152)
	virtual int hs153();
	HVS(154) HVS(155) HVS(156) HVS(157) HVS(158) HVS(159)
	HVS(160) HVS(161) HVS(162)
	virtual char hs163();
	HVS(164) HVS(165) HVS(166)
	virtual void *hs167();
	HVS(168) HVS(169)
	HVS10(170) HVS10(180)
	HVS(190) HVS(191) HVS(192)
	virtual Vector *hs193(Vector *pOut);
	HVS(194) HVS(195) HVS(196) HVS(197) HVS(198) HVS(199)
	HVS(200)
	virtual char hs201(void *pEnt, int a, int *pOut, int d);
	HVS(202) HVS(203) HVS(204) HVS(205) HVS(206) HVS(207) HVS(208) HVS(209)
	HVS(210) HVS(211) HVS(212) HVS(213) HVS(214) HVS(215) HVS(216)
	virtual Vector *hs217();
	HVS(218) HVS(219)
	virtual Vector *hs220();
	HVS(221) HVS(222) HVS(223) HVS(224) HVS(225) HVS(226) HVS(227) HVS(228) HVS(229)
	HVS10(230) HVS10(240) HVS10(250) HVS10(260) HVS10(270) HVS10(280)
	HVS10(290)
	HVS10(300) HVS10(310) HVS10(320) HVS10(330) HVS10(340) HVS10(350) HVS10(360) HVS10(370) HVS10(380) HVS10(390)
	HVS10(400) HVS10(410) HVS10(420) HVS10(430) HVS10(440) HVS10(450)
	HVS(460) HVS(461) HVS(462) HVS(463)
	virtual int hs464();
	HVS(465) HVS(466) HVS(467) HVS(468) HVS(469)
	HVS10(470) HVS10(480) HVS10(490) HVS10(500) HVS10(510) HVS10(520)
	HVS(530) HVS(531) HVS(532) HVS(533) HVS(534)
	virtual void hs535(const Vector *pPos, float a, float b, float c);
	virtual void hs536(void *pEnt, float a, float b, float c);
	HVS(537) HVS(538) HVS(539)
	HVS10(540) HVS10(550) HVS10(560) HVS10(570)
	HVS(580) HVS(581) HVS(582) HVS(583) HVS(584) HVS(585) HVS(586) HVS(587)
	virtual char hs588(const Vector *pVec);
	HVS(589)
};

char __fastcall sub_102ee680(void *pNav);

#define NAV ((CAI_Navigator *)*(void **)((char *)this + 0x5d34))

void CAI_BaseHumanoid::vfunc585(char bFlag, float flMin, float flMax)
{
	CHumanoidUnitVtbl *pThis = (CHumanoidUnitVtbl *)this;
	float flR1 = enginerandom->vfunc1(flMin, flMax);
	float flR2 = enginerandom->vfunc1(0.3f, 0.5f);
	float flR3 = enginerandom->vfunc1(0.2f, 0.4f);

	CBaseEntity *pTarget = (CBaseEntity *)pThis->hs167();
	if (pTarget != 0)
	{
		if (pThis->hs201(pTarget, 0x2804091, 0, 0) || enginerandom->vfunc2(0, 3) == 0)
		{
			Vector vec;
			if (pThis->hs588(((CHumanoidUnitVtbl *)pTarget)->hs193(&vec)))
			{
				flR2 = enginerandom->vfunc1(0.7f, 1.0f);
				pThis->hs536(pTarget, flR2, flR1, 0.0f);
				return;
			}
		}
		flR1 = enginerandom->vfunc1(0.5f, 0.8f);
		flR3 = 0.2f;
	}

	if (NAV->sub_102ee6a0() && sub_102ee680(NAV) && enginerandom->vfunc2(1, 10) <= 3)
	{
		Vector vecGoal;
		if (NAV->sub_102ee6d0(&vecGoal, 144.0f))
		{
			Vector *pOrigin = pThis->hs220();
			Vector vecDelta;
			vecDelta = vecGoal - *pOrigin;
			if (FastSqrt(vecDelta.x * vecDelta.x + (vecDelta.y * vecDelta.y + vecDelta.z * vecDelta.z)) > 96.0)
			{
				int nRoll = enginerandom->vfunc2(1, 10);
				if (nRoll <= 5)
				{
					pThis->hs535(&vecGoal, flR2, enginerandom->vfunc1(0.2f, 0.4f), 0.0f);
					return;
				}
				pThis->hs536(this, flR2, enginerandom->vfunc1(1.0f, 2.0f), 0.0f);
				return;
			}
		}
	}

	if (pThis->hs464() == 2 && enginerandom->vfunc2(1, 10) <= 8)
	{
		pThis->hs536(this, flR2, flR1, flR3);
		return;
	}

	CBaseEntity *pBest = 0;
	int nBest = 0;
	CUnknown101cccf0 q;
	q.sub_101cccf0((int)pThis->hs217(), 0x44800000, 0, 0);
	for (CBaseEntity *pEnt; (pEnt = q.sub_101ccd40()) != 0; q.m_nIndex++)
	{
		if (pEnt == (CBaseEntity *)this)
			continue;
		if (bFlag && (pEnt->sub_100b3700() & 0x80))
			continue;
		if (pEnt->sub_100b3700() & 0x80)
		{
			if (((CHumanoidUnitVtbl *)pEnt)->hs153() != 0 || enginerandom->vfunc2(0, 2) == 0)
			{
				if (pThis->hs201(pEnt, 0x2804091, 0, 0))
				{
					Vector vec;
					if (pThis->hs588(((CHumanoidUnitVtbl *)pEnt)->hs193(&vec)))
					{
						pBest = pEnt;
						break;
					}
				}
			}
		}
		if (((CHumanoidUnitVtbl *)pEnt)->hs163())
		{
			Vector vecThis, vecEnt;
			Vector *pVecThis = pThis->hs193(&vecThis);
			Vector *pVecEnt = ((CHumanoidUnitVtbl *)pEnt)->hs193(&vecEnt);
			Vector vecDir = *pVecEnt - *pVecThis;
			VectorNormalize(vecDir);
			int nScore = enginerandom->vfunc2(1, 100);
			if (*(void **)((char *)pEnt + 0x94) != 0)
			{
				nScore *= 10;
				if (((CHumanoidUnitVtbl *)pEnt)->hs153() != 0)
					nScore *= 10;
			}
			if (nScore > nBest)
			{
				if (pThis->hs201(pEnt, 0x2804091, 0, 0))
				{
					Vector vec;
					if (pThis->hs588(((CHumanoidUnitVtbl *)pEnt)->hs193(&vec)))
					{
						nBest = nScore;
						pBest = pEnt;
					}
				}
			}
		}
	}

	if (pBest != 0)
		pThis->hs536(pBest, flR2, flR1, flR3);
}
// END FUNCTION

// FUNCTION: 0x1025f760 size=0x125
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CAI_BaseHumanoid.h"
#include "CBaseEntity.h"
#include "CUtlVector36.h"
#include "CGlobalEntityList.h"
#include <string.h>

extern CGlobalEntityList *g_10566458;

struct SLookHandle
{
	unsigned int m_Index;
	void Set(CBaseEntity *pEnt)
	{
		if (pEnt)
			m_Index = *pEnt->vfunc1();
		else
			m_Index = 0xffffffff;
	}
};

struct SLookItem	// 36 bytes
{
	int m_n00;
	SLookHandle m_hTarget;	// 0x04
	char m_pad08[0x14 - 8];
	float m_flStartTime;	// 0x14
	float m_flEndTime;	// 0x18
	float m_flRate;	// 0x1c
	float m_flWeight;	// 0x20

	void sub_10260980();	// the element constructor (stub 0x1000d2fb)
};

struct CLookQueue : CUtlVector36
{
	void sub_10260930(int elem, int num);	// ShiftElementsRight (stub 0x100090e3)

	int Count() const { return m_size; }
	SLookItem &Element(int i) { return ((SLookItem *)m_pMemory)[i]; }
	void Remove(int elem)
	{
		int numToMove = m_size - elem - 1;
		if (numToMove > 0)
			memmove(&Element(elem), &Element(elem + 1), numToMove * sizeof(SLookItem));
		m_size--;
	}
	int AddToTail()
	{
		int elem = m_size;
		sub_10260870(1);
		sub_10260930(elem, 1);
		SLookItem *p = &Element(elem);
		if (p)
			p->sub_10260980();
		return elem;
	}
};

struct CAI_BaseHumanoidUnit : CAI_BaseHumanoid
{
	void sub_1025f760(CBaseEntity *pTarget, float flWeight, float flDuration, float flRamp);
};

#define LOOKQ ((CLookQueue *)((char *)this + 0x5f88))

inline CBaseEntity *LookupHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *pInfo = &g_10566458->m_Slots[h & 0x1fff];
		if (pInfo->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)pInfo->m_pEntity;
	}
	return 0;
}

void CAI_BaseHumanoidUnit::sub_1025f760(CBaseEntity *pTarget, float flWeight, float flDuration, float flRamp)
{
	for (int i = 0; i < LOOKQ->Count(); i++) {
		if (LookupHandle(LOOKQ->Element(i).m_hTarget.m_Index) == pTarget) {
			LOOKQ->Remove(i);
			break;
		}
	}
	int iNew = LOOKQ->AddToTail();
	LOOKQ->Element(iNew).m_n00 = 0;
	LOOKQ->Element(iNew).m_hTarget.Set(pTarget);
	LOOKQ->Element(iNew).m_flWeight = flWeight;
	LOOKQ->Element(iNew).m_flStartTime = gpGlobals->curtime;
	LOOKQ->Element(iNew).m_flEndTime = flDuration + gpGlobals->curtime;
	LOOKQ->Element(iNew).m_flRate = flRamp / flDuration;
}
// END FUNCTION

// FUNCTION: 0x1025f8e0 size=0x113
#include "utlrbtree.h"
#include "CAI_BaseHumanoid.h"
#include "CHumanoidRec.h"
#include "utlvector.h"

struct CAI_BaseHumanoidUnit : CAI_BaseHumanoid
{
	void sub_1025f8e0(const Vector *pPos, float flValue, float flDuration, float flAmount);
};

#define HLIST ((CUtlVector<CHumanoidRec> *)((char *)this + 0x5f88))

// TARGET: CAI_BaseHumanoidUnit::sub_1025f8e0
void CAI_BaseHumanoidUnit::sub_1025f8e0(const Vector *pPos, float flValue, float flDuration, float flAmount)
{
	for (int i = 0; i < HLIST->Count(); i++) {
		if (HLIST->Element(i).m_vecPos == *pPos) {
			HLIST->Remove(i);
			break;
		}
	}
	int idx = HLIST->AddToTail();
	HLIST->Element(idx).m_n0 = 1;
	HLIST->Element(idx).m_vecPos = *pPos;
	HLIST->Element(idx).m_flValue = flValue;
	HLIST->Element(idx).m_flStart = gpGlobals->curtime;
	HLIST->Element(idx).m_flEnd = gpGlobals->curtime + flDuration;
	HLIST->Element(idx).m_flRate = flAmount / flDuration;
}
// END FUNCTION

// FUNCTION: 0x1025fa50 size=0x8b2
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
#include "utlrbtree.h"
// TARGET: CAI_BaseHumanoid::vfunc333
#include "CAI_BaseHumanoid.h"
#include "CHumanoidRec.h"
#include "ConVar.h"
#include "utlvector.h"

extern "C" int __cdecl _strcmpi(const char *s1, const char *s2);
float sub_10084b40(void *pActor, const char *pszScene, EHANDLE *phScene);
void sub_10138a90(const Vector &forward, Vector &right, Vector &up);
CBaseEntity *sub_101cd9e0(int index);
extern ConVar g_1090fc98;	// flex_maxplayertime
extern ConVar g_1090fc08;	// flex_minplayertime

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// Vector::operator- with its VectorSubtract expanded: in this big function VC6 refuses to inline Vector.h's
// plain-inline VectorSubtract (it calls it), while the game expanded it here; making VectorSubtract __forceinline
// in Vector.h breaks 8 matched functions.
__forceinline Vector VecSub333(const Vector &a, const Vector &b)
{
	Vector res;
	res.x = a.x - b.x;
	res.y = a.y - b.y;
	res.z = a.z - b.z;
	return res;
}

#define HV(n) virtual void hv##n();
#define HV10(p) HV(p##0) HV(p##1) HV(p##2) HV(p##3) HV(p##4) HV(p##5) HV(p##6) HV(p##7) HV(p##8) HV(p##9)

struct Humanoid333
{
	HV10(0) HV10(1) HV10(2) HV10(3) HV10(4) HV10(5) HV10(6) HV10(7) HV10(8) HV10(9)
	HV10(10) HV10(11) HV10(12) HV10(13) HV10(14) HV10(15) HV10(16) HV10(17) HV10(18)
	HV(190) HV(191) HV(192)
	virtual Vector EyePosition();	// 193
	HV(194) HV(195) HV(196) HV(197) HV(198) HV(199)
	HV10(20) HV10(21) HV10(22) HV10(23) HV10(24) HV10(25) HV10(26)
	HV(270) HV(271) HV(272) HV(273) HV(274) HV(275) HV(276)
	virtual void SetViewtarget(const Vector &v);	// 277
	virtual const Vector &GetViewtarget();	// 278
	HV(279) HV(280) HV(281) HV(282)
	virtual void ProcessExpressions();	// 283
	HV(284) HV(285) HV(286) HV(287) HV(288) HV(289)
	HV10(29) HV10(30) HV10(31) HV10(32) HV10(33) HV10(34) HV10(35) HV10(36)
	HV(370)
	virtual Vector HeadDirection3D();	// 371
	HV(372) HV(373) HV(374) HV(375) HV(376) HV(377) HV(378) HV(379)
	HV10(38) HV10(39) HV10(40) HV10(41) HV10(42) HV10(43) HV10(44) HV10(45)
	HV(460) HV(461) HV(462) HV(463)
	virtual int GetState();	// 464
	HV(465) HV(466) HV(467) HV(468) HV(469)
	HV10(47) HV10(48) HV10(49) HV10(50) HV10(51) HV10(52)
	HV(530) HV(531) HV(532) HV(533) HV(534) HV(535)
	virtual void AddLookTarget(CBaseEntity *pTarget, float flImportance, float flDuration, float flRamp);	// 536
	virtual void SetHeadDirection(const Vector &vTarget, float flInterval);	// 537
	HV(538) HV(539)
	HV10(54) HV10(55) HV10(56) HV10(57)
	HV(580) HV(581) HV(582) HV(583) HV(584)
	virtual void PickRandomLookTarget(bool bExcludePlayers, float minTime, float maxTime);	// 585
	virtual bool HasActiveLookTargets();	// 586
	virtual bool ValidEyeTarget(const Vector &lookTargetPos);	// 587

	char m_pad0004[0x11c - 4];
	const char *m_iClassname;	// 0x11c
	char m_pad0120[0x854 - 0x120];
	int m_blinktoggle;	// 0x854
	char m_pad0858[0x5f74 - 0x858];
	Vector m_goalHeadDirection;	// 0x5f74
	float m_flBlinktime;	// 0x5f80
	int m_n5f84;	// 0x5f84
	CUtlVector<CHumanoidRec> m_lookQueue;	// 0x5f88
	const char *m_iszExpressionScene;	// 0x5f9c
	EHANDLE m_hExpressionSceneEnt;	// 0x5fa0
};

struct LookTarget333 : CHumanoidRec
{
	bool IsThis(void *pThis) { return (pThis == ((EHANDLE *)&m_n4)->Get()); }
	const Vector &GetPosition()
	{
		if (m_n0 == 0 && ((EHANDLE *)&m_n4)->Get() != 0)
		{
			m_vecPos = ((Humanoid333 *)((EHANDLE *)&m_n4)->Get())->EyePosition();
		}
		return m_vecPos;
	}
	bool IsActive()
	{
		if (m_flEnd < gpGlobals->curtime)
			return false;
		if (m_n0 == 0 && ((EHANDLE *)&m_n4)->Get() == 0)
			return false;
		return true;
	}
	float Interest()
	{
		float t = (gpGlobals->curtime - m_flStart) / (m_flEnd - m_flStart);
		if (t < 0.0f || t > 1.0f)
			return 0.0f;
		if (t < m_flRate)
			t = t / m_flRate;
		else if (t > 1 - m_flRate)
			t = (1.0 - t) / m_flRate;
		else
			t = 1.0f;
		return (3 * t * t - 2 * t * t * t) * m_flValue;
	}
};

#define LOOK(i) ((LookTarget333 &)self->m_lookQueue[i])

void CAI_BaseHumanoid::vfunc333(float flInterval)
{
	Humanoid333 *self = (Humanoid333 *)this;
	int i;

	if (self->m_iszExpressionScene != 0 && self->m_hExpressionSceneEnt == 0)
	{
		sub_10084b40(this, STRINGR(self->m_iszExpressionScene), &self->m_hExpressionSceneEnt);
	}

	self->ProcessExpressions();

	Vector vEyePosition = self->EyePosition();

	sub_1025efc0();

	Vector vHead = self->HeadDirection3D();

	for (i = 0; i < self->m_lookQueue.Count();)
	{
		if (!LOOK(i).IsActive())
		{
			self->m_lookQueue.Remove(i);
		}
		else
		{
			i++;
		}
	}

	bool fIsCycler = _strcmpi(STRINGR(self->m_iClassname), "cycler_actor") == 0;
	if (!self->HasActiveLookTargets() && (self->GetState() != 4 || fIsCycler))
	{
		if (fIsCycler)
		{
			self->AddLookTarget(sub_101cd9e0(1), 0.5f, enginerandom->vfunc1(g_1090fc08.GetFloat(), g_1090fc98.GetFloat()), 0);
		}
		else
		{
			self->PickRandomLookTarget(false, 1.5f, 2.5f);
		}
	}

	bool bValidHeadTarget = false;
	for (i = 0; i < self->m_lookQueue.Count();)
	{
		if (LOOK(i).IsThis(this))
		{
			i++;
		}
		else
		{
			float flInterest = LOOK(i).Interest();
			Vector tmp = VecSub333(LOOK(i).GetPosition(), vEyePosition);
			VectorNormalize(tmp);
			if (DotProduct(tmp, self->HeadDirection3D()) >= -0.5)
			{
				vHead = vHead * (1 - flInterest) + tmp * flInterest;
				bValidHeadTarget = true;
			}
			i++;
		}
	}

	if (bValidHeadTarget)
	{
		self->SetHeadDirection(vEyePosition + vHead * 100, flInterval);
		self->m_goalHeadDirection = vHead;
	}
	else
	{
		self->m_goalHeadDirection = self->m_goalHeadDirection * 0.8f + vHead * 0.2f;
		VectorNormalize(self->m_goalHeadDirection);
		self->SetHeadDirection(vEyePosition + self->m_goalHeadDirection * 100, flInterval);
	}

	bool bFoundTarget = false;
	for (i = self->m_lookQueue.Count() - 1; i >= 0; i--)
	{
		if (LOOK(i).IsThis(this))
		{
			bFoundTarget = true;
			self->SetViewtarget(vEyePosition + vHead * 100);
			break;
		}
		else
		{
			if (self->ValidEyeTarget(LOOK(i).GetPosition()))
			{
				bFoundTarget = true;
				self->SetViewtarget(LOOK(i).GetPosition());
				break;
			}
		}
	}

	if (!bFoundTarget && !self->ValidEyeTarget(self->GetViewtarget()))
	{
		Vector right, up;
		sub_10138a90(self->HeadDirection3D(), right, up);
		self->SetViewtarget(self->EyePosition() + self->HeadDirection3D() * 128 + right * enginerandom->vfunc1(-32, 32) + up * enginerandom->vfunc1(-16, 16));
	}

	if (self->m_flBlinktime < gpGlobals->curtime)
	{
		self->m_blinktoggle = !self->m_blinktoggle;
		self->m_flBlinktime = gpGlobals->curtime + enginerandom->vfunc1(1.5, 4.5);
	}
}
// END FUNCTION

// FUNCTION: 0x10260540 size=0xb8
#include "CAI_BaseHumanoid.h"

extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct HumNames { const char *m_pOverride; const char *m_p1; const char *m_p3; const char *m_p2; const char *m_p5; };

const char *CAI_BaseHumanoid::vfunc589(int type)
{
	HumNames *n = (HumNames *)((char *)this + 0x5fa4);
	if (n->m_pOverride != 0 && type != 7)
		return STRINGR(((HumNames *)((char *)this + 0x5fa4))->m_pOverride);

	switch (type) {
	case 1:
		if (n->m_p1)
			return STRINGR(n->m_p1);
		break;
	case 2:
		if (n->m_p2)
			return STRINGR(n->m_p2);
		break;
	case 3:
		if (n->m_p3)
			return STRINGR(n->m_p3);
		break;
	case 5:
	case 7:
		if (n->m_p5)
			return STRINGR(n->m_p5);
		break;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10260630 size=0x2b
#include "CAI_BaseHumanoid.h"
#include "CAI_BaseNPC.h"

class CHumanoidSlot589 : public CAI_BaseNPC
{
public:
	virtual void s569();
	virtual void s570();
	virtual void s571();
	virtual void s572();
	virtual void s573();
	virtual void s574();
	virtual void s575();
	virtual void s576();
	virtual void s577();
	virtual void s578();
	virtual void s579();
	virtual void s580();
	virtual void s581();
	virtual void s582();
	virtual void s583();
	virtual void s584();
	virtual void s585();
	virtual void s586();
	virtual void s587();
	virtual void s588();
	virtual const char *s589(int type);
};

// TARGET: CAI_BaseHumanoid::vfunc463
void CAI_BaseHumanoid::vfunc463(int a, int b)
{
	sub_10260670(((CHumanoidSlot589 *)this)->s589(b));
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc463(a, b);
}
// END FUNCTION

// FUNCTION: 0x10260de0 size=0x10e
#include "CAI_BaseHumanoid.h"
#include "UtlMem.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
void sub_100aa7b0(void *p);

struct HumanoidVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
};

// TARGET: CAI_BaseHumanoid::vfunc5
CAI_BaseHumanoid *CAI_BaseHumanoid::vfunc5(unsigned int flags)
{
	HumanoidVec *pA = (HumanoidVec *)((char *)this + 0x6038);
	HumanoidVec *pB = (HumanoidVec *)((char *)this + 0x6024);
	HumanoidVec *pC = (HumanoidVec *)((char *)this + 0x5f88);

	pA->m_size = 0;
	((UtlMem *)pA)->sub_10264330();
	pA->m_pElements = pA->m_pMemory;
	if (pA->m_growSize != -1)
	{
		if (pA->m_pMemory)
		{
			Plat_Free(pA->m_pMemory);
			pA->m_pMemory = 0;
		}
		pA->m_allocationCount = 0;
	}

	pB->m_size = 0;
	if (pB->m_growSize != -1)
	{
		if (pB->m_pMemory)
		{
			Plat_Free(pB->m_pMemory);
			pB->m_pMemory = 0;
		}
		pB->m_allocationCount = 0;
	}
	pB->m_pElements = pB->m_pMemory;
	if (pB->m_growSize != -1)
	{
		if (pB->m_pMemory)
		{
			Plat_Free(pB->m_pMemory);
			pB->m_pMemory = 0;
		}
		pB->m_allocationCount = 0;
	}

	pC->m_size = 0;
	if (pC->m_growSize != -1)
	{
		if (pC->m_pMemory)
		{
			Plat_Free(pC->m_pMemory);
			pC->m_pMemory = 0;
		}
		pC->m_allocationCount = 0;
	}
	pC->m_pElements = pC->m_pMemory;
	if (pC->m_growSize != -1)
	{
		if (pC->m_pMemory)
		{
			Plat_Free(pC->m_pMemory);
			pC->m_pMemory = 0;
		}
		pC->m_allocationCount = 0;
	}

	sub_1000aa51();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10260f40 size=0x3a
#include "CAI_BaseHumanoid.h"
#include "CAI_HumanoidMotor.h"
#include "CAI_Motor.h"
extern char vt_1049939c[];
extern char vt_10499370[];

// TARGET: CAI_BaseHumanoid::vfunc427
CAI_HumanoidMotor *CAI_BaseHumanoid::vfunc427()
{
    char *p = (char *)operator new(0x70);
    if (p != 0) {
        ((CAI_Motor *)p)->sub_102e0900((int)this);
        *(int *)p = (int)vt_1049939c;
        *(int *)(p + 0x10) = (int)vt_10499370;
        *(int *)(p + 0x6c) = -1;
        return (CAI_HumanoidMotor *)p;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10262430 size=0x37
// TARGET: CAI_BaseHumanoid::vfunc429
#include "CAI_BaseHumanoid.h"
#include "CAI_Navigator.h"

extern char vt_10499444[];
extern char vt_10499418[];

struct CAI_NavInitView
{
    void sub_100106d1(int pOuter);
};

CAI_Navigator *CAI_BaseHumanoid::vfunc429()
{
    char *p = (char *)operator new(0x6c);
    if (p != 0) {
        ((CAI_NavInitView *)p)->sub_100106d1((int)this);
        *(int *)p = (int)vt_10499444;
        *(int *)(p + 0x10) = (int)vt_10499418;
        *(p + 0x68) = 0;
        return (CAI_Navigator *)p;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102624b0 size=0x74
#include "CAI_BaseHumanoid.h"

extern float g_10463584;
extern float g_104492a4;
extern float g_1049949c;

float CAI_BaseHumanoid::vfunc516()
{
    switch (m_state0fec) {
    case 59:
    case 60:
        return g_104492a4;
    case 9:
    case 18:
    case 19:
        return g_10463584;
    default:
        return g_1049949c;
    }
}
// END FUNCTION

// FUNCTION: 0x10262570 size=0x5
#include "CAI_BaseHumanoid.h"
#include "CAI_BaseNPC.h"

// TARGET: CAI_BaseHumanoid::vfunc444
// the game's 0x10262570: a tail call (jmp) of CAI_BaseNPC::vfunc444
void CAI_BaseHumanoid::vfunc444(void *a0)
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc444(a0);
}
// END FUNCTION
