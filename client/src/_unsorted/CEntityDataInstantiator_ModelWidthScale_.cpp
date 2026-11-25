// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1011e210 size=0xb6
#include "CEntityDataInstantiator.h"

int CEntityDataInstantiator<ModelWidthScale>::vfunc1(unsigned int key)
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

// FUNCTION: 0x1011e410 size=0xf5
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

void CEntityDataInstantiator<ModelWidthScale>::vfunc3(unsigned int instance)
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

// FUNCTION: 0x1011e720 size=0xa3
struct BucketV { int *pElems; int a; int b; int m_Size; int m_pad10; void sub_1011f320(); };
struct VecV { BucketV *m_p; int m_Alloc; int m_Grow; int m_Num; int m_Elems; int m_Count; int m_Cap; void sub_1011f260(); void sub_1011f2f0(); };
struct InstV { void *vt; VecV v; };
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern char vt_10235b4c[];
void *__fastcall sub_1011e720(InstV *self, int, int flags)
{
	VecV *v = &self->v;
	int n = v->m_Num;
	for (int i = 0; i < n; i++) {
		BucketV *b = &v->m_p[i];
		b->m_Size = 0;
		b->sub_1011f320();
		b->m_pad10 = (int)b->pElems;
	}
	v->sub_1011f260();
	v->sub_1011f2f0();
	v->m_Count = 0;
	v->m_Elems = (int)v->m_p;
	v->m_Cap = 0;
	v->sub_1011f260();
	v->sub_1011f2f0();
	v->m_Elems = (int)v->m_p;
	if (v->m_Grow != -1) {
		if (v->m_p) { Plat_Free(v->m_p); v->m_p = 0; }
		v->m_Alloc = 0;
	}
	*(void **)self = vt_10235b4c;
	if (flags & 1) operator delete(self);
	return self;
}
// END FUNCTION
