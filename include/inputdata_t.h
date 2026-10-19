// inputdata_t / variant_t: the data passed to entity input handlers.
#pragma once

struct variant_t
{
	union {
		float flValue;
		int iValue;
		const char *iszValue;
	};
	char m_pad04[8];
	unsigned int eVal;	// 0x0c: entity handle
	int fieldType;	// 1 == FIELD_FLOAT, 2 == FIELD_STRING, 4 == FIELD_INTEGER

	float Float() const;	// the float value, or the file-scope zero when the variant is not a float
	int Int() const { return iValue; }	// the raw integer value
	const char *sub_10008805();	// the value converted to a string (used when it is not a string)
	void sub_100d04b0(void *pOut);	// "variant_t::Convert"-like getter: stores the value into *pOut according to fieldType (nothing for unsupported types)
	void sub_100d0390(int type, void *pData);	// "variant_t::Set": stores the type and copies the value out of *pData according to it (1 dword, 3 dwords for vector types 3 and 14, a byte for 5, an entity pointer for 11 which becomes its handle, a handle for 12; unsupported types clear the value and the type)
};

struct inputdata_t
{
	void *pActivator;
	void *pCaller;
	variant_t value;
	int nOutputID;

	int GetInt() const { return value.iValue; }	// the raw integer value of the input
};
