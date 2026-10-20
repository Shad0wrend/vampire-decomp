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

// FUNCTION: 0x1025f1a0 size=0xe
bool CAI_BaseHumanoid::vfunc586()
{
	return m_unk5f94 != 0;
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
