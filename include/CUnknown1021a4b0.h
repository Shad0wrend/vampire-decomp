// CUnknown1021a4b0: an object with a table of 0x80 flag dwords at +0xa28 (real class name not yet known).
#pragma once

class CUnknown1021a4b0
{
public:
	int sub_1021a4b0(int index);	// 0x1021a4b0: 1 when the flag dword [index] has bit 0 set, 0 when the bit is clear or the index is outside 0..0x7f
	char m_pad0000[0xa28];
	int m_anFlags[0x80];	// 0xa28
};
