// CGameRulesSlotTable: the object CGameRules::vfunc55 hands out (a counted table of 0x24 byte records, indices 1..count-1);
// real name not yet known. Record n: the override dword is at +0x18 + n * 0x24 (-1 when unset), the pointer to its
// holder at +0x24 + n * 0x24 (read as dwords in the source).
#pragma once

class CGameRulesSlotInner
{
public:
	virtual void vfunc0();
	virtual char vfunc1();	// true when the record has no value of its own

	char m_pad0004[0x28 - 4];
	float m_fValue28;	// 0x28
};

struct CGameRulesSlotHolder
{
	int m_n0;
	CGameRulesSlotInner *m_pInner;	// 0x04
};

class CGameRulesSlotTable
{
public:
	int m_nCount;	// 0x00

	int sub_10079050(int index);	// stub 0x1000a37b: the override value of the record, else its inner object's value (0 when that has none), 0 for an invalid index
};
