// vgui2::TreeNode: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class TreeNode : public vgui2::Panel
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with TreeNode's own function
    virtual void vfunc21();
    virtual void vfunc74();
    virtual void vfunc80();
    virtual void vfunc87(int);
    virtual void vfunc90();
    virtual void vfunc92();
    virtual void vfunc98();
    virtual void vfunc101();
};
}
