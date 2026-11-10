// CUnknown1017fd60: object (called from CAI_BaseNPCTroika::vfunc438) keeping a list of 16 byte "scared NPC"
// records {time, entity handle, edict index, value} at +0x1d90; real name not yet known.
#pragma once
#include "utlvector.h"

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

	CUnknown1017fd60Rec &Element(int i) { return m_pMemory[i]; }
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
	int InsertBefore(int elem, const CUnknown1017fd60Rec &src)
	{
		GrowVector(1);
		ShiftElementsRight(elem, 1);
		CUnknown1017fd60Rec *dst = &Element(elem);
		if (dst)
		{
			dst->m_time = src.m_time;
			dst->m_handle = src.m_handle;
			dst->m_index = src.m_index;
			dst->m_value = src.m_value;
		}
		return elem;
	}
	int AddToTail(const CUnknown1017fd60Rec &src) { return InsertBefore(m_size, src); }
};

class CBaseEntity;

class CUnknown1017fd60
{
public:
	char pad0[0x1d28];
	float m_flNoticeTime[5];	// 0x1d28: per kind, the time the entity of that kind was last noticed
	unsigned int m_hNoticed[5];	// 0x1d3c: per kind, the handle of that entity
	unsigned int m_hNearest;	// 0x1d50: handle of the nearest noticed entity
	float m_flNearestDist;	// 0x1d54: its distance
	char pad1d58[0x1d90 - 0x1d58];
	CUtlVector<CUnknown1017fd60Rec> m_list;	// 0x1d90

	void sub_1017fd60(int value, CBaseEntity *pNpc);	// adds the NPC to the list, or refreshes its record (max value, current time)
	void sub_1017ff40(CBaseEntity *pEnt, int nKind);	// notes that pEnt of the kind was seen now (time and handle of that kind) and, for an entity without the field at +0x128 or the kinds 3 / 4, keeps it as the nearest one when the old nearest is gone or farther away
};
