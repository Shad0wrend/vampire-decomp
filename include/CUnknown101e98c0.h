// CUnknown101e98c0: owner of a heap array of pointers to heap items (array at +8, count at +4); each item has a
// sub object at +0x1c that needs sub_101d8250() before the item is freed. Real name not yet known.
#pragma once

struct CUnknown101e98c0ItemSub
{
	void sub_101d8250();
};

struct CUnknown101e98c0Item
{
	char m_pad00[0x1c];
	CUnknown101e98c0ItemSub m_sub;	// 0x1c
};

class CUnknown101e98c0
{
public:
	int m_field00;
	int m_count;	// 0x04
	CUnknown101e98c0Item **m_ppItems;	// 0x08

	void sub_101e98c0();	// frees every item and the array, then clears the count and the first field
};
