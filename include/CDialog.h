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
	char m_pad000c[0x2810 - 0xc];
	unsigned int m_nStateFlags;	// 0x2810: bit 4 = a choice menu is pending, bit 5 = a goodbye is pending
	char m_pad2814[0x2830 - 0x2814];
	int m_nChoices;	// 0x2830: number of player choices
	char m_pad2834[4];
	int m_aChoices[1];	// 0x2838: the dialog entry key of each player choice
	char m_pad283c[0x33ad - 0x283c];
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
	int sub_100e4840(int choice);	// "CDialog::goto_line_for_response": scope trace, the entry key of player choice `choice` is looked up in the table; logs "Player responded" and returns the dword at +0xc of that entry, else logs "Could not find response for player choice!" and returns the first entry's dword; 0 without table or choices
	void sub_100e7890(CDialogEntry_t *pDest, const CDialogEntry_t *pSource);	// "CDialog::line_dup": scope trace, copies the 13 dwords of pSource into pDest, then replaces the string fields (1, 2, 4, 5 and 6..12) with copies made by sub_100e79f0
	int sub_100e79f0(int pszText, int nKey, int nSize);	// copies a string field of a line (stub 0x10004de5)
	char *sub_100e1680(int index, const char *pszExtension, int bCreate);	// builds the speech file name of line `index` for the extension (stub 0x10013ff2); with bCreate set it also records the name
	char *sub_100e1880(int index);	// "CDialog::LookupSpeechFile": scope trace, the speech file of line `index` that exists in the file system, tried with three extensions (the last two are recorded), else null
	int sub_100e65d0();	// "CDialog::clan_offset": the NPC's clan (handle at +4) as an index 0..6 (Brujah, Gangrel, Nosferatu, Toreador, Tremere, Ventrue, Malkavian), -1 when unknown (stub 0x1000aeed)
	char sub_100e15c0(DialogLine *pLine, char bExtended);	// the line's text colour / marker character for the speaker's clan; 'E' (0x45) or 'F' (0x46) when the line has no text for the clan
	void sub_100e4780();	// "CDialog::NPCNotifyDoneTalking": scope trace, runs the pending NPC event script, then with a table: sub_100e4bd0(0) when the goodbye flag (bit 5 of +0x2810) is set, else sub_100e5240() when the menu flag (bit 4) is set
	void sub_100e4bd0(int a);	// stub 0x1000a448
	void sub_100e5240();	// stub 0x1000efac
	DialogLine *sub_100e19f0(int index);	// stub 0x1000154b: the line of that index in the table
	const char *sub_100e1580(DialogLine *pLine);	// stub 0x1000c676: the line's text for the speaker's clan, null when it has none
	const char *sub_100e1ad0(int index);	// "CDialog::get_display_text": scope trace, null without the line or a live NPC; else the line's clan text, or the plain text (+4) / the alternative (+8) picked by the NPC's flag
};
