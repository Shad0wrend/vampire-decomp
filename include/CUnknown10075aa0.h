// CUnknown10075aa0: 0x340 byte scene/choreography event object (constructed by 0x10075040 and 0x10075aa0); real name not yet known.
// Only the fields the recovered code touches are declared.
#pragma once

class CUnknown10075aa0
{
public:
	int m_i00;	// 0x00
	char m_b04;	// 0x04
	char m_pad05[0x84 - 5];
	char m_b84;	// 0x84
	char m_pad85[0x104 - 0x85];
	char m_b104;	// 0x104
	char m_pad105[0x184 - 0x105];
	int m_i184;	// 0x184
	float m_f188;	// 0x188
	int m_i18c;	// 0x18c
	int m_i190;	// 0x190
	int m_i194;	// 0x194
	char m_b198;	// 0x198
	char m_pad199[0x1b0 - 0x199];
	char m_b1b0;	// 0x1b0
	char m_pad1b1[0x2b4 - 0x1b1];
	int m_i2b4;	// 0x2b4
	int m_i2b8;	// 0x2b8
	char m_pad2bc[0x320 - 0x2bc];
	char m_b320;	// 0x320
	char m_pad321[3];
	int m_i324;	// 0x324
	char m_b328;	// 0x328
	char m_pad329[3];
	int m_i32c;	// 0x32c
	int m_i330;	// 0x330
	int m_i334;	// 0x334
	int m_i338;	// 0x338
	char m_b33c;	// 0x33c
	char m_pad33d[3];

	void sub_10075aa0(int arg);	// base constructor body: clears the fields, then sub_10076f10(0, 0, 0), stores arg at +0x330
	void sub_10076f10(char c, const char *a, const char *b);	// stores c at +0x1b1 and copies the strings (the empty string for null) to +0x1b2 / +0x232 (stub 0x1000e822)
	float sub_10076b30();	// the event's remaining length: 0.0f unless it has a time range (stub 0x10014835)
};
