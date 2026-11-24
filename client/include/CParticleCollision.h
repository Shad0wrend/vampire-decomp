// CParticleCollision: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "CBaseSimpleCollision.h"

class CParticleCollision : public CBaseSimpleCollision
{
public:
    CParticleCollision();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CParticleCollision adds to its base's vtable: 4-5, vfuncK at slot K
    virtual void vfunc4(int, int, int, int, int, int, int);
    virtual bool vfunc5(Vector &origin, Vector &velocity, float *rollDelta, float timeDelta, CGameTrace *pTrace);

    float m_flGravity;
    float m_flCollisionDampen;
    float m_flAngularCollisionDampen;
    void sub_10114d80();
};
