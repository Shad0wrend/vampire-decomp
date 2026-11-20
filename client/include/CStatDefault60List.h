// CStatDefault60List: lazily grown array of StatDefault60 pointers (name provisional).
#pragma once
#include "StatDefault60.h"

class IKVNodeView;

class CStatDefault60List
{
public:
	int m_allocCount;
	int m_count;
	StatDefault60 **m_pItems;

	~CStatDefault60List();	// the destructor (stub 0x100107d5 -> 0x101db610, which jumps to sub_101db7e0)
	StatDefault60 *sub_10146d10();	// grows by one slot and returns the (lazily created) item
	void sub_10146e00();	// frees every item and the array (stub 0x10010d7f)
	char sub_10146cb0(IKVNodeView *pKV, void *pFilter);	// loads the items from the "Affects_Table" children of the node
};
