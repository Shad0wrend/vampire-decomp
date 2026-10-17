// CNPC_VWerewolf: the werewolf NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VWerewolf
{
public:
	virtual bool vfunc600(int unused);

	char pad04[0x268];
	const char *m_name26c;

	// Slot 421, called directly so far; declared as a plain member.
	void vfunc421();

	void sub_103d1ca0();	// "CNPC_VWerewolf::StartSearchTimer": stores the time stamp counter in a global
	void vfunc465(const char *msg);	// slot 465, scope-traced wrapper
	void sub_10295a60(const char *msg);
};
