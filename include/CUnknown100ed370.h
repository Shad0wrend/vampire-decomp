// CUnknown100ed370: table of 0x264-byte named records; real name not yet known.
#pragma once

class CUnknown100ed370
{
public:
	char m_pad00[8];
	char *m_pNames;	// 0x08: 0x264 byte records, name at +0, value at +0x40
	char m_pad0c[0x14 - 0xc];
	int m_nNames;	// 0x14

	char *sub_100ed2e0(int index);
};
