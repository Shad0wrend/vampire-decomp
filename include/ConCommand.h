// ConCommand (RTTI .?AVConCommand@@): base ConCommandBase at +0x0 is not modelled; primary vtable 0x10497474 has 8 slots.
#pragma once

class ConCommand
{
public:
	virtual ConCommand *vfunc0(unsigned int flags);
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();

	char m_pad0004[0x18];	// 0x0004 .. 0x001B
	void (*m_pfnCallback)();
	void sub_100104f6();	// as in CDataObjectAccessSystem (transplant)
};
