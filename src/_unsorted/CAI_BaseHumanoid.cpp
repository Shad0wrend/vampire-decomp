// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1025e780 size=0x13
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

// FUNCTION: 0x1025f0b0 size=0x28
#include "CAI_BaseHumanoid.h"

// TARGET: CAI_BaseHumanoid::vfunc373
Vector CAI_BaseHumanoid::vfunc373()
{
    sub_10010be5();
    return m_vec5f5c;
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
bool CAI_BaseHumanoid::vfunc586()
{
	return m_unk5f94 != 0;
}
// END FUNCTION

// FUNCTION: 0x1025f760 size=0x125
#include "CAI_BaseHumanoid.h"
#include "CBaseEntity.h"
#include "CUtlVector36.h"
#include "CGlobalEntityList.h"
#include <string.h>

extern CGlobalEntityList *g_10566458;
struct SGlobalVars { char pad[0xc]; float curtime; };
extern SGlobalVars *g_1070b228;

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
	LOOKQ->Element(iNew).m_flStartTime = g_1070b228->curtime;
	LOOKQ->Element(iNew).m_flEndTime = flDuration + g_1070b228->curtime;
	LOOKQ->Element(iNew).m_flRate = flRamp / flDuration;
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
