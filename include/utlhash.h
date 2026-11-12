// utlhash.h: Source's CUtlHash<Data> (tier1 utlhash.h) in the form this game compiled, as used by
// CEntityDataInstantiator<T> (its m_HashTable starts at +4 of the instantiator, right after the vtable).
// Layout: m_Buckets (CUtlVector<CUtlVector<Data> >, 0x14 bytes: bucket memory +0, bucket count +0xc),
// m_CompareFunc +0x14, m_KeyFunc +0x18, m_bPowerOfTwo +0x1c, m_ModMask +0x20.
// Find(src, pBucket, pIndex) is the 2003 form: the loop counter is *pIndex (it lives in memory in the game's code,
// `mov [esp+N], eax` each pass) and every pass re-reads m_Buckets[*pBucket].Element(*pIndex).
// Remove(handle) uses CUtlVector::Remove (memmove down, --count). Matched with it: 0x10040f00, 0x100412c0.
#pragma once

#include "utlvector.h"

typedef unsigned int UtlHashHandle_t;

template <class Data>
class CUtlHash
{
public:
	typedef bool (*CompareFunc_t)(Data const &, Data const &);
	typedef unsigned int (*KeyFunc_t)(Data const &);

	static UtlHashHandle_t InvalidHandle() { return (UtlHashHandle_t)~0; }
	int GetBucketIndex(UtlHashHandle_t handle) const { return (((handle >> 16) & 0x0000ffff)); }
	int GetKeyDataIndex(UtlHashHandle_t handle) const { return (handle & 0x0000ffff); }
	UtlHashHandle_t BuildHandle(int ndxBucket, int ndxKeyData) const { return (UtlHashHandle_t)((ndxBucket << 16) | ndxKeyData); }

	Data &Element(UtlHashHandle_t handle) { return m_Buckets[GetBucketIndex(handle)][GetKeyDataIndex(handle)]; }
	Data &operator[](UtlHashHandle_t handle) { return Element(handle); }

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

// CEntityDataInstantiator<T>::HashEntry: the key (the entity pointer) and the instance's data object.
template <class T>
struct CEntityDataHashEntry
{
	CEntityDataHashEntry() { key = 0; data = 0; }
	unsigned int key;
	T *data;
};
