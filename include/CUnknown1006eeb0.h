// CUnknown1006eeb0: object with a record index at +0x630 (not identified yet).
#pragma once

class CUnknown1006eeb0
{
public:
	int sub_1006eeb0(int which);	// the address of sub-record `which` (0..3, 0x2c bytes apart) of the record this object indexes, else 0

	char m_pad0000[0x630];
	int m_iRecord;	// 0x0630
};
