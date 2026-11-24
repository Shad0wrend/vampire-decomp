// CWaterEnum: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IPartitionEnumerator.h"

#include "Vector.h"
class IClientEntity;

class CWaterEnum : public IPartitionEnumerator
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CWaterEnum adds to its base's vtable: 0-0, vfuncK at slot K
    virtual int vfunc0(IClientEntity *pEntity);

    int m_nContents;
    int *m_pEntIndex;
    Vector m_vecPoint;
};
