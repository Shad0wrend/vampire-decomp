// inputdata_t / variant_t: the data passed to entity input handlers.
#pragma once

#include "CGlobalEntityList.h"

extern "C" int __cdecl atexit(void (__cdecl *)(void));
void __cdecl sub_100031f7();	// the game's destructor stub of the static invalid handle in variant_t::Entity()

struct variant_t_EHandle	// an entity handle; its constructor registers the destructor stub like the game's guarded static
{
	unsigned int m_Index;
	variant_t_EHandle()
	{
		m_Index = 0xffffffff;
		atexit(sub_100031f7);
	}
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

	// The entity of an EHANDLE variant (0 for other types or a stale handle); ppList is the address of the global
	// entity list pointer. Other variants go through a function-local static invalid handle, like the game's inline copy.
	CGlobalEntityList_Ent *Entity(CGlobalEntityList **ppList)
	{
		unsigned int h;
		if (fieldType != 12) {
			static variant_t_EHandle s_hInvalid;
			s_hInvalid.m_Index = 0xffffffff;
			h = s_hInvalid.m_Index;
		} else {
			h = eVal;
		}
		if (h != 0xffffffff) {
			CGlobalEntityList_Slot *s = &(*ppList)->m_Slots[h & 0x1fff];
			if (s->m_Serial == (int)(h >> 13))
				return s->m_pEntity;
		}
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
