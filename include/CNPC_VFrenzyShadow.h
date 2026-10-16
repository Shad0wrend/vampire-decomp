// CNPC_VFrenzyShadow: frenzy shadow NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VFrenzyShadow
{
public:
	virtual void vfunc601(int unused);
};
