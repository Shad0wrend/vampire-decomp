// C_BreakableSurface: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"
#include "IBrushRenderer.h"

class C_BreakableSurface : public C_BaseEntity, public IBrushRenderer
{
public:
	virtual ~C_BreakableSurface();
};
