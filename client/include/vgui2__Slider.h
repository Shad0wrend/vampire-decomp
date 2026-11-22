// vgui2::Slider: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class Slider : public vgui2::Panel
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with Slider's own function
    virtual void vfunc74();
    virtual void vfunc75();
    virtual void vfunc84(int, int);
    virtual void vfunc87(int);
    virtual void vfunc88(int);
    virtual void vfunc89(int);
    virtual void vfunc97();
    virtual void vfunc98();
    virtual void vfunc101();
    // the slots Slider adds to its base's vtable: 107-121, vfuncK at slot K
    virtual void vfunc107();
    virtual int vfunc108();
    virtual void vfunc109();
    virtual int vfunc110(int, int);
    virtual void vfunc111();
    virtual int vfunc112(int, int);
    virtual int vfunc113(int);
    virtual void vfunc114();
    virtual int vfunc115(int);
    virtual int vfunc116(int);
    virtual void vfunc117();
    virtual void vfunc118();
    virtual void vfunc119();
    virtual void vfunc120();
    virtual void vfunc121();
};
}
