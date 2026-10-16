// CUnknown102b5dc0: AI_BaseNPCTroika-area object with setters for the dwords at +0x63f4 and +0x65c8; real name not yet known.
#pragma once

class CUnknown102b5dc0
{
public:
	char pad0[0x63f4];
	int m_unk63f4;
	char pad63f8[0x65c8 - 0x63f8];
	int m_unk65c8;

	void sub_102b5dc0(int value);
	void sub_102ae7f0(int value);
};
