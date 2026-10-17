// CUnknown1019d130: int vector-like list (data at +8, count at +0x14); real name not yet known.
#pragma once

class CBaseEntity;

class CUnknown1019d130
{
public:
	char pad0[8];
	int *m_pData;
	char pad1[8];
	int m_Size;

	void sub_1019d130(CBaseEntity *pEnt);
};
