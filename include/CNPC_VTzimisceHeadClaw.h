// CNPC_VTzimisceHeadClaw: Tzimisce head claw boss NPC.
#pragma once
#include "CNPC_VBaseBoss.h"

class CNPC_VTzimisceHeadClaw : public CNPC_VBaseBoss
{
public:
	char pad4[0x6678 - 4];
	int m_iField6678;

	virtual void vfunc420();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc453();	// as in CNPC_VAndreiBlood (transplant)
	void sub_102ad140();	// as in CNPC_VAndreiBlood (transplant)
	void sub_100123f5(int a);	// as in CNPC_VAndreiBlood (transplant)
};
