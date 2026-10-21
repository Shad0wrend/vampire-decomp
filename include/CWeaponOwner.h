// CWeaponOwner: the owner (player) object of a weapon, as sub_102517b0 returns it. Only the members that weapon code reads.
#pragma once

struct CWeaponOwner
{
	char m_pad0000[0x2668];
	int m_n2668;	// 0x2668: first dword of a block of the owner's info; weapons test its address and read it
};
