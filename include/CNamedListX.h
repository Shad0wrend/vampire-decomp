// CNamedListX: list of pointers to named entries (count at +4, data at +8); the effect trigger list of
// 0x101e12f0 (real name not yet known). The name of an entry (+8) is a pointer that falls back to "".
#pragma once

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CNamePtr
{
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};

struct CNamedEntryX
{
	int m_unk0;
	int m_unk4;
	CNamePtr m_Name;	// 0x0008
};

struct CNamedListX
{
	int m_unk0;
	int m_count;	// 0x0004
	CNamedEntryX **m_pData;	// 0x0008

	int sub_101e12f0(const char *name);	// index of the entry of that name (case-insensitive), or -1
	void sub_101e3310(int a, const char *name);	// ActivateEffect_Trigger-like: finds the entry by name, DevMsg when missing, else sub_101e2f50(a, entry, 0)
	void sub_101e2f50(int a, CNamedEntryX *pEntry, int b);	// stub 0x1000948a
};
