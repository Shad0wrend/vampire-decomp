// CHudElement: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include <stdlib.h>

class CHudElement
{
public:
	bool sub_100f05b0();
	static void operator delete(void *pMem) { free(pMem); }
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CHudElement adds to its base's vtable: 0-12, vfuncK at slot K
	virtual ~CHudElement();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5(int);
	virtual void vfunc6();
	virtual void vfunc7();
	virtual int vfunc8();
	virtual bool vfunc9();
	virtual bool vfunc10();
	virtual bool vfunc11(char);
	virtual int vfunc12(int);
};
