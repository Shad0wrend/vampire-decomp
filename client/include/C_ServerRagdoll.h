// C_ServerRagdoll: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_BaseAnimating.h"

class C_ServerRagdoll : public C_BaseAnimating
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	C_ServerRagdoll();
    // the base slots the game's vtable fills with C_ServerRagdoll's own function
    virtual int vfunc15();
    virtual int vfunc16();
    virtual void vfunc37();
    virtual int vfunc72();
    virtual void vfunc90();
    virtual void vfunc123();
    virtual int vfunc125(int, int);
    virtual int vfunc126();
    virtual void vfunc131(int, int, int, int, int, int);
};
