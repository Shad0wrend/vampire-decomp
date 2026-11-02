// CUnknown1020a240: object owning a growable list of 0x90 byte screen message records at +0x450
// (memory, allocation count, grow size, size, element pointer); real name not yet known.
// Called by CFire::vfunc103 with the object returned by sub_1020a0a0.
#pragma once

extern void *(*g_109f3634)(int);	// Plat_Alloc
extern void *(*g_109f3638)(void *, int);	// Plat_Realloc
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct CUnknown1020a240Msg	// 0x90 bytes
{
	char m_text[0x80];
	int m_a;
	int m_b;
	int m_c;
	int m_d;
};

class CUnknown1020a240
{
public:
	char pad0[0x450];
	CUnknown1020a240Msg *m_pMemory;	// 0x450
	int m_allocationCount;	// 0x454
	int m_growSize;	// 0x458
	int m_size;	// 0x45c
	CUnknown1020a240Msg *m_pElements;	// 0x460

	void Grow(int num)
	{
		if (m_growSize == -1)
			return;
		int nAllocationRequested = m_allocationCount + num;
		while (m_allocationCount < nAllocationRequested)
		{
			if (m_allocationCount != 0)
			{
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			}
			else
				m_allocationCount = 1;
		}
		if (m_pMemory)
			m_pMemory = (CUnknown1020a240Msg *)g_109f3638(m_pMemory, m_allocationCount * sizeof(CUnknown1020a240Msg));
		else
			m_pMemory = (CUnknown1020a240Msg *)g_109f3634(m_allocationCount * sizeof(CUnknown1020a240Msg));
	}
	void GrowVector(int num)
	{
		if (m_size + num > m_allocationCount)
			Grow(m_size + num - m_allocationCount);
		m_size += num;
		m_pElements = m_pMemory;
	}
	void ShiftElementsRight(int elem, int num)
	{
		int numToMove = m_size - elem - num;
		if (numToMove > 0 && num > 0)
			memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * sizeof(CUnknown1020a240Msg));
	}

	void sub_1020a240(const char *text, int a, int b, int c, int d);	// appends a message record (text truncated to 0x80 chars)
	void sub_1020a3f0();	// clears the vector at +0x450 (frees the memory unless the grow size is -1)
};
