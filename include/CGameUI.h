// CGameUI (RTTI .?AVCGameUI@@): game_ui entity (derived from CBaseEntity, which is not modelled here). Declared flat,
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CBaseEntity;

class CGameUI
{
public:
	CGameUI *vfunc5(unsigned int flags);	// scalar deleting destructor: destroys the 14 COutputEvent members at +0x458 .. +0x590 (0x18 bytes each, last first), the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_10118b40(CBaseEntity *pPlayer);	// stops the use of the game_ui by pPlayer (when it is the current player, handle at +0x5a8): fires the output at +0x470 and sets the four outputs at +0x548 .. +0x590 to 0.0f and fires them, then forgets the player and stops thinking
public:
	datamap_t * vfunc82();
};
