// CharEditStatsPanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include <stdlib.h>
#include "vgui2__PropertyPage.h"

class CharEditStatsPanel : public vgui2::PropertyPage
{
public:
	virtual ~CharEditStatsPanel();
	static void operator delete(void *pMem) { free(pMem); }
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CharEditStatsPanel's own function
	virtual void vfunc3();
	virtual void vfunc21();
	virtual void vfunc78();
	virtual void vfunc98();
	virtual void vfunc102();
	// the slots CharEditStatsPanel adds to its base's vtable: 123-123, vfuncK at slot K
	virtual void vfunc123();
};
