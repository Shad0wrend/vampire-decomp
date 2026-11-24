// CVGuiScreenPanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__EditablePanel.h"

class CVGuiScreenPanel : public vgui2::EditablePanel
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CVGuiScreenPanel's own function
    virtual void vfunc110();
    vgui2::Panel *sub_100c8d60(vgui2::Panel *, const char *);
    // the slots CVGuiScreenPanel adds to its base's vtable: 118-118, vfuncK at slot K
    virtual bool vfunc118(int, int);
    char m_pad0004[0x7c - 0x4];
};
