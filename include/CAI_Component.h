// class CAI_Component (RTTI .?AVCAI_Component@@), primary vtable 0x1049a0f8, 3 slots.
// m_pOuter at +0x4 is the owning NPC.
#pragma once

class CAI_Component
{
public:
	CAI_Component() : m_pOuter(0) {}
	virtual ~CAI_Component() {}	// slot 0
	virtual void vfunc1();
	virtual void vfunc2();

	void *m_pOuter;
};
