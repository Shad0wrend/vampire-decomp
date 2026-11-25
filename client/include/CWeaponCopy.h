// CWeaponCopy: a copy of one of the owner's attack records (0xec84 bytes, CWeaponAttackSlot's stride).
#pragma once
struct CWeaponCopy
{
	int m_n0;
	char m_pad0004[0x108 - 4];
	int m_n108;
	char m_pad010c[0x260 - 0x10c];
	int m_n260;
	char m_pad0264[0xec84 - 0x264];
	void sub_101a5a80();
	CWeaponCopy *sub_1007b250(const CWeaponCopy *pOther);
};
