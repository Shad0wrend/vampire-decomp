// CNPC_VGargoyle: the gargoyle NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VGargoyle
{
public:
	virtual int vfunc359(int index);
	virtual void vfunc601(int unused);
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
};
