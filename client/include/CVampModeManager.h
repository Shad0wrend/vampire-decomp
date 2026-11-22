// CVampModeManager: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 5 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "IVModeManager.h"

class CVampModeManager : public IVModeManager
{
public:
	virtual ~CVampModeManager();
public:
	virtual void vfunc1();
	virtual void vfunc2(int);
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(int);
	virtual void vfunc7(int, int);
};
