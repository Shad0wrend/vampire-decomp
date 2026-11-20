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

	S101df260 *sub_10149100();	// grows by one slot and returns the (lazily created) item
		// loads the named hit group of the node into a new record, falling back (recursively, at most 0x18 levels deep) on the default one when it inherits an unknown group; stores the record's id in *pIndex when given
	int sub_10149260(const char *pszName);	// stub 0x10002e9b: the index of the named entry, -1 when unknown
	int sub_1014e630(const char *pszName);
	int sub_1014e680(const char *pszName);
	int sub_10153680(const char *pszName);
	int sub_101536d0(const char *pszName);
		// the stub of sub_101e0080, which the recursion goes through
};
