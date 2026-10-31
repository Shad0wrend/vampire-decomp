// CUnknown101f3e50: a folder of the sound name tree (debug dump at 0x101f3e50); real name not yet known.
// It names its segment list (TSeg: the object whose +8 is the sound name table and +0xc one length per segment),
// which sub-folder entries are used (byte flags), and its child folders.
#pragma once

#include "CUnknown101f4c80.h"

struct TSeg
{
	char m_pad0000[8];
	CUnknown101f4c80Table *m_pTable;	// 0x08: the sound name table
	int *m_pValues;	// 0x0c: the length of every segment

	void sub_101f4570(int index, int *pSegment, int *pOffset);	// finds the segment holding index: its number and the offset inside it
	int sub_101f4300();	// the number of indices (segments) to walk
};

class CUnknown101f3e50
{
public:
	char m_pad0000[4];
	TSeg *m_pSeg;	// 0x04
	char m_pad0008[8];
	CUnknown101f4c80Str m_name;	// 0x10
	char *m_pFlags;	// 0x14: one byte per index, set when the index is dumped
	char m_pad0018[4];
	int m_nChildren;	// 0x1c
	CUnknown101f3e50 **m_ppChildren;	// 0x20

	void sub_101f3e50();	// debug dump of the folder: its name, one line per flagged index, then every child folder
};
