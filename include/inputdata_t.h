// inputdata_t / variant_t: the data passed to entity input handlers.
#pragma once

#include "CGlobalEntityList.h"

struct variant_t_EHandle	// an entity handle with a destructor (so its guarded static registers an atexit stub)
{
	unsigned int m_Index;
	variant_t_EHandle() { m_Index = 0xffffffff; }
	~variant_t_EHandle() {}
};

struct variant_t
{
	union {
		float flValue;
		int iValue;
		const char *iszValue;
	};
	char m_pad04[8];
	unsigned int eVal;	// 0x0c: entity handle
	int fieldType;	// 1 == FIELD_FLOAT, 2 == FIELD_STRING, 4 == FIELD_INTEGER, 12 == FIELD_EHANDLE

	float Float() const;	// the float value, or the file-scope zero when the variant is not a float
	int Int() const { return iValue; }	// the raw integer value
	const char *sub_10008805();	// the value converted to a string (used when it is not a string)
	void sub_100d04b0(void *pOut);	// "variant_t::Convert"-like getter: stores the value into *pOut according to fieldType (nothing for unsupported types)
	void sub_100d0390(int type, void *pData);	// "variant_t::Set": stores the type and copies the value out of *pData according to it (1 dword, 3 dwords for vector types 3 and 14, a byte for 5, an entity pointer for 11 which becomes its handle, a handle for 12; unsupported types clear the value and the type)

	// The entity of an EHANDLE variant (0 for other types or a stale handle); pList is the global entity list.
	// Other variants go through a function-local static invalid handle, like the game's inline copy.
	CGlobalEntityList_Ent *Entity(CGlobalEntityList *pList)
	{
		if (fieldType == 12) {
			if (eVal != 0xffffffff && pList->m_Slots[eVal & 0x1fff].m_Serial == (int)(eVal >> 13))
				return pList->m_Slots[eVal & 0x1fff].m_pEntity;
			return 0;
		}
		static variant_t_EHandle s_hInvalid;
		s_hInvalid.m_Index = 0xffffffff;
		unsigned int h = s_hInvalid.m_Index;
		if (h != 0xffffffff && pList->m_Slots[h & 0x1fff].m_Serial == (int)(h >> 13))
			return pList->m_Slots[h & 0x1fff].m_pEntity;
		return 0;
	}
};

struct inputdata_t
{
	void *pActivator;
	void *pCaller;
	variant_t value;
	int nOutputID;

	int GetInt() const { return value.iValue; }	// the raw integer value of the input
};
