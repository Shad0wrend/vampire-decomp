// CUnknown102029c0: default-valued record built from -1 (ctor 0x102029c0, dtor 0x102029f0). It is 0x18 bytes
// big (see CUnknown10202d10::sub_10202d10); the layout past the first field is unknown.
#pragma once

class CUnknown102029c0
{
public:
	int m_id;
	int m_n04;	// 0x04: cleared by the constructor
	int m_n08;	// 0x08: not touched by the constructor
	int m_nEntries;	// 0x0c: the number of texts the record holds
	void *m_pData10;	// 0x10: freed by the destructor
	char m_b14;	// 0x14: 1
	char m_pad15[3];

	CUnknown102029c0(int a);
	~CUnknown102029c0();
	const char *sub_10202a10(int nStat);	// the text of the stat nStat for this record (stub 0x10010c8f)
	int sub_10202a50(const char *pszName);	// the value this record holds for the stat named pszName (stub 0x1001197d)
};
