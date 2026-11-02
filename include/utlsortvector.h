// utlsortvector.h: Source's CUtlSortVector<T, A> (tier1, 2004 form): a CUtlVector kept sorted by a less function that
// also gets a context pointer. Layout: the CUtlVector (0x14 bytes) then the less function (+0x14) and its context (+0x18).
// Seen in the game's console command that counts entities per class (0x100f9530): the binary search at 0x100f98b0 returns
// `end` (the last index not greater than the key, -1 when none) = FindLessOrEqual, and Insert is
// InsertBefore(FindLessOrEqual(x) + 1, x): GrowVector, ShiftElementsRight, null-checked CopyConstruct.
#pragma once

#include "utlvector.h"

template <class T, class A = CUtlMemory<T> >
class CUtlSortVector : public CUtlVector<T, A>
{
public:
	typedef bool (*LessFunc_t)(T const &src1, T const &src2, void *pCtx);

	CUtlSortVector(int growSize = 0, int initSize = 0, LessFunc_t lessfunc = 0, void *pLessContext = 0);

	int Insert(T const &src);
	int FindLessOrEqual(T const &search) const;
	int Find(T const &search) const;

	LessFunc_t m_pfnLess;	// 0x14
	void *m_pLessContext;	// 0x18
};

template <class T, class A>
inline CUtlSortVector<T, A>::CUtlSortVector(int growSize, int initSize, LessFunc_t lessfunc, void *pLessContext)
	: CUtlVector<T, A>(growSize, initSize), m_pfnLess(lessfunc), m_pLessContext(pLessContext)
{
}

template <class T, class A>
inline int CUtlSortVector<T, A>::Insert(T const &src)
{
	int pos = FindLessOrEqual(src) + 1;
	return InsertBefore(pos, src);
}

template <class T, class A>
inline int CUtlSortVector<T, A>::FindLessOrEqual(T const &search) const
{
	int start = 0, end = Count() - 1;
	while (start <= end) {
		int mid = (start + end) >> 1;
		if (m_pfnLess(Element(mid), search, m_pLessContext)) {
			start = mid + 1;
		} else if (m_pfnLess(search, Element(mid), m_pLessContext)) {
			end = mid - 1;
		} else {
			return mid;
		}
	}
	return end;
}

template <class T, class A>
inline int CUtlSortVector<T, A>::Find(T const &search) const
{
	int pos = FindLessOrEqual(search);
	if (pos != -1 && !m_pfnLess(search, Element(pos), m_pLessContext))
		return pos;
	return -1;
}
