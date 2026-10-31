// CUnk101d6aa0: a player template (real name not yet known): a list of CUnknown101d6100 stat entries
// (used count at +8, the array of pointers at +0xc).
#pragma once

#include "CUnknown101d6100.h"

class CUnk101d6aa0
{
public:
	char m_pad0000[8];
	int m_nEntries;	// 0x08
	CUnknown101d6100 **m_ppEntries;	// 0x0C

	void sub_101d6550(void *pCharacter);	// applies the entries in order (stub 0x10004d09), stops at the first that fails
};
