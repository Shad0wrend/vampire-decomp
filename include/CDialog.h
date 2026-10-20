// CDialog: a dialog table object (name from the scope trace strings, not from RTTI). Only the lookup is recovered.
#pragma once

struct CDialogEntry_t
{
	int m_data[13];	// 0x34 bytes; the first dword is the sort key
};

struct CDialogTable_t
{
	char m_pad0000[0x104];
	int m_nEntries;	// 0x104
	char m_pad0108[4];
	CDialogEntry_t *m_pEntries;	// 0x10c, sorted for bsearch
};

class CDialog
{
public:
	char m_pad0000[4];
	unsigned int m_hNPC;	// 0x04: entity handle of the speaking NPC
	CDialogTable_t *m_pTable;	// 0x08
	char m_pad000c[0x33ad - 0xc];
	char m_szWhisper[1];	// 0x33ad: the pending whisper text (empty when none)

	int sub_100e5690(CDialogEntry_t *pEntry);	// "CDialog::get": scope trace, bsearch for the entry matching *pEntry in the table; copies the found entry over *pEntry and returns 1, else 0
	void sub_100e0a40(const char *pszSound);	// "CDialog::PlayWhisper": scope trace, when a whisper is pending hands it and pszSound to the NPC behind the handle at +4 and clears it
};
