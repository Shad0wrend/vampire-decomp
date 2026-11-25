// CEffectsClient: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "IEffects.h"

class CEffectsClient : public IEffects
{
public:
	virtual void vfunc6(const class Vector &origin, int a);
	virtual void vfunc7(const class Vector &origin, int a, int b);
};
