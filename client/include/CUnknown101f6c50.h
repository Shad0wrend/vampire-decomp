// CUnknown101f6c50: a trait effect (type at +0x10, value at +0x14) that is applied to a stat block; real name not yet known.
#pragma once

struct CTraitStatBlock
{
	int m_v0;	// 0x00
	char m_pad04[0x10];
	int m_add;	// 0x14
	int m_lo1;	// 0x18
	int m_hi1;	// 0x1c
	int m_lo2;	// 0x20
	int m_hi2;	// 0x24
	int m_lo3;	// 0x28
	int m_hi3;	// 0x2c
	int m_lo4;	// 0x30
	int m_hi4;	// 0x34
	int m_pct;	// 0x38
	char m_pad3c[4];
	int m_ref;	// 0x40
};

class CUnknown101f6c50
{
public:
	char pad0[0x10];
	int m_nType;	// 0x10
	int m_nValue;	// 0x14

		// test on the block's field at +4 (stub 0x1000578b)
	void sub_10156980(CTraitStatBlock *pBlock);	// "Unable to Calculate TraitEffect" on an unknown type
		// when the effect's type is nType and the block's test at +4 (sub_10205430) holds, *pOut = the effect's value
};
