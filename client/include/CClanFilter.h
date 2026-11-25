// CClanFilter: hand-made from 0x10141bf0 (a filter that holds a pointer to a clan record and an enabled flag)
#pragma once

struct CClanFilterRec
{
	char m_unk00[0x30];
	int m_nIndex;	// 0x30
};

class CClanFilter
{
public:
	CClanFilterRec *m_pRec;	// 0x00
	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;
	char m_bEnabled;	// 0x14

	bool sub_10141bf0(const char **ppName);
};
