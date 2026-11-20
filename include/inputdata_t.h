// inputdata_t / variant_t: the data passed to entity input handlers.
#pragma once

#include "CGlobalEntityList.h"

extern "C" int __cdecl atexit(void (__cdecl *)(void));

struct variant_t
{
	union {
		bool bVal;
		float flValue;
		int iValue;
		const char *iszValue;
	};
	char m_pad04[8];
	unsigned int eVal;	// 0x0c: entity handle
	int fieldType;	// 1 == FIELD_FLOAT, 2 == FIELD_STRING, 4 == FIELD_INTEGER, 12 == FIELD_EHANDLE

	float Float() const;	// the float value, or the file-scope zero when the variant is not a float
	bool Bool() const { return (fieldType == 5) ? bVal : false; }	// Source's variant_t::Bool(): the value of a boolean variant (FIELD_BOOLEAN 5), else false
	int Int() const { return iValue; }	// the raw integer value
	int IntOrZero() const { return fieldType == 4 ? iValue : 0; }	// Source's variant_t::Int(): the value of an integer variant, else 0
	const char *sub_10008805();	// the value converted to a string (used when it is not a string)
	const char *String()	// the string value (an empty string for a null one), else the converted value
	{
		if (fieldType == 2)
			return iszValue ? iszValue : "";
		return sub_10008805();
	}
	void sub_100d04b0(void *pOut);	// "variant_t::Convert"-like getter: stores the value into *pOut according to fieldType (nothing for unsupported types)
	void sub_100d0390(int type, void *pData);	// "variant_t::Set": stores the type and copies the value out of *pData according to it (1 dword, 3 dwords for vector types 3 and 14, a byte for 5, an entity pointer for 11 which becomes its handle, a handle for 12; unsupported types clear the value and the type)
	bool sub_100d05d0(int type);	// "variant_t::Convert" (stub 0x1000252c): converts the value to the given field type in place; false when the conversion is not supported

	// Source's variant_t::Entity() for a variant that is not an EHANDLE: `static CHandle<CBaseEntity> hNull;
	// hNull.Set(NULL); return hNull;`. VC6 makes the guard and the static's (empty) atexit destroy. The game has one
	// copy of each, so every function that uses the static calls this one inline. Not a static member function:
	// VC6 names the guard of a static member function's local static by a counter of the unit ($S1, $S3 ...), so
	// units would not share it; a member function's guard is the communal ??_B...@51.
	unsigned long &NullHandle()
	{
		static CHandle<CBaseEntity> hNull;
		hNull.Set(0);
		return hNull.m_Index;
	}

	// The entity of an EHANDLE variant (0 for other types or a stale handle); ppList is the address of the global
	// entity list pointer. Other variants go through NullHandle().
	CGlobalEntityList_Ent *Entity(CGlobalEntityList **ppList)
	{
		unsigned int h;
		if (fieldType != 12) {
			h = NullHandle();
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
