// CDialog: a dialog table object (name from the scope trace strings, not from RTTI). Only the lookup is recovered.
#pragma once

struct DialogLine;

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
	unsigned int m_hSpeaker;	// 0x00: entity handle whose dialog file name is looked up
	unsigned int m_hNPC;	// 0x04: entity handle of the speaking NPC
	CDialogTable_t *m_pTable;	// 0x08
	char m_pad000c[0x33ad - 0xc];
	char m_szWhisper[1];	// 0x33ad: the pending whisper text (empty when none)

	int sub_100e5690(CDialogEntry_t *pEntry);	// "CDialog::get": scope trace, bsearch for the entry matching *pEntry in the table; copies the found entry over *pEntry and returns 1, else 0
	void sub_100e0a40(const char *pszSound);	// "CDialog::PlayWhisper": scope trace, when a whisper is pending hands it and pszSound to the NPC behind the handle at +4 and clears it
	void sub_100e5770();	// "CDialog::unload": scope trace, frees every line of the table and the table itself, then releases the two global buffers at 0x106ea780 / 0x106ea784
	void sub_100e7c20(DialogLine *pLine);	// "CDialog::line_free" (called with this in ecx; it is declared elsewhere as a free __stdcall function)
	char *sub_100e7310();	// "CDialog::get_dialog_filename": scope trace, when both handles resolve returns the lowercased, trimmed string at +0x128 of the entity behind the handle at +0, (in a global 260 byte buffer), else ""
	void sub_100e5c70();	// "CDialog::CallPendingNPCEventScript": scope trace, when the pending event script name at +0x30ea is set runs it (sub_100e4f30) and clears it
	void sub_100e4f30(char *pszScript);
	void sub_100e7630(void *pFile);	// "CDialog::eat_line": scope trace, reads characters from the file until a newline or EOF
	int sub_100e7510(void *pFile);	// reads one character (-1 at end of file)
};
