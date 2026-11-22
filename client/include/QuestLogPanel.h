// QuestLogPanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include <stdlib.h>
#include "vgui2__PropertyPage.h"

class QuestLogPanel : public vgui2::PropertyPage
{
public:
	virtual ~QuestLogPanel();
	static void operator delete(void *pMem) { free(pMem); }
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with QuestLogPanel's own function
	virtual void vfunc3();
	virtual void vfunc21();
	virtual void vfunc78(int);
	virtual void vfunc98();
	virtual void vfunc101();
	virtual int vfunc102();
	virtual void vfunc119();
	// the slots QuestLogPanel adds to its base's vtable: 123-125, vfuncK at slot K
	virtual void vfunc123();
	virtual void vfunc124(int);
	virtual void vfunc125(int);
};
