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

// FUNCTION: 0x102c7600 size=0x28f
#include "CAI_Hint.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct COuterSlots
{
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15)
	SV(160) SV(161) SV(162) SV(163) SV(164) SV(165) SV(166)
	virtual int vfunc167();
};

struct CStandoffNodeView
{
	char pad0[0x9c];
	float m_fl9c;
};

struct CStandoffOuter
{
	char pad0[0x5cc0];
	int m_n5cc0;
	char pad1[0x5ddc - 0x5cc4];
	CAI_Hint *m_pHintNode;
	char sub_10269aa0(int a);
};

struct CStandoffSelf
{
	char pad0000[4];
	CStandoffOuter *m_pOuter;
	char pad0008[0x1c - 8];
	int m_nState1c;
	int m_n20;
	char m_b24;
	char pad0025[0x30 - 0x25];
	int m_n30;
	int m_n34;
	int m_n38;
	float m_flTime3c;
	float m_flMin40;
	float m_flMax44;
	int m_unk48;
	char m_unk4c;
	char pad004d[3];
	float m_savedUnk50;
	unsigned char m_b54;
	char pad0055[0x64 - 0x55];
	float m_fl64;
	int sub_102c6e10();
};

#define STANDOFF_NODE(h) ((CStandoffNodeView *)(h)->sub_102d3e60())

int __fastcall sub_102c7600(CStandoffSelf *self)
{
	switch (self->m_pOuter->m_n5cc0)
	{
	case 2:
		{
			CAI_Hint *pHint = self->m_pOuter->m_pHintNode;

			if (self->m_pOuter->sub_10269aa0(0x40) || self->m_pOuter->sub_10269aa0(0x3f))
				return 0x29 + (self->m_b24 ? -1 : 0);

			if (self->m_unk4c)
			{
				self->m_unk4c = 0;
				if (((COuterSlots *)self->m_pOuter)->vfunc167())
					return 0x17;
			}

			if (self->m_pOuter->sub_10269aa0(0x4c))
			{
				if (enginerandom->vfunc2(0, 99) <= self->m_n38)
				{
					if (((COuterSlots *)self->m_pOuter)->vfunc167())
					{
						if (pHint)
						{
							if (STANDOFF_NODE(pHint))
							{
								float flNode = STANDOFF_NODE(pHint)->m_fl9c;
								if (flNode > gpGlobals->curtime)
								{
									CStandoffNodeView *pNode = STANDOFF_NODE(pHint);
									pNode->m_fl9c = gpGlobals->curtime;
								}
							}
						}
						self->m_unk48 = (self->m_unk48 > 1);
					}
				}
			}

			if (self->m_unk48 == 0)
			{
				if (gpGlobals->curtime - self->m_flTime3c > -0.001)
					self->m_unk48 = enginerandom->vfunc2(0, self->m_n34 - self->m_n30) + self->m_n30;
			}

			if (self->m_unk48 == 1)
			{
				if (self->m_flMax44 == 0.0f)
					self->m_flTime3c = gpGlobals->curtime + self->m_flMin40;
				else
					self->m_flTime3c = enginerandom->vfunc1(self->m_flMin40, self->m_flMax44) + gpGlobals->curtime;
			}

			if (self->m_unk48 > 0)
			{
				if (self->m_pOuter->sub_10269aa0(0x48))
				{
					if (self->m_nState1c == 2)
					{
						self->m_nState1c = 3;
						return 0x25;
					}
					if (gpGlobals->curtime - self->m_fl64 > -0.001)
						self->m_b54 = 1;
				}

				if (!self->m_pOuter->sub_10269aa0(0x4f) && !self->m_pOuter->sub_10269aa0(0x51) && self->m_pOuter->sub_10269aa0(0x60))
				{
					if (!self->m_pOuter->sub_10269aa0(0x48) || enginerandom->vfunc2(0, 99) < 0x32)
						return 0x21;
				}
			}
			else
			{
				if (pHint)
				{
					if (pHint->m_n5dc == 0x65)
						self->m_nState1c = 2;
					else
						self->m_nState1c = 0;

					if (enginerandom->vfunc2(0, 99) < 0x50)
					{
						if (STANDOFF_NODE(pHint))
						{
							float flNode = STANDOFF_NODE(pHint)->m_fl9c;
							if (flNode > gpGlobals->curtime)
							{
								CStandoffNodeView *pNode = STANDOFF_NODE(pHint);
								pNode->m_fl9c = gpGlobals->curtime;
							}
						}
					}
				}
				return 0x17;
			}
			break;
		}
	}
	return self->sub_102c6e10();
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
