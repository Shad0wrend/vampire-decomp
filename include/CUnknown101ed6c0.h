// CUnknown101ed6c0: a data table loaded from a vdata text file (real name not yet known): an array of
// CUnknown101ed170 records at +0x18 (count at +0x14).
#pragma once

class CUnknown101ed6c0
{
public:
	char m_pad0000[4];
	int m_n04;	// 0x04
	char m_pad0008[8];
	int m_n10;	// 0x10
	int m_nRecords;	// 0x14
	class CUnknown101ed170 **m_pRecords;	// 0x18

	bool sub_101ed800(void *pFile);	// stub 0x10014984: reads the records from the opened data file
	bool sub_101ed6c0();	// frees the records and loads "vdata_system/items.txt" again; true even when the file is missing
};
