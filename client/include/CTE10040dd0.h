#pragma once
// stand-in class for the temp entity at 0x10040dd0 (Vectors at +0xc and +0x18, a short at +0x24, a flag at +0x28, an int at +0x2c)
class CTE10040dd0
{
public:
	void sub_10040dd0(int);
	int m_unk0; int m_unk4; int m_unk8;
	int m_unkc[3];
	int m_unk18[3];
	int m_n24;
	unsigned char m_b28;
	int m_n2c;
};
