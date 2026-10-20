// CMultiplayRules: the multiplayer rule set (primary vtable 0x1046b934).
#pragma once

#include "CGameRules.h"

class CMultiplayRules : public CGameRules
{
public:
	virtual float vfunc30(int a);
	virtual float vfunc38(int a);
	virtual int vfunc43(int a, int b);
	virtual char vfunc47(CBaseEntity *pPlayer, CBaseEntity *pItem);	// "CanHavePlayerItem": in a running multiplayer game with the item limit set, refuses an item (without the flag bit 3 of its slot 346) the player already owns in one of its 0xe0 weapon slots; everything else goes to CGameRules
	virtual Vector vfunc51(CBaseEntity *pEnt);
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	virtual void vfunc75();
};
