// C_ThaumaturgyParticle: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_EnvParticle.h"

class C_ThaumaturgyParticle : public C_EnvParticle
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with C_ThaumaturgyParticle's own function
    virtual int vfunc15();
    virtual int vfunc16();
    virtual void vfunc120();
    char m_pad04c0[0x4c8 - 0x4c0];
};
