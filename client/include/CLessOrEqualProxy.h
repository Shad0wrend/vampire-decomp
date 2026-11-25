// CLessOrEqualProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CFunctionProxy.h"

class CLessOrEqualProxy : public CFunctionProxy
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CLessOrEqualProxy's own function
    virtual bool vfunc0(void*, void*);
    virtual void vfunc1(int);
    void *m_pLessVar;
    void *m_pGreaterVar;
};
