// CUnknown100b6f80: 0x18-byte record (studio sequence-group like) with a mode at +4, a count/result at +8,
// an index at +0x10 and a table offset at +0x14; real name not yet known.
#pragma once

struct CUnknown100b6f80Hdr
{
	char pad0[0x90];
	int m_tableOffset90;
};

class CUnknown100b6f80
{
public:
	int m_00;
	int m_mode;
	int m_count;
	int m_0c;
	int m_index;
	int m_tableOffset;

	int sub_100c4b10(CUnknown100b6f80Hdr *hdr, int index, int *pOut);
};
