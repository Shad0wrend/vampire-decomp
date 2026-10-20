// CUnknown1014ca10: an object holding an array of 0x14-byte records (starting at +0x9d0, entity handle of the
// record at +0xc, i.e. +0x9dc for record 0) with the record count at +0xb14 (+0xb10 is the unfiltered count);
// real name not yet known.
#pragma once

class CUnknown1014ca10
{
public:
	char pad0[0x9d0];
	char m_records[0x140];	// 0x09d0
	int m_nUnfilteredCount;	// 0x0b10
	int m_nRecords;	// 0x0b14

	void sub_1014ca10(unsigned char r, unsigned char g, unsigned char b);	// sets the render colour (r, g, b, 255) of every record's entity that is not hidden
	void sub_1014c880(void *pEnt);	// filter: moves the records keyed by pEnt (whose other entity has the byte at +0x734 clear) to the front, counting them in m_nRecords, then colours them (0xc0, 0xff, 0xc0)
};
