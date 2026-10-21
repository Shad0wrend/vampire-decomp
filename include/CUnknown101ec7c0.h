// CUnknown101ec7c0: a data table loaded from a vdata text file (real name not yet known): an array of
// CUnknown101ec4f0 records at +0x18 (count at +0x14).
#pragma once

class CUnknown101ec7c0
{
public:
	char m_pad0000[4];
	int m_n04;	// 0x04
	char m_pad0008[8];
	int m_n10;	// 0x10
	int m_nRecords;	// 0x14
	class CUnknown101ec4f0 **m_pRecords;	// 0x18

	bool sub_101ec900(void *pFile);	// reads the records from the opened data file
	bool sub_101ec7c0();	// frees the records and loads the data file again
};
