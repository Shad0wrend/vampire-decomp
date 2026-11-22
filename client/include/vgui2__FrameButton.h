// vgui2::FrameButton: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Button.h"

namespace vgui2
{
class FrameButton : public vgui2::Button
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with FrameButton's own function
    virtual void vfunc74();
    virtual void vfunc87(int);
    virtual void vfunc98();
    virtual int vfunc164(int, int, int, int);
    // the slots FrameButton adds to its base's vtable: 166-166, vfuncK at slot K
    virtual void vfunc166();
};
}
