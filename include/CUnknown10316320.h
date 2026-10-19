// CUnknown10316320: a list of up to 16 entity handles (count at +0x5c, handles from +0x1c); real name not yet known.
#pragma once

class CUnknown10316320
{
public:
	char m_pad0000[0x1c];
	unsigned int m_hEntities[16];	// 0x001c
	int m_nEntities;	// 0x005c

	int sub_10316320(int a, int b, void *pExcept);	// tells every listed entity's sub-object (except pExcept) via its slot 366; returns 1 when the list is not empty
};
