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

// The table the entries live in (count at +0x14, element pointers at +0x18). Find is the game's one lookup of an
// entry by id (inlined by every function that looks one up): its default entry is one function-local static
// (0x109f08e0, guard 0x109f08d4), so every such function inlines Find instead of a static of its own.
struct CUnknown101ec4f0Set
{
	char m_pad0000[0x14];
	int m_nEntries;	// 0x14
	CUnknown101ec4f0 **m_ppEntries;	// 0x18

	CUnknown101ec4f0 *Find(int id)
	{
		for (int i = 0; i < m_nEntries; i++) {
			if (m_ppEntries[i]->m_id == id)
				return m_ppEntries[i];
		}
		static CUnknown101ec4f0 s_default(-1);
		return &s_default;
	}
};
