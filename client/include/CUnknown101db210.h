// CUnknown101db210: DisciplineFX-style table class with a lazily grown array of item pointers at +0x2c (name provisional).
#pragma once

#include "CUnknown101da960.h"
#include "CUnknown101daf60.h"
#include "CUnknown101daec0.h"

struct S6;

struct CUnknown101db210Sub	// the object at +0x38; its count at +4 says whether the sub-table has entries
{
	int m_n00;
	int m_nCount;

		// the sub-table pick (stub 0x1000483b), -1 when nothing is picked
	void sub_10146cb0(IKVNodeView *pKV, void *pFilter);	// loads the sub-table from the node (stub 0x1000394a)
};

struct CUnknown101db210Filter	// the 16 byte filter record stored at +4
{
	int m_a, m_b, m_c, m_d;
};

class CUnknown101db210
{
public:
	int m_id;	// 0x0000: printed as "Affects_Table -- %d"
	char m_filter[0x10];	// 0x0004: a CUnknown101da960 (empty class), see Filter()
	CUnknown101daf60 m_first;	// 0x0014: embedded entry
	char m_pad0020[0x2c - 0x20];
	int m_allocCount;	// 0x002c
	int m_count;	// 0x0030
	S6 **m_pItems;	// 0x0034
	CUnknown101db210Sub *m_pSub;	// 0x0038

	CUnknown101da960 *Filter() { return (CUnknown101da960 *)m_filter; }
	S6 *sub_10146a90();	// grows by one slot and returns the (lazily created) item
	void sub_10146c20();	// "Affects_Table" Debug_Display: prints the id, the filter, the first entry and every item
	void sub_10148ed0();
		// picks the value of an item by a 0..100 roll over the item weights (honouring the per-stamp count limits), else the sub-table's pick, else the first item's value (or the default of the embedded entry at +0x18)
	void sub_10146b90();	// frees the item array and the sub-table (stub 0x10012404)
	bool sub_10146990(IKVNodeView *pKV, const CUnknown101db210Filter *pFilter);	// loads the table from a node: filter (copied to +4, then the "Affects" filters), "Default_Mapping" entry, every "Mapping" item, the sub-table; warns when the chances do not add up to 100
};
