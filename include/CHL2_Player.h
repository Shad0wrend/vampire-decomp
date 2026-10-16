// CHL2_Player: the HL2 player entity (derived from CBasePlayer at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CHL2_Player
{
public:
	virtual void vfunc475(int value);
	virtual float vfunc480();
};
