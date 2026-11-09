// CUnknown10206400: a vendor (shop) record of the global vendor table (count at 0x1074f018, pointers at 0x1074f01c):
// id at +0x1c, a name at +0xc and its item entries (CUnknown10206340: id at +0, a name at +4) as a pointer list at
// +0x18 (count +0x14). Looking one up by id (or an entry of it) falls back to a shared default record (id -1), the
// function-local static of the lookup, so every function that looks one up inlines the Find functions below
// instead of declaring a static of its own (vendor: guard 0x109f07b1 / object 0x109f07e0, entry: guard 0x109f0804 /
// object 0x109f0820).
#pragma once

#include "CUnknown10206340.h"

extern char g_106b8540[];	// empty string
extern int g_1074f018;
extern class CUnknown10206400 **g_1074f01c;

class CUnknown10206400
{
public:
	int m_field0000;
	int m_field0004;
	int m_field0008;
	const char *m_pszName;	// 0x0c
	int m_field0010;
	int m_nEntries;	// 0x14
	CUnknown10206340 **m_ppEntries;	// 0x18
	int m_nId;	// 0x1c
	int m_field0020;

	CUnknown10206400(int id);	// stub 0x1000aa9c
	~CUnknown10206400();

	const char *GetName() const { return m_pszName ? m_pszName : g_106b8540; }
};

inline CUnknown10206400 *CUnknown10206400_FindById(int id)
{
	for (int i = 0; i < g_1074f018; i++) {
		if (g_1074f01c[i]->m_nId == id)
			return g_1074f01c[i];
	}
	static CUnknown10206400 s_default(-1);
	return &s_default;
}

inline CUnknown10206340 *CUnknown10206400_FindEntry(CUnknown10206400 *pVendor, int id)
{
	for (int i = 0; i < pVendor->m_nEntries; i++) {
		if (pVendor->m_ppEntries[i]->m_field0000 == id)
			return pVendor->m_ppEntries[i];
	}
	static CUnknown10206340 s_default(-1);
	return &s_default;
}
