// GLOBAL_EMAIL: one record of the player's global email flags (CBasePlayer, the CUtlVector<GLOBAL_EMAIL> at +0x1e28,
// named by the game's RTTI): the terminal's name and the 0x200 bytes of per-email flags.
#pragma once

struct GLOBAL_EMAIL
{
	char m_szName[0x40];
	int m_Data[0x80];
};

typedef GLOBAL_EMAIL CGlobalEmailRec;
