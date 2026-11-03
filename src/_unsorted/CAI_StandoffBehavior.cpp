// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c72f0 size=0x6
#include "CAI_StandoffBehavior.h"
namespace lifted {
extern char g_10925398;
}
int CAI_StandoffBehavior::vfunc6()
{
    return (int)&lifted::g_10925398;
}
// END FUNCTION

// FUNCTION: 0x102c7310 size=0x6
#include "CAI_StandoffBehavior.h"
namespace lifted {
extern int g_1060187c;
}
int CAI_StandoffBehavior::vfunc19()
{
    return lifted::g_1060187c;
}
// END FUNCTION

// FUNCTION: 0x102c7330 size=0x20
#include "CAI_Component.h"

struct DummyComponent : CAI_Component
{
	void vfunc1() {}
	void vfunc2(int a) {}
};

DummyComponent g_dummyComp;
// TARGET: ??_GCAI_Component@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x102c73f0 size=0x1
#include "CAI_StandoffBehavior.h"
void CAI_StandoffBehavior::vfunc8()
{
}
// END FUNCTION

// FUNCTION: 0x102c7530 size=0x64
#include "CAI_StandoffBehavior.h"

void CAI_StandoffBehavior::vfunc5()
{
	CAI_StandoffBehaviorOuter *pOuter = m_pOuter;
	if (pOuter->m_pHintNode) {
		if (pOuter->m_pHintNode->sub_102d14c0()) {
			if (m_pOuter->m_pHintNode->sub_102d1450(m_pOuter)) {
				m_pOuter->m_pHintNode->sub_102d1420(0);
			}
		}
	}
	m_pOuter->m_pHintNode = 0;
	m_pOuter->m_unk5de4 = m_savedUnk50;
	m_pOuter->m_unk1fc = 2;
}
// END FUNCTION

// FUNCTION: 0x102c75c0 size=0x2f
#include "CAI_StandoffBehavior.h"
#include "CAI_BaseNPC.h"

extern float *g_1070b228;

// TARGET: CAI_StandoffBehavior::vfunc10
void CAI_StandoffBehavior::vfunc10()
{
	if (m_b54)
	{
		CAI_BaseNPC *&pNpc = *(CAI_BaseNPC **)&m_pOuter;
		m_fl64 = m_fl68 + g_1070b228[3];
		pNpc->sub_10279a50(0);
	}
	sub_102c6db0();
	m_b54 = 0;
}
// END FUNCTION

// FUNCTION: 0x102c7960 size=0x2f
// TARGET: CAI_StandoffBehavior::vfunc20
#include "CAI_StandoffBehavior.h"

void CAI_StandoffBehavior::vfunc20() {
    CAI_StandoffBehaviorOuter *pOuter = m_pOuter;
    if (pOuter->m_unk5c38 != 0) {
        if (pOuter->m_unk5c38 == pOuter->sub_102cc1f0(0x17)) {
            m_pOuter->sub_10269f30(0x54);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x102c79a0 size=0x2f
// TARGET: CAI_StandoffBehavior::vfunc21
#include "CAI_StandoffBehavior.h"

void CAI_StandoffBehavior::vfunc21() {
    CAI_StandoffBehaviorOuter *pOuter = m_pOuter;
    if (pOuter->m_unk5c38 != 0) {
        if (pOuter->m_unk5c38 == pOuter->sub_102cc1f0(0x17)) {
            m_pOuter->sub_10269f30(0x54);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x102c7dd0 size=0x29
#include "CAI_StandoffBehavior.h"

// TARGET: CAI_StandoffBehavior::vfunc26
void CAI_StandoffBehavior::vfunc26(int a, int b)
{
    if (m_n20 > 0)
    {
        m_fl5c = 5.0f;
        m_n60 = 0;
        m_fl58 = -1.0f;
    }
    if (*(volatile int *)&m_n20 == 2)
        m_unk4c = 1;
}
// END FUNCTION

// FUNCTION: 0x102c7ef0 size=0x6
// TARGET: sub_102c7ef0
extern unsigned char g_10601874;
unsigned char __cdecl sub_102c7ef0(void) { return g_10601874; }
// END FUNCTION
