// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b4360 size=0xb
#include "CLogicalEntity.h"

int CLogicalEntity::vfunc117()
{
	return CBaseEntity::vfunc117() & ~0x2 | 0x200;
}
// END FUNCTION

// FUNCTION: 0x10130e30 size=0x5
#include "CLogicalEntity.h"
#include "CBaseEntity.h"

// TARGET: CLogicalEntity::vfunc103
// the game's 0x10130e30: a tail call (jmp) of CBaseEntity::vfunc103
void CLogicalEntity::vfunc103()
{
	CBaseEntity::vfunc103();
}
// END FUNCTION
