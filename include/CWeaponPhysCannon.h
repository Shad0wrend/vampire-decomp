// CWeaponPhysCannon: the physics cannon weapon (derived from CBaseCombatWeapon).
#pragma once
#include "CBaseCombatWeapon.h"

class CWeaponPhysCannon : public CBaseCombatWeapon
{
public:
	virtual void vfunc291();
	virtual void vfunc319();	// slot 319: refreshes the owner's unarmed weapon handle (+0xea4) and forwards to slot 456 of the owner
	virtual void vfunc326();	// slot 326: once the time at +0x730 has passed, with an owner whose character object is set and the byte at +0x911 set: asks the character for its position (sub_100b7fa0), the tuning block (0x10739d08) for a float, hands both to sub_10410bf0 and runs slot 307(0xc0)
	void sub_10410bf0(Vector *pPos, float flValue);	// stub 0x1000776b
};
