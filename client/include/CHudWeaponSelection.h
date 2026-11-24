// CHudWeaponSelection: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CHudElement.h"

class CHudWeaponSelection : public CHudElement
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CHudWeaponSelection's own function
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc5(int);
    virtual void vfunc6();
    virtual void vfunc7();
    virtual bool vfunc9();
    void sub_101a7e90(int font, const char *str, int &ox, int &oy, int w, int h);
    void sub_101a7f20(const char *str, int x, int y, int w, int h);
};
