// CVariantCopy: the 0x14 byte variant_t record passed by value to AcceptInput-like calls (value at +0, entity handle at +0xc,
// field type at +0x10); the default state is "no value, invalid handle", the copy constructor is the game's (stub 0x10013d0e).
#pragma once

struct CVariantCopy
{
	union
	{
		int m_value;	// 0x00
		float flVal;
		const char *iszVal;
		unsigned char rgba[4];
		float vecVal[3];
	};
	unsigned int m_hEntity;	// 0x0c
	int m_fieldType;	// 0x10

	CVariantCopy() { m_value = 0; m_hEntity = 0xffffffff; m_fieldType = 0; }
	CVariantCopy(const CVariantCopy &other);
	void sub_1000b320(int fieldType, void *pData);	// "variant_t::Set": stores the value of the given field type read from pData
	void SetFloat(float val) { m_fieldType = 1; flVal = val; }
	void SetBool(bool val) { m_fieldType = 5; rgba[0] = val; }
	bool sub_100d05d0(int newType);	// "variant_t::Convert": converts the value to the field type (1 float, 2 string, 3 vector, 4 int, 5 bool, 8 color32, 12 entity); false when there is no such conversion
	const char *sub_100d0a00() const;	// "variant_t::ToString": the value as text in a shared 0x50 byte buffer (void: "", float "%g", string, vector "[%g %g %g]", int, bool "true" / "false", color32 "%d %d %d %d", entity: its debug name or "(null entity)")
};
