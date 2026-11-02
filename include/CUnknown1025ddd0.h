// CUnknown1025ddd0: a CUtlVector<EHANDLE>-like list (limit at +0, memory pointer at +4, allocation count at +8,
// grow size at +0xc, size at +0x10); real name not yet known.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class CBaseEntity;

class CUnknown1025ddd0
{
public:
	int m_limit;
	unsigned int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	unsigned int *m_pElements;	// 0x14
	char m_szName[16];	// 0x18: the name ("Normal", "Player", "Boss"; sub_1025e120 returns its address); the whole object is 0x28 bytes, made by sub_1025d880 (globals 0x1090fbec / f0 / f4)

	CUnknown1025ddd0 *sub_1025d9d0(int nLimit, const char *pszName);	// constructor body (stub 0x10007563): +4..+0x14 zeroed, grow size 8, limit nLimit, name copied (Q_strncpy, 15 chars); returns this

	int Count() const { return m_size; }
	unsigned int *Element(int i) { return &m_pMemory[i]; }
	void FastRemove(int elem)
	{
		if (m_size > 0) {
			memmove(Element(elem), Element(m_size - 1), 4);
			m_size--;
		}
	}

	bool sub_1025de90(CBaseEntity *pEntity);	// true when no handle in the list resolves to pEntity (null counts as free)
	bool sub_1025db50();	// size < limit
	void sub_1025ddd0(void *pEntity);	// removes the first handle that resolves to pEntity (fast remove: the last element takes its place)
	bool sub_1025db70(CBaseEntity *pEntity);	// adds the entity when it is not in the list yet and the list is below its limit; else sub_1025dca0(pEntity, 1) (replace the oldest member)
	bool sub_1025dca0(CBaseEntity *pEntity, char bFlag);	// stub 0x10015564
};
