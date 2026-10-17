// CUnknown102e9a00: vector of 0x118-byte records, each holding an entity handle at +0x10
// (element pointer at +0, count at +0xc); real name not yet known.
#pragma once

struct CUnknown102e9a00_Elem
{
	char pad0[0x10];
	unsigned int m_hEntity;
	char pad14[0x118 - 0x14];
};

class CUnknown102e9a00
{
public:
	CUnknown102e9a00_Elem *m_pElems;
	char pad4[8];
	int m_nCount;

	bool sub_102e9a00(void *pEntity);
};
