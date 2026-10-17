// CBaseCombatCharacter: base of NPCs and players.
// Only the members the recovered code needs are declared.
#pragma once

#include "CBaseEntity.h"

class CBaseCombatCharacter : public CBaseEntity
{
public:
	void sub_103326b0(float amount);
	void sub_10339560();

	// Slots called directly so far; declared as plain members.
	void vfunc335();
	void vfunc336();
	void vfunc403();
};
