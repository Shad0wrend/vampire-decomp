// utlvector.h: Source's CUtlVector<T, A> (tier1 utlvector.h, 2004 public SDK form) as the game compiled it.
// Use it for every CUtlVector of the game: CUtlVector<int>, CUtlVector<EHANDLE>, CUtlVector<CFoo *>,
// CUtlVector<CFooRecord> (a struct of the element's size, with its constructor / copy if the game's code runs one).
//
// CUtlVector<T, A = CUtlMemory<T> > (the game's RTTI names both parameters, see CUtlVectorDataOps.h).
// Layout (0x14 bytes): m_Memory { m_pMemory +0, m_nAllocationCount +4, m_nGrowSize +8 }, m_Size +0xc,
// m_pElements +0x10 (a debugger view of the memory, set again by ResetDbgInfo after every change).
//
// Every member is inline (as in the SDK); VC6 inlines them where its budget allows and otherwise calls the
// out-of-line copy of that element type. Write the Source call (v.AddToTail(x), v.Remove(i), v.Purge(), a member
// vector going out of scope) and let the compiler choose; never the grow / memmove / Plat_Free steps by hand.
// How each one shows in the game's code (this = the vector, size = +0xc, alloc = +4):
// - AddToTail(x) = InsertBefore(m_Size, x): GrowVector (if size + 1 > alloc: Grow(size + 1 - alloc), the
//   CUtlMemory::Grow body of utlmemory.h inline or a call; size += 1; +0x10 = memory), ShiftElementsRight (memmove of
//   size - elem - 1 elements when > 0), then CopyConstruct: `lea eax, [mem + elem*N]; test eax, eax; je` and the copy.
// - Remove(i): Destruct, ShiftElementsLeft (memmove down when size - i - 1 > 0), --size.
//   FastRemove(i): the last element is copied over i (memcpy: rep movs / a dword copy), --size.
// - RemoveAll(): a loop from size - 1 down to 0 destroying the elements (gone for int / pointers), size = 0.
// - Purge(): RemoveAll, CUtlMemory::Purge (`cmp grow, -1`, `call [Plat_Free]`), +0x10 = memory.
//   The destructor ~CUtlVector is Purge, then ~CUtlMemory purges again.
// - PurgeAndDeleteElements(): `delete` of every element (a pointer vector), then Purge.
// - EnsureCapacity(n): `cmp alloc, n; jge`, alloc = n, Plat_Realloc / Plat_Alloc, +0x10 = memory.
// - Find(x): a loop i = 0 .. size - 1 comparing Element(i) == x, -1 when absent. FindAndRemove(x) = Find + Remove.
// The out-of-line copies are per element type: the judge names the one your code calls (e.g.
// ?GrowVector@?$CUtlVector@PAVCBaseEntity@@V?$CUtlMemory@PAVCBaseEntity@@@@@@IAEXH@Z); when it is not known yet,
// rename_symbol the address the game's code calls to that name. A different element type is a different copy: if
// the name is already taken by another address, the game's vector holds another type.
// Known copies: CUtlMemory<int>::Base 0x1002cca0 (stub 0x10013e12), CUtlMemory<int>::Purge 0x1002cbd0,
// CUtlVector<int>::RemoveAll 0x10032b00, CUtlMemory<int>::Grow 0x100eb280 (stub 0x1000ff51).
#pragma once

#include "utlmemory.h"

template <class T, class A = CUtlMemory<T> >
class CUtlVector
{
public:
	typedef T ElemType_t;

	CUtlVector(int growSize = 0, int initSize = 0);
	CUtlVector(T *pMemory, int numElements);
	~CUtlVector();

	CUtlVector<T, A> &operator=(const CUtlVector<T, A> &other);

	T &operator[](int i);
	T const &operator[](int i) const;
	T &Element(int i);
	T const &Element(int i) const;

	T *Base() { return m_Memory.Base(); }
	T const *Base() const { return m_Memory.Base(); }

	int Count() const;
	int Size() const;
	bool IsValidIndex(int i) const;
	static int InvalidIndex() { return -1; }

	int AddToHead();
	int AddToTail();
	int InsertBefore(int elem);
	int InsertAfter(int elem);

	int AddToHead(T const &src);
	int AddToTail(T const &src);
	int InsertBefore(int elem, T const &src);
	int InsertAfter(int elem, T const &src);

