// CNPC_VFrenzyShadow: frenzy shadow NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VFrenzyShadow
{
public:
	virtual void vfunc601(int unused);

	char sub_10376b70(int unused);	// slot 599: calls slot 1 of a global object, then sets the flag byte at +0x6078
	bool sub_10376ba0(int unused);	// slot 600: sets the flag byte at +0x6078, then calls slot 1 of the global object

	char m_pad0004[0x6078 - 4];
	char m_b6078;
};
