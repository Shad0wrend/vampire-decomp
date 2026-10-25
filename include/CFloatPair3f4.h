// CFloatPair3f4: an object with a pair of floats at +0x3f4 / +0x3fc and a member function pointer at +0x114.
// Only the members decompiled code needs are declared.
#pragma once

class CFloatPair3f4
{
public:
	void sub_100c08d0();	// stub 0x10006a91

	void sub_100c0830();	// the member at 0x100c0830: when the helper at 0x10014691 accepts +0x45c, swaps the member pointer at +0x114 to sub_100c08d0 and runs it; else +0x3fc = +0x3f4 + 0.1

	char m_pad0000[0x114];
	void (CFloatPair3f4::*m_pfn114)();	// 0x0114
	char m_pad0118[0x3f4 - 0x118];
	float m_f3f4;	// 0x03f4
	char m_pad03f8[4];
	float m_f3fc;	// 0x03fc
	char m_pad0400[0x45c - 0x400];
	int m_n45c;	// 0x045c
};
