// CAI_PlaneSolver (RTTI .?AVCAI_PlaneSolver@@): steering plane solver of the local navigator; one virtual slot.
// The data lives in a non-polymorphic base (its constructor runs before CAI_PlaneSolver stores its vtable pointer).
#pragma once

#include "Vector.h"

extern float g_1049df80;
extern double g_10445e08;
extern void *(*g_109f3634)(int);

struct CAI_PlaneSolverObj	// the object a plane solver probes for (a pointer at +0x30 goes to the trace)
{
	char m_pad0000[0x30];
	void *m_p30;
};

struct CAI_PlaneSolverTrace	// 0x38 byte result record of a probe trace (zeroed by the caller)
{
	int m_n[14];
};

class CAI_PlaneSolverBase
{
public:
	CAI_PlaneSolverBase(int owner)
	{
		m_owner = owner;
		m_f08 = 3.402823466e+38F;
		m_f0c = 3.402823466e+38F;
		m_f10 = 3.402823466e+38F;
		m_b14 = 0;
		m_i18 = 0;
		m_f28 = 3.402823466e+38F;
		m_f2c = 3.402823466e+38F;
		m_b30 = 0;
		m_f38 = g_1049df80 - g_10445e08;
		m_f34 = -1.0F;
		m_p3c = 0;
		m_p40 = 0;
		m_p44 = 0;
		m_p48 = 0;
		m_p4c = 0;
		m_pBuf50 = 0;
		m_i58 = 0;
		m_i5c = 0;
		m_pBuf60 = 0;
		m_i54 = 8;
		m_pBuf50 = g_109f3634(0x8c0);
		m_pBuf60 = m_pBuf50;
	}

	int m_owner;			// 0x04
	float m_f08;
	float m_f0c;
	float m_f10;
	char m_b14;
	char m_pad15[3];
	int m_i18;
	char m_pad1c[0x28 - 0x1c];
	float m_f28;
	float m_f2c;
	char m_b30;
	char m_pad31[3];
	float m_f34;
	float m_f38;
	void *m_p3c;
	void *m_p40;
	void *m_p44;
	void *m_p48;
	void *m_p4c;
	void *m_pBuf50;			// 0x50: 0x8c0 byte buffer
	int m_i54;
	int m_i58;
	int m_i5c;
	void *m_pBuf60;
};

class CAI_PlaneSolver : public CAI_PlaneSolverBase
{
public:
	CAI_PlaneSolver(int owner);
	virtual void vfunc0();

	int sub_10309650(CAI_PlaneSolverObj *pObj, float flYaw, float flScale, float flStep, int nIndex);	// probes one steering direction (yaw offset by nIndex steps of flStep): the probe point lies flScale along it from the owner's origin; when the trace (sub_10307ef0) is clear the result is handed to sub_10308540 and 1 is returned, else 0
	char sub_10307ef0(void *pObjData, Vector *pEnd, int a, int mask, CAI_PlaneSolverTrace *pResult);	// stub 0x10003ddc, called directly. "CAI_PlaneSolver::MoveLimit" (VPROF scope of that name, GetSubNode + inlined rdtsc sample + PushGroup call [0x109f3668] around the call, ExitScopeInlined after): by the asm the five stack arguments are arg1 (int, tested ==0 and passed on), arg2, arg3 (a char: 100.0f when set else 0 as a float passed to CAI_BaseNPC::sub_102729d0), arg4, arg5 (int); m_owner (+4) is the CAI_BaseNPCTroika whose move probe (+0x5d40) gets sub_102e6d70(arg1, owner->vfunc220() origin, arg2, arg4, sub_102729d0(...), arg5...), the result byte is returned
	void sub_10308540(CAI_PlaneSolverObj *pObj, CAI_PlaneSolverTrace *pTrace, float flScale, float flStep, int nStepBits);	// stub 0x10005687, called directly (the last argument is the original step as raw bits)
};
