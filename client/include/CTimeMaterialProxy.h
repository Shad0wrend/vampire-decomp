// CTimeMaterialProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CResultProxy.h"

class CTimeMaterialProxy : public CResultProxy
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CTimeMaterialProxy's own function
    virtual void vfunc1(int);
    void sub_100e33c0(float);
    char m_pad0004[0x10 - 0x4];
};
