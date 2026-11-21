// CVModInfo_t: the 0x44 byte record that CVTraitEffectList_t's Effect_* functions build on the stack and hand to
// every trait effect they apply (named after the scope trace string "CVTraitEffectList_t::Effect_ModInfo").
// Only what decompiled code needs.
#pragma once

#include "CVDmg_t.h"

class CVModInfo_t
{
public:
	int m_field00;	// 0x00: the constructor's third argument
	CVDmgBlock16_t m_block04;	// 0x04: the first two arguments
	int m_field14;	// 0x14: 0
	int m_field18;	// 0x18: 1
	int m_field1c;	// 0x1c: -1
	int m_field20;	// 0x20: 1
	int m_field24;	// 0x24: -1
	int m_field28;	// 0x28: 32000
	int m_field2c;	// 0x2c: -1
	int m_field30;	// 0x30: -32000
	int m_field34;	// 0x34: -1
	int m_field38;	// 0x38: 100
	char m_pad003c[0x44 - 0x3c];

	CVModInfo_t(int a, int b, int c);	// 0x101f6910 (stub 0x10005ba0): builds the block from (a, b), stores c and the defaults
	int sub_10156770();	// stub 0x1000b712, run on the record by the other Effect_* functions
};
