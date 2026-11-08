// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10041040 size=0xb6
#include "CEntityDataInstantiator.h"

int CEntityDataInstantiator<StepSimulationData>::vfunc1(unsigned int key)
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

// FUNCTION: 0x10041130 size=0x137
#include "UtlHash8.h"
#include "UtlVec8.h"
#include "CEntityDataInstantiator.h"

extern "C" void *__cdecl memset(void *, int, unsigned int);

// TARGET: CEntityDataInstantiator<StepSimulationData>::vfunc2
void *CEntityDataInstantiator<StepSimulationData>::vfunc2(unsigned int key)
{
	UtlHash8 *pHash = (UtlHash8 *)&m_pBuckets;
	EntityDataKey_t k;
	k.pad = 0;
	k.key = key;
	unsigned int hash = pHash->m_pKey(&k);
	unsigned int bucket = pHash->m_bPowerOfTwo ? (pHash->m_ModMask & hash) : (hash % pHash->m_bucketCount);
	int count = pHash->m_pBuckets[bucket].m_Size;
	int i = 0;
	if (i < count)
	{
		do
		{
			char *pBase = pHash->m_pBuckets[bucket].m_pElements;
			if (pHash->m_pCompare(pBase + i * 8, &k))
				break;
			i++;
		} while (i < count);
	}
	unsigned int handle;
	if (i == count || (handle = (bucket << 16) | i) == 0xffffffff)
	{
		unsigned int found = pHash->sub_10041fe0(&k);
		if (found != 0xffffffff)
			handle = found;
		else
		{
			hash = pHash->m_pKey(&k);
			bucket = pHash->m_bPowerOfTwo ? (pHash->m_ModMask & hash) : (hash % pHash->m_bucketCount);
			handle = ((UtlVec8 *)&pHash->m_pBuckets[bucket])->sub_100423c0(pHash->m_pBuckets[bucket].m_Size, (UtlVec8Elem *)&k) | (bucket << 16);
		}
		void *pData = ::operator new(0x6c);
		*(void **)(pHash->m_pBuckets[handle >> 16].m_pElements + (handle & 0xffff) * 8 + 4) = pData;
		memset(*(void **)(pHash->m_pBuckets[handle >> 16].m_pElements + (handle & 0xffff) * 8 + 4), 0, 0x6c);
	}
	return *(void **)(pHash->m_pBuckets[handle >> 16].m_pElements + (handle & 0xffff) * 8 + 4);
}
// END FUNCTION

// FUNCTION: 0x10041980 size=0xa3
#include "UtlHash8.h"
#include "UtlMem.h"
#include "CEntityDataInstantiator.h"

extern void *vt_104493a8[];

struct HashHolder {
	void *vptr;
	UtlHash8 m_Hash;
};

// TARGET: sub_10041980
HashHolder *__fastcall sub_10041980(HashHolder *p, int, unsigned char flags)
{
	UtlHash8 *h = &p->m_Hash;
	int n = h->m_bucketCount;
	int i = 0;
	if (n > 0) {
		do {
			UtlHash8Bucket *b = (UtlHash8Bucket *)((char *)h->m_pBuckets + i);
			b->m_Size = 0;
			((UtlMem *)b)->sub_10042900();
			b->m_pad = b->m_pElements;
			i += 0x14;
		} while (--n);
		i = 0;
	}
	h->sub_10042800();
	((UtlMem *)h)->sub_100428c0();
	h->m_pad10 = (int)h->m_pBuckets;
	h->m_pCompare = 0;
	h->m_pKey = 0;
	h->sub_10042800();
	((UtlMem *)h)->sub_100428c0();
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
