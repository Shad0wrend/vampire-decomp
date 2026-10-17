// CUnknown101d9210: object owning two heap buffers (+0xc with count +0, +0x20 with count +0x1c) and three
// handles (+0x10, +0x14, +0x18) into a global manager; real name not yet known.
#pragma once

class CUnknown101d9210
{
public:
	int m_count0;
	char pad04[8];
	char *m_pBuf0c;
	int m_handle10;
	int m_handle14;
	int m_handle18;
	int m_count1c;
	char *m_pBuf20;

	void sub_101d9210();
};
