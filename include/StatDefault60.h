// StatDefault60: 0x3c-byte list item built with its index (name provisional).
#pragma once

class IKVNodeView;

struct StatDefault60
{
	int a[15];
	StatDefault60(int);
	void sub_101db0d0(IKVNodeView *pKV, void *pFilter);	// loads the item from a node (stub 0x10014097)
};
