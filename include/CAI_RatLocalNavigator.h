// CAI_RatLocalNavigator: declared by pcdecomp transplant for 0x103ad570 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class CAI_PlaneSolver;

class CAI_RatLocalNavigator
{
public:
	CAI_RatLocalNavigator *vfunc0(unsigned int flags);
	CAI_PlaneSolver *vfunc8();	// slot 8: a new CAI_RatPlaneSolver for the owner at +0x4 (0 when the allocation fails)
	void sub_10006988();
	CAI_RatLocalNavigator *sub_103ad540(int owner);

	char m_pad0[4];	// 0x0: the vtable pointer
	int m_pOwner;	// 0x4: the owning NPC
public:
	bool vfunc5(int, int, int, int, int);
};
