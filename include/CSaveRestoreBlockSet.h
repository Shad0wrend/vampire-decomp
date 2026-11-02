// CSaveRestoreBlockSet (RTTI .?AVCSaveRestoreBlockSet@@): bases ISaveRestoreBlockSet and ISaveRestoreBlockHandler at +0x0.
// Only the members that decompiled code needs are declared.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void *(__cdecl *g_109f3634)(unsigned int);
extern void *(__cdecl *g_109f3638)(void *, unsigned int);

#include "utlvector.h"

struct SaveRestoreBlockHeader_t	// one block's header record (0x28 bytes), as filled by vfunc1 and written by vfunc3
{
	char m_szName[0x20];	// 0x00: the handler's block name
	int m_nLocHeader;	// 0x20: the position of the block's data relative to the save's start (written by vfunc3 per handler, from the stream's slot 0)
	int m_nLocBody;	// 0x24: read back by vfunc7 (-1 = none; vfunc3 pre-fills the whole record with 0xff)
};

class CSaveRestoreBlockSet
{
public:
	char pad0[0x4];
	char pad4[0x20];
	void **m_pHandlers;	// 0x24, CUtlVector memory
	int m_nAllocCount;	// 0x28
	int m_nGrowSize;	// 0x2c
	int m_nHandlers;	// 0x30
	void **m_pHandlerElements;	// 0x34
	char pad38[0x4];
	int m_nSize;	// 0x3c
	char *m_pEntries;	// 0x40, entries of 0x28 bytes
	int m_nEntriesAlloc;	// 0x44
	int m_nEntriesGrow;	// 0x48
	int m_nEntries;	// 0x4c, number of entries at m_pEntries
	char *m_pEntryElements;	// 0x50

	void vfunc1(void *pSave);	// slot 1: rebuilds the entry table from the handlers' block names, then calls slot 1 of every handler
	void vfunc2(void *pSave);
	void vfunc4();	// slot 4: calls slot 4 of every handler, then empties the entry table (CUtlVector Purge)
	void vfunc5();	// slot 5: calls slot 5 of every handler in the list (CUtlVector<void *> at +0x24, count at +0x30)
	void vfunc7(void *pSave, int a, int b);	// for every handler whose block name is found in the entry table (name at +0, offset at +0x24 unless -1) seeks the save/restore stream to base + offset and forwards (pSave, a, b) to the handler's slot 7; finally seeks to base + m_nSize
	void vfunc8();	// slot 8: calls slot 8 of every handler, then empties the entry table (CUtlVector Purge)
	void vfunc9(void *pHandler);	// AddHandler: CUtlVector::AddToTail

	// Inlined CUtlVector<void *> pieces.
	void GrowMemory(int num)
	{
		if (m_nGrowSize == -1)
			return;
		int requested = m_nAllocCount + num;
		if (m_nAllocCount < requested) {
			int count = m_nAllocCount;
			do {
				if (count) {
					if (m_nGrowSize)
						count += m_nGrowSize;
					else
						count += count;
				} else
					count = 8;
			} while (count < requested);
			m_nAllocCount = count;
		}
		if (m_pHandlers)
			m_pHandlers = (void **)g_109f3638(m_pHandlers, m_nAllocCount * 4);
		else
			m_pHandlers = (void **)g_109f3634(m_nAllocCount * 4);
	}
	void GrowVector()
	{
		if (m_nHandlers + 1 > m_nAllocCount)
			GrowMemory(m_nHandlers + 1 - m_nAllocCount);
		m_pHandlerElements = m_pHandlers;
		m_nHandlers++;
	}
	void ShiftElementsRight(int elem)
	{
		int toMove = m_nHandlers - elem - 1;
		if (toMove > 0)
			memmove(&m_pHandlers[elem + 1], &m_pHandlers[elem], toMove * 4);
	}
public:
	char * vfunc0();
};
