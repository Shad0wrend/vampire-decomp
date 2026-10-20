// CAI_Senses: an NPC component holding three int vectors at +0x20, +0x34 and +0x48 (the rest is not modelled yet).
#pragma once
#include "CAI_Component.h"
#include "UtlMem.h"
#include "CAnchorList.h"	// g_109f3624, the game's Plat_Free

struct CAI_SensesVec	// a CUtlVector<int>: memory (pointer, allocation count, grow size), size, element pointer
{
	UtlMem m_mem;
	int m_size;
	int *m_pElements;

	void Destroy(void (__cdecl *pFree)(void *))
	{
		m_size = 0;
		m_mem.sub_10185100();
		m_pElements = m_mem.m_pMemory;
		if (m_mem.m_growSize != -1) {
			if (m_mem.m_pMemory) {
				pFree(m_mem.m_pMemory);
				m_mem.m_pMemory = 0;
			}
			m_mem.m_allocationCount = 0;
		}
	}
};

class CAI_Senses : public CAI_Component
{
public:
	virtual ~CAI_Senses()	// slot 0: scalar deleting destructor at 0x1027cde0
	{
		void (__cdecl *pFree)(void *) = g_109f3624;
		m_vec48.Destroy(pFree);
		m_vec34.Destroy(pFree);
		m_vec20.Destroy(pFree);
	}

	char pad08[0x20 - 0x08];
	CAI_SensesVec m_vec20;
	CAI_SensesVec m_vec34;
	CAI_SensesVec m_vec48;
};
