// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c8570 size=0xd4
#include "CAI_BaseNPC.h"
// TARGET: CAI_StandoffGoal::vfunc244
#include "CAI_StandoffGoal.h"
#include "CUnknown102c7390.h"
extern CStandoffParams g_10601880[];
extern int g_10601db0, g_10601e70;
#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CNpcSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25) SV10(26) SV10(27) SV10(28) SV10(29)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35) SV10(36) SV10(37) SV10(38) SV10(39)
	SV10(40) SV10(41) SV10(42) SV10(43) SV10(44)
	SV(450) SV(451) SV(452) SV(453) SV(454) SV(455)
	virtual CAI_BehaviorBase **s456();
	virtual int s457();
};

namespace block_102c7390 {
struct CUnknown102c7390Unit : CUnknown102c7390 { void sub_102c7390(char value); };
void CUnknown102c7390Unit::sub_102c7390(char value) { m_bFlag = value; }
}
using namespace block_102c7390;

void CAI_StandoffGoal::vfunc244(CAI_BaseNPC *pActor)
{
	CNpcSlotsX *npc = (CNpcSlotsX *)pActor;
	CAI_BehaviorBase **ppBehaviors = npc->s456();
	for (int i = 0; i < npc->s457(); i++) {
		CAI_StandoffBehavior *pBehavior = (CAI_StandoffBehavior *)__RTDynamicCast(ppBehaviors[i], 0, &g_10601db0, &g_10601e70, 0);
		if (pBehavior) {
			pBehavior->sub_102c7360(1);
			((CUnknown102c7390Unit *)pBehavior)->sub_102c7390(*((char *)this + 0x204) & 1);
			CStandoffParams params;
			if (m_Aggressiveness != 5)
				params = g_10601880[m_Aggressiveness];
			else
				params = m_CustomParams;
			params.m_unk0 = m_unk4a4;
			pBehavior->sub_102c73b0(&params);
			return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102c8690 size=0xc4
#include "CAI_BaseNPC.h"
#include "CAI_StandoffGoal.h"
extern CStandoffParams g_10601880[];
extern int g_10601db0, g_10601e70;
#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CNpcSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25) SV10(26) SV10(27) SV10(28) SV10(29)
	SV10(30) SV10(31) SV10(32) SV10(33) SV10(34) SV10(35) SV10(36) SV10(37) SV10(38) SV10(39)
	SV10(40) SV10(41) SV10(42) SV10(43) SV10(44)
	SV(450) SV(451) SV(452) SV(453) SV(454) SV(455)
	virtual CAI_BehaviorBase **s456();
	virtual int s457();
};

void CAI_StandoffGoal::vfunc245(CAI_BaseNPC *pActor)
{
	CNpcSlotsX *npc = (CNpcSlotsX *)pActor;
	CAI_BehaviorBase **ppBehaviors = npc->s456();
	for (int i = 0; i < npc->s457(); i++) {
		CAI_StandoffBehavior *pBehavior = (CAI_StandoffBehavior *)__RTDynamicCast(ppBehaviors[i], 0, &g_10601db0, &g_10601e70, 0);
		if (pBehavior) {
			pBehavior->sub_102c7360(0);
			CStandoffParams params;
			if (m_Aggressiveness != 5)
				params = g_10601880[m_Aggressiveness];
			else
				params = m_CustomParams;
			params.m_unk0 = m_unk4a4;
			pBehavior->sub_102c73b0(&params);
			return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102c87a0 size=0x69
#include "CAI_StandoffGoal.h"

__declspec(dllimport) void __cdecl DevMsg(const char *, ...);

// TARGET: CAI_StandoffGoal::vfunc241
void CAI_StandoffGoal::vfunc241(int a)
{
	if ((m_Aggressiveness < 0 || m_Aggressiveness > 4) && m_Aggressiveness != 5)
	{
		DevMsg("Invalid aggressiveness value %d\n", m_Aggressiveness);
		if (m_Aggressiveness < 0)
			m_Aggressiveness = 0;
		else if (m_Aggressiveness > 4)
			m_Aggressiveness = 4;
	}
	CAI_GoalEntity::vfunc241(a);
}
// END FUNCTION

// FUNCTION: 0x102c8830 size=0x69
#include "CAI_StandoffGoal.h"

__declspec(dllimport) void DevMsg(const char *, ...);

// TARGET: CAI_StandoffGoal::vfunc243
void CAI_StandoffGoal::vfunc243(int a)
{
	if ((m_Aggressiveness < 0 || m_Aggressiveness > 4) && m_Aggressiveness != 5)
	{
		DevMsg("Invalid aggressiveness value %d\n", m_Aggressiveness);
		if (m_Aggressiveness < 0)
			m_Aggressiveness = 0;
		else if (m_Aggressiveness > 4)
			m_Aggressiveness = 4;
	}
	CAI_GoalEntity::sub_102cdb70(a);
}
// END FUNCTION

// FUNCTION: 0x102c88c0 size=0x86
#include "CAI_StandoffGoal.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CAI_StandoffGoal *CAI_StandoffGoal::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x468))->~CUtlVector<int>();
	sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102c8980 size=0x6
#include "datamap.h"
#include "CAI_StandoffGoal.h"
namespace lifted {
extern char g_1060190c;
}
datamap_t * CAI_StandoffGoal::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1060190c);
}
// END FUNCTION

// FUNCTION: 0x102cd2d0 size=0x27
// TARGET: CAI_StandoffGoal::vfunc103
#include "CAI_StandoffGoal.h"

void sub_102cd310();

void CAI_StandoffGoal::vfunc103()
{
	((CBaseEntity *)this)->sub_100ac4e0((int)(void *)sub_102cd310, 0, 0);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.01;
}
// END FUNCTION

// FUNCTION: 0x102cdc50 size=0x3c
#include "CAI_StandoffGoal.h"
#include "inputdata_t.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CStandoffVtbl
{
	SV10(a0) SV10(a1) SV10(a2) SV10(a3) SV10(a4) SV10(a5) SV10(a6) SV10(a7) SV10(a8) SV10(a9)
	SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8) SV10(b9)
	SV10(c0) SV10(c1) SV10(c2) SV10(c3)
	virtual void v240(); virtual void v241(); virtual void v242();
	virtual void vfunc243(void *p);
};

// TARGET: CAI_StandoffGoal::vfunc180
void CAI_StandoffGoal::vfunc180()
{
	if (m_flags480 & 1)
	{
		inputdata_t data;
		data.value.iValue = 0;
		data.value.fieldType = 0;
		data.value.eVal = 0xffffffff;
		((CStandoffVtbl *)this)->vfunc243(&data);
	}
	CBaseEntity::vfunc180();
}
// END FUNCTION
