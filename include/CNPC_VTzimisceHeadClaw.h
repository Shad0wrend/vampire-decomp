// CNPC_VTzimisceHeadClaw: Tzimisce head claw boss NPC.
#pragma once
#include "CNPC_VBaseBoss.h"

class CNPC_VTzimisceHeadClaw : public CNPC_VBaseBoss
{
public:
	char pad4[0x6678 - 4];
	int m_iField6678;

	virtual void vfunc420();
	virtual int vfunc440(int act);	// slot 440 (the position here is not its real slot): activities 0xbf / 0xc7 / 0xe7 / 0xed / 0xef -> 0x157 / 0xc8 / 0x156 / 0xf0 / 0xf0, else the Troika base
	int sub_102b12f0(int act);	// CAI_BaseNPCTroika::vfunc440, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc453();	// as in CNPC_VAndreiBlood (transplant)
	void sub_102ad140();	// as in CNPC_VAndreiBlood (transplant)
	void sub_100123f5(int a);	// as in CNPC_VAndreiBlood (transplant)
};
