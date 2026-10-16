// CUnknown102a9750: AI_BaseNPCTroika-area object with setters for the dwords at +0x3ec and +0x63ec; real name not yet known.
#pragma once

class CUnknown102a9750
{
public:
	char pad0[0x3ec];
	int m_unk3ec;
	char pad3f0[0x63ec - 0x3f0];
	int m_unk63ec;

	void sub_102a9750(int value);
	void sub_102a9940(int value);
};
