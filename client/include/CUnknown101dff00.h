// CUnknown101dff00: a hit group record of the discipline/animation tables (real name not yet known): a name, five
// 0xac byte action records and a duration range, plus an optional trait effect id; sub_101dff00 prints it.
#pragma once

class Range;

class CUnknown101df000	// one 0xac byte action record
{
public:
	void sub_101485b0(const char *pszLabel);	// stub 0x100102ad: prints the record under that label when it is in use
		// stub 0x1000852b: loads the record from the sub key of that name of pKV (a null name: the key itself)
};

class CTraitEffectTable	// the table behind the global at 0x1074df78
{
public:
	struct Name	// the name holder at +8 of an entry (read through its address)
	{
		const char *m_psz;
		const char *Get() { return m_psz; }
	};
	struct Entry
	{
		char m_pad[8];
		Name m_Name;	// 0x08
	};
	Entry *sub_10157c20(int id);	// stub 0x1000c5d1: the entry of a trait effect id
		// stub 0x1000ee67: the id of the named trait effect
};

class CUnknown101dff00;

struct CUnknown101dff00List	// the list of hit groups: count at +4, pointer array at +8
{
	int m_n00;
	int m_nCount;	// 0x4
	class CUnknown101dff00 **m_ppGroups;	// 0x8

		// Debug_Display: prints "[[Hit_Group_List]]:" and then every hit group
		// the hit group at index, or a lazily created default group when out of range
};

class CUnknown101dff00
{
public:
	CUnknown101dff00(int id);
	~CUnknown101dff00();
	char m_pad0000[4];
	const char *m_pszName;	// 0x04
	char m_pad0008[0x364 - 0x08];	// five 0xac byte CUnknown101df000 records at +0x08, +0xb4, +0x160, +0x20c, +0x2b8
	char m_RangeStorage[8];	// 0x364: a Range (min, max)
	int m_nTraitEffect;	// 0x36c, -1 when none
	char m_bDoPossession;	// 0x370
	char m_bDoFrenzy;	// 0x371

	void sub_10148ed0();	// debug print: "Hit Group: <name>", the trait effect (when set), the duration range and the five action records (Begin, End, Callback, Interrupt, InterruptSchedule)
	bool sub_10148da0(int a, void *pKV, const char *pszName);	// loads the hit group from its key (ret 0xc): the name, "InheritFrom" (another hit group, sub_101df340), the five action records, "Duration", the "TraitEffect" sub key's "Effect" and the "DoPossession" / "DoFrenzy" flags; false without a key or when the inherited group is unknown
		// stub 0x10002699: copies the hit group named pszParent
};
