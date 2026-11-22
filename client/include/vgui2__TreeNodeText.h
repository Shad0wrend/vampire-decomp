// vgui2::TreeNodeText: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__TextEntry.h"

namespace vgui2
{
class TreeNodeText : public vgui2::TextEntry
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with TreeNodeText's own function
    virtual int vfunc74(int);
    virtual void vfunc80();
    virtual void vfunc81();
    virtual void vfunc87(int);
    virtual void vfunc88(int);
    virtual void vfunc90();
    virtual void vfunc92();
};
}
