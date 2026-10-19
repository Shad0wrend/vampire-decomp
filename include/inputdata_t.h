// inputdata_t / variant_t: the data passed to entity input handlers.
#pragma once

struct variant_t
{
	union {
		float flValue;
		int iValue;
		const char *iszValue;
	};
	char m_pad04[12];
	int fieldType;	// 1 == FIELD_FLOAT, 2 == FIELD_STRING, 4 == FIELD_INTEGER

	float Float() const;	// the float value, or the file-scope zero when the variant is not a float
	int Int() const { return iValue; }	// the raw integer value
	const char *sub_10008805();	// the value converted to a string (used when it is not a string)
};

struct inputdata_t
{
	void *pActivator;
	void *pCaller;
	variant_t value;
	int nOutputID;
};
