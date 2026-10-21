// CUnknown101a2c30: an object (real name not yet known) that keeps a snapshot record (0x30 bytes each) of every entity
// of the level: the record count at +0x1330 and the save-memory block at +0x1334.
#pragma once

class CUnknown101a2c30
{
public:
	char m_pad0000[0x1330];
	int m_nRecords;	// 0x1330
	void *m_pRecords;	// 0x1334

	bool sub_101a2c30();	// allocates one record per entity of the global list and fills in its index, slot 131 value, engine index and handle; true when every entity got one
};
