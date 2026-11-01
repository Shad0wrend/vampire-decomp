// QuestJournal: the player's quest journal; layout so far is ten zero-initialised dwords and a flag byte at +0x28.
#pragma once

class CKeyValuesX;

class QuestJournal
{
public:
	int m_field[10];
	char m_flag28;

	QuestJournal *sub_10220e10();	// the constructor (QuestJournal::QuestJournal); returns this
	~QuestJournal();	// "QuestJournal::~QuestJournal": scope trace around PurgeQuestData, then the two utl-vector destructors (+0x14.. then +0x0..)
	int sub_10221a00(const char *name);	// "QuestJournal::GetQuestIndex": scope trace, index of the quest record (0x68 bytes each, name pointer first) whose name is a case-insensitive prefix match of the argument's length, or a warning and -1
	char *sub_10221b10(int index);	// "QuestJournal::GetQuest": scope trace, record `index` (0x68 bytes each) of the array whose base is m_field[5], or a warning and the base when the index is invalid
	char sub_10221be0(int index);	// "QuestJournal::IsQuestIndexValid": 0 <= index < m_field[8]
	char sub_10221ca0(int index);	// "QuestJournal::IsCompletionIndexValid": 0 <= index < m_field[3]
	char *sub_10221d60(int quest, int index);	// "QuestJournal::GetCompletionState": scope trace, GetCompletionState(dword `index` (0 <= index < 20) at +0x14 of quest record `quest`), or a warning and the base when invalid
	char *sub_10221e50(int index);	// "QuestJournal::GetCompletionState": scope trace, record `index` (0x18 bytes each) of the array whose base is m_field[0], or a warning and the base when invalid
	void sub_102210f0();	// "QuestJournal::PurgeQuestData": scope trace, clears the flag, frees the strings of every completion (0x18 byte records at m_field[0]) and quest (0x68 byte records at m_field[5]) record, then empties and releases both vectors
	void sub_10221270();	// resets every quest record (0x68 bytes each at m_field[5], count m_field[8]): the dword at +0x10 = -1, the dword at +0xc = 0
	void sub_10221000();	// "QuestJournal::PreCache": scope trace, once (flag +0x28): loads the four quest script files "vdata\system\<name>.txt" through sub_102212b0
	void sub_102212b0(const char *pszFile, int index);	// "QuestJournal::LoadQuestFile": scope trace, loads the script file into a key/value tree ("QuestTable") and hands each of its top level keys to sub_102213c0 (called through the stub at 0x100125b7)
	void sub_10221f20(void *hFile);	// dumps the quest log to the open log file (stub 0x1000be3d): per area its quests with the completion states of the player; works on the global journal
	int sub_10221660(CKeyValuesX *pKey);	// "QuestJournal::AddCompletion": scope trace, reads one completion record (ID, Description, Event, Type, AwardMoney, AwardXP) from the key and appends it to the completion vector at +0; returns its index, -1 without an ID
	void sub_102213c0(CKeyValuesX *pKey, int index);	// "QuestJournal::AddQuest": reads one quest block of the script (stub 0x10010820)
};
