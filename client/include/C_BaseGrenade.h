// C_BaseGrenade: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseCombatCharacter.h"

class C_BaseGrenade : public C_BaseCombatCharacter
{
public:
	virtual ~C_BaseGrenade();
};
