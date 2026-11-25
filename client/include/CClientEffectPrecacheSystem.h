// CClientEffectPrecacheSystem: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IGameSystem.h"
#include "utlvector.h"

class CPrecacheEffect;

class CClientEffectPrecacheSystem : public IGameSystem
{
public:
	CUtlVector<CPrecacheEffect *> m_Effects;
    // the base slots the game's vtable fills with CClientEffectPrecacheSystem's own function
    virtual bool vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual ~CClientEffectPrecacheSystem() {}
};
