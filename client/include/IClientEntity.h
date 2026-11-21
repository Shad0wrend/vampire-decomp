// IClientEntity: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "IClientUnknown.h"
#include "IClientRenderable.h"
#include "IClientNetworkable.h"
#include "IClientCollideable.h"
#include "IClientThinkable.h"

class IClientEntity : public IClientUnknown, public IClientRenderable, public IClientNetworkable, public IClientCollideable, public IClientThinkable
{
};
