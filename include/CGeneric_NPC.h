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
	virtual void vfunc144(int a);	// slot 144: CAI_BaseNPCTroika::vfunc144(a), then lifts the NPC 3 units above its slot 220 position and restarts the effect timer (MarkEffectStartTime(0))
	void sub_1000a62d(int a);	// CAI_BaseNPCTroika::vfunc144 (stub 0x1000a62d), called directly
	void sub_10003472(float delay);	// CBaseAnimating::MarkEffectStartTime (stub 0x10003472), called directly
};
