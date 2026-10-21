// CSingleplayRules: the single player rule set, derived from CGameRules at +0x0.
#pragma once

#include "CGameRules.h"

class CSingleplayRules : public CGameRules
{
public:
	virtual CBaseEntity *vfunc20(CBaseEntity *pPlayer, CBaseEntity *pCurrentWeapon);	// "GetNextBestWeapon": over the player's 0xe0 weapon slots, the usable owned weapon with the highest weight (pCurrentWeapon is not looked at), null when there is none
	virtual float vfunc38(int a);
	virtual int vfunc43(int a, int b);
	virtual int vfunc48(int index);
	virtual float vfunc49(int a);
	virtual float vfunc50(int a);
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	Vector vfunc51(CBaseEntity *pEnt);	// as in CMultiplayRules (transplant)
};
