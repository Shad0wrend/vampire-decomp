// CUnknown10217f50: stand-in for the terminal-like entity (CBaseTerminal / CPropHacking base): four dwords at +0x82c, a byte at +0x83c.
// Derived from CEntityVSlots so that its virtual slots can be called.
#pragma once

#include "CEntityVSlots.h"

struct CUnknown10217f50Quad	// the four dwords at +0x82c
{
	int m_n0, m_n1, m_n2, m_n3;
	void Clear() { m_n0 = 0; m_n1 = 0; m_n2 = 0; m_n3 = 0; }
	void ClearLoop() { for (int i = 0; i < 4; i++) (&m_n0)[i] = 0; }
};

class CUnknown10217f50 : public CEntityVSlots
{
public:
	char m_pad0004[0x810 - 4];
	int m_nLineWidth;	// 0x810: width of a screen line in characters
	char m_pad0814[0x82c - 0x814];
	CUnknown10217f50Quad m_quad;	// 0x82c: cleared at the end of the request
	char m_b083c;	// 0x83c

	void sub_10218820(int a, int b);	// called with (2, 0) (stub 0x1000c77f)
	void sub_10217f50(char value, const char *pszCommand);	// stores value at +0x83c after sub_10218820(2, 0), then picks slot 275 / 276 / 277 from the command ("quit" prefix, or the current screen name from slot 274), and clears the four dwords at +0x82c
	void sub_10217ac0(const char *pszFormat, ...);	// prints a formatted string to the screen (stub 0x10013f98)
	void sub_1021b330(const char *pszText, int column);	// prints a boxed line: '|' borders over a width-3 blank line (40 byte buffer), the text copied in at `column` (at most 0x28 - column characters), followed by a newline
	const char *sub_10219400(int index);	// the screen text with that index (stub 0x1000bde8): the "Hacking Strings" table entry, else a built-in STRING_* name, "Unrecognized Command" for an unknown index
	void sub_1021b140(const char *pszText);	// stub 0x10013aac: starts a new screen page with the text
};
