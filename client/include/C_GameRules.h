// C_GameRules: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once

class C_GameRules
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots C_GameRules adds to its base's vtable: 0-7, vfuncK at slot K
	virtual ~C_GameRules();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual bool vfunc4(int, int);
	virtual int vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
};
