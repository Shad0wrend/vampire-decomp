#pragma once
// stand-in class for the object at 0x10142680 (four 0x48-byte slots at +0x54, a flag at +0x28)
struct CSlot10141b00
{
	int sub_10141b00();
	int m_unk0; int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14; int m_unk18; int m_unk1c;
	int m_unk20; int m_unk24; int m_unk28; int m_unk2c; int m_unk30; int m_unk34; int m_unk38; int m_unk3c;
	int m_unk40; int m_unk44;
};
class CSlotChecker10142680
{
public:
	bool sub_10142680();
	char m_unk0[0x28];
	bool m_bEnabled;
	char m_unk29[0x54 - 0x29];
	CSlot10141b00 m_slots[4];
};
