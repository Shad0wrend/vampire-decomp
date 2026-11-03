// CFloatPair3f4: an object with a pair of floats at +0x3f4 / +0x3fc and a member function pointer at +0x114.
// Only the members decompiled code needs are declared.
#pragma once

class CFloatPair3f4
{
public:
	void sub_100c08d0();	// stub 0x10006a91
	void sub_100c0ad0(int a, int b, int c, int d);	// takes four stack arguments it does not read (ret 0x10): sub_100c0970(0.0f) when +0x164 is not zero, else sub_100c0970(+0x460)

	void sub_100c0c80(float flUnused);	// takes one stack argument it overwrites (ret 4 via the tail jump): sub_100c0970(+0x460) when +0x164 is not above 0, else sub_100c0970(0.0f)
	void sub_100c0c30(float flUnused);	// sets +0x46c = 1 and hands +0x460 to sub_100c0970
	void sub_100c0c00(float flUnused);	// sets +0x46c = 0 and hands +0x460 to sub_100c0970
	void sub_100c0830();	// the member at 0x100c0830: when the helper at 0x10014691 accepts +0x45c, swaps the member pointer at +0x114 to sub_100c08d0 and runs it; else +0x3fc = +0x3f4 + 0.1
	void sub_100c0690();	// picks the target value from |+0x164| + +0x460 * +0x450 and +0x45c (the +0x45c value wins when its magnitude does not exceed it: then the member pointer at +0x114 becomes sub_100c08d0 and runs), hands it to sub_100c0420 and arms +0x3fc = +0x3f4 + 0.1
	void sub_100c0420(float flValue);	// stub 0x10002a59
	void sub_10011586();	// the member the pointer at +0x114 takes when the new value has the other sign than +0x164 (stub 0x10011586)
	void sub_100c0970(float flValue);	// sets the target value (+0x45c = |flValue|, negated while the byte at +0x46c is set): without bit 4 of the byte at +0x204 it goes to sub_100c0420 at once, else it picks the member for +0x114 by the signs and magnitudes against +0x164; then arms +0x3fc = +0x3f4 + 0.1

	char m_pad0000[0x114];
	void (CFloatPair3f4::*m_pfn114)();	// 0x0114
	char m_pad0118[0x164 - 0x118];
	float m_f164;	// 0x0164
	char m_pad0168[0x204 - 0x168];
	unsigned char m_b204;	// 0x0204: flags, bit 4 (0x10) makes the target value follow its direction
	char m_pad0205[0x3f4 - 0x205];
	float m_f3f4;	// 0x03f4
	char m_pad03f8[4];
	float m_f3fc;	// 0x03fc
	char m_pad0400[0x450 - 0x400];
	float m_f450;	// 0x0450
	char m_pad0454[0x45c - 0x454];
	union
	{
		int m_n45c;	// 0x045c
		float m_f45c;
	};
	float m_f460;	// 0x0460
	char m_pad0464[0x46c - 0x464];
	char m_b46c;	// 0x046c
};
