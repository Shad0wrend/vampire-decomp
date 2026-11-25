// CClassMap: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IClassMap.h"

struct ClassMapEntry
{
    unsigned short m_iLeft;
    unsigned short m_iRight;
    unsigned short m_iParent;
    unsigned short m_iHeight;
    char m_pad08[0x94 - 8];
};

class CClassMap : public IClassMap
{
public:
    ClassMapEntry *m_pElements;
    ClassMapEntry *sub_100ce920(unsigned short i);
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CClassMap's own function
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual int vfunc3(const char *classname);
};
