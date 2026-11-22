// C_BaseCombatWeapon: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseAnimating.h"

class C_BaseCombatWeapon : public C_BaseAnimating
{
public:
	virtual ~C_BaseCombatWeapon();
};
