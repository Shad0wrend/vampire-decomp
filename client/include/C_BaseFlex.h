// C_BaseFlex: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseAnimatingOverlay.h"

class C_BaseFlex : public C_BaseAnimatingOverlay
{
public:
	virtual ~C_BaseFlex();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_BaseFlex's own function
	virtual int vfunc15();
	virtual int vfunc16();
	virtual int vfunc70();
	// the slots C_BaseFlex adds to its base's vtable: 143-145, vfuncK at slot K
	virtual int vfunc143();
	virtual void vfunc144();
	virtual void vfunc145();
};
