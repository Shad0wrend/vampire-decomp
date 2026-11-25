// CHudChatLine: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Label.h"

class CHudChatLine : public vgui2::Label
{
public:
	void *sub_100f13a0(vgui2::Panel *, const char *);
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CHudChatLine's own function
    virtual int vfunc74(int);
    virtual void vfunc98();
    char m_pad0004[0xdc - 0x4];
};
