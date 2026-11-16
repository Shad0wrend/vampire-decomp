// SLogEntry.h: the 0x204 byte log entries of the array 0x1090ff60 (128 of them): the constructor marks an entry
// unused (-1); the sources that use them define their own copies.
#pragma once
#ifdef PCD_INITIALIZERS
struct SLogEntry
{
	SLogEntry() { m_nId = -1; }
	int m_nId;
	char m_pad0004[0x200];
};
#endif
