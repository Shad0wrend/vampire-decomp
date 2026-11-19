// CAI_DefMovementSink (RTTI .?AVCAI_DefMovementSink@@): default movement sink, 8 vtable slots (vtable 0x1049a0cc).
// The slots are named sinkN so that derived classes' vfuncN do not override them.
#pragma once

class IAI_MovementSink	// RTTI .?AVIAI_MovementSink@@, the interface CAI_DefMovementSink implements (Source's dlls/ai_movetypes.h, 8 slots)
{
public:
	virtual float sink0() = 0;	// slot 0
	virtual bool vfunc1(int a, int b, int c) = 0;	// slot 1
	virtual void sink2() = 0;	// slot 2
	virtual void sink3() = 0;	// slot 3
	virtual void sink4() = 0;	// slot 4
	virtual void sink5(int *pResult) = 0;	// slot 5
	virtual void sink6() = 0;	// slot 6
	virtual void sink7() = 0;	// slot 7
};

class CAI_DefMovementSink : public IAI_MovementSink
{
public:
	CAI_DefMovementSink() {}
	virtual float sink0(); virtual bool vfunc1(int a, int b, int c); virtual void sink2(); virtual void sink3();
	virtual void sink4(); virtual void sink5(int *pResult);	/* slot 5 (+0x14): the movement result handler: CAI_Navigator::vfunc15 hands it the failed result (< 0) by address */ virtual void sink6(); virtual void sink7();

	bool sub_102eefb0(void *pGoal, float flValue, int *pOut);
	bool sub_102ef1a0(void *pGoal, float flValue, int *pOut);
};
