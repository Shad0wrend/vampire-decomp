// CNPC_VTzimisceHeadClaw: Tzimisce head claw boss NPC.
#pragma once
#include "CNPC_VBaseBoss.h"

class CNPC_VTzimisceHeadClaw : public CNPC_VBaseBoss
{
public:
	char pad4[0x6678 - 4];
	int m_iField6678;

	virtual void vfunc420();
};
