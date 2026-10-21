// CUnknown102029c0: default-valued record built from -1 (ctor 0x102029c0, dtor 0x102029f0). It is 0x18 bytes
// big (see CUnknown10202d10::sub_10202d10); the layout past the first field is unknown.
#pragma once

class CUnknown102029c0
{
public:
	int m_id;
	char m_pad04[0x14];

	CUnknown102029c0(int a);
	~CUnknown102029c0();
	const char *sub_10202a10(int nStat);	// the text of the stat nStat for this record (stub 0x10010c8f)
};
