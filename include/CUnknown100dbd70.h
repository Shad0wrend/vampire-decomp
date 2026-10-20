// CUnknown100dbd70: owner of a vector of entity handles (CUtlVector layout starting at +4: memory block,
// allocation count, grow size, size at +0x10); real name not yet known.
#pragma once

#include "CUnknown100ddf40.h"

class CUnknown100dbd70
{
public:
	int m_pad00;
	CUnknown100ddf40 m_Memory;	// 0x04
	int m_allocationCount;	// 0x08
	int m_growSize;	// 0x0c
	int m_size;	// 0x10

	void sub_100dbd70();	// walks the handles from the last to the first and, for every one that still resolves, calls sub_100ddd90() on the sub object at +0x270 of the entity; then empties the vector
};
