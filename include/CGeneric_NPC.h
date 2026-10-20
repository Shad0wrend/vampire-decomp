// CGeneric_NPC: generic NPC (derived from CAI_BaseNPCTroika at +0x0).
#pragma once

#include "CAI_BaseNPCTroika.h"

class CGeneric_NPC : public CAI_BaseNPCTroika
{
public:
	virtual float vfunc516();	// float constant picked by the state at +0xfec (0x13, 0x3b..0x3c, other)
	virtual void vfunc104();	// slot 104 "CGeneric_NPC::Precache": when the model name (slot 9) is empty sets the default model, precaches the model and the sounds, then CAI_BaseNPCTroika::vfunc104
	void sub_100097b4();	// CAI_BaseNPCTroika::vfunc104, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
};
