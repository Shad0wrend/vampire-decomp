// CUnknown1042d770: an id object (CRT/library area) whose bits 16..27 hold a 12-bit hash id; real name not yet known.
// The constructor-like initialiser hashes two names plus a value into that id and asks a small global table
// (key at 0x109ef590, count at 0x109ef594, 256 (id, counter) records from 0x109ef598) for the next serial of the id.
#pragma once

class CUnknown1042d770
{
public:
	unsigned int m_lo : 16;
	unsigned int m_id : 12;
	unsigned int m_hi : 4;

	void sub_101207d0(int a, int b, const char *pszName1, const char *pszName2, int n);	// hashes the names into m_id, then sub_1000c88d(serial) with the next serial of that id (0 when the table is full)
	void sub_10120990(int serial);	// stores the serial (stub 0x1000c88d)
};
