// CheckImage: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Image.h"
#include "vgui2__Panel.h"

class CheckImage : public vgui2::Image
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CheckImage's own function
    virtual int vfunc0();
    vgui2::Panel *m_pPanel;
    int m_n20; int m_n24; int m_n28; int m_n2c; int m_n30;
};
