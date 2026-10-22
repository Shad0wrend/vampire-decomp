// CUnknown10219120: an entity that sends a user message to every other player (the object with the edict at +0x2e0 and
// a flag word at +0x81c); real class not yet known.
#pragma once

class CUnknown10219120
{
public:
	char m_pad0000[0x2e0];
	int m_pEdict2e0;	// 0x2e0
	char m_pad02e4[0x81c - 0x2e4];
	unsigned int m_flags81c;	// 0x81c

	void sub_10219120();	// sends user message 0 with the value 3 to every player but the owner of the edict and clears bits 0 and 2 of +0x81c
};
