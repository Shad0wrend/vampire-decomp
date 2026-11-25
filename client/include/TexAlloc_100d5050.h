#pragma once
// stand-in class for a texture atlas (entries of 10 bytes at +4, rects of 16 bytes at +0x20, shift table at +0x6a)
class TexAlloc_100d5050
{
public:
	void sub_100d5170(unsigned short idx, int *px, int *py, int *pw, int *ph);
	int m_unk0;
	unsigned char *m_pEntries;
	int m_unk8; int m_unkc; int m_unk10; int m_unk14; int m_unk18; int m_unk1c;
	unsigned char *m_pRects;
};
