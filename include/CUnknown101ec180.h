// CUnknown101ec180: a data table loaded from the vdata text file "items" (the BotchTables section; real name not
// yet known): an array of CKeyHolder records at +0x18 (count at +0x14, allocated at +0x10, grow size at +0).
#pragma once

#include "CKeyHolder.h"

class CUnknown101ec180
{
public:
	int m_nGrow;	// 0x00
	int m_n04;	// 0x04: next record id
	int m_n08;	// 0x08
	int m_n0c;	// 0x0c
	int m_nAlloc;	// 0x10
	int m_nRecords;	// 0x14
	CKeyHolder **m_pRecords;	// 0x18

	bool sub_101ec180();	// frees the records and loads the "BotchTables" section of "vdata_system/items.txt"; false
};
