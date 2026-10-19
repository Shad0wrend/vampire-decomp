// CUnknown10227910: global object (at 0x10750cb4) holding a CUtlVector of entity handles at +8 (size at +0x14); real name not yet known.
#pragma once

class CBaseEntity;

class CUnknown10227910
{
public:
	int m_unk0;
	int m_unk4;
	unsigned int *m_pMemory;	// 0x08
	int m_nAllocationCount;	// 0x0c
	int m_nGrowSize;	// 0x10
	int m_nSize;	// 0x14
	unsigned int *m_pElements;	// 0x18

	void sub_10227910(CBaseEntity *pEnt);	// "FindAndRemove": removes the first handle that resolves to the same entity as pEnt (the last handle takes its slot)
};
