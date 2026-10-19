// QuestJournal: the player's quest journal; layout so far is ten zero-initialised dwords and a flag byte at +0x28.
#pragma once

class QuestJournal
{
public:
	int m_field[10];
	char m_flag28;

	QuestJournal *sub_10220e10();	// the constructor (QuestJournal::QuestJournal); returns this
	char *sub_10221b10(int index);	// "QuestJournal::GetQuest": scope trace, record `index` (0x68 bytes each) of the array whose base is m_field[5], or a warning and the base when the index is invalid
	char sub_10221be0(int index);	// "QuestJournal::IsQuestIndexValid": 0 <= index < m_field[8]
	char sub_10221ca0(int index);	// "QuestJournal::IsCompletionIndexValid": 0 <= index < m_field[3]
	char *sub_10221e50(int index);	// "QuestJournal::GetCompletionState": scope trace, record `index` (0x18 bytes each) of the array whose base is m_field[0], or a warning and the base when the index is invalid
};
