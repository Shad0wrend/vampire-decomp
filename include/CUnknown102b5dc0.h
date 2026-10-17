// CUnknown102b5dc0: AI_BaseNPCTroika-area object with setters for the dwords at +0x63f4, +0x65c8 and +0x65cc; real name not yet known.
#pragma once

class CUnknown102b5dc0
{
public:
	char pad0[0x5d8c];
	unsigned int m_unk5d8c;
	char pad5d90[0x6340 - 0x5d90];
	char m_unk6340;
	char pad6341[0x63f4 - 0x6341];
	int m_unk63f4;
	char pad63f8[0x65c8 - 0x63f8];
	int m_unk65c8;
	int m_unk65cc;

	void sub_102b5dc0(int value);
	void sub_102ae7f0(int value);
	void sub_102ae8c0(int value);
	char sub_102b8980();
};
