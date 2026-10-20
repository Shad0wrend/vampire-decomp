// CUnknown10077db0: object with an array of 0x14 byte vectors of 0x88 byte named records (array starts at +0x2e4);
// real name not yet known.
#pragma once

#include "CUnknown10073ae0.h"

struct CUnknown10077db0List
{
	CUnknown10073ae0 *m_pRecords;	// 0x00
	int m_nAlloc;	// 0x04
	int m_nGrow;	// 0x08
	int m_nRecords;	// 0x0c
	int m_unk10;
};

class CUnknown10077db0
{
public:
	char m_pad0000[0x2e4];
	CUnknown10077db0List m_lists[1];	// 0x02e4, indexed by list number

	void sub_10077db0(int list, const char *name);	// removes the first record of the list whose name equals `name` (case-insensitive)
};
