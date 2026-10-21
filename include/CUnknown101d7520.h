// CUnknown101d7520: the "Auto-Level Manager" list (count at +4, array of entry pointers at +8); real name not yet known.
#pragma once

extern char g_106b8540[];	// empty string

struct CUnknown101d7520Name	// a string holder; Get() yields "" for null
{
	const char *m_p;

	const char *Get() const { return m_p ? m_p : g_106b8540; }
};

struct CUnknown101d7520Rule	// one of the rules of an entry (the array at +0xc of the entry)
{
	void sub_101d6590();	// dumps the rule (stub 0x10007603)
};

struct CUnknown101d7520Sub	// the object embedded at +0x18 of an entry
{
	void sub_10206190();	// dumps the object (stub 0x1000cd1a)
};

struct CUnknown101d7520Entry
{
	int m_unk0;
	char m_pad0004[4];
	int m_nRules;	// 0x0008
	CUnknown101d7520Rule **m_ppRules;	// 0x000c
	CUnknown101d7520Name m_name;	// 0x0010
	char m_pad0014[4];
	CUnknown101d7520Sub m_sub;	// 0x0018
	char m_pad0018[0x34 - 0x18];
	int m_iClan;	// 0x0034: index into the clan table, -1 for none

	void sub_101d6af0();	// dumps the entry (stub 0x10015dca)
};

class CUnknown101d7520
{
public:
	int m_unk0;
	int m_nCount;	// 0x0004
	CUnknown101d7520Entry **m_ppEntries;	// 0x0008

	int sub_1000f759(const char *name);	// stub of the lookup: index of the entry named `name`, -1 when none
	void sub_101d7520(const char *name);	// "Auto-Level Manager" dump: all entries (name null), one entry, or "ALL" entries
};
