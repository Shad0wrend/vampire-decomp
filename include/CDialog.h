// CDialog: a dialog table object (name from the scope trace strings, not from RTTI). Only the lookup is recovered.
#pragma once

#include "utlvector.h"
#include "CDialogDependency.h"

struct DialogLine
{
	int m_nKey;	// 0x00
	char *m_pszText;	// 0x04
	char *m_pszAlt;	// 0x08
	int m_nResponse;	// 0x0c
	char *m_pszDependency;	// 0x10
	char *m_pszScript;	// 0x14
	char *m_apszClan[7];	// 0x18: the per-clan texts
};
class CBaseEntity;

struct CDialogVec : CUtlVector<int>
{
	~CDialogVec() {}
};

struct CDialogVecs3
{
	CUtlVector<int> a;
	CUtlVector<int> b;
	CUtlVector<int> c;
	~CDialogVecs3() {}
};

struct CDialogVecs2
{
	CUtlVector<int> a;
	CUtlVector<int> b;
	~CDialogVecs2() {}
};

struct CDialogEntry_t
{
	int m_data[13];	// 0x34 bytes; the first dword is the sort key
};

struct CDialogTable_t
{
	char m_pad0000[0x104];
	int m_nEntries;	// 0x104
	int m_nAllocated;	// 0x108: entries allocated at m_pEntries
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
	int m_nResponses;	// 0x2834: number of player responses filled into the packet
	int m_aChoices[1];	// 0x2838: the dialog entry key of each player choice
	char m_pad283c[0x2848 - 0x283c];
	CDialogDependency m_aDeps2848[4];	// 0x2848: the four dependency records (0x228 bytes each), constructed first by the constructor
	char m_b30e8;	// 0x30e8: cleared by the constructor
	char m_bNoReply;	// 0x30e9: set when a response could not be built
	char m_pad30ea[0x32f8 - 0x30ea];
	CUtlVector<int> m_vec32f8;	// 0x32f8 (the game's type differs: own RemoveAll 0x100eb130 / Purge 0x100eb1a0)
	CUtlVector<int> m_vec330c;	// 0x330c
	CUtlVector<int> m_vec3320;	// 0x3320
	CUtlVector<int> m_vec3334;	// 0x3334
	CUtlVector<int> m_vec3348;	// 0x3348
	CUtlVector<int> m_vec335c;	// 0x335c
	CUtlVector<int> m_vec3370;	// 0x3370
	CUtlVector<int> m_vec3384;	// 0x3384
	char m_pad3398[0x33ad - 0x3398];
	char m_szWhisper[1];	// 0x33ad: the pending whisper text (empty when none)

	~CDialog();	// "CDialog::~CDialog": scope trace, unload (sub_100e5770), then the eight vectors are purged

