// CBarterPlayerView: the weapon's owner object (CWeaponRanged::sub_102517b0, stub 0x10010ea6) as the barter price functions
// 0x10257280 (sell) / 0x102573a0 (buy) read it; only the members they use.
#pragma once

struct CBarterPlayerView
{
	char m_pad0000[0x2558];
	int m_nSellBase2558;	// 0x2558: base price used by the buy function when the bool argument is 0 (the sell function reads +0x255c)
	int m_nSellBase255c;	// 0x255c
	char m_pad2560[0x266c - 0x2560];
	int m_nBase266c;	// 0x266c: base price used when the bool argument is set
	char m_pad2670[0x4feb0 - 0x2670];
	void *m_pClass4feb0;	// 0x4feb0: non-null -> the "Barter_Class_Discount" stat applies
};
