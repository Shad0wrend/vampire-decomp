// UtlHash8: a CUtlHash-like container of buckets (0x14 bytes each: element pointer at +0, count at +0xc) holding 8-byte elements.
#pragma once

struct UtlHash8Bucket
{
	char *m_pElements;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	int m_pad;
};

class UtlHash8
{
public:
	UtlHash8Bucket *m_pBuckets;
	int m_pad4;
	int m_pad8;
	unsigned int m_bucketCount;
	int m_pad10;
	bool (__cdecl *m_pCompare)(void *, void *);
	unsigned int (__cdecl *m_pKey)(void *);
	bool m_bPowerOfTwo;
	unsigned int m_ModMask;

	unsigned int sub_10041d20(void *pData);	// Find: (bucket << 16) | index, or -1
};
