// CUnknown100f6d80: object with an int vector (CUtlVector<int>-like) at +0x18048; real name not yet known.
#pragma once

void *sub_10430fa0(void *, const void *, unsigned);

struct CUnknown100f6d80Mem
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void sub_100f9940(int num);
};

struct CUnknown100f6d80Vec
{
	CUnknown100f6d80Mem m_mem;
	int m_size;
	int *m_pElements;

	int Count() { return m_size; }
	int &Element(int i) { return m_mem.m_pMemory[i]; }

	int Find(int src)
	{
		for (int i = 0; i < Count(); i++) {
			if (Element(i) == src)
				return i;
		}
		return -1;
	}

	void GrowVector(int num)
	{
		if (m_size + num > m_mem.m_allocationCount)
			m_mem.sub_100f9940(m_size + num - m_mem.m_allocationCount);
		m_size += num;
		m_pElements = m_mem.m_pMemory;
	}

	void ShiftElementsRight(int elem, int num)
	{
		int numToMove = m_size - elem - num;
		if (numToMove > 0)
			sub_10430fa0(&Element(elem + num), &Element(elem), numToMove * 4);
	}

	int InsertBefore(int elem, int src)
	{
		GrowVector(1);
		ShiftElementsRight(elem, 1);
		int *p = &Element(elem);
		if (p)
			*p = src;
		return elem;
	}

	int AddToTail(int src) { return InsertBefore(m_size, src); }

	int AddToTailUnique(int src)
	{
		int idx = Find(src);
		if (idx >= 0)
			return idx;
		return AddToTail(src);
	}
};

class CUnknown100f6d80
{
public:
	char pad0[0x18048];
	CUnknown100f6d80Vec m_vec;

	void sub_100f6d80(int value);	// adds value to the vector if it is not already in it
};
