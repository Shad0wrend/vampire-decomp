// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
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

// FUNCTION: 0x102c7360 size=0x1e
struct CUnk102c7360 {
	char m_pad0000[0x19];
	char m_19;
	void sub_102c7360(char a);
	void sub_102c6ff0(int a);
};

// TARGET: CUnk102c7360::sub_102c7360
void CUnk102c7360::sub_102c7360(char a)
{
	if (a != m_19)
	{
		m_19 = a;
		sub_102c6ff0(0);
	}
}
// END FUNCTION

// FUNCTION: 0x102c7390 size=0xa
#include "CUnknown102c7390.h"
void CUnknown102c7390::sub_102c7390(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x102c73b0 size=0x2c
struct CSeven102c73b0 {
    int v[7];
};
struct CCopyUnit102c73b0 {
    char pad[0x20];
    CSeven102c73b0 m_copy;
    float m_f3c;
    float m_f40;
    float m_f44;
    void sub_102c73b0(void *pSrc);
};

// TARGET: sub_102c73b0
void CCopyUnit102c73b0::sub_102c73b0(void *pSrc)
{
    float f3;
    float f2;
    m_copy = *(CSeven102c73b0 *)pSrc;
    f3 = ((float *)pSrc)[3];
    f2 = ((float *)pSrc)[2];
    m_f40 = f2;
    m_f3c = -1.0f;
    m_f44 = f3;
}
// END FUNCTION

// FUNCTION: 0x102c73f0 size=0x1
#include "CAI_StandoffBehavior.h"
void CAI_StandoffBehavior::vfunc8()
{
}
// END FUNCTION

// FUNCTION: 0x102c7410 size=0x54
#include "CAI_StandoffBehavior.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CStandoffOuterSlots
{
	V100(a0) V100(a1) V100(a2) V100(a3) V100(a4) V10(b0)
	virtual void c0(); virtual void c1(); virtual void c2();
	virtual unsigned int vfunc513();
};

bool CAI_StandoffBehavior::vfunc3()
{
	if (m_b19)
	{
		if (!(((CStandoffOuterSlots *)m_pOuter)->vfunc513() & 0x8000000)
		    || m_pOuter->sub_1008dd30(8, -1) < 0)
			m_b19 = 0;
		else
			return m_pOuter->m_n5cc0 == 2 && m_pOuter->sub_1032e7b0();
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102c7490 size=0x76
#include "CAI_StandoffBehavior.h"
struct CStandoffRandTimer
{
	float m_next;
	float m_minInterval;
	float m_maxInterval;
	void Reset()
	{
		if (m_maxInterval == 0)
			m_next = gpGlobals->curtime + m_minInterval;
		else
			m_next = enginerandom->vfunc1(m_minInterval, m_maxInterval) + gpGlobals->curtime;
	}
};

void CAI_StandoffBehavior::vfunc4()
{
	m_unk4c = 1;
	m_unk48 = 0;
	((CStandoffRandTimer *)&m_flTime3c)->Reset();
	m_savedUnk50 = m_pOuter->m_unk5de4;
	*(int *)&m_pOuter->m_unk5de4 = 0x7f7fffff;
	if (m_unk1a)
		m_pOuter->m_unk1fc = 1;
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

// FUNCTION: 0x102c7940 size=0x5
#include "CAI_StandoffBehavior.h"
#include "CAI_Behavior.h"

void __fastcall sub_102c6e90(CAI_Behavior<CAI_BaseNPC, 100000> *behavior);

// TARGET: CAI_StandoffBehavior::vfunc17
// the game's 0x102c7940: a tail call (jmp) of the base behaviour's slot 17, 0x102c6e90 (a free fastcall in our view: the behaviour in ecx)
void CAI_StandoffBehavior::vfunc17()
{
	sub_102c6e90((CAI_Behavior<CAI_BaseNPC, 100000> *)this);
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

// FUNCTION: 0x102c79e0 size=0x167
#include "CNPC_VTzimisce.h"
#include "CAI_StandoffBehavior.h"
#include "CAI_BaseNPCTroika.h"

extern int g_10925388;
extern int g_10925390;

struct CStandoffNpcView : CAI_StandoffBehaviorOuter
{
    void *sub_1032d890(const char *name, int n);
};
void sub_1027e590(CStandoffNpcView *p, const char *fmt, ...);
struct CAI_Hint5dc { char pad[0x5dc]; int m_nType; };

struct CStandoffView : CAI_StandoffBehavior
{
    CStandoffNpcView *GetOuter() { return (CStandoffNpcView *)m_pOuter; }
};

#define NPC (((CStandoffView *)this)->GetOuter())

// TARGET: CAI_StandoffBehavior::vfunc22
int CAI_StandoffBehavior::vfunc22(int a)
{
    CAI_Hint *t = NPC->m_pHintNode;
    if (t && ((CAI_Hint5dc *)t)->m_nType == 0x65) {
        int act = ((CAI_BaseNPCTroika *)NPC)->vfunc569((CBaseEntity *)t);
        if (a == 1)
            a = ((CAI_BaseNPCTroika *)NPC)->vfunc569((CBaseEntity *)t);
        if (m_nState1c == 0 && act == 8)
            m_nState1c = 2;
    }
    if (m_nState1c == 2) {
        if (a == 1)
            return 8;
        if (a == 9 && NPC->sub_1008dd30(0x12, -1) >= 0)
            return 0x12;
    }
    if (m_nState1c == 1 && a == 8)
        return 1;
    if (m_nState1c == 3 && (a == 8 || a == 1)) {
        if (NPC->sub_1032d890("weapon_smg1", 0)) {
            int smg = g_10925390;
            if (NPC->sub_1008dd30(smg, -1) >= 0)
                return g_10925390;
        }
        if (NPC->sub_1032d890("weapon_pistol", 0)) {
            int pistol = g_10925388;
            if (NPC->sub_1008dd30(pistol, -1) >= 0)
                return g_10925388;
        }
        CBaseEntity *w = (CBaseEntity *)NPC->sub_1032e7b0();
        sub_1027e590(NPC, "NPC in standoff lacks needed low aim activity (%s)\n", w ? w->sub_1009f200() : "no weapon");
        return 1;
    }
    return sub_102c6f70(a);
}
// END FUNCTION

// FUNCTION: 0x102c7bb0 size=0x5
#include "CAI_StandoffBehavior.h"
#include "CAI_Behavior.h"

// TARGET: CAI_StandoffBehavior::vfunc25
// the game's 0x102c7bb0: a tail call (jmp) of CAI_Behavior<CAI_BaseNPC, 100000>::vfunc25
char CAI_StandoffBehavior::vfunc25(int a)
{
	return ((CAI_Behavior<CAI_BaseNPC, 100000> *)this)->CAI_Behavior<CAI_BaseNPC, 100000>::vfunc25(a);
}
// END FUNCTION

// FUNCTION: 0x102c7bd0 size=0x18d
#include "CAI_StandoffBehavior.h"
#include "CAI_Navigator.h"

#define V1(p) virtual void p();
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct CStandoffEnemySlots
{
	V100(a0) V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8)
	V1(c0) V1(c1) V1(c2)
	virtual Vector vfunc193();
	V10(d0) V10(d1) V1(e0) V1(e1) V1(e2)
	virtual const Vector &vfunc217();
};

// CAI_Navigator seen with the argument types this caller passes (the matched callee is declared
// as sub_102edc80(const Vector *, float, int, int, Vector *, int) in CAI_Navigator.h)
struct CStandoffNavigator
{
	bool sub_102edc80(const Vector &vThreatPos, const Vector &vThreatEyePos, int c, float flDist, Vector *pOut, void *pEnemy);
	bool sub_102ecd20(void *pGoal, int nFlags);
};

struct CStandoffOuter
{
	V100(a0) V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5)
	V1(c0) V1(c1) V1(c2) V1(c3) V1(c4) V1(c5) V1(c6)
	virtual CStandoffEnemySlots *vfunc167();
	V100(d0) V100(d1) V10(e0) V10(e1) V10(e2) V10(e3) V10(e4) V10(e5) V10(e6) V10(e7)
	virtual void vfunc448(int a);
	V100(i0) V1(j0)
	virtual float vfunc550();

	char pad4[0x1b44 - 4];
	const char *m_pszFile1b44;
	int m_nLine1b48;
	char pad1[0x5cf0 - 0x1b4c];
	float m_fl5cf0;
	char pad2[0x5d34 - 0x5cf4];
	CStandoffNavigator *m_pNav5d34;

	CStandoffNavigator *GetNavigator() { return m_pNav5d34; }
};

extern int g_1092538c;
extern Vector g_10934060;
extern float g_1049aecc;

struct CStandoffNavGoal
{
	CStandoffNavGoal(int type_, const Vector &dest_, int activity_, float tolerance_ = g_1049aecc, unsigned flags_ = 0)
	{
		type = type_;
		dest = dest_;
		destNode = -1;
		activity = activity_;
		arrivalActivity = -1;
		arrivalSequence = -1;
		tolerance = tolerance_;
		flags = flags_;
		id = g_1092538c;
		arrivalDirection = g_10934060;
		pTarget = 0;
		unk3c = 0;
	}
	int type;
	Vector dest;
	int destNode;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	float tolerance;
	unsigned flags;
	int id;
	Vector arrivalDirection;
	int pTarget;
	int unk3c;
};

struct CStandoffView : CAI_StandoffBehavior
{
	CStandoffOuter *GetOuter() { return (CStandoffOuter *)m_pOuter; }
	CStandoffNavigator *GetNavigator() { return GetOuter()->GetNavigator(); }
};

// TARGET: CAI_StandoffBehavior::vfunc15
void CAI_StandoffBehavior::vfunc15(const CStandoffTask *pTask)
{
	CStandoffView *self = (CStandoffView *)this;
	if (pTask->m_iTask == 0x34)
		sub_102c7e10();
	else if (pTask->m_iTask == 0x58 && !(gpGlobals->curtime - m_fl58 > -0.001))
	{
		m_fl58 = -1.0f;
		CStandoffEnemySlots *pEnemy = self->GetOuter()->vfunc167();
		if (!pEnemy)
			pEnemy = (CStandoffEnemySlots *)self->GetOuter();
		Vector vec;
		if (self->GetNavigator()->sub_102edc80(pEnemy->vfunc217(), pEnemy->vfunc193(), 0, self->GetOuter()->vfunc550(), &vec, pEnemy))
		{
			CStandoffNavGoal goal(6, vec, 0x13);
			self->GetNavigator()->sub_102ecd20(&goal, 0);
			self->GetOuter()->m_fl5cf0 = gpGlobals->curtime + pTask->m_flData;
			return;
		}
		self->GetOuter()->m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\ai_behavior_standoff.cpp";
		self->GetOuter()->m_nLine1b48 = 0x17b;
		self->GetOuter()->vfunc448(8);
		return;
	}
	sub_102c6e50(pTask);
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

// FUNCTION: 0x102c7e10 size=0x4
// TARGET: sub_102c7e10
void __fastcall sub_102c7e10(int *p) { (*(p + 0x12))--; }
// END FUNCTION

// FUNCTION: 0x102c7e30 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_10925398(false);
// END FUNCTION

// FUNCTION: 0x102c7e90 size=0xc
void __fastcall sub_102c7eb0(void *pThis);
void * __fastcall sub_102c7e90(void *pThis)
{
    sub_102c7eb0(pThis);
    return pThis;
}
// END FUNCTION

// FUNCTION: 0x102c7eb0 size=0x2e
// TARGET: sub_102c7eb0
extern int g_10601878;
extern int g_10936b68;
extern char g_10601874;
void sub_10008828();

char sub_102c7eb0() {
    if (g_10601878 != g_10936b68) {
        sub_10008828();
        g_10601874 = 1;
        g_10601878 = g_10936b68;
        return 1;
    }
    return g_10601874;
}
// END FUNCTION

// FUNCTION: 0x102c7ef0 size=0x6
// TARGET: sub_102c7ef0
extern unsigned char g_10601874;
unsigned char __cdecl sub_102c7ef0(void) { return g_10601874; }
// END FUNCTION
