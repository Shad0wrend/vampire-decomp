// CUnknown1025ddd0: a CUtlVector<EHANDLE>-like list (limit at +0, memory pointer at +4, allocation count at +8,
// grow size at +0xc, size at +0x10); real name not yet known.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class CUnknown1025ddd0
{
public:
	int m_limit;
	unsigned int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;

	int Count() const { return m_size; }
	unsigned int *Element(int i) { return &m_pMemory[i]; }
	void FastRemove(int elem)
	{
		if (m_size > 0) {
			memmove(Element(elem), Element(m_size - 1), 4);
			m_size--;
		}
	}

	void sub_1025ddd0(void *pEntity);	// removes the first handle that resolves to pEntity (fast remove: the last element takes its place)
};
