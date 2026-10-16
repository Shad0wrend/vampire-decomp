// CNPC_VNewscaster: the newscaster NPC, a CAI_BaseNPC descendant.
// Declared standalone for now: the vtable slots are *not* modelled here, so the
// position of the virtual below is not its real slot (404). Give the class its
// real base and padding before making a virtual call through it.
#pragma once

class CNPC_VNewscaster
{
public:
	virtual int vfunc404(int unused);
};
