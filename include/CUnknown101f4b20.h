// CUnknown101f4b20: second kind of element dumped by CUnknown101f5d80; real name not yet known.
#pragma once

#include "CUnknown101f4c80.h"

class CUnknown101f4b20
{
public:
	char m_pad0000[8];
	CUnknown101f4c80Table *m_pTable;	// 0x08: the sound name table
	int *m_pValues;	// 0x0c: one value (range) per record of the table
	char m_pad0010[4];	// 0x10: the folder object that sub_101f3e50 dumps

	void sub_101f4b20();	// debug dump of one element (stub 0x10012d55): "[Sound Tree]:", "-Ranges-:", then one line per record, then the folder object
};
