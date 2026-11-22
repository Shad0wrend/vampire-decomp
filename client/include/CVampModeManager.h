// CVampModeManager: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 5 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "IVModeManager.h"

class CVampModeManager : public IVModeManager
{
public:
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CVampModeManager adds to its base's vtable: 0-7, vfuncK at slot K
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(int);
	virtual void vfunc3();
	virtual void vfunc4();
	virtual ~CVampModeManager();
	virtual void vfunc6(int);
	virtual void vfunc7(int, int);
};
