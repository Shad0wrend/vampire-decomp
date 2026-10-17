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

	int Find(int src)
	{
		for (int i = 0; i < m_size; i++) {
			if (m_mem.m_pMemory[i] == src)
				return i;
		}
		return -1;
	}

	void AddToTail(int src)
	{
		int idx = m_size;
		int next = idx + 1;
		if (next > m_mem.m_allocationCount)
			m_mem.sub_100f9940(m_size - m_mem.m_allocationCount + 1);
		int *mem = m_mem.m_pMemory;
		m_size++;
		m_pElements = mem;
		int move = m_size - idx - 1;
		if (move > 0)
			sub_10430fa0(mem + next, mem + idx, move * 4);
		int *slot = m_mem.m_pMemory + idx;
		if (slot)
			*slot = src;
	}

	void AddToTailUnique(int src)
	{
		if (Find(src) < 0)
			AddToTail(src);
	}
};

class CUnknown100f6d80
{
public:
	char pad0[0x18048];
	CUnknown100f6d80Vec m_vec;

	void sub_100f6d80(int value);	// adds value to the vector if it is not already in it
};
