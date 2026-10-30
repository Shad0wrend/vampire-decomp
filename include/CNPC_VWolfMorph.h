// CNPC_VWolfMorph: the wolf morph player controller NPC.
// Declared standalone: the vtable slots are not modelled, so the position of the
// virtual below is not its real slot (375).
#pragma once

class CNPC_VWolfMorph
{
public:
	virtual int vfunc375(int unused);
	int vfunc438();	// slot 438: CNPC_VHuman::vfunc438 (stub 0x10015ad2) when the object at +0x5c38 has the schedule name "SCHED_VWOLFMORPH_MORPH" at +0x40 (strcmpi), else 0x158
	CNPC_VWolfMorph *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)

	char m_pad0004[0x5c38 - 4];
	void *m_p5c38;	// 0x5c38: the object of the current schedule
public:
	virtual void vfunc588();
public:
	virtual int vfunc580();
public:
	virtual int vfunc82();
	virtual int vfunc138();
	virtual int vfunc451();
	virtual bool vfunc452();
};
