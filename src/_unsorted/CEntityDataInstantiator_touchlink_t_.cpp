// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10040880 size=0xb6
#include "CEntityDataInstantiator.h"

int CEntityDataInstantiator<touchlink_t>::vfunc1(unsigned int key)
{
	EntityDataKey_t k;
	k.pad = 0;
	k.key = key;
	unsigned int h = m_pHash(&k);
	unsigned int b;
	if (m_bPow2)
		b = m_nMask & h;
	else
		b = h % m_nBuckets;
	unsigned int off = b * sizeof(EntityDataBucket_t);
	int n = *(int *)(off + (char *)m_pBuckets + 0xc);
	int i;
	for (i = 0; i < n; i++) {
		char *pElems = m_pBuckets[b].elems;
		if (m_pCompare(pElems + i * 8, &k))
			break;
	}
	if (i != n) {
		unsigned int idx = (b << 16) | i;
		if (idx != 0xffffffff)
			return *(int *)(m_pBuckets[idx >> 16].elems + (idx & 0xffff) * 8 + 4);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10040970 size=0x14b
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "UtlHash8.h"
#include "UtlVec8.h"
#include "utlvector.h"
#include "CEntityDataInstantiator.h"

extern "C" void *__cdecl memset(void *, int, unsigned int);

struct DataBucketView : CUtlVector<EntityDataKey_t>
{
	int AddToTail(EntityDataKey_t const &src)
	{
		return ((UtlVec8 *)this)->sub_10042200(m_Size, (const UtlVec8Elem *)&src);
	}
};

struct DataHashView
{
	CUtlVector<DataBucketView> m_Buckets;
	bool (__cdecl *m_pCompare)(EntityDataKey_t const &, EntityDataKey_t const &);
	unsigned int (__cdecl *m_pKey)(EntityDataKey_t const &);
	bool m_bPowerOfTwo;
	unsigned int m_ModMask;

	unsigned int GetBucket(EntityDataKey_t const &src)
	{
		unsigned int ndxBucket = (*m_pKey)(src);
		if (m_bPowerOfTwo)
			return ndxBucket & m_ModMask;
		return ndxBucket % m_Buckets.Count();
	}
	unsigned int Find(EntityDataKey_t const &src)
	{
		unsigned int ndxBucket = GetBucket(src);
		int ndxKeyData;
		int keyDataCount = m_Buckets[ndxBucket].Count();
		for (ndxKeyData = 0; ndxKeyData < keyDataCount; ndxKeyData++)
		{
			if ((*m_pCompare)(m_Buckets[ndxBucket].Element(ndxKeyData), src))
				break;
		}
		if (ndxKeyData == keyDataCount)
			return 0xffffffff;
		return (ndxBucket << 16) | ndxKeyData;
	}
	unsigned int Insert(EntityDataKey_t const &src)
	{
		unsigned int handle = ((UtlHash8 *)this)->sub_10041d20((void *)&src);
		if (handle != 0xffffffff)
			return handle;
		unsigned int ndxBucket = GetBucket(src);
		int ndxKeyData = m_Buckets[ndxBucket].AddToTail(src);
		return (ndxBucket << 16) | ndxKeyData;
	}
	EntityDataKey_t &Element(unsigned int handle)
	{
		return m_Buckets[handle >> 16].Element(handle & 0xffff);
	}
};

// TARGET: CEntityDataInstantiator<touchlink_t>::vfunc2
void *CEntityDataInstantiator<touchlink_t>::vfunc2(unsigned int key)
{
	DataHashView *pHash = (DataHashView *)&m_pBuckets;
	unsigned int handle;
	EntityDataKey_t entry;
	entry.pad = 0;
	entry.key = key;
	handle = pHash->Find(entry);
	if (handle == 0xffffffff)
	{
		handle = pHash->Insert(entry);
		pHash->Element(handle).pad = (int)new touchlink_t;
		memset((void *)pHash->Element(handle).pad, 0, sizeof(touchlink_t));
	}
	return (void *)pHash->Element(handle).pad;
}
// END FUNCTION

// FUNCTION: 0x100417c0 size=0xa3
#include "UtlHash8.h"
#include "UtlMem.h"
#include "CEntityDataInstantiator.h"

extern void *vt_104493a8[];

struct HashHolder {
	void *vptr;
	UtlHash8 m_Hash;
};

// TARGET: sub_100417c0
HashHolder *__fastcall sub_100417c0(HashHolder *p, int, unsigned char flags)
{
	UtlHash8 *h = &p->m_Hash;
	int n = h->m_bucketCount;
	int i = 0;
	if (n > 0) {
		do {
			UtlHash8Bucket *b = (UtlHash8Bucket *)((char *)h->m_pBuckets + i);
			b->m_Size = 0;
			((UtlMem *)b)->sub_10042680();
			b->m_pad = b->m_pElements;
			i += 0x14;
		} while (--n);
		i = 0;
	}
	h->sub_10042580();
	((UtlMem *)h)->sub_10042640();
	h->m_pad10 = (int)h->m_pBuckets;
	h->m_pCompare = 0;
	h->m_pKey = 0;
	h->sub_10042580();
	((UtlMem *)h)->sub_10042640();
	h->m_pad10 = (int)h->m_pBuckets;
	if (h->m_pad8 != -1) {
		if (h->m_pBuckets) {
			g_109f3624(h->m_pBuckets);
			h->m_pBuckets = 0;
		}
		h->m_pad4 = 0;
	}
	*(void ***)p = vt_104493a8;
	if (flags & 1)
		delete (char *)p;
	return p;
}
// END FUNCTION
