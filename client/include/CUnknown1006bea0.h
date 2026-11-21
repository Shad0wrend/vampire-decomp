// CUnknown1006bea0: memory buffer reader (data at +0, size at +4, read position at +0xc, flags byte at +0x14,
// bit 2 = read past the end; bit 0 of the byte at +0x15 = text mode); real name not yet known.
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
	unsigned char m_flags15;

	void sub_1013c970(void *dest, int count);
	void sub_1013c9f0();	// text mode: skips the white space at the read position (stub 0x1000c35b)
	void sub_1013cb00(char *pString);	// "GetString": copies the string at the read position to pString (up to the end of the data, a newline in text mode)
};
