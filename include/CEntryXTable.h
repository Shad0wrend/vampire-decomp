// CEntryXTable: the loader of the "items" data file; owns the table of CEntryX records (global object 0x1073a2ac, the
// count at +0x14 and the records at +0x18 are g_1073a2c0 / g_1073a2c4 of CEntryX.h).
#pragma once

#include "CEntryX.h"

class CEntryXTable
{
public:
	int m_nGrow;	// 0x00: how many records one growth step adds
	int m_nNextKey;	// 0x04: the key of the next record created
	int m_unk08;	// 0x08: "InternalName" of the data file
	int m_unk0c;	// 0x0c: "Name" of the data file
	int m_nAlloc;	// 0x10: records the array has room for
	int m_nRecords;	// 0x14
	CEntryX **m_pRecords;	// 0x18

	char sub_101eb9f0();	// stub 0x10003594: frees the records, loads vdata\system\items.txt and creates a record for every BotchType
};