	int AddMultipleToHead(int num);
	int AddMultipleToTail(int num, const T *pToCopy = 0);
	int sub_1012c3d0(int num, const T *pToCopy = 0);
	int InsertMultipleBefore(int elem, int num, const T *pToCopy = 0);
	int InsertMultipleAfter(int elem, int num);

	void SetSize(int size);
	void SetCount(int count);
	void CopyArray(T const *pArray, int size);
	int AddVectorToTail(CUtlVector<T, A> const &src);

	int Find(T const &src) const;
	bool HasElement(T const &src) const;

	void EnsureCapacity(int num);
	void EnsureCount(int num);

	void FastRemove(int elem);
	void Remove(int elem);
	void FindAndRemove(T const &src);
	void RemoveMultiple(int elem, int num);
	void RemoveAll();
	void sub_1011ef90();
	void sub_1011f080();
	void sub_1011f170();
	void sub_1011f260();

	void Purge();
	void PurgeAndDeleteElements();

	void SetGrowSize(int size) { m_Memory.SetGrowSize(size); }

	void GrowVector(int num = 1);
	void sub_1008e5a0(int num = 1);
	void ShiftElementsRight(int elem, int num = 1);
	void sub_1008e630(int elem, int num = 1);
	void ShiftElementsLeft(int elem, int num = 1);
	void ResetDbgInfo() { m_pElements = Base(); }

	A m_Memory;
	int m_Size;
	T *m_pElements;
};

template <class T, class A>
inline CUtlVector<T, A>::CUtlVector(int growSize, int initSize)
	: m_Memory(growSize, initSize), m_Size(0)
{
	ResetDbgInfo();
}

template <class T, class A>
inline CUtlVector<T, A>::CUtlVector(T *pMemory, int numElements)
	: m_Memory(pMemory, numElements), m_Size(0)
{
	ResetDbgInfo();
}

template <class T, class A>
inline CUtlVector<T, A>::~CUtlVector()
{
	Purge();
}

template <class T, class A>
inline CUtlVector<T, A> &CUtlVector<T, A>::operator=(const CUtlVector<T, A> &other)
{
	CopyArray(other.Base(), other.Count());
	return *this;
}

template <class T, class A>
inline T &CUtlVector<T, A>::operator[](int i)
{
	return m_Memory[i];
}

template <class T, class A>
inline T const &CUtlVector<T, A>::operator[](int i) const
{
	return m_Memory[i];
}

template <class T, class A>
inline T &CUtlVector<T, A>::Element(int i)
{
	return Base()[i];
}

template <class T, class A>
inline T const &CUtlVector<T, A>::Element(int i) const
{
	return m_Memory[i];
}

template <class T, class A>
inline int CUtlVector<T, A>::Size() const
{
	return m_Size;
}

template <class T, class A>
inline int CUtlVector<T, A>::Count() const
{
	return m_Size;
}

template <class T, class A>
inline bool CUtlVector<T, A>::IsValidIndex(int i) const
{
	return (i >= 0) && (i < m_Size);
}

template <class T, class A>
inline void CUtlVector<T, A>::GrowVector(int num)
{
	if (m_Size + num > m_Memory.NumAllocated())
		m_Memory.Grow(m_Size + num - m_Memory.NumAllocated());

	m_Size += num;
	ResetDbgInfo();
}

template <class T, class A>
inline void CUtlVector<T, A>::EnsureCapacity(int num)
{
	m_Memory.EnsureCapacity(num);
	ResetDbgInfo();
}

template <class T, class A>
inline void CUtlVector<T, A>::EnsureCount(int num)
{
	if (Count() < num)
		AddMultipleToTail(num - Count());
}

template <class T, class A>
inline void CUtlVector<T, A>::ShiftElementsRight(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if ((numToMove > 0) && (num > 0))
		memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(T));
}

template <class T, class A>
inline void CUtlVector<T, A>::ShiftElementsLeft(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if ((numToMove > 0) && (num > 0))
		memmove(&Element(elem), &Element(elem + num), numToMove * sizeof(T));
}

template <class T, class A>
inline int CUtlVector<T, A>::AddToHead()
{
	return InsertBefore(0);
}

template <class T, class A>
inline int CUtlVector<T, A>::AddToTail()
{
	return InsertBefore(m_Size);
}

template <class T, class A>
inline int CUtlVector<T, A>::InsertAfter(int elem)
{
	return InsertBefore(elem + 1);
}

