// CGeneric_NPC: generic NPC (derived from CAI_BaseNPCTroika at +0x0).
#pragma once

#include "CAI_BaseNPCTroika.h"

class CGeneric_NPC : public CAI_BaseNPCTroika
{
public:
	virtual float vfunc516();	// float constant picked by the state at +0xfec (0x13, 0x3b..0x3c, other)
};
