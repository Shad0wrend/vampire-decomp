// vgui2::ProgressBar: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class ProgressBar : public vgui2::Panel
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with ProgressBar's own function
    virtual void vfunc74();
    virtual void vfunc97();
    virtual void vfunc102();
    // the slots ProgressBar adds to its base's vtable: 107-107, vfuncK at slot K
    virtual void vfunc107();
};
}
