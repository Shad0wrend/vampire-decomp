// CEventAction: one action of an entity output (0x20 bytes, linked through +0x1c); real name not yet known.
#pragma once

class CEventAction
{
public:
	char m_pad0000[0x1c];
	CEventAction *m_pNext;	// 0x1c

	static void *sub_100cd220(unsigned int size);	// operator new (stub 0x1000ffec)
	CEventAction *sub_100ccf90(const char *pszTargetName);	// constructor (stub 0x1000312a)
};
