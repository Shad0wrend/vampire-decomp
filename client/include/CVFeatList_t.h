#pragma once

struct CVFeatEntry_t
{
	int m_unk0;
	int m_unk4;
	int m_unk8;
	int m_unkC;
	int m_unk10;
	int m_unk14;
};

class CVFeatList_t
{
public:
	virtual int vfunc0();
	virtual float vfunc1(int index);
	int m_unk4[89];
	CVFeatEntry_t m_Feats[1];
};
