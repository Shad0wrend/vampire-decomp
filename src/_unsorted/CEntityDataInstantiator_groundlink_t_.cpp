// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10040c60 size=0xb6
#include "CEntityDataInstantiator.h"

int CEntityDataInstantiator<groundlink_t>::vfunc1(unsigned int key)
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

// FUNCTION: 0x10040f00 size=0xf5
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CEntityDataInstantiator.h"
#include "utlvector.h"

typedef unsigned int UtlHashHandle_t;

template <class Data>
struct CUtlHashView
{
	typedef bool (*CompareFunc_t)(Data const &, Data const &);
	typedef unsigned int (*KeyFunc_t)(Data const &);

	static UtlHashHandle_t InvalidHandle() { return (UtlHashHandle_t)~0; }
	int GetBucketIndex(UtlHashHandle_t handle) const { return (((handle >> 16) & 0x0000ffff)); }
	int GetKeyDataIndex(UtlHashHandle_t handle) const { return (handle & 0x0000ffff); }
	UtlHashHandle_t BuildHandle(int ndxBucket, int ndxKeyData) const { return (UtlHashHandle_t)((ndxBucket << 16) | ndxKeyData); }

	Data &Element(UtlHashHandle_t handle) { return m_Buckets[GetBucketIndex(handle)][GetKeyDataIndex(handle)]; }

	bool Find(Data const &src, unsigned int *pBucket, int *pIndex)
	{
		unsigned int key = m_KeyFunc(src);
		if (m_bPowerOfTwo)
			*pBucket = key & m_ModMask;
		else
			*pBucket = key % m_Buckets.Count();
		int keyDataCount = m_Buckets[*pBucket].Count();
		for (*pIndex = 0; *pIndex < keyDataCount; (*pIndex)++)
		{
			if (m_CompareFunc(m_Buckets[*pBucket].Element(*pIndex), src))
				break;
		}
		if (*pIndex == keyDataCount)
			return false;
		return true;
	}

	UtlHashHandle_t Find(Data const &src)
	{
		unsigned int ndxBucket;
		int ndxKeyData;
		if (Find(src, &ndxBucket, &ndxKeyData))
			return BuildHandle(ndxBucket, ndxKeyData);
		return InvalidHandle();
	}

	void Remove(UtlHashHandle_t handle)
	{
		int ndxBucket = GetBucketIndex(handle);
		int ndxKeyData = GetKeyDataIndex(handle);
		if (m_Buckets[ndxBucket].IsValidIndex(ndxKeyData))
		{
			m_Buckets[ndxBucket].Remove(ndxKeyData);
		}
	}

	CUtlVector<CUtlVector<Data> > m_Buckets;
	CompareFunc_t m_CompareFunc;
	KeyFunc_t m_KeyFunc;
	bool m_bPowerOfTwo;
	unsigned int m_ModMask;
};

struct GroundLinkHashEntry
{
	GroundLinkHashEntry() { key = 0; data = 0; }
	unsigned int key;
	groundlink_t *data;
};

void CEntityDataInstantiator<groundlink_t>::vfunc3(unsigned int instance)
{
	CUtlHashView<GroundLinkHashEntry> &table = *(CUtlHashView<GroundLinkHashEntry> *)&m_pBuckets;
	UtlHashHandle_t handle;
	GroundLinkHashEntry entry;
	entry.key = instance;
	handle = table.Find(entry);
	if (handle != table.InvalidHandle())
	{
		GroundLinkHashEntry *e = &table.Element(handle);
		delete e->data;
		table.Remove(handle);
	}
}
// END FUNCTION

// FUNCTION: 0x100418a0 size=0xa3
#include "UtlHash8.h"
#include "UtlMem.h"
#include "CEntityDataInstantiator.h"

extern void *vt_104493a8[];

struct HashHolder {
	void *vptr;
	UtlHash8 m_Hash;
};

HashHolder *__fastcall sub_100418a0(HashHolder *p, int, unsigned char flags)
{
	UtlHash8 *h = &p->m_Hash;
	int n = h->m_bucketCount;
	int i = 0;
	if (n > 0) {
		do {
			UtlHash8Bucket *b = (UtlHash8Bucket *)((char *)h->m_pBuckets + i);
			b->m_Size = 0;
			((UtlMem *)b)->sub_100427c0();
			b->m_pad = b->m_pElements;
			i += 0x14;
		} while (--n);
		i = 0;
	}
	h->sub_100426c0();
	((UtlMem *)h)->sub_10042780();
	h->m_pad10 = (int)h->m_pBuckets;
	h->m_pCompare = 0;
	h->m_pKey = 0;
	h->sub_100426c0();
	((UtlMem *)h)->sub_10042780();
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
