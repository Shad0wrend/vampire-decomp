// CUnknown101b3730: a table of 0xe8 byte records (real class name not yet known). The records start at +0x54 (the
// array pointer) plus 0x1c, the count is at +0x64.
#pragma once

class CUnknown101b3730
{
public:
	void *sub_1012e940(int index);	// 0x101b3730: the record [index] of the table, 0 when index is below zero or not below the count
	char m_pad0000[0x54];
	char *m_pRecords;	// 0x54
	char m_pad0058[0x64 - 0x58];
	int m_nRecords;	// 0x64
};
