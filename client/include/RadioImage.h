// RadioImage: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Image.h"

class RadioImage : public vgui2::Image
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with RadioImage's own function
    virtual int vfunc0();
    struct IRadioPanel *m_pPanel; Color4b m_c20; Color4b m_c24; Color4b m_c28; Color4b m_c2c; Color4b m_c30;
};
