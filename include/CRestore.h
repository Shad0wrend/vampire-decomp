// CRestore: save-game restore context (RTTI .?AVCRestore@@, vtable 0x10477084, 35 slots; only the first slots are modelled).
#pragma once

#include "IRestore.h"

struct CRestoreField;
class CBaseEntity;

class CRestore : public IRestore
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2(CBaseEntity *pEnt, int map);	// reads the entity's data description block

	CRestore(void *pData);	// 0x101a12a0

	// Searches the field table starting from the remembered position, wrapping around.
	CRestoreField *sub_101a17c0(const char *name, CRestoreField *fields, int count, int *pStart);
	void sub_101a1f90(void *pData, int size);	// reads size bytes into pData
	char vfunc16();	// slot 16: reads one byte

	int *m_pMemory;	// 0x0004: buffer of 32 dwords (a CUtlVector's memory)
	int m_allocationCount;	// 0x0008
	int m_growSize;	// 0x000c
	int m_size;	// 0x0010
	int *m_pElements;	// 0x0014
	void *m_pData;	// 0x0018
	char *m_pData2;	// 0x001c: m_pData + 0x18, or null
	int m_field20;
	bool m_bField24;
};
