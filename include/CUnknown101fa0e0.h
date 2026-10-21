// CUnknown101fa0e0: a list of ids (count at +0, the ids from +4); real name not yet known.
// Its dump prints the name of the global list at 0x1074df88 and the Debug_Display of every id's entry.
#pragma once

class CUnknown101fa0e0
{
public:
	int m_count;	// 0x00
	int m_ids[1];	// 0x04

	void sub_101fa0e0();	// "Debug_Display" of the whole list
};
