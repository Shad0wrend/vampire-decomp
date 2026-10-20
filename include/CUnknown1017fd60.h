// CUnknown1017fd60: object (called from CAI_BaseNPCTroika::vfunc438) keeping a list of 16 byte "scared NPC"
// records {time, entity handle, edict index, value} at +0x1d90; real name not yet known.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct CUnknown1017fd60Rec
{
	float m_time;
	unsigned int m_handle;
	int m_index;
	int m_value;
};

// CUtlVector layout: memory, allocation count, grow size, size, element pointer.
struct CUnknown1017fd60Vec
{
	CUnknown1017fd60Rec *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CUnknown1017fd60Rec *m_pElements;

	void sub_10185910(int num);	// CUtlMemory::Grow

	void GrowVector(int num)
	{
		if (m_size + num > m_allocationCount)
			sub_10185910(m_size + num - m_allocationCount);
		m_size += num;
		m_pElements = m_pMemory;
	}
	void ShiftElementsRight(int elem, int num)
	{
		int numToMove = m_size - elem - num;
		if (numToMove > 0 && num > 0)
			memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * sizeof(CUnknown1017fd60Rec));
	}
};

class CBaseEntity;

class CUnknown1017fd60
{
public:
	char pad0[0x1d90];
	CUnknown1017fd60Vec m_list;	// 0x1d90

	void sub_1017fd60(int value, CBaseEntity *pNpc);	// adds the NPC to the list, or refreshes its record (max value, current time)
};
