// CUnknown10427700: fixed table (max 0x20) of 36-byte entries with a duplicated name string; real name not yet known.
// Probably CAmmoDef (AddAmmoType registers one entry and looks up its three damage cvars).
#pragma once

struct CUnknown10427700Entry
{
	char *m_pName;
	int m_a;
	int m_b;
	int m_plrDmg;	// 0x0c
	int m_npcDmg;	// 0x10
	int m_maxCarry;	// 0x14
	void *m_pPlrCvar;	// 0x18
	void *m_pNpcCvar;	// 0x1c
	void *m_pCarryCvar;	// 0x20
};

class CUnknown10427700
{
public:
	int m_nEntries;
	CUnknown10427700Entry m_entries[0x20];

	bool sub_100790f0(const char *name, int a, int b);
		// like sub_10427790 with plain numbers instead of cvar names
		// "CAmmoDef::AddAmmoType"
};
