// CVStatCost_t: a vampire stat cost made of two 0x14-byte sub costs; only the IsNull check is recovered so far.
#pragma once

struct CVStatSubCost_t
{
	union
	{
		char m_data[0x14];	// dword fields: limit (10000 when null) at +0, 1 at +4, 0 at +8 / +0xc, heap pointer at +0x10
		struct
		{
			int m_nType;	// 0x00: 9998 table, 9999 current rating * base + add, 10000 null, else the plain cost
			int m_nBase;	// 0x04
			int m_nAdd;	// 0x08
			int m_nCount;	// 0x0c: the table's size
			int *m_pTable;	// 0x10: the table (heap)
		};
	};

	bool sub_101595e0();
	void sub_10159550();	// "CVStatSubCost_t::Null": scope trace, resets the fields and frees the heap pointer
	CVStatSubCost_t *sub_101594e0();	// "CVStatSubCost_t::CVStatSubCost_t": scope trace, clears the heap pointer, Null()
	int sub_101597d0(int level);	// "CVStatSubCost_t::GetCostToBuy": scope trace; type 9998: heap table entry [level], 9999: base * level + add, 10000: 10000, else the type itself
	int sub_10159880(int level, bool bForce);	// "CVStatSubCost_t::GetCostToSell": scope trace; 0 when !bForce and level <= 1; type 9998: heap table entry [level - 1], 9999: base * (level - 1) + add, 10000: 0, else the type itself
	void sub_10159650(const char *str);	// "CVStatSubCost_t::Parse": scope trace; "Current_Rating..." gives type 9999 and the first number after it (+4), "Table: a, b, c" type 9998 with a heap array of the numbers (count at +0xc, array at +0x10), else the plain number is the type
	void sub_10159b70(const char *pszLabel);	// "CVStatSubCost_t::Debug_Display": scope trace; unless IsNull(), DevMsg(1, "\t\t\t( %s: '%s' )\t", pszLabel, the cost text sub_101fbd30())
	const char *sub_10159940();	// the cost as text (stub 0x10014399)
};

struct CVStatKV;	// a KeyValues-like object (slot 2 = FindKey, slot 13 = GetString)

class CVStatCost_t
{
public:
	CVStatSubCost_t m_first;
	CVStatSubCost_t m_second;

	bool sub_10159c80();	// "CVStatCost_t::IsNull"
	void sub_10159c10();	// "CVStatCost_t::Null": scope trace, nulls both sub costs
	int sub_10159e00(int level, bool bFirst);	// "CVStatCost_t::GetCostToBuy": scope trace, GetCostToBuy of the first (bFirst) or second sub cost
	int sub_10159e90(int level, bool bFirst);	// "CVStatCost_t::GetCostToSell": scope trace, GetCostToSell of the first (bFirst, forced) or second sub cost
	bool sub_10159d10(CVStatKV *pKV);	// "CVStatCost_t::Load": scope trace; reads the "Costs" sub key's "New" and "Raise" strings into the two sub costs, then copies the non-null one over a null one; false without a sub key
	const char *sub_10159fc0();	// the cost as text (stub 0x10015d07)
	void sub_1015a080();	// "CVStatCost_t::Debug_Display": scope trace; unless IsNull(), prints "Cost: " and the cost text with DevMsg(1, ...)
};
