// CUnknown100c81b0: a bit vector (bit count, then 32-bit words) filled from a bone-record table.
#pragma once

struct CBitVecWords
{
	int m_nBits;
	unsigned int m_words[1];
};

struct CBoneRecord
{
	int m_nIndex;	// 0x00: target bit, negative when unused
	int m_nSource;	// 0x04: bit to test in the source vector
	char m_pad08[0x3c - 8];
};

struct CStudioBoneCount
{
	char m_pad00[0xf0];
	int m_nBits;	// 0xf0
};

class CUnknown100c81b0
{
public:
	int m_nBits;	// 0x00
	unsigned int m_words[1];	// 0x04

	void sub_1008e420(const CBitVecWords *pSource, int count, const CBoneRecord *pRecords, const CStudioBoneCount *pStudio);	// sets the bit of every record whose source bit is set in pSource
};