	void sub_100e49b0(int nIndex);	// plays the domination (response type 6) / dementation (type 5) victim emitter on the speaker's head for response nIndex when it is flagged (bit 0 of the flags at +0x2810 + nIndex * 4)
	int sub_100e5690(CDialogEntry_t *pEntry);	// "CDialog::get": scope trace, bsearch for the entry matching *pEntry in the table; copies the found entry over *pEntry and returns 1, else 0
	void sub_100e0a40(const char *pszSound);	// "CDialog::PlayWhisper": scope trace, when a whisper is pending hands it and pszSound to the NPC behind the handle at +4 and clears it
	void sub_100e09a0(const char *pszText);	// "CDialog::Acquire": scope trace, copies the text (0x104 bytes) to the pending whisper buffer at +0x33ad
	void sub_100e8b90(class CDialogDependency *pDep);	// "CDialog::pc_charge_dependency": scope trace; with a dependency that has a cost (m_nIndent) lowers stat 0xc of the NPC (handle at +4) by it, and for type 2 hands the speaker (handle at +0) the dependency's argument, the cost and the NPC (sub_1033e0a0)
	void sub_100e5770();	// "CDialog::unload": scope trace, frees every line of the table and the table itself, then releases the two global buffers at 0x106ea780 / 0x106ea784
	void sub_100e7c20(DialogLine *pLine);	// "CDialog::line_free" (called with this in ecx; it is declared elsewhere as a free __stdcall function)
	char *sub_100e7310();	// "CDialog::get_dialog_filename": scope trace, when both handles resolve returns the lowercased, trimmed string at +0x128 of the entity behind the handle at +0, (in a global 260 byte buffer), else ""
	int sub_100dfd30(CBaseEntity *pNPC, CBaseEntity *pSpeaker, int nArg);	// "CDialog::CheckNameCollisions": scope trace, resolves both handles, then logs every table entry that has auto ellipses; returns how many
	char sub_100e5410(char *pszFilename);	// stub 0x10011da6
	void sub_100e5c70();	// "CDialog::CallPendingNPCEventScript": scope trace, when the pending event script name at +0x30ea is set runs it (sub_100e4f30) and clears it
	void sub_100e4f30(char *pszScript);
	int sub_100e61d0(void *pFile, DialogLine *pLine, int *pLineNo);	// "CDialog::read_line_data": scope trace, reads one dialog line (key, text, gender, response, dependency, script, seven clan texts); 1 ok, 0 empty line, -1 missing field
	char sub_100e5f10();	// "CDialog::read_dialog_data": scope trace, opens the dialog file, reads every line into the table (growing it by 10 entries), closes the file and sorts the entries; 1 ok, 0 when the file or memory failed
	int sub_100e7230(const char *pszName, int nMode);	// "CDialog::dopen" (this unused; the caller still loads ecx)
	void *sub_100e76d0(void *pOld, int nOld, int nNew);	// "CDialog::drealloc" (this unused)
	void sub_100e7480(int hFile);	// closes the dialog file (this unused)
	int sub_100dffa0(CBaseEntity *pNPC, CBaseEntity *pSpeaker, int nArg);	// "CDialog::LogAutoendFloats": scope trace, takes the handles, loads the speaker's dialog file and writes the lip file name of every line that follows an auto-end line to the file system object; returns how many
	void sub_100e34d0();	// "CDialog::audit_asset_files": scope trace, loads the dialog file, writes "<name>_missing.txt" with the missing speech files of every flagged entry (sub_100e3180) and removes it again when nothing is missing
	void sub_100e7630(void *pFile);	// "CDialog::eat_line": scope trace, reads characters from the file until a newline or EOF
	int sub_100e7510(void *pFile);	// reads one character (-1 at end of file)
	int sub_100e6ed0(void *pFile, char *pszOut, int *pLine, char bStripBrackets);	// "CDialog::read_str_data": scope trace; skips to the opening { (// comments, warns about a stray }), then reads up to the closing } into pszOut (trimmed, curly quotes straightened, [..] dropped when bStripBrackets); 1 ok, 0 at end of file, -1 on a newline before the brace
	int sub_100e4840(int choice);	// "CDialog::goto_line_for_response": scope trace, the entry key of player choice `choice` is looked up in the table; logs "Player responded" and returns the dword at +0xc of that entry, else logs "Could not find response for player choice!" and returns the first entry's dword; 0 without table or choices
	void sub_100e7890(CDialogEntry_t *pDest, const CDialogEntry_t *pSource);	// "CDialog::line_dup": scope trace, copies the 13 dwords of pSource into pDest, then replaces the string fields (1, 2, 4, 5 and 6..12) with copies made by sub_100e79f0
	int sub_100e79f0(int pszText, int nKey, int nSize);	// copies a string field of a line (stub 0x10004de5)
	char *sub_100e1680(int index, const char *pszExtension, char bCreate);	// "CDialog::generate_speech_filename": builds the speech file name of line `index` for the extension (stub 0x10013ff2); with bCreate set the "*" prefixed name
	char *sub_100e1880(int index);	// "CDialog::LookupSpeechFile": scope trace, the speech file of line `index` that exists in the file system, tried with three extensions (the last two are recorded), else null
	int sub_100e65d0();	// "CDialog::clan_offset": the NPC's clan (handle at +4) as an index 0..6 (Brujah, Gangrel, Nosferatu, Toreador, Tremere, Ventrue, Malkavian), -1 when unknown (stub 0x1000aeed)
	char sub_100e15c0(DialogLine *pLine, char bExtended);	// the line's text colour / marker character for the speaker's clan; 'E' (0x45) or 'F' (0x46) when the line has no text for the clan
	void sub_100e4780();	// "CDialog::NPCNotifyDoneTalking": scope trace, runs the pending NPC event script, then with a table: sub_100e4bd0(0) when the goodbye flag (bit 5 of +0x2810) is set, else sub_100e5240() when the menu flag (bit 4) is set
	void sub_100e4bd0(int a);	// stub 0x1000a448
	void sub_100e5240();	// stub 0x1000efac
	DialogLine *sub_100e19f0(int index);	// stub 0x1000154b: the line of that index in the table
	const char *sub_100e1580(DialogLine *pLine);	// stub 0x1000c676: the line's text for the speaker's clan, null when it has none
	const char *sub_100e1ad0(int index);	// "CDialog::get_display_text": scope trace, null without the line or a live NPC; else the line's clan text, or the plain text (+4) / the alternative (+8) picked by the NPC's flag
	void sub_100e7da0(char *pPacket);	// "CDialog::fill_packet": scope trace, clears the first byte of the four 0x800 byte lines of the packet (from +0x804) and Init's the four dependency records at +0x2848 (0x228 bytes each), then builds the player responses; without any valid reply writes "I do not have a valid reply." into the first line
	int sub_100e8100(char *pPacket);	// "CDialog::process_npc_line" (stub 0x1001521c): builds the packet's NPC line from the table entry of the current key (+0x2830): the clan text, else the alternative text for a female NPC when sub_100df030 allows, else the plain text; runs the entry's script and remembers its event name (+0x30ea); non-zero on success
	char sub_100e8980(int a, int b);	// stub 0x100030ad
	int sub_100e82d0(int *pChoices);	// stub 0x10014858: collects the player choices into the array, returns their count
	int sub_100e8520(int nKey, int nSlot, char *pPacket);	// stub 0x10001fe1: builds response nSlot for the choice key into the packet; -1 failed (no reply), 0 skipped, 1 and above filled
	void sub_100dfb80(CBaseEntity *pNPC, CBaseEntity *pSpeaker);	// "CDialog::GenerateScriptFile": scope trace; without a table takes the handles of the speaker (its object at +0x98) and of the NPC (its object at +0xa8) and, when both resolve, logs "Dumping script file for npc: %s, dialog: %s", runs sub_100e37d0 / sub_100e34d0, clears both handles and unloads the table (sub_100e5770)
	int sub_100e3180(CDialogEntry_t *pEntry, int pFile);	// stub 0x10013a61: audit one table entry; writes every missing speech file (mp3 / vcd / lip) of its text and of the per-clan texts to the script file and returns how many were missing
	void sub_100e7d10(char *pPacket, const char *pszText);	// stub 0x100090de: writes the NPC text into the packet
	void sub_100e8060(char *pPacket, int nMax);	// stub 0x100023c4: finishes the packet line (limit nMax)
	void sub_100e58e0(char *pPacket);	// "CDialog::message_send": scope trace, sends the NPC line, the player responses and the choice keys to the player behind the handle at +4
	void sub_100e5d00(int nIndex, char *pszText);	// "CDialog::message_append": scope trace; sends a reliable user message (type g_1072608c, byte 1, nIndex, the text) to the player behind the handle at +4, in pieces of at most 100 characters
	void sub_100e0f90(unsigned char value);	// "CDialog::SetDialogWindowActive": scope trace, sends a reliable user message (type g_1072608c, byte 8, then value) to the player behind the handle at +4
	void sub_100e1220(unsigned char value);	// "CDialog::ShowHistoryWindow": scope trace, sends a reliable user message (type g_1072608c, byte 6, then value) to the player behind the handle at +4
	void sub_100e13d0(unsigned char value);	// "CDialog::ShowPlayerChoices": scope trace, sends a reliable user message (type g_1072608c, byte 7, then value) to the player behind the handle at +4
};
