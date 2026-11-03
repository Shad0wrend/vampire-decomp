// CGameUI (RTTI .?AVCGameUI@@): game_ui entity (derived from CBaseEntity, which is not modelled here). Declared flat,
// only what matched code needs, as plain members.
#pragma once

#include "COutputEvent.h"

struct datamap_t;

class CBaseEntity;

class CGameUI
{
public:
	CGameUI *vfunc5(unsigned int flags);	// scalar deleting destructor: destroys the 14 COutputEvent members at +0x458 .. +0x590 (0x18 bytes each, last first), the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_10118b40(CBaseEntity *pPlayer);	// stops the use of the game_ui by pPlayer (when it is the current player, handle at +0x5a8): fires the output at +0x470 and sets the four outputs at +0x548 .. +0x590 to 0.0f and fires them, then forgets the player and stops thinking
public:
	datamap_t * vfunc82();

	void vfunc134();	// slot 134 (0x10118db0): the game_ui button/use handler: watches the user's (handle +0x5a8) button state (+0x209c / +0x2098) and fires the outputs at +0x488 .. +0x590, then the four float outputs at +0x548 / +0x560 / +0x578 / +0x590

	char m_pad0000[0x17c];	// 0x0000 .. 0x017B
	float m_flNextThink17c;	// 0x17C
	char m_pad0180[0x204 - 0x180];	// 0x180 .. 0x203
	unsigned int m_flags204;	// 0x204: entity flag word (bit 7 = 0x80, bit 8 = 0x100)
	char m_pad0208[0x450 - 0x208];	// 0x208 .. 0x44F
	float m_fl450;	// 0x450: dot threshold (-1.0f disables the look test)
	char m_pad0454[0x458 - 0x454];	// 0x454 .. 0x457
	COutputEvent m_Outputs458[14];	// 0x458 .. 0x5A7: the 14 fired outputs (0x18 bytes each)
	unsigned int m_h5a8;	// 0x5A8: the entity handle of the current game_ui user
};
