// CUnknown10204c60: a reference to a stat info record: the list it lives in (type 0..3) and its index; real name not yet known.
#pragma once

class CUnknown10204c60
{
public:
	int m_type;	// 0x00: which of the four global stat info lists (4..9 are unused)
	int m_index;	// 0x04: the index in that list, -1 for none

	int sub_10160de0();	// the evaluated default value (the value record at +0x9c) of the referenced record, 0 without one
};
