// CSaveRestoreBlockSet (RTTI .?AVCSaveRestoreBlockSet@@): bases ISaveRestoreBlockSet and ISaveRestoreBlockHandler at +0x0.
// Only the members that decompiled code needs are declared.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void *(__cdecl *g_109f3634)(unsigned int);
extern void *(__cdecl *g_109f3638)(void *, unsigned int);

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
	char pad44[0x8];
	int m_nEntries;	// 0x4c, number of entries at m_pEntries

	void vfunc2(void *pSave);
	void vfunc7(void *pSave, int a, int b);	// for every handler whose block name is found in the entry table (name at +0, offset at +0x24 unless -1) seeks the save/restore stream to base + offset and forwards (pSave, a, b) to the handler's slot 7; finally seeks to base + m_nSize
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
};
