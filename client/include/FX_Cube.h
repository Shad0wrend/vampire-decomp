// FX_Cube: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "CClientSideEffect.h"

class FX_Cube : public CClientSideEffect
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with FX_Cube's own function
    virtual void vfunc1();
    virtual bool vfunc3();
    int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14; int m_unk18; int m_unk1c;
    int m_unk20; int m_unk24; int m_unk28; int m_unk2c;
    float m_flUnk30;
};
