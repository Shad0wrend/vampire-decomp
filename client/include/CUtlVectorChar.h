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
};
