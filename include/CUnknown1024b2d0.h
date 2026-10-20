// CUnknown1024b2d0: array-like object (callback at +0, 12-byte element buffer at +4); real name not yet known.
#pragma once

class CUnknown1024b2d0
{
public:
	void *m_pfn;
	void *m_pData;
	int m_count;
	int m_arg;
	unsigned short m_w10;
	unsigned short m_w12;
	unsigned short m_w14;
	unsigned short m_w16;
	int m_i18;
	int m_i1c;
	int m_i20;
	int m_i24;
	int m_i28;

	CUnknown1024b2d0 *sub_1024b2d0(int arg, int count, char flag);
	void sub_1024b880();	// removes all elements (stub 0x10010785)
	const char *sub_1024b830(unsigned short id);	// the string of the 12 byte element id (empty string for 0xffff); called through the stub at 0x10002202
};
