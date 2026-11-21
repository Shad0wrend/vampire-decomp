// CVSoundFileFolder_t: a folder of the sound file tree (per-file byte flags in a buffer, child folders at +0x20).
#pragma once

class CUnk101f4300
{
public:
	int sub_101554f0();
};

class CUnit101f4530
{
public:
	int sub_101556a0(int a, int b);
};

class CVSoundFileFolder_t
{
public:
	char m_pad0000[4];
	CUnk101f4300 *m_pOwner;	// 0x04
	char m_pad0008[0x14 - 8];
	unsigned char *m_pFlags;	// 0x14
	int m_nSize;	// 0x18
	int m_nChildren;	// 0x1c
	CVSoundFileFolder_t **m_pChildren;	// 0x20

	void sub_10154f60(int a, int b, int c);	// AddRange
		// jump stub of sub_101f3ba0
};