template <class T, class A>
inline int CUtlVector<T, A>::InsertBefore(int elem)
{
	GrowVector();
	ShiftElementsRight(elem);
	Construct(&Element(elem));
	return elem;
}

template <class T, class A>
inline int CUtlVector<T, A>::AddToHead(T const &src)
{
	return InsertBefore(0, src);
}

template <class T, class A>
inline int CUtlVector<T, A>::AddToTail(T const &src)
{
	return InsertBefore(m_Size, src);
}

template <class T, class A>
inline int CUtlVector<T, A>::InsertAfter(int elem, T const &src)
{
	return InsertBefore(elem + 1, src);
}

template <class T, class A>
inline int CUtlVector<T, A>::InsertBefore(int elem, T const &src)
{
	GrowVector();
	ShiftElementsRight(elem);
	CopyConstruct(&Element(elem), src);
	return elem;
}

template <class T, class A>
inline int CUtlVector<T, A>::AddMultipleToHead(int num)
{
	return InsertMultipleBefore(0, num);
}

template <class T, class A>
inline int CUtlVector<T, A>::AddMultipleToTail(int num, const T *pToCopy)
{
	return InsertMultipleBefore(m_Size, num, pToCopy);
}

template <class T, class A>
inline int CUtlVector<T, A>::InsertMultipleAfter(int elem, int num)
{
	return InsertMultipleBefore(elem + 1, num);
}

template <class T, class A>
inline void CUtlVector<T, A>::SetCount(int count)
{
	RemoveAll();
	AddMultipleToTail(count);
}

template <class T, class A>
inline void CUtlVector<T, A>::SetSize(int size)
{
	SetCount(size);
}

template <class T, class A>
inline void CUtlVector<T, A>::CopyArray(T const *pArray, int size)
{
	SetSize(size);
	for (int i = 0; i < size; i++)
		(*this)[i] = pArray[i];
}

template <class T, class A>
inline int CUtlVector<T, A>::AddVectorToTail(CUtlVector<T, A> const &src)
{
	int base = Count();
	AddMultipleToTail(src.Count());
	for (int i = 0; i < src.Count(); i++)
		(*this)[base + i] = src[i];
	return base;
}

template <class T, class A>
inline int CUtlVector<T, A>::InsertMultipleBefore(int elem, int num, const T *pToInsert)
{
	if (num == 0)
		return elem;

	GrowVector(num);
	ShiftElementsRight(elem, num);

	// default constructors first, then the copies
	for (int i = 0; i < num; ++i)
		Construct(&Element(elem + i));

	if (pToInsert) {
		for (int i = 0; i < num; i++)
			Element(elem + i) = pToInsert[i];
	}
	return elem;
}

template <class T, class A>
inline int CUtlVector<T, A>::Find(T const &src) const
{
	for (int i = 0; i < Count(); ++i) {
		if (Element(i) == src)
			return i;
	}
	return -1;
}

template <class T, class A>
inline bool CUtlVector<T, A>::HasElement(T const &src) const
{
	return (Find(src) >= 0);
}

template <class T, class A>
inline void CUtlVector<T, A>::FastRemove(int elem)
{
	Destruct(&Element(elem));
	if (m_Size > 0) {
		memcpy(&Element(elem), &Element(m_Size - 1), sizeof(T));
		--m_Size;
	}
}

template <class T, class A>
inline void CUtlVector<T, A>::Remove(int elem)
{
	Destruct(&Element(elem));
	ShiftElementsLeft(elem);
	--m_Size;
}

template <class T, class A>
inline void CUtlVector<T, A>::FindAndRemove(T const &src)
{
	int elem = Find(src);
	if (elem != -1)
		Remove(elem);
}

template <class T, class A>
inline void CUtlVector<T, A>::RemoveMultiple(int elem, int num)
{
	for (int i = elem + num; --i >= elem; )
		Destruct(&Element(i));

	ShiftElementsLeft(elem, num);
	m_Size -= num;
}

template <class T, class A>
inline void CUtlVector<T, A>::RemoveAll()
{
	for (int i = m_Size; --i >= 0; )
		Destruct(&Element(i));

	m_Size = 0;
}

template <class T, class A>
inline void CUtlVector<T, A>::Purge()
{
	RemoveAll();
	m_Memory.Purge();
	ResetDbgInfo();
}

template <class T, class A>
inline void CUtlVector<T, A>::PurgeAndDeleteElements()
{
	for (int i = 0; i < m_Size; i++)
		delete Element(i);
	Purge();
}
