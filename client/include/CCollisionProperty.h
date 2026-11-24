// CCollisionProperty: skeleton from the game's RTTI (2026-11-24)
// declared: its bases (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "ICollideable.h"
#include "vector.h"

class CCollisionProperty : public ICollideable
{
public:
    virtual void *vfunc0();
    virtual void *vfunc2();
    virtual Vector &vfunc1();
    virtual void vfunc17();
    Vector m_vecMins;	// +0x4
    int m_unk10; int m_unk14; int m_unk18; int m_unk1c; int m_unk20; int m_unk24; int m_unk28; int m_unk2c; int m_unk30; int m_unk34; int m_unk38;
    void *m_unk3c;
    int m_unk40;
    int vfunc11();
};
