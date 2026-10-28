// CGlobalEmailRec: one record of the player's global email flags (CBasePlayer, the vector at +0x1e28): the terminal's
// name and the 0x200 bytes of per-email flags.
#pragma once

struct CGlobalEmailRec
{
	char m_szName[0x40];
	int m_Data[0x80];
};
