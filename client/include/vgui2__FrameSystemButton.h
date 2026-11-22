// vgui2::FrameSystemButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__MenuButton.h"

namespace vgui2
{
class FrameSystemButton : public vgui2::MenuButton
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with FrameSystemButton's own function
    virtual int vfunc46(int);
    virtual void vfunc74();
    virtual void vfunc87(int);
    virtual void vfunc88(int);
    virtual int vfunc164(int, int, int, int);
};
}
