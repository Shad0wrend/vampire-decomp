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

	// Slots 4..28 (slot 7 and slot 16 are the plain members below).
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual int vfunc15(int *pValues, int count, int nBytesAvailable);	// "CRestore::ReadInt": reads up to count ints into pValues, returns the number read
	virtual void s16();
	virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22();
	virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27();
	virtual int vfunc28(CBaseEntity **pValues, int count, int nBytesAvailable);	// "CRestore::ReadEntityPtr": reads entity indexes (slot 15) and maps each to the entity (sub_101a2390), zero-filling the rest

	CRestore(void *pData);	// 0x101a12a0

	// Searches the field table starting from the remembered position, wrapping around.
	CRestoreField *sub_101a17c0(const char *name, CRestoreField *fields, int count, int *pStart);
	void sub_101a1990(unsigned short *pValue);	// slot 7: calls slot 9(pValue), then appends slot 0() + *pValue to the vector at +4
	void sub_101a1f90(void *pData, int size);	// reads size bytes into pData
	char vfunc16();	// slot 16: reads one byte
	CBaseEntity *sub_101a2390(int index);	// the entity of the given save index (stub 0x10014a3d)

	CRestoreVec m_vec;	// 0x0004
	void *m_pData;	// 0x0018
	char *m_pData2;	// 0x001c: m_pData + 0x18, or null
	int m_field20;
	bool m_bField24;
};
