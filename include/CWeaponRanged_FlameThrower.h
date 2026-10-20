// CWeaponRanged_FlameThrower (RTTI .?AVCWeaponRanged_FlameThrower@@): flamethrower weapon, derived from CWeaponRanged.
// Only what decompiled code needs is declared.
#pragma once

#include "CWeaponRanged.h"

class CWeaponRanged_FlameThrower : public CWeaponRanged
{
public:
	CWeaponRanged_FlameThrower();	// the constructor (0x103e2ad0), called by the item_w_flamethrower factory

	virtual void vfunc104();

	bool sub_103e3490(CBaseEntity *pEnt);	// true when pEnt is a valid target (flagged 0x20002080, not unselectable, byte +0x19c bit 6 clear) that is not already in the burning list (8 byte records {handle, time} at +0x1554, count at +0x1560)

	char m_pad0004[0x91c - 4];
	int m_aBuf[0x2ee];	// 0x91c, zeroed by the constructor
	char m_pad14d4[0x1510 - 0x14d4];
	int m_n1510;	// 0x1510
	int m_n1514;
	char m_b1518;
	char m_b1519;
	char m_pad151a[2];
	int m_n151c;
	int m_n1520;
	float m_f1524;	// curtime stamp
	float m_f1528;	// curtime stamp
	int m_n152c;
	int m_n1530;
	char m_pad1534[0x1550 - 0x1534];
	char m_unk1550;
	char m_pad1551[3];
	int m_n1554;
	int m_n1558;
	int m_n155c;
	int m_n1560;
	int m_n1564;
};
