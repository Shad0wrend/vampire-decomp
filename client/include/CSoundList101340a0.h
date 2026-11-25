#pragma once
// stand-in for the object at 0x101340a0 (a CUtlVector of sound pointers: memory at +0xc, count at +0x18)
struct SoundV_10133a20 { void sub_10133a20(); };
class CSoundList101340a0
{
public:
	void sub_101340a0(SoundV_10133a20 *pSound);
	int m_unk0; int m_unk4; int m_unk8;
	SoundV_10133a20 **m_pMemory;
	int m_unk10; int m_unk14;
	int m_size;
};
