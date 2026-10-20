// CUnknown102dc2c0: an object with a list of entity handles (array at +0x518, count at +0x524) and a done flag at +0x516;
// real name not yet known.
#pragma once

class CUnknown102dc2c0
{
public:
	char m_pad0000[0x516];
	char m_bDone;	// 0x516
	char m_pad0517[1];
	unsigned int *m_pHandles;	// 0x518
	char m_pad051c[8];
	int m_nHandles;	// 0x524

	void sub_102dc2c0();	// calls sub_102db440 on the entity of every handle with a 32 byte scratch buffer, then sets the flag
};
