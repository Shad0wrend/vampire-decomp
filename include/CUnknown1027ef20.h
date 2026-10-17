// CUnknown1027ef20: object with a 0x4000 byte text buffer at +0x1b4e, its write position at +0x5b50
// and an overflow flag at +0x5b54; real name not yet known.
#pragma once

class CUnknown1027ef20
{
public:
	char pad0[0x1b4e];
	char m_buf[0x4000];
	char pad1[2];
	int m_pos;
	char m_overflow;

	void sub_1027ef20(const char *text);
};
