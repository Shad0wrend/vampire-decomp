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

	CAI_SensesVec()
	{
		m_mem.sub_1027f8f0(0, 0);
		m_size = 0;
		m_pElements = m_mem.m_pMemory;
	}

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

struct CAI_SensesTimerA	// two floats: the next time (-1.0f first) and the interval
{
	float m_flNext;
	float m_flInterval;

	CAI_SensesTimerA(float flInterval, char bUseInfinity)
	{
		m_flNext = -1.0f;
		sub_1027cda0(flInterval, bUseInfinity);
	}
	void sub_1027cda0(float flInterval, char bUseInfinity);	// stub 0x100112f7
};

struct CAI_SensesTimerB	// like CAI_SensesTimerA, but the setter starts by clearing the next time to -1.0f
{
	float m_flNext;
	float m_flInterval;

	CAI_SensesTimerB(float flInterval, char bUseInfinity)
	{
		sub_1027cd50(flInterval, bUseInfinity);
	}
	void sub_1027cd50(float flInterval, char bUseInfinity);	// stub 0x10004c32
};

class CAI_Senses : public CAI_Component
{
public:
	// slot 0, the scalar deleting destructor at 0x1027cde0, is the implicit destructor

	char pad08[4];
	int m_n0c;
	float m_flLookDist;	// 0x10
	float m_f14;
	float m_f18;
	int m_n1c;
	CAI_SensesVec m_vec20;
	CAI_SensesVec m_vec34;
	CAI_SensesVec m_vec48;
	CAI_SensesVec *m_pVec20;	// 0x5c
	CAI_SensesVec *m_pVec34;	// 0x60
	CAI_SensesVec *m_pVec48;	// 0x64
	CAI_SensesTimerA m_timer68;
	CAI_SensesTimerB m_timer70;
	CAI_SensesTimerB m_timer78;
	char m_b80;
	int m_n84;

	CAI_Senses()
		: m_n0c(-1), m_flLookDist(3072.0f), m_f14(-1.0f), m_f18(-1.0f), m_n1c(0),
		  m_timer68(0.15f, 1), m_timer70(0.25f, 1), m_timer78(0.45f, 1), m_b80(1), m_n84(0)
	{
		m_pVec20 = &m_vec20;
		m_pVec34 = &m_vec34;
		m_pVec48 = &m_vec48;
	}

	char sub_1030fa00(CBaseEntity *pEnt);	// "CAI_Senses::ShouldSeeEntity": false for the NPC itself, an entity whose slot 158 fails, a flagged / spawn-flagged or hidden one, else the NPC's slot 468 (classification) answer
	void *sub_103105d0(int type);	// the record of the given type closest to the NPC's ear position (a record owned by the NPC's slot 167 entity wins at once); walks the list with sub_10310440 / sub_10310480
	void *sub_10310440(int *pIter);	// first record of the list (stub 0x10001f69); pIter receives the iteration state
	void *sub_10310480(int *pIter);	// next record (stub 0x1001228d)
	int sub_10310130(int radius);	// at most every m_timer70 interval: counts the entities of the global list at 0x1090fe10 within radius of the NPC's origin that pass sub_1030ffa0, remembers the count in the vector at +0x34 (sub_1030fe70); returns the last count
	void sub_1030fe50();	// stub 0x10003305, run before the count
	void sub_1030fe70(int count, CAI_SensesVec *pVec);	// stub 0x100136a6, hands the count to the vector
	char sub_1030ffa0(void *pEnt);	// stub 0x1000ae6b
};
