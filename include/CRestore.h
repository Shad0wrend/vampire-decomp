// CRestore: save-game restore context (RTTI .?AVCRestore@@, vtable 0x10477084, 35 slots; only the first slots are modelled).
#pragma once

#include "IRestore.h"

struct CRestoreField;
class CBaseEntity;

extern void (*g_109f3624)(void *);	// Plat_Free

// The CUtlVector<int> that CRestore starts with (memory, allocation count, grow size, size, element pointer).
struct CRestoreVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	CRestoreVec() { m_pMemory = 0; m_allocationCount = 0; m_growSize = 0; m_size = 0; m_pElements = 0; }
	~CRestoreVec()
	{
		void (*pfnFree)(void *) = g_109f3624;
		m_size = 0;
		if (m_growSize != -1)
		{
			if (m_pMemory)
			{
				pfnFree(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
		m_pElements = m_pMemory;
		if (m_growSize != -1 && m_pMemory)
			pfnFree(m_pMemory);
	}
	void EnsureCapacity(int num);
};

class CRestore : public IRestore
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2(CBaseEntity *pEnt, int map);	// reads the entity's data description block
	virtual void vfunc3(int a, int b, int c, int d, int e);	// stub 0x10004b65 for 0x101a1b70

	CRestore(void *pData);	// 0x101a12a0

	// Searches the field table starting from the remembered position, wrapping around.
	CRestoreField *sub_101a17c0(const char *name, CRestoreField *fields, int count, int *pStart);
	void sub_101a1990(unsigned short *pValue);	// slot 7: calls slot 9(pValue), then appends slot 0() + *pValue to the vector at +4
	void sub_101a1f90(void *pData, int size);	// reads size bytes into pData
	char vfunc16();	// slot 16: reads one byte

	CRestoreVec m_vec;	// 0x0004
	void *m_pData;	// 0x0018
	char *m_pData2;	// 0x001c: m_pData + 0x18, or null
	int m_field20;
	bool m_bField24;
};
