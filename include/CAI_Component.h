// class CAI_Component (RTTI .?AVCAI_Component@@), primary vtable 0x1049a0f8, 3 slots, 0x10 bytes.
// m_pOuter at +0x4 is the owning NPC; +8 / +0xc are Troika's: every component sets +0xc to -1 first in its
// constructor, and CAI_Navigator stamps both (the owner's value at +0x156c and gpGlobals->framecount) on itself
// and on the component sub_102ecc00 returns.
#pragma once

class CAI_Component
{
public:
	CAI_Component() : m_pOuter(0) { m_n0c = -1; }
	CAI_Component(void *pOuter) : m_pOuter(pOuter) { m_n0c = -1; }	// Source's form (CAI_Component(CAI_BaseNPC *pOuter = NULL)); CAI_Pathfinder's
	virtual ~CAI_Component() {}	// slot 0
	virtual void vfunc1();
	virtual void vfunc2(int a);	// slot 2: forwards its argument to the owner's sub_10273e80 (0x102623c0)

	void *m_pOuter;
	int m_n08;	// 0x08: the owner's value at +0x156c, stamped in the frame below
	int m_n0c;	// 0x0c: the frame m_n08 was stamped in, -1 after construction
};
