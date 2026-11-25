// CWeaponCopy: a copy of one of the owner's attack records (0xec84 bytes, CWeaponAttackSlot's stride).
#pragma once
struct CWeaponCopy
{
	int m_n0;
	char m_pad0004[0xec84 - 4];
	CWeaponCopy *sub_1007b250(const CWeaponCopy *pOther);
};
