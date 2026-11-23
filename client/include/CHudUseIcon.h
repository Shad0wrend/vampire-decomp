// CHudUseIcon: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CHudUseIconOwned { public: virtual ~CHudUseIconOwned(); };

class CHudUseIcon : public CManagedHudElement
{
public:
	virtual ~CHudUseIcon();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CHudUseIcon's own function
	virtual void vfunc98();
	virtual bool vfunc107();
	int m_unk174;
	CHudUseIconOwned *m_pChild1; CHudUseIconOwned *m_pChild2; CHudUseIconOwned *m_pChild3;
	int m_unk184; int m_unk188;
	CHudUseIconOwned *m_pChild4; CHudUseIconOwned *m_pChild5;
	char m_pad0194[0x218 - 0x194];
};
