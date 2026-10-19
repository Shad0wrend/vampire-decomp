// CTriggerElectricBugaloo: only what matched code needs, as plain members (no vtable pointer is declared, so offsets start at 0).
#pragma once

class CTriggerElectricBugaloo
{
public:
	bool vfunc32(void *pOther);	// slot 32: same as CTriggerBombSite::vfunc32, with the player's back-pointer handle at +0x1cbc

	char m_pad0000[0x8c];
	unsigned int m_hOwner008c;	// 0x008c
	char m_pad0090[0x55c - 0x90];
	bool m_bDisabled;	// 0x055c
};
