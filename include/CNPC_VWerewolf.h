// CNPC_VWerewolf: the werewolf NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VWerewolf
{
public:
	virtual bool vfunc600(int unused);

	// Slot 421, called directly so far; declared as a plain member.
	void vfunc421();
};
