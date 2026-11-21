// CUnknown101eac50: a record with an index (+0), a name (+8) and a flag byte (+0xc, bit 0 = displayed); real name not yet known.
#pragma once

class CUnknown101eac50
{
public:
	int m_index;	// 0x00
	char pad4[4];
	const char *m_name;	// 0x08
	unsigned char m_flags;	// 0x0c

	void sub_1014eee0();	// debug dump: "(%d): %s", then "\tIsDisplayed\n" when bit 0 of the flags is set
};
