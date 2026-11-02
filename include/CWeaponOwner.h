// CWeaponOwner: the owner (player) object of a weapon, as sub_102517b0 returns it. Only the members that weapon code reads.
#pragma once

struct CWeaponAttackSlot	// one of the owner's three attack records (0xec84 bytes each, from owner+0x238e0)
{
	char m_pad0000[4];
	char m_bActive04;	// 0x04: the record is in use (the weapon's debug overlay lists only those)
	char m_pad0005[0x25c - 5];
	int m_nBotchKey25c;	// 0x25c: key of the botch table record (-1 = none)
	float m_flAttackRate260;	// 0x260: the attack rate shown by the overlay
	char m_pad0264[0xec84 - 0x264];
};

struct CWeaponOwner
{
	char m_pad0000[0x88];
	char m_szName[0x24d0 - 0x88];	// 0x88: the owner's text (name)
	int m_nSection24d0;	// 0x24d0: key of the inventory section (-1 when unset)
	union { char m_pad24d4[0x255c - 0x24d4]; struct { char m_pad24d4b[0x2558 - 0x24d4]; int m_nWorth2558; }; };	// 0x2558: the worth shown by the weapon overlay ("Worth: %d")
	int m_n255c;	// 0x255c: barter sell value
	char m_pad2560[0x2668 - 0x2560];
	int m_n2668;	// 0x2668: first dword of a block of the owner's info; weapons test its address and read it
	int m_n266c;	// 0x266c: barter sell value (variant)
	char m_pad2670[0x238e0 - 0x2670];
	CWeaponAttackSlot m_Attacks[3];	// 0x238e0 .. 0x2c58c

	void *sub_1015d680(int index);	// the entity behind the handle `index` of the handle array at +0x2308 (0 when stale), stub 0x10013d09
};
