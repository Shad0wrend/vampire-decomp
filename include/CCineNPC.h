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
	char sub_101a8930();	// stub 0x1000c6da: true when the byte at +0x5f90 is set and the entity of the handle at +0x5ce4 resolves and answers slot 158 with true
	void sub_101a8c30();	// "CancelScript"-like (stub 0x1000f187): DevMsg "Cancelling script: %s" (the name at +0x5f48), then cancels the scripted sequence entities of this entity's name

	char m_pad0004[0x5f9c - 4];
	CCineNPCSlot m_slotA;	// 0x5f9c
	CCineNPCSlot m_slotB;	// 0x5fb4
	CCineNPCSlot m_slots[8];	// 0x5fcc
};
