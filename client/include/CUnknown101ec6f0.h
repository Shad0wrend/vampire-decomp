// CUnknown101ec6f0: a record with an index (+0), a name (+8), a money amount (+0xc) and a list of item name strings
// (count at +0x10, pointer at +0x14); real name not yet known.
#pragma once

struct CVFeatKV;

class CUnknown101ec6f0
{
public:
	int m_index;	// 0x00
	int m_iInternalName;	// 0x04: pooled string of the "InternalName" key
	const char *m_name;	// 0x08
	int m_money;	// 0x0c
	int m_itemCount;	// 0x10
	const char **m_items;	// 0x14

	void sub_101503a0();	// debug dump: "(%d): %s", "\t\tMoney: %d", then "\t\t(%d): %s" per item
		// loads the record from its key: InternalName, Name, Money and the children of "Items" (all of which must be named like the first, else false); false for no key
};
