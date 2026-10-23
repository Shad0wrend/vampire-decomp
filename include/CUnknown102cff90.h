// CUnknown102cff90: an object holding two CUtlVectors of 4-byte elements at +0xc and +0x20; real name not yet known.
#pragma once

#include "utlvector.h"

struct CUnknown102cff90Elem
{
	int m_value;
};

class CUnknown102cff90
{
public:
	char m_pad0000[0xc];
	CUtlVector<int> m_first;	// 0x0c
	CUtlVector<CUnknown102cff90Elem> m_second;	// 0x20

	void sub_102cff90();	// purges both vectors, then destroys them
};
