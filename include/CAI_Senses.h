// CAI_Senses: an NPC component holding three int vectors at +0x20, +0x34 and +0x48 (the rest is not modelled yet).
#pragma once
#include "CAI_Component.h"
#include "UtlMem.h"

class CBaseEntity;

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);	// tier0

struct CAI_SensesVec	// a CUtlVector<int>: memory (pointer, allocation count, grow size), size, element pointer
{
	UtlMem m_mem;
	int m_size;
	int *m_pElements;

	~CAI_SensesVec()
	{
		m_size = 0;
		m_mem.sub_10185100();
		m_pElements = m_mem.m_pMemory;
		if (m_mem.m_growSize != -1) {
			if (m_mem.m_pMemory) {
				Plat_Free(m_mem.m_pMemory);
				m_mem.m_pMemory = 0;
			}
			m_mem.m_allocationCount = 0;
		}
	}
};

class CAI_Senses : public CAI_Component
{
public:
	// slot 0, the scalar deleting destructor at 0x1027cde0, is the implicit destructor

	char pad08[0x20 - 0x08];
	CAI_SensesVec m_vec20;
	CAI_SensesVec m_vec34;
	CAI_SensesVec m_vec48;

	char sub_1030fa00(CBaseEntity *pEnt);	// "CAI_Senses::ShouldSeeEntity": false for the NPC itself, an entity whose slot 158 fails, a flagged / spawn-flagged or hidden one, else the NPC's slot 468 (classification) answer
};
