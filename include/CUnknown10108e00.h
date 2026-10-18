// CUnknown10108e00: fixed-capacity array of ints (data at +0x14, capacity at +0x18, count at +0x1c); real name not yet known.
#pragma once

class CUnknown10108e00
{
public:
	char pad0[0x14];
	int *m_pData;		// 0x14
	int m_capacity;		// 0x18
	int m_count;		// 0x1c

	bool sub_10108e00(int value);	// appends value; false when full
};
