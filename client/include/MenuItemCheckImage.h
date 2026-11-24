// MenuItemCheckImage: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Image.h"

class MenuItemCheckImage : public vgui2::Image
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with MenuItemCheckImage's own function
    virtual int vfunc0();
    MenuItemCheckImage(void *pItem) { m_pMenuItem = pItem; m_unk20 = 0; vfunc9(0x14, 0xd); }
    int m_unk0c[(0x1c - 0xc) / 4];
    void *m_pMenuItem;
    int m_unk20;
};
