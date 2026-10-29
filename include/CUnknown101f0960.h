// CUnknown101f0960: 16 byte reaction record (a dword at +0 and a sub-object at +8 that its constructor initialises);
// real name not yet known.
#pragma once

#include "CUnknown101d82d0.h"

class CUnknown101f0960
{
public:
	int m_f00;
	char m_pad04[4];
	CUnknown101d82d0 m_sub08;	// 0x08: the list of target clans

	CUnknown101f0960();	// 0x101f0960 (stub 0x10002734): initialises the sub-object at +8 (0x101d8230) and clears +0
	~CUnknown101f0960();	// has a destructor (new[] stores the element count in front of the array)
	void sub_101f0990(const char *pszModifier);	// stub 0x10004c6e
	void sub_101f0a60(void *pKeyValues);	// loads the record from one "Reaction" key (stub 0x100037bf)
};
