// CConnectMessagePanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

class CConnectMessagePanel : public vgui2::Panel
{
public:
	CConnectMessagePanel(vgui2::Panel *parent);
	virtual ~CConnectMessagePanel();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CConnectMessagePanel's own function
	virtual void vfunc2();
	virtual int vfunc74(int);
	virtual void vfunc98();
	// the slots CConnectMessagePanel adds to its base's vtable: 107-107, vfuncK at slot K
	virtual char vfunc107();
};
