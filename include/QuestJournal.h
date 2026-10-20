// QuestJournal: the player's quest journal; layout so far is ten zero-initialised dwords and a flag byte at +0x28.
#pragma once

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
};
