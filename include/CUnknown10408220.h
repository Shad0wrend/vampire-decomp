// CUnknown10408220: object with an array of 0xc0-byte records (two 0x60-byte strings each) at +0x914 and their count at +0x920; real name not yet known.
#pragma once

#include "CUtlMemory192.h"

class CUnknown10408220
{
public:
	char pad0000[0x914];
	char *m_pRecords;	// 0x914
	char pad0918[8];
	int m_nRecords;	// 0x920

	void sub_10408220(CUtlMemory192 *pOut);	// copies every record to the end of pOut
};
