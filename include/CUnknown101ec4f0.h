// CUnknown101ec4f0: a string table entry (id at +0, text pointer at +8, 0x18 bytes); real name not yet known.
// Its constructor (0x101ec4f0) stores the id and clears +0xc / +0x10 / +0x14; the destructor is at 0x10204230.
#pragma once

class CUnknown101ec4f0
{
public:
	int m_id;	// 0x00
	int m_pad04;
	const char *m_pszText;	// 0x08
	int m_n0c;
	int m_n10;
	int m_n14;

	CUnknown101ec4f0(int id);
	~CUnknown101ec4f0();
};
