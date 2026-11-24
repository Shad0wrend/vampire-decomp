// CThermalMaterialProxy: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IMaterialProxy.h"

class CThermalMaterialProxy : public IMaterialProxy
{
public:
    void *m_ThermalVar; void *m_ThermalPeriod; void *m_ThermalMax; void *m_ThermalMin;
    // the base slots the game's vtable fills with CThermalMaterialProxy's own function
    virtual bool vfunc0(void*, void*);
    virtual void vfunc1(int);
    virtual void vfunc2();
};
