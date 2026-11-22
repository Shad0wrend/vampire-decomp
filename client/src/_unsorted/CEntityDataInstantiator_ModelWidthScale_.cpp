// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

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
