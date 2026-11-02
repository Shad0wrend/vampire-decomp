// CUnknown1024b2d0: array-like object (callback at +0, 12-byte element buffer at +4); real name not yet known.
#pragma once

struct CUnknown1024b2d0Id	// a 16 bit string id passed by value (like CUtlSymbol)
{
	unsigned short m_id;

	CUnknown1024b2d0Id() { }
	CUnknown1024b2d0Id(const CUnknown1024b2d0Id &other) { m_id = other.m_id; }
};

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
	const char *sub_1024b830(CUnknown1024b2d0Id id);	// the string of the 12 byte element id (empty string for 0xffff); called through the stub at 0x10002202
	CUnknown1024b2d0Id *sub_1024b5e0(CUnknown1024b2d0Id *pOut, const char *pszName);	// "AddString"-like (ret 8, stub 0x10005c95): interns the string, stores its id in *pOut and returns pOut; called on CSoundEmitterSystemBase +0x70 by RenameSound
	CUnknown1024b2d0Id sub_1024b400(const char *pszName);	// the id of the element with this string (0xffff when there is none); returned through a hidden pointer (stub 0x10008db4)
};
