// CStudiomodelPanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

class CStudiomodelPanel : public vgui2::Panel
{
public:
	void *sub_1018b1f0(void *parent, const char *name);
	virtual ~CStudiomodelPanel();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CStudiomodelPanel's own function
	virtual void vfunc3();
	virtual void vfunc79();
	virtual void vfunc84(int, int);
	virtual void vfunc87(int);
	virtual void vfunc88();
	virtual void vfunc89(int);
	virtual void vfunc98();
	char m_pad0004[0x78 - 0x4];
};
