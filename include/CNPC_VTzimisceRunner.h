// CNPC_VTzimisceRunner: the Tzimisce runner boss NPC.
// Declared standalone: the vtable slots are not modelled, so the position of the
// virtual below is not its real slot (599).
#pragma once

class CNPC_VTzimisceRunner
{
public:
	virtual bool vfunc599(void *pEntity);
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	bool vfunc600(void *pEntity);	// slot 600: touches the global at 0x10924edc (slot 1), stores the handle of pEntity (-1 for null) at +0x6678, then toggles the byte at +0x6078 on the result of the behaviour object at +0x65e8 (sub_10015564(this, 0))
};
