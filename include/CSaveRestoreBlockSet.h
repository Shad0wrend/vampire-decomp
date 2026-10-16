// CSaveRestoreBlockSet (RTTI .?AVCSaveRestoreBlockSet@@): bases ISaveRestoreBlockSet and ISaveRestoreBlockHandler at +0x0.
// Only the members that decompiled code needs are declared.
#pragma once

class CSaveRestoreBlockSet
{
public:
	char pad0[0x4];
	char pad4[0x20];
	void **m_pHandlers;	// 0x24
	char pad28[0x8];
	int m_nHandlers;	// 0x30
	char pad34[0x8];
	int m_nSize;	// 0x3c
	char *m_pEntries;	// 0x40, entries of 0x28 bytes

	void vfunc2(void *pSave);
};
