// QuestJournal: the player's quest journal; layout so far is ten zero-initialised dwords and a flag byte at +0x28.
#pragma once

class QuestJournal
{
public:
	int m_field[10];
	char m_flag28;

	QuestJournal *sub_10220e10();	// the constructor (QuestJournal::QuestJournal); returns this
	char sub_10221be0(int index);	// "QuestJournal::IsQuestIndexValid": 0 <= index < m_field[8]
};
