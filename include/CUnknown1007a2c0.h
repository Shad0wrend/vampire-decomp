// class CUnknown1007a2c0: owner of the 0x1007a2c0 / 0x1007a2a0 accessors (not yet identified).
#pragma once

struct CUnknown1007a2c0
{
	char m_pad0000[0x14];
	int *m_pItems;		// 0x14: array of 4-byte entries
	char m_pad0018[0x20 - 0x18];
	int m_nCount;		// 0x20: returned by sub_1007a2a0
	int sub_1007a2a0();
	void *sub_1007a2c0(int index);
};
