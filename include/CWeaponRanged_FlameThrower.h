// CWeaponRanged_FlameThrower (RTTI .?AVCWeaponRanged_FlameThrower@@): flamethrower weapon, derived from CWeaponRanged.
// Only what decompiled code needs is declared.
#pragma once

#include "CWeaponRanged.h"

class CWeaponRanged_FlameThrower : public CWeaponRanged
{
public:
	virtual void vfunc104();

	char m_pad0004[0x1550 - 4];
	char m_unk1550;
};
