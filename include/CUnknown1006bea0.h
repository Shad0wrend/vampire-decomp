// CUnknown1006bea0: memory buffer reader (data at +0, size at +4, read position at +0xc, flags byte at +0x14,
// bit 2 = read past the end); real name not yet known.
#pragma once

class CUnknown1006bea0
{
public:
	char *m_pData;
	int m_size;
	int m_pad08;
	int m_pos;
	int m_pad10;
	unsigned char m_flags;

	void sub_1006bea0(void *dest, int count);
};
