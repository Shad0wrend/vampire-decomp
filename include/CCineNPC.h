// CCineNPC: scripted-sequence NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

// Element of the three 0x18-byte containers at +0x5f9c, +0x5fb4 and +0x5fcc[8].
struct CCineNPCSlot
{
	int m_data[6];
	void sub_10015708();	// destructor
};

class CCineNPC
{
public:
	virtual bool vfunc585();

	CCineNPC *vfunc5(unsigned int flags);	// deleting destructor
	void sub_1000c9cd();	// base-class destructor body

	char m_pad0004[0x5f9c - 4];
	CCineNPCSlot m_slotA;	// 0x5f9c
	CCineNPCSlot m_slotB;	// 0x5fb4
	CCineNPCSlot m_slots[8];	// 0x5fcc
};
