// CAI_LocalNavigator: declared by pcdecomp transplant for 0x102ddb00 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
// Layout: CAI_Component (vptr +0, outer +4), two ints (+8, +0xc = -1), the CAI_ProxyMovementSink base at +0x10
// (vptr +0x10, target +0x14), the data object at +0x18, an int at +0x1c.
#pragma once

#include "UtlMem.h"
#include "CAI_Component.h"
#include "CAI_ProxyMovementSink.h"

struct CAI_LocalNavigatorVec : public UtlMem
{
	int m_size;	// 0x0c
	int *m_pElements;	// 0x10
};

struct CAI_LocalNavigatorData
{
	char m_pad00[0x3c];
	CAI_LocalNavigatorVec m_vecA;	// 0x3c
	CAI_LocalNavigatorVec m_vecB;	// 0x50
};

void __fastcall sub_102deea0(int *pVec);

struct CAI_LocalNavigatorStopState	// the state object vfunc7 reads: only the float it compares against
{
	char m_pad00[0x28];
	float m_flStop28;	// 0x28
	float m_flStop2c;	// 0x2c
};

struct CAI_LocalNavigatorHead : public CAI_Component	// the component part up to the proxy sink at +0x10
{
	CAI_LocalNavigatorHead(void *pOuter) { m_pOuter = pOuter; m_n0c = -1; }
	int m_n08;	// 0x08
	int m_n0c;	// 0x0c: -1 after construction
};

class CAI_LocalNavigator : public CAI_LocalNavigatorHead, public CAI_ProxyMovementSink
{
public:
	CAI_LocalNavigator(void *pOuter);	// 0x102ddab0: outer at +4, +0xc = -1, the proxy sink target and +0x18 / +0x1c cleared
	CAI_LocalNavigatorData *m_pData;	// 0x18, heap allocated
	int m_n1c;	// 0x1c

	virtual int vfunc3(const void *pGoal, bool bOnlyCheck, int *pBlocker);	// slot 3 (+0xc) "CAI_LocalNavigator::MoveCalc": (goal copy = the 0x7c byte AILocalMoveGoal_t on the caller's stack, 0, &blocker); CAI_Navigator::vfunc15 passes the blocking entity it fills to CUnknown10270290::sub_10270290 and its int result (-4 = none yet) on
	CAI_LocalNavigator *vfunc0(unsigned int flags);
	bool vfunc7(CAI_LocalNavigatorStopState *pState, float flDist, int *pResult, int unused);	// slot 7 "CAI_LocalNavigator_MoveCalcStop" (profiler scope; this unused): flDist below the state's float at +0x28: *pResult = -4 when flDist < 0.1, else the float is set to flDist and *pResult = 0; otherwise *pResult = 0; always true
	int vfunc4(CAI_LocalNavigatorStopState *pMove, float flDist, void *pArg);	// slot 4 "CAI_LocalNavigator_MoveCalcRaw" (profiler scope): runs slots 5, 6, 7 and the sink's slots 1-4 in turn, each may settle the result
	bool sub_102de110(void *pGoal, float flDist, int *pResult, int unused);	// the body behind primary slot 6 "CAI_LocalNavigator_MoveCalcSteer" (profiler "CAI_Motor_MoveCalcSteer"), declared plain so it can be defined without touching the slot numbering: pGoal is the AILocalMoveGoal_t (flags byte +0x38, vector +0xc, values +0x24/+0x28); returns true when it steered / settled
	void sub_10012d73();
	CAI_LocalNavigator *sub_102ddab0(int pOuter);	// constructor body (0x102ddab0) as a plain member: outer at +4, +0xc = -1, proxy sink at +0x10 (vftables 0x1049d76c / 0x1049d740), +0x14..+0x1c cleared; returns this
	void sub_102ddb30();	// destructor body: frees the data object at +0x18 and resets the vtable pointers
	void sub_102ddc00(void *pMovementSink);	// "CAI_LocalNavigator::Init" (stub 0x10012878): takes the navigator's movement sink (its secondary base at +0x10)
};
