// CMultiplayRules: the multiplayer rule set (primary vtable 0x1046b934).
#pragma once

#include "CGameRules.h"

class CMultiplayRules : public CGameRules
{
public:
	virtual CGameRules *vfunc0(unsigned int flags);	// scalar deleting destructor
	virtual float vfunc30(int a);
	virtual float vfunc38(int a);
	virtual int vfunc43(int a, int b);
	virtual char vfunc47(CBaseEntity *pPlayer, CBaseEntity *pItem);	// \"CanHavePlayerItem\": in a running multiplayer game with the item limit set, refuses an item (without the flag bit 3 of its slot 346) the player already owns in one of its 0xe0 weapon slots; everything else goes to CGameRules
	virtual Vector vfunc51(CBaseEntity *pEnt);
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	virtual void vfunc75();

	int m_n04;	// 0x04
	int m_n08;	// 0x08

	CMultiplayRules *sub_10140f60();	// \"CMultiplayRules::CMultiplayRules\" body: base constructor, vtable, sub_1000fcbd(), then runs the dedicated / listen server config file (exec <cvar string>) when its cvar is non-empty; returns this
	void sub_101291f0();	// CGameRules constructor body (stub 0x10011d79)
	void sub_1000fcbd();	// CMultiplayRules::vfunc15, called directly
};
