// CVariantCopy: the 0x14 byte variant_t record passed by value to AcceptInput-like calls (value at +0, entity handle at +0xc,
// field type at +0x10); the default state is "no value, invalid handle", the copy constructor is the game's (stub 0x10013d0e).
#pragma once

struct CVariantCopy
{
	int m_value;	// 0x00
	int m_pad04;
	int m_pad08;
	unsigned int m_hEntity;	// 0x0c
	int m_fieldType;	// 0x10

	CVariantCopy() { m_value = 0; m_hEntity = 0xffffffff; m_fieldType = 0; }
	CVariantCopy(const CVariantCopy &other);
};
