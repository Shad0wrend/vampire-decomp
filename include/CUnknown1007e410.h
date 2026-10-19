// CUnknown1007e410: an owner holding a CUtlVector of object pointers at +0x28 (size at +0x34); real name not yet known.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" __declspec(dllimport) void Plat_Free(void *p);

// The owned object: a CUtlVector-like container of 4-byte elements at +0x84 whose destructor purges it.
class CUnknown1007e410Obj
{
public:
	char m_pad0000[0x84];
	int *m_pMemory;	// 0x84
	int m_allocationCount;	// 0x88
	int m_growSize;	// 0x8c
	int m_size;	// 0x90
	int *m_pElements;	// 0x94

	void MemPurge()
	{
		if (m_growSize != -1) {
			if (m_pMemory) {
				Plat_Free(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}
	~CUnknown1007e410Obj()
	{
		m_size = 0;
		MemPurge();
		m_pElements = m_pMemory;
		MemPurge();
	}
};

class CUnknown1007e410
{
public:
	char m_pad0000[0x28];
	CUnknown1007e410Obj **m_pMemory;	// 0x28
	int m_allocationCount;	// 0x2c
	int m_growSize;	// 0x30
	int m_size;	// 0x34
	CUnknown1007e410Obj **m_pElements;	// 0x38

	void sub_1007e410(CUnknown1007e410Obj *pObj);	// "CUtlVector::FindAndRemove all + delete": removes every occurrence of pObj from the vector, then deletes it
};
