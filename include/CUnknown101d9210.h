// CUnknown101d9210: object owning two heap buffers (+0xc with count +0, +0x20 with count +0x1c) and three
// handles (+0x10, +0x14, +0x18) into a global manager; real name not yet known.
#pragma once

class CUnknown101d9210
{
public:
	int m_count0;
	int m_nName04;	// 0x04: the interned name of the \"Text\" section
	int m_nName08;	// 0x08: the interned name of the \"TableWeightings\" section
	char *m_pBuf0c;
	int m_handle10;
	int m_handle14;
	int m_handle18;
	int m_count1c;
	char *m_pBuf20;

	void sub_101d9210();
	void sub_101d92b0();	// loads vdata\\system\\DiceRolls.txt (KeyValues): the Text section (name, Difficulty / Success / RollResult handles), the Rules section (HealthModifiers values and the TableWeightings records, 0x19c bytes each, read by CUnknown101d90c0::sub_101d90c0)
};
