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
	virtual void vfunc103();	// slot 103 "CGeneric_NPC::Spawn": slot 104, the model name from slot 9 (default when empty) through slot 105, clears the fields at +0x1568 / +0x156c, solid type 2 (inlined SetSolid scope trace), move type 4, +0x1570 = 0xf7, +0x19c = 0, health from the global cvar object at 0x1093a1f4 (0 while its slot 1 holds), +0x1574 = 0.2f, +0x5cc0 = 0, three flag setters (1, 0x200000, 0x800000), then slot 420
};
