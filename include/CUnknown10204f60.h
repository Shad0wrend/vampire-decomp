// CUnknown10204f60: a reference to a record (kind, index) in one of three global record tables; real name not yet known.
#pragma once

class CUnknown10204f60
{
public:
	int m_nKind;	// 0x00: 0..2 picks the table
	int m_nIndex;	// 0x04: record index, -1 when unset

	int sub_10204f60(int a);	// looks the record up in the table for m_nKind and applies it to a
};
