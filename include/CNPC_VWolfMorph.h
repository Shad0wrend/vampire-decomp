// CNPC_VWolfMorph: the wolf morph player controller NPC.
// Declared standalone: the vtable slots are not modelled, so the position of the
// virtual below is not its real slot (375).
#pragma once

class CNPC_VWolfMorph
{
public:
	virtual int vfunc375(int unused);
	CNPC_VWolfMorph *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
};
