// CWeaponOwner: the owner (player) object of a weapon, as sub_102517b0 returns it. Only the members that weapon code reads.
#pragma once

struct CWeaponOwner
{
	char m_pad0000[0x88];
	char m_szName[0x24d0 - 0x88];	// 0x88: the owner's text (name)
	int m_nSection24d0;	// 0x24d0: key of the inventory section (-1 when unset)
	char m_pad24d4[0x2668 - 0x24d4];
	int m_n2668;	// 0x2668: first dword of a block of the owner's info; weapons test its address and read it

	void *sub_1015d680(int index);	// the entity behind the handle `index` of the handle array at +0x2308 (0 when stale), stub 0x10013d09
};
