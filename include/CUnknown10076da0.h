// CUnknown10076da0: object holding a vector of 0x88 byte named entries (memory at +0x2bc, count at +0x2c8)
// and a vector of 0x8c byte timing tags (memory at +0x2d0, count at +0x2dc); real name not yet known.
#pragma once

#include "utlvector.h"

struct CUnknown10076da0;

struct CUnknown10076da0Entry
{
	char m_pad[0x88];

	const char *sub_100738a0();	// returns the entry's name (the entry itself)
	void sub_10073810(CUnknown10076da0 *pOwner, int a, int b);	// constructor body (stub 0x100095b6)
	CUnknown10076da0Entry *sub_10073850(const CUnknown10076da0Entry *pSrc);	// copy constructor body (stub 0x10009070)
};

// a timing tag: name (0x80 bytes), percentage +0x80, owner +0x84, locked flag +0x88
struct CUnknown10076da0TimingTag
{
	char m_szName[0x80];
	float m_flPercentage;
	int m_pOwner;
	bool m_bLocked;
	char m_pad[3];

	CUnknown10076da0TimingTag(int pOwner, const char *name, float percentage, bool locked);	// stub 0x10003526
	CUnknown10076da0TimingTag(const CUnknown10076da0TimingTag &src);	// stub 0x1000fac9
	float GetPercentage() const;	// 0x100738c0 (stub 0x100048f4)
};

// the tags' memory: the game calls its Grow out of line (0x10079060, stub 0x100077ed)
class CUnknown10076da0TagMemory : public CUtlMemory<CUnknown10076da0TimingTag>
{
public:
	void Grow(int num = 1);
};

class CUnknown10076da0
{
public:
	char m_pad0000[0x2bc];
	CUnknown10076da0Entry *m_pEntries;	// 0x02bc
	int m_nAlloc;	// 0x02c0
	int m_nGrow;	// 0x02c4
	int m_nEntries;	// 0x02c8
	CUnknown10076da0Entry *m_pElements;	// 0x02cc
	CUtlVector<CUnknown10076da0TimingTag, CUnknown10076da0TagMemory> m_TimingTags;	// 0x02d0

	void sub_10076da0(const char *name);	// removes the first entry whose name equals `name` (case-insensitive)
	CUnknown10076da0Entry *sub_10076e70(const char *name);	// the first entry whose name equals `name` (case-insensitive), else null
	void sub_10076c30(int a, int b);	// builds an entry from (this, a, b) and appends it to the vector (CUtlVector::InsertBefore at the end, grow inlined)
	void sub_100770b0(const char *name, float percentage, bool locked);	// appends a timing tag, then sorts the tags by percentage
};
