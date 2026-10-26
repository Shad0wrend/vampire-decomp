// CUnknown101a1860: the owner of 0x101a1860 (only what matched code needs; the real class is not known yet).
#pragma once

struct CUnknown101a1860_Record
{
	char m_pad0000[0x12];
	unsigned short m_nFlags;	// +0x12: bit 0 and bit 1 are tested
};

class CUnknown101a1860
{
public:
	bool sub_101a1860(CUnknown101a1860_Record *pRecord);	// false unless the record's flags have bit 1; also false when +0x20 is set and bit 0 is set; true otherwise
	char m_pad0000[0x20];
	void *m_p20;	// +0x20
};
