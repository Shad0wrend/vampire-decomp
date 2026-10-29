// CGameRulesSlotTable: the object CGameRules::vfunc55 hands out (a counted table of 0x24 byte records indexed 1..count-1);
// real name not yet known.
#pragma once

class CGameRulesSlotInner
{
public:
	virtual void vfunc0();
	virtual char vfunc1();	// true when the record has no value of its own

	char m_pad0004[0x28 - 4];
	float m_fValue28;	// 0x28
};

struct CGameRulesSlotRecord
{
	CGameRulesSlotRecord *m_pNext;
	int m_n04;
	int m_n08;
	int m_nOverride;	// 0x0c: -1 when unset
	int m_n10;
	int m_n14;
	struct { int m_n0; CGameRulesSlotInner *m_pInner; } *m_pObj;	// 0x18
	int m_n1c;
	int m_n20;
};

class CGameRulesSlotTable
{
public:
	int m_nCount;	// 0x00
	char m_pad0004[0x18 - 4];
	int m_nOverrides[1];	// 0x18, stride 0x24: see sub_10427620

	int sub_10427620(int index);	// stub 0x1000a37b: the override value of the record, else its inner object's value (0 when that has none), 0 for an invalid index
};
