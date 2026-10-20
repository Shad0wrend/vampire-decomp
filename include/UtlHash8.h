// UtlHash8: a CUtlHash-like container of buckets (0x14 bytes each: element pointer at +0, count at +0xc) holding 8-byte elements.
#pragma once

#include "CAnchorList.h"

struct UtlHash8Bucket
{
	~UtlHash8Bucket()
	{
		m_Size = 0;
		if (m_growSize != -1) {
			if (m_pElements) {
				g_109f3624(m_pElements);
				m_pElements = 0;
			}
			m_allocationCount = 0;
		}
		m_pad = m_pElements;
		if (m_growSize != -1) {
			if (m_pElements) {
				g_109f3624(m_pElements);
				m_pElements = 0;
			}
			m_allocationCount = 0;
		}
	}

	char *m_pElements;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	char *m_pad;
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
	unsigned int sub_10041e80(void *pData);	// Find (another instance, stub 0x100074a0)
	unsigned int sub_10041fe0(void *pData);	// Find (another instance, stub 0x1000f4e3)
	UtlHash8 *sub_10041c80(int nBuckets, int growSize, int initSize, bool (__cdecl *pCompare)(void *, void *), unsigned int (__cdecl *pKey)(void *));	// constructor
	UtlHash8 *sub_10041de0(int nBuckets, int growSize, int initSize, bool (__cdecl *pCompare)(void *, void *), unsigned int (__cdecl *pKey)(void *));	// constructor (another instance)
	UtlHash8 *sub_10041f40(int nBuckets, int growSize, int initSize, bool (__cdecl *pCompare)(void *, void *), unsigned int (__cdecl *pKey)(void *));	// constructor (another instance)
	UtlHash8 *sub_100420a0(int nBuckets, int growSize, int initSize, bool (__cdecl *pCompare)(void *, void *), unsigned int (__cdecl *pKey)(void *));	// constructor (another instance)
	void sub_10042580();	// destroys every bucket (last to first) and empties the bucket vector
};
