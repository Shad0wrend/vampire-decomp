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
