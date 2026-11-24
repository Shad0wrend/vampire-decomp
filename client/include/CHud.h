#pragma once
class CHudElement;
class CHud {
public:
	void *sub_100f11d0(const char *pName);
	int sub_100f0980(const char *pName);
	int m_unk0; int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14; int m_unk18; int m_unk1c;
	int m_unk20; int m_unk24; int m_unk28; int m_unk2c; int m_unk30; int m_unk34; int m_unk38; int m_unk3c;
	CHudElement **m_HudListMem;
	int m_HudListAlloc;
	int m_HudListGrow;
	int m_HudListSize;
	CHudElement *sub_100f0ed0(const char *pName);
};
