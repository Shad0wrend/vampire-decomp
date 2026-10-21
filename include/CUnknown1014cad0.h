// CUnknown1014cad0: an effect holder (real name not yet known) that keeps up to 0x40 entity handles in 0x14 byte
// records starting at +0x9dc, with the count at +0xb10.
#pragma once

class CUnknown1014cad0
{
public:
	char m_pad0000[0x9dc];
	unsigned int m_hFirst;	// 0x9dc: the handle of the first record (records are 0x14 bytes apart)
	char m_pad09e0[0xb10 - 0x9e0];
	int m_nRecords;	// 0xb10

	void sub_1014cad0();	// plays a burst effect (position from slot 217, direction from the angles) for every live entity of the records and removes the entity, then empties the list
};
