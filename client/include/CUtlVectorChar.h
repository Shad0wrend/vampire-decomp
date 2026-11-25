// CUtlMemory / CUtlVector templates (tier1), as far as client.dll's CUtlVector<char> needs them.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

template <class T>
class CUtlMemory
{
public:
	T *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;

	int NumAllocated() const { return m_nAllocationCount; }
	void sub_101b1ee0(int num);	// "CUtlMemory::Grow"
};

template <class T, class A = CUtlMemory<T> >
class CUtlVector : public A
{
public:
	int m_Size;
	T *m_pElements;

	int InsertMultipleBefore(int elem, int num, const T *pToInsert);
	int InsertBefore(int elem, const T &src);
};

template <class T, class A>
int CUtlVector<T,A>::InsertBefore(int elem, const T &src)
{
	if ( elem + 1 > m_nAllocationCount )
		sub_101b1ee0(elem + 1 - m_nAllocationCount);
	++m_Size;
	m_pElements = m_pMemory;
	int nShift = m_Size - elem - 1;
	if ( nShift > 0 )
		memmove(&m_pMemory[elem+1], &m_pMemory[elem], nShift);
	T *pDest = m_pMemory + elem;
	if ( pDest )
		*pDest = src;
	return elem;
}
