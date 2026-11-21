// CUnknown10203240: name-lookup table; m_nCount entries at +8, pointer array at +0xc. Layout otherwise unknown.
#pragma once
#include "CUnknown102029c0.h"

struct S10203240Entry
{
	int m_pad;
	const char *m_pName;
};

class CUnknown10203240
{
public:
	int m_pad0;
	int m_pad4;
	int m_nCount;
	S10203240Entry **m_pEntries;

	CUnknown102029c0 *sub_1015f2f0(const char *name);
	CUnknown102029c0 *sub_100f0ed0(const char *name);
};
