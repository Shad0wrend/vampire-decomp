// utlvector.h: Source's CUtlMemory<T> / CUtlVector<T> (tier1 utlmemory.h / utlvector.h, 2004 public SDK form) as
// the game inlines them. Only the members the game's inlined code has shown so far; add more in the SDK's form.
//
// CUtlVector<T, A = CUtlMemory<T> > (the game's RTTI names both parameters, see CUtlVectorDataOps.h).
// Layout (0x14 bytes): m_Memory { m_pMemory +0, m_nAllocationCount +4, m_nGrowSize +8 }, m_Size +0xc,
// m_pElements +0x10 (a debugger view of the memory, kept by ResetDbgInfo).
//
// The destructor is ~CUtlVector -> Purge -> RemoveAll (Destruct of every element, m_Size = 0), m_Memory.Purge (frees
// the memory unless the grow size is -1, an external buffer), ResetDbgInfo; then ~CUtlMemory -> Purge again. How
// much of it VC6 inlines depends on how deep the destructor is nested in the caller (see CRecipientFilter.h): write
// the Source code and let the compiler choose. The out-of-line copies are named in the symbol map:
// CUtlMemory<int>::Base 0x1002cca0 (stub 0x10013e12), CUtlMemory<int>::Purge 0x1002cbd0, CUtlVector<int>::RemoveAll
// 0x10032b00.
#pragma once

extern "C" __declspec(dllimport) void Plat_Free(void *);	// tier0 (import 0x109f3624), the free of utlmemory.h

template <class T>
inline void Destruct(T *pMemory)
{
	pMemory->~T();
}

template <class T>
class CUtlMemory
{
public:
	CUtlMemory(int nGrowSize = 0, int nInitSize = 0) : m_pMemory(0), m_nAllocationCount(nInitSize), m_nGrowSize(nGrowSize) {}
	~CUtlMemory() { Purge(); }

	T &operator[](int i) { return Base()[i]; }
	T &Element(int i) { return Base()[i]; }
	T *Base() { return m_pMemory; }
	int NumAllocated() const { return m_nAllocationCount; }
	bool IsExternallyAllocated() const { return m_nGrowSize == EXTERNAL_BUFFER_MARKER; }

	void Purge()
	{
		if (!IsExternallyAllocated()) {
			if (m_pMemory) {
				Plat_Free((void *)m_pMemory);
				m_pMemory = 0;
			}
			m_nAllocationCount = 0;
		}
	}

	enum { EXTERNAL_BUFFER_MARKER = -1 };

	T *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
};

template <class T, class A = CUtlMemory<T> >
class CUtlVector
{
public:
	CUtlVector(int growSize = 0, int initSize = 0) : m_Memory(growSize, initSize), m_Size(0) { ResetDbgInfo(); }
	~CUtlVector() { Purge(); }

	T &operator[](int i) { return m_Memory[i]; }
	T &Element(int i) { return m_Memory[i]; }
	T *Base() { return m_Memory.Base(); }
	int Count() const { return m_Size; }
	int Size() const { return m_Size; }
	bool IsValidIndex(int i) const { return (i >= 0) && (i < m_Size); }
	static int InvalidIndex() { return -1; }

	int Find(const T &src)
	{
		for (int i = 0; i < Count(); ++i) {
			if (Element(i) == src)
				return i;
		}
		return -1;
	}

	void RemoveAll()
	{
		for (int i = m_Size; --i >= 0; )
			Destruct(&Element(i));
		m_Size = 0;
	}

	void Purge()
	{
		RemoveAll();
		m_Memory.Purge();
		ResetDbgInfo();
	}

	void ResetDbgInfo() { m_pElements = m_Memory.Base(); }

	A m_Memory;
	int m_Size;
	T *m_pElements;
};
