// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002b100 size=0x1e
#include "CLogicalEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CLogicalEntity::vfunc5
CBaseEntity *CLogicalEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

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
