// CUnknown101d7520: the "Auto-Level Manager" list (count at +4, array of entry pointers at +8); real name not yet known.
#pragma once

extern char g_102de300[];	// empty string

class CUnknown10205e60;

struct CUnknown101d7520Name	// a string holder; Get() yields "" for null
{
	const char *m_p;

	const char *Get() const { return m_p ? m_p : g_102de300; }
};

struct CUnknown101d7520Sub	// the object embedded at +0x18 of an entry and at +0x10 of a rule
{
	CUnknown101d7520Sub() { m_n00 = 1; m_n04 = 0; m_n10 = 0; m_nCount = 0; m_ppItems = 0; }
	int m_n00;	// 0x00 (entry +0x18): 1 in the entry constructor
	int m_n04;	// 0x04 (entry +0x1c)
	char m_pad08[0x08];
	int m_n10;	// 0x10 (entry +0x28)
	int m_nCount;	// 0x14: elements in m_ppItems
	CUnknown10205e60 **m_ppItems;	// 0x18: the list of dependencies this object checks
		// dumps the object (stub 0x1000cd1a)
	char sub_10161bb0(void *pArg);	// stub 0x10013ce1: whether every dependency in the list holds for the given argument (the local player's object at +0xa8)
};

struct CUnknown101d7520Element	// one element of a rule (the array at +0xc of the rule)
{
		// dumps the element (stub 0x100145a1)
};

struct CUnknown101d7520Rule	// one of the rules of an entry (the array at +0xc of the entry)
{
	int m_nGroup;	// 0x0000: the level group number
	char m_pad0004[4];
	int m_nElements;	// 0x0008
	CUnknown101d7520Element **m_ppElements;	// 0x000c
	CUnknown101d7520Sub m_sub;	// 0x0010 (0x1c bytes)

		// dumps the rule (stub 0x10007603)
		// whether the rule's dependencies hold for pArg (m_sub.sub_10206140)
};

struct CUnknown101d7520Entry
{
	int m_unk0;
	int m_n04;	// 0x0004
	int m_nRules;	// 0x0008
	CUnknown101d7520Rule **m_ppRules;	// 0x000c
	CUnknown101d7520Name m_name;	// 0x0010
	char m_pad0014[4];
	CUnknown101d7520Sub m_sub;	// 0x0018 (0x1c bytes)
	int m_iClan;	// 0x0034: index into the clan table, -1 for none

	CUnknown101d7520Entry(int);
	~CUnknown101d7520Entry();

		// dumps the entry (stub 0x10015dca)
		// whether the entry accepts the character: m_sub.sub_10206140 holds and the clan is -1 or the character's clan
};

class CUnknown101d7520
{
public:
	int m_unk0;
	int m_nCount;	// 0x0004
	CUnknown101d7520Entry **m_ppEntries;	// 0x0008

		// stub of the lookup: index of the entry named `name`, -1 when none
		// "Auto-Level Manager" dump: all entries (name null), one entry, or "ALL" entries
};
