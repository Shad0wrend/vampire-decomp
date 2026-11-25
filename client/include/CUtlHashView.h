// CUtlHashView: a hash table of buckets (20 bytes each: a vector of 8-byte entries), compare and hash callbacks at +0x14 / +0x18.
#pragma once
struct CUtlHashElem { int a; int b; };
struct CUtlHashBucket
{
	CUtlHashElem *m_pElements;
	int m_nAlloc;
	int m_nGrow;
	int m_Size;
	int m_unk10;
};
class CUtlHashView
{
public:
	CUtlHashBucket *m_pBuckets;
	int m_unk04;
	int m_unk08;
	unsigned int m_nBuckets;
	int m_unk10;
	bool (*m_pfnCompare)(const void *, const void *);
	unsigned int (*m_pfnHash)(const void *);
	bool m_bPowerOfTwo;
	unsigned int m_nMask;
	int sub_1011e910(const void *pKey);
	int sub_1011eb30(const void *pKey);
	int sub_1011ec40(const void *pKey);
};
