// CNPC_VCamera: camera NPC. Declared standalone: only the members the decompiled code needs
// are named, and the vtable slots are not modelled (the position of the virtual below is not its real slot, 461).
#pragma once

class CNPC_VCamera
{
public:
	virtual int vfunc461();

	char pad0004[0x14bc - 4];
	unsigned int m_flags14bc;
	char pad14c0[0x1b2c - 0x14c0];
	int m_n1b2c;
	char pad1b30[0x1b38 - 0x1b30];
	int m_n1b38;
	const char *m_p1b3c;
	int m_n1b40;
	char pad1b44[0x5bb0 - 0x1b44];
	int m_n5bb0;
	char pad5bb4[0x5cc4 - 0x5bb4];
	int m_n5cc4;
	char pad5cc8[0x5da4 - 0x5cc8];
	void *m_p5da4;
	void *m_p5da8;

	int sub_10368f20();
	CNPC_VCamera *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc438();	// as in CNPC_VCamera (transplant)
	int vfunc545();	// slot 545 (0x884)
	int vfunc460();	// slot 460 "SelectIdealState": with no pending count (+0x5bb0) and a squad (+0x5da4) that has condition 0x54 or the flag 0x2000, clears flag bits 0x80002000 and tells the squad about the enemy (slot 167); records the source line and returns the ideal state 3
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
};
