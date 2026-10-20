// CUnknown10217f50: stand-in for the terminal-like entity (CBaseTerminal / CPropHacking base): four dwords at +0x82c, a byte at +0x83c.
// Derived from CEntityVSlots so that its virtual slots can be called.
#pragma once

#include "CEntityVSlots.h"

class CUnknown10217f50 : public CEntityVSlots
{
public:
	char m_pad0004[0x82c - 4];
	int m_n082c[4];	// 0x82c: cleared at the end of the request
	char m_pad083c[0x83c - 0x83c];
	char m_b083c;	// 0x83c

	void sub_10218820(int a, int b);	// called with (2, 0) (stub 0x1000c77f)
	void sub_10217f50(char value, const char *pszCommand);	// stores value at +0x83c after sub_10218820(2, 0), then picks slot 275 / 276 / 277 from the command ("quit" prefix, or the current screen name from slot 274), and clears the four dwords at +0x82c
};
