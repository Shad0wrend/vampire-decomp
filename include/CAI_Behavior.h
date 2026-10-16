// CAI_Behavior<NPC_CLASS, ID>: an AI behaviour bolted onto an NPC.
// The instantiation the game uses is CAI_Behavior<CAI_BaseNPC, 100000> (the ID
// is the base of the behaviour's schedule/task id range).
// Only the slots and members that decompiled code needs are declared, so the
// position of the virtuals below is not their real vtable slot.
#pragma once

#include "CAI_BaseNPC.h"

template <class NPC_CLASS, int ID>
class CAI_Behavior
{
public:
	virtual void vfunc17();

	char m_pad0004[0x10];	// 0x0004 .. 0x0013
	NPC_CLASS *m_pOuter;	// 0x0014
};
