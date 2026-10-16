// CLagCompensationManager: CAutoGameSystem + ILagCompensationManager (at +0x8).
// Modelled as a single class: the slots below are the primary vtable
// (0x10471758); the ILagCompensationManager vptr at +0x8 lives inside the
// padding, so code that needs the secondary vtable has to spell the bases out.
#pragma once

class CLagCompensationManager
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();

	char m_pad0004[0x14];	// 0x0004 .. 0x0017 (holds the +0x8 vptr)
	int m_18;
};
