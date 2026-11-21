// C_BasePlayer: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseVCombatCharacter.h"

class C_BasePlayer : public C_BaseVCombatCharacter
{
public:
	virtual ~C_BasePlayer();
};
