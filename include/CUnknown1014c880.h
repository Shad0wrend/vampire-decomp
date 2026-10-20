// CUnknown1014c880: object with a list of up to 16 20-byte records at +0x9d0 (count at +0xb10); real name not yet known.
#pragma once

struct CUnknown1014c880_Rec	// 20 bytes
{
	int m_f0;
	int m_f1;
	int m_f2;
	unsigned int m_hOther;	// 0x0c: entity handle (its byte at +0x734 is tested)
	unsigned int m_hKey;	// 0x10: entity handle compared with the argument
};

class CUnknown1014c880
{
public:
	char pad0000[0x9d0];
	CUnknown1014c880_Rec m_recs[16];	// 0x9d0
	int m_nRecs;	// 0xb10
	int m_nFront;	// 0xb14

	void sub_1014c880(void *pEnt);	// moves the records keyed by pEnt (whose other entity has the byte at +0x734 clear) to the front of the list, counting them in m_nFront, then sets a colour (0xc0, 0xff, 0xc0)
};
