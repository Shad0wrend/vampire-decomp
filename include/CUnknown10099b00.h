// CUnknown10099b00: an object holding a CUtlVector of entity handles (memory pointer at +4, count at +0x10); the
// header word at +0 is not known. Real name not yet known (caller is CBaseEntity::vfunc180).
#pragma once

class CBaseEntity;

class CUnknown10099b00
{
public:
	int m_nUnknown0;	// 0x00
	unsigned int *m_pHandles;	// 0x04: handle array
	int m_nAlloc;	// 0x08
	int m_nGrow;	// 0x0c
	int m_nHandles;	// 0x10

	void sub_10099b00(CBaseEntity *pEnt);	// "CUtlVector<EHANDLE>::FindAndRemove": removes the first handle that resolves to the same entity as pEnt (a null pEnt is the invalid handle), shifting the tail down
};
