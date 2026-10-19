// CUnknown1007e320: container holding a list of heap objects (CUtlVector4 of pointers at +0x14); real name not yet known.
#pragma once

#include "CUtlVector4.h"

struct Elem1007e320;

class CUnknown1007e320
{
public:
	char pad0[0x14];
	CUtlVector4 m_list;	// +0x14: memory, allocation count, grow size, size (+0x20), elements

	void sub_1007e320(Elem1007e320 *pElem);	// removes every occurrence of pElem from the list, then destroys it (its own vector at +0x164 is purged) and frees it
};
