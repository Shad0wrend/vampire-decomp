// utlmemory.h: Source's CUtlMemory<T> (tier1 utlmemory.h, 2004 public SDK form) as the game compiled it.
//
// Layout (0xc bytes): m_pMemory +0, m_nAllocationCount +4, m_nGrowSize +8 (-1 = an external buffer, never freed).
// Every member is inline, Grow and Purge included: VC6 inlines them where its budget allows and otherwise calls the
// out-of-line copy of that element type (one per type T, each at its own address). The game's code shows them:
// - Grow: `cmp grow, -1; je` then the doubling loop (`add eax, grow` / `add eax, eax`, first allocation
//   (31 + sizeof(T)) / sizeof(T), e.g. `mov eax, 8` for 4-byte elements), then Plat_Realloc (call [0x109f3638]) when
//   there is memory, else Plat_Alloc (call [0x109f3634]).
// - Purge: `cmp grow, -1; je`, `if (mem) { call [Plat_Free 0x109f3624]; mem = 0; }`, allocation count = 0.
// - operator[] / Element go through Base() (the game's RemoveAll loops call an out-of-line Base(), stub 0x10013e12
//   for int).
// The out-of-line copies are known to the symbol map by their Source names once someone names them
// (rename_symbol: e.g. ?Grow@?$CUtlMemory@H@@QAEXH@Z = CUtlMemory<int>::Grow 0x100eb280, stub 0x1000ff51).
#pragma once

// tier0's allocator (malloc / realloc / free of utlmemory.h), called through the import table like the game:
// call dword ptr [0x109f3634] (Plat_Alloc), [0x109f3638] (Plat_Realloc), [0x109f3624] (Plat_Free). The two pointers
// are named by their import slots so that no source's own Plat_Alloc / Plat_Realloc declaration clashes with them.
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern "C" void *(__cdecl *_imp__Plat_Alloc)(unsigned int);
extern "C" void *(__cdecl *_imp__Plat_Realloc)(void *, unsigned int);
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);
extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);

// Construct / copy construct / destruct in place. The SDK writes new (p) T; VC6 null-checks the result of a placement
// new (`test eax, eax; je` before the store). The tag keeps this placement form apart from the plain
// operator new(unsigned int, void *) some sources define themselves.
struct CUtlPlacement
{
};

inline void *__cdecl operator new(unsigned int, void *p, CUtlPlacement *) { return p; }
inline void __cdecl operator delete(void *, void *, CUtlPlacement *) {}

template <class T>
__forceinline T *Construct(T *pMemory)
{
	return new (pMemory, (CUtlPlacement *)0) T;
}

template <class T>
inline void CopyConstruct(T *pMemory, T const &src)
{
	new (pMemory, (CUtlPlacement *)0) T(src);
}

template <class T>
inline void Destruct(T *pMemory)
{
	pMemory->~T();
}

template <class T>
class CUtlMemory
{
public:
	CUtlMemory(int nGrowSize = 0, int nInitSize = 0);
	CUtlMemory(T *pMemory, int numElements);
	~CUtlMemory();

	T &operator[](int i);
	T const &operator[](int i) const;
	T &Element(int i);
	T const &Element(int i) const;

	bool IsIdxValid(int i) const;

	T *Base();
	T const *Base() const;

	void SetExternalBuffer(T *pMemory, int numElements);

	int NumAllocated() const;
	int Count() const;

	void Grow(int num = 1);
	void sub_10132d30(int num = 1);
	void EnsureCapacity(int num);
	void Purge();
	void sub_1012d830();
	void sub_10135350();

	bool IsExternallyAllocated() const;
	void SetGrowSize(int size);

	enum { EXTERNAL_BUFFER_MARKER = -1 };

	T *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
};

template <class T>
inline CUtlMemory<T>::CUtlMemory(int nGrowSize, int nInitAllocationCount)
	: m_pMemory(0), m_nAllocationCount(nInitAllocationCount), m_nGrowSize(nGrowSize)
{
	if (m_nAllocationCount)
		m_pMemory = (T *)_imp__Plat_Alloc(m_nAllocationCount * sizeof(T));
}

template <class T>
inline CUtlMemory<T>::CUtlMemory(T *pMemory, int numElements)
	: m_pMemory(pMemory), m_nAllocationCount(numElements)
{
	m_nGrowSize = EXTERNAL_BUFFER_MARKER;
}

template <class T>
inline CUtlMemory<T>::~CUtlMemory()
{
	Purge();
}

template <class T>
inline T &CUtlMemory<T>::operator[](int i)
{
	return Base()[i];
}

template <class T>
inline T const &CUtlMemory<T>::operator[](int i) const
{
	return Base()[i];
}

template <class T>
inline T &CUtlMemory<T>::Element(int i)
{
	return Base()[i];
}

template <class T>
inline T const &CUtlMemory<T>::Element(int i) const
{
	return Base()[i];
}

template <class T>
inline bool CUtlMemory<T>::IsIdxValid(int i) const
{
	return (i >= 0) && (i < m_nAllocationCount);
}

template <class T>
inline T *CUtlMemory<T>::Base()
{
	return m_pMemory;
}

template <class T>
inline T const *CUtlMemory<T>::Base() const
{
	return m_pMemory;
}

template <class T>
inline void CUtlMemory<T>::SetExternalBuffer(T *pMemory, int numElements)
{
	Purge();
	m_pMemory = pMemory;
	m_nAllocationCount = numElements;
	m_nGrowSize = EXTERNAL_BUFFER_MARKER;
}

template <class T>
inline int CUtlMemory<T>::NumAllocated() const
{
	return m_nAllocationCount;
}

template <class T>
inline int CUtlMemory<T>::Count() const
{
	return m_nAllocationCount;
}

template <class T>
inline bool CUtlMemory<T>::IsExternallyAllocated() const
{
	return m_nGrowSize == EXTERNAL_BUFFER_MARKER;
}

template <class T>
inline void CUtlMemory<T>::SetGrowSize(int nSize)
{
	m_nGrowSize = nSize;
}

template <class T>
inline void CUtlMemory<T>::Grow(int num)
{
	if (IsExternallyAllocated())
		return;

	int nAllocationRequested = m_nAllocationCount + num;
	while (m_nAllocationCount < nAllocationRequested) {
		if (m_nAllocationCount != 0) {
			if (m_nGrowSize)
				m_nAllocationCount += m_nGrowSize;
			else
				m_nAllocationCount += m_nAllocationCount;
		} else {
			// at least as big as a cache line
			m_nAllocationCount = (31 + sizeof(T)) / sizeof(T);
		}
	}

	if (m_pMemory)
		m_pMemory = (T *)_imp__Plat_Realloc(m_pMemory, m_nAllocationCount * sizeof(T));
	else
		m_pMemory = (T *)_imp__Plat_Alloc(m_nAllocationCount * sizeof(T));
}

template <class T>
inline void CUtlMemory<T>::EnsureCapacity(int num)
{
	if (m_nAllocationCount >= num)
		return;

	if (IsExternallyAllocated())
		return;

	m_nAllocationCount = num;
	if (m_pMemory)
		m_pMemory = (T *)_imp__Plat_Realloc(m_pMemory, m_nAllocationCount * sizeof(T));
	else
		m_pMemory = (T *)_imp__Plat_Alloc(m_nAllocationCount * sizeof(T));
}

template <class T>
inline void CUtlMemory<T>::Purge()
{
	if (!IsExternallyAllocated()) {
		if (m_pMemory) {
			Plat_Free((void *)m_pMemory);
			m_pMemory = 0;
		}
		m_nAllocationCount = 0;
	}
}
