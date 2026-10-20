// CEntryX: a record found in a global table by key (key at +0, name at +8); a static default one (key -1) is the fallback.
#pragma once

class CEntryX
{
public:
	int m_key;
	int m_pad;
	const char *m_name;
	CEntryX(int key);	// stub 0x100066ea
	~CEntryX();	// stub 0x1000c9f0
};
