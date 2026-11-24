// CShadowModelProxy: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IMaterialProxy.h"

class CShadowModelProxy : public IMaterialProxy
{
public:
    void *m_v4; void *m_v8; void *m_vc; void *m_v10; void *m_v14; void *m_v18; void *m_v1c;
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CShadowModelProxy's own function
    virtual bool vfunc0(void*, void*);
    virtual void vfunc1(int);
    virtual void vfunc2();
};
