// CBasePlayer: the player entity.
// Barely recovered yet: only the members decompiled code needs are named, the
// rest is padding that keeps their offsets. The vtable slots are *not* modelled
// here, so the declaration order of the virtuals below carries no meaning --
// add the padding slots before using a virtual call through this class.
#pragma once

class CBasePlayer
{
public:
	virtual void vfunc407();

	char m_pad0004[0x19F2];	// 0x0004 .. 0x19F5
	bool m_b19F6;
};
