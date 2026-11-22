// vgui2::ScrollBar: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class ScrollBar : public vgui2::Panel
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with ScrollBar's own function
    virtual void vfunc11(int, int);
    virtual bool vfunc62(char);
    virtual bool vfunc63(char);
    virtual bool vfunc64(char);
    virtual void vfunc74();
    virtual void vfunc96();
    virtual void vfunc101();
    virtual int vfunc102();
    // the slots ScrollBar adds to its base's vtable: 107-122, vfuncK at slot K
    virtual void vfunc107();
    virtual void vfunc108();
    virtual void vfunc109();
    virtual void vfunc110();
    virtual void vfunc111();
    virtual void vfunc112();
    virtual void vfunc113();
    virtual void vfunc114();
    virtual void vfunc115();
    virtual void vfunc116();
    virtual int vfunc117();
    virtual int vfunc118(int);
    virtual void vfunc119();
    virtual void vfunc120();
    virtual void vfunc121();
    virtual void vfunc122();
};
}
