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
    virtual int vfunc74(int);
    virtual void vfunc96();
    virtual void vfunc101();
    virtual int vfunc102();
    // the slots ScrollBar adds to its base's vtable: 107-122, vfuncK at slot K
    virtual int vfunc107();
    virtual int vfunc108();
    virtual int vfunc109();
    virtual int vfunc110();
    virtual int vfunc111();
    virtual int vfunc112();
    virtual int vfunc113();
    virtual void vfunc114();
    virtual void vfunc115();
    virtual void vfunc116();
    virtual int vfunc117();
    virtual int vfunc118(int);
    virtual void vfunc119();
    virtual void vfunc120();
    virtual int vfunc121();
    virtual void vfunc122();
};
}
