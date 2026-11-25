// CVMainMenu: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CBasePanel.h"

class CVMainMenu : public CBasePanel
{
public:
	virtual ~CVMainMenu();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CVMainMenu's own function
	virtual void vfunc97();
	virtual void vfunc98();
	void sub_10066250();
	void sub_10066440();
	bool sub_10065d30();
	bool sub_10065c90();
	char m_pad0004[0x448 - 0x4];
};
