// CClientLeafSystem: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases; nothing else yet (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IClientLeafSystem.h"
#include "ISpatialLeafEnumerator.h"

class CClientLeafSystem : public IClientLeafSystem, public ISpatialLeafEnumerator
{
public:
};
