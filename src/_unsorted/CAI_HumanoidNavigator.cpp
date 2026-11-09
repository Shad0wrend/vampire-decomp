// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10262480 size=0x1e
#include "CAI_HumanoidNavigator.h"

// TARGET: CAI_HumanoidNavigator::vfunc0
CAI_HumanoidNavigator *CAI_HumanoidNavigator::vfunc0(unsigned int flags)
{
	sub_10011c98();
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
