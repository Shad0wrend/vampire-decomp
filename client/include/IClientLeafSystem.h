// IClientLeafSystem: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases; nothing else yet (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IClientLeafSystemEngine.h"
#include "IGameSystem.h"

class IClientLeafSystem : public IClientLeafSystemEngine, public IGameSystem
{
public:
};
