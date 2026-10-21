// CUnknown101e01e0: lazily grown array of item pointers (name provisional).
#pragma once

#include "CUnknown101daec0.h"

struct S101df260;

class CUnknown101e01e0
{
public:
	int m_allocCount;
	int m_count;
	S101df260 **m_pItems;

	S101df260 *sub_101e01e0();	// grows by one slot and returns the (lazily created) item
	bool sub_101e0080(IKVNodeView *pKV, const char *pszName, int *pIndex);	// loads the named hit group of the node into a new record, falling back (recursively, at most 0x18 levels deep) on the default one when it inherits an unknown group; stores the record's id in *pIndex when given
	bool sub_1000c315(IKVNodeView *pKV, const char *pszName, int *pIndex);	// the stub of sub_101e0080, which the recursion goes through
};
