// VItemInfoUI: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete; nothing else yet
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CHudElement.h"
#include "CBasePanel.h"

class VItemInfoUI : public CHudElement, public CBasePanel
{
public:
	virtual ~VItemInfoUI();
	static void operator delete(void *pMem) { CHudElement::operator delete(pMem); }
};
