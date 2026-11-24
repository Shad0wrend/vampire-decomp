// CClientEffectPrecacheSystem: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IGameSystem.h"

class CClientEffectPrecacheSystem : public IGameSystem
{
public:
	int m_unk4;
	int m_unk8;
	int m_unkc;
	int m_unk10;
	int m_unk14;
	CClientEffectPrecacheSystem() : m_unk4(0), m_unk8(0), m_unkc(0), m_unk10(0), m_unk14(0) {}	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CClientEffectPrecacheSystem's own function
    virtual bool vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
};
