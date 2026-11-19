// ConCommand (RTTI .?AVConCommand@@): base ConCommandBase at +0x0 is not modelled; primary vtable 0x10497474 has 8 slots.
#pragma once

#include "ConCommandBase.h"
struct ConCommandCtorBase { ConCommandCtorBase() { ((ConCommandBase *)((char *)this - 4))->ConCommandBase::ConCommandBase(); } };
class ConCommand : public ConCommandBase
{
public:
	ConCommand(const char *pszName, void (*pCallback)(), const char *pszHelp, int nFlags, void (*pCompletion)());
	~ConCommand();	// function 0x10245920 (stub 0x100104f6): stores the vftable, then ~ConCommandBase; a global command's atexit destroy jumps to it
	virtual ConCommandBase *vfunc0(unsigned int flags);
	virtual bool vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual int vfunc4(int a, int b);
	virtual bool vfunc5();
	virtual void vfunc6();
	virtual void vfunc7(const char *pszName, void (*pCallback)(), const char *pszHelp, int nFlags, void (*pCompletion)());	// slot 7: the constructor body of a command: stores the callback (+0x1c), the completion function (+0x20, the empty one 0x1000ad49 when null) and whether there is one (+0x24), then ConCommandBase::vfunc2(name, help, flags)

	char m_pad0004[0x18];	// 0x0004 .. 0x001B
	void (*m_pfnCallback)();	// 0x001c
	void (*m_pfnCompletion)();	// 0x0020
	bool m_bHasCompletion;	// 0x0024
	void sub_100104f6();	// as in CDataObjectAccessSystem (transplant)
};
