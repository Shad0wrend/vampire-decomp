// VHotkeysUI: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete; nothing else yet
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CBasePanel.h"
#include "CHudElement.h"
#include "vgui2__Label.h"

class VHotkeysUI : public CBasePanel, public CHudElement
{
public:
	virtual ~VHotkeysUI();
	void sub_10183aa0();
	char m_pad0000[0x1c88 - 0x170 - sizeof(CHudElement)];
	vgui2::Label m_Label;
	static void operator delete(void *pMem) { CHudElement::operator delete(pMem); }
};
