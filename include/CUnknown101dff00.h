// CUnknown101dff00: a hit group record of the discipline/animation tables (real name not yet known): a name, five
// 0xac byte action records and a duration range, plus an optional trait effect id; sub_101dff00 prints it.
#pragma once

class Range;

class CUnknown101df000	// one 0xac byte action record
{
public:
	void sub_101df000(const char *pszLabel);	// stub 0x100102ad: prints the record under that label when it is in use
};

class CTraitEffectTable	// the table behind the global at 0x1074df78
{
public:
	struct Entry
	{
		char m_pad[8];
		const char *m_pszName;	// 0x08
		const char **NameRef() { return &m_pszName; }
	};
	Entry *sub_101f8480(int id);	// stub 0x1000c5d1: the entry of a trait effect id
};

class CUnknown101dff00
{
public:
	char m_pad0000[4];
	const char *m_pszName;	// 0x04
	char m_pad0008[0x364 - 0x08];	// five 0xac byte CUnknown101df000 records at +0x08, +0xb4, +0x160, +0x20c, +0x2b8
	char m_RangeStorage[8];	// 0x364: a Range (min, max)
	int m_nTraitEffect;	// 0x36c, -1 when none

	void sub_101dff00();	// debug print: "Hit Group: <name>", the trait effect (when set), the duration range and the five action records (Begin, End, Callback, Interrupt, InterruptSchedule)
};
