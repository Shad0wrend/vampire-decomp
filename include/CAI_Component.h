// class CAI_Component (RTTI .?AVCAI_Component@@), primary vtable 0x1049a0f8, 3 slots.
// m_pOuter at +0x4 is the owning NPC.
#pragma once

class CAI_Component
{
public:
	CAI_Component() : m_pOuter(0) {}
	CAI_Component(void *pOuter) : m_pOuter(pOuter) {}	// Source's form (CAI_Component(CAI_BaseNPC *pOuter = NULL)); CAI_Pathfinder's
	virtual ~CAI_Component() {}	// slot 0
	virtual void vfunc1();
	virtual void vfunc2(int a);	// slot 2: forwards its argument to the owner's sub_10273e80 (0x102623c0)

	void *m_pOuter;
};
